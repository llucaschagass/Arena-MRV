#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

unsigned long previousMillis = 0;
const long interval = 10000; // 10 segundos

int publico = 0;

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  SPI.begin();        // Inicializa a interface SPI
  mfrc522.PCD_Init(); // Inicializa o MFRC522
  
  lcd.begin(16, 2);   // Inicializa o LCD 16x2
  lcd.print("Bem vindos a");  
  lcd.setCursor(0, 1);
  lcd.print("Arena MRV");
  delay(3000);
  lcd.clear();
}

void loop() {
  // Verifica se um cartão RFID está presente
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    // Incrementa a contagem de público
    publico++;
    // Mostra o número de público no LCD
    lcd.setCursor(0, 0);
    lcd.print("Publico: ");
    lcd.print(publico);
    delay(1000); // Aguarda 1 segundo antes de limpar o LCD
    lcd.clear();
    // Aguarda um tempo para evitar a leitura repetida do mesmo cartão
    delay(1000);
  }

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    lcd.setCursor(0, 0);
    lcd.print("Bem vindos a");
    lcd.setCursor(0, 1);
    lcd.print("Arena MRV");
  }
}

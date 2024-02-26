# Sistema de Contagem de Público com Arduino

## Descrição:

Este projeto inclui um sistema de contagem de público utilizando um leitor NFC RC522 e um display LCD. Ele foi inspirado em um projeto desenvolvido durante meu curso técnico de eletrônica no CEFET MG, ministrado pelo professor John Kennedy Schettino. O projeto original consistia em criar uma maquete do estádio do Botafogo, time do coração do professor, o Nilton Santos.

## Componentes:

- Arduino Uno
- Leitor NFC RC522
- Display LCD 16x2
- Jumpers
- Protoboard
- Fios

## Montagem:

1. Conecte o leitor NFC RC522 ao Arduino Uno conforme o esquema de pinagem especificado no código.
2. Conecte o display LCD 16x2 ao Arduino Uno conforme o esquema de pinagem especificado no código.
3. Carregue o código fornecido no Arduino Uno.
4. Certifique-se de que todos os componentes estão conectados corretamente e a maquete está posicionada conforme desejado.

## Funcionamento:

O sistema funciona da seguinte maneira:

- O display LCD exibe a mensagem "Bem vindos a Arena MRV" a cada 10 segundos.
- Quando um cartão RFID é detectado pelo leitor NFC RC522, a contagem de público é incrementada e exibida no display LCD.
- O público total é atualizado a cada novo cartão detectado.

## História:

Este projeto é uma homenagem ao curso técnico de eletrônica no CEFET MG e ao professor John Kennedy Schettino de Souza, que me inspirou com seu entusiasmo pelo Botafogo. E este projeto representa o amor meu amor pelo Clube Atlético Mineiro, meu time do coração.

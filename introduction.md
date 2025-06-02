# Introdução 

## O que é o Arduíno?

`Arduino` é uma plataforma de prototipagem eletrônica criada na Itália em 2005. 

- Composta por uma placa de hardware livre e um ambiente de desenvolvimento integrado (IDE) que facilita a programação de microcontroladores. Essa plataforma amplamente utilizada para criar projetos interativos que podem controlar e monitorar
  o ambiente físico usando sensores e atuadores.

## Portas digitais

- Númeradas de 0 a 13 (nem todas estando disponíveis)
  - Portas que trabalham apenas com dois estados:
    - HIGH (1) = 5V
    - LOW (0) = 0V

## Portas Analógicas (A0 a A5)

- 6 portas: Portas analógicas: A0 a A5
  - Portas que leem valores variáveis entre 0 e 5V (ou 0 e 1023, no conversor ADC de 10 bits).

## Outros conectores 

- GNT - Todo conector GNT é terra
- Vim - Conector especial de alimentação
- Dois conectores para receber alimentação 3.3v e 5v
- Led conectado a porta 13

---- 

# Componentes

### Resistor

- **O que é?** Componente eletrônico que limita a passagem de corrente elétrica no circuito.

- **Para que serve?** Evita que componentes como LEDs recebam corrente excessiva, o que poderia queimá-los.

- **Como usar?** Conecte o resistor em série com o componente que deseja proteger (por exemplo, entre o pino do Arduino e o LED).

- **Valor comum para LEDs:** Normalmente entre 220Ω e 1kΩ, dependendo do LED e da tensão.

- **Não precisa de função no código:** O resistor atua fisicamente no circuito, então o código Arduino não precisa controlá-lo diretamente.


### LED (Light Emitting Diode)

- **O que é?** Um diodo que emite luz quando a corrente passa por ele no sentido correto.

- **Como usar?** Conecte o ânodo (perna longa) ao pino digital do Arduino, e o cátodo (perna curta) ao GND, com um resistor em série para limitar a corrente.

### Buzzer

- **O que é?** Um dispositivo que emite som. Pode ser:

  - **Ativo**: já tem circuito interno, basta ligar para emitir som.
  - **Passivo**: precisa de sinal PWM para gerar tons.

- **Como usar?** Conecte o pino positivo do buzzer ao pino digital do Arduino, e o pino negativo ao GND.

### Display de 7 Segmentos

- **O que é?** Um conjunto de 7 LEDs (segmentos) organizados para formar números e letras simples.

- **Tipos:**

  - **Cátodo comum**: todos os cátodos (negativos) são conectados juntos.
  - **Ânodo comum**: todos os ânodos (positivos) são conectados juntos.

- **Como usar?** Cada segmento é controlado por um pino. Você precisa ligar e desligar os segmentos corretos para formar o número desejado.

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

### Fotoresistor (LDR - Light Dependent Resistor)

- **O que é?** Um sensor que varia sua resitência conforme a intensidade da luz incidente. É também chamado de LDR (Light Dependent Resistor)
- **Para que serve?** Detectar níveis de luminosidade no ambiente. Pode seer usado para acionar lâmpadas automaticamente quando escurece, medir luz solar, criar alarmes que disparam com luz, entre outros.
- **Como funciona?**
  - **Muita luz** -> Resistência baixa -> Maior tensão na entrada analógica
  - **Pouca luz** -> Resistência alta -> Menor tensão na entrada analógica
 
### Display LCD (Liquid Crystal Display)

#### 📌 O que é?

Um módulo que permite exibir texto, números e símbolos. O modelo mais comum é o **LCD 16x2**, com 2 linhas de 16 caracteres.

#### 🎯 Para que serve?

Mostrar informações como:

- Leituras de sensores  
- Mensagens do sistema  
- Menus interativos

#### ⚙️ Como usar?

Pode ser conectado diretamente ao Arduino (modo paralelo) ou com **módulo I2C** (mais simples e com menos fios).

#### 📋 Pinos do LCD 16x2 (modo paralelo)

| Nº | Nome do Pino | Função                                         |
|----|---------------|------------------------------------------------|
| 1  | VSS           | Terra (GND)                                   |
| 2  | VDD           | Alimentação (5V)                              |
| 3  | VO            | Controle de contraste (via potenciômetro)     |
| 4  | RS            | Seleciona entre comando (0) e dados (1)       |
| 5  | RW            | Leitura (1) ou escrita (0)                    |
| 6  | E (Enable)    | Habilita o envio de dados                     |
| 7  | D0            | Dados (bit 0) – usado em modo 8 bits          |
| 8  | D1            | Dados (bit 1) – usado em modo 8 bits          |
| 9  | D2            | Dados (bit 2) – usado em modo 8 bits          |
| 10 | D3            | Dados (bit 3) – usado em modo 8 bits          |
| 11 | D4            | Dados (bit 4) – usado em modo 4 ou 8 bits     |
| 12 | D5            | Dados (bit 5) – usado em modo 4 ou 8 bits     |
| 13 | D6            | Dados (bit 6) – usado em modo 4 ou 8 bits     |
| 14 | D7            | Dados (bit 7) – usado em modo 4 ou 8 bits     |
| 15 | LED+ (A)      | Anodo da luz de fundo (geralmente 5V com resistor) |
| 16 | LED− (K)      | Cátodo da luz de fundo (GND)                  |

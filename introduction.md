# Introdução ao Arduino

## O que é o Arduino?

O **Arduino** é uma plataforma eletrônica muito usada para criar projetos interativos. Ela foi criada na Itália, em 2005, e é composta por:

- **Uma placa física (hardware)** — com um microcontrolador que você pode programar para controlar luzes, motores, sensores e outros componentes eletrônicos.  
- **Um programa (IDE - Ambiente de Desenvolvimento Integrado)** — onde você escreve o código para fazer a placa funcionar do jeito que quiser.

### Por que o Arduino é tão popular?

- É fácil de usar, mesmo para quem está começando.  
- É aberto e barato.  
- Você pode criar projetos que interagem com o mundo real, como controlar luzes, medir temperatura, montar robôs, e muito mais.

---

## Entendendo as portas do Arduino

### Portas Digitais

- São pinos numerados de **0 a 13** (alguns modelos podem ter mais).  
- Funcionam com dois estados básicos:  
  - **HIGH (1)** = envia 5 Volts  
  - **LOW (0)** = envia 0 Volts (terra)  

- Algumas dessas portas são **PWM** (Pulse Width Modulation), indicadas com o símbolo `~` próximo ao número da porta.  

#### O que é PWM?

- PWM permite simular uma saída analógica, variando a intensidade do sinal digital entre **0 e 255**.  
- Isso possibilita, por exemplo, controlar o brilho de um LED ou a velocidade de um motor, variando o tempo que o sinal fica ligado dentro de um ciclo.

> **Diferença importante:**  
> - Portas digitais normais só aceitam **ligado (HIGH)** ou **desligado (LOW)**.  
> - Portas PWM podem enviar um sinal que varia em intensidade (de 0 a 255), simulando um valor analógico.

---

### Portas Analógicas (A0 a A5)

- São numeradas de **A0 a A5** (em alguns modelos pode ter mais).  
- Elas **leem valores variados** entre 0 e 5 volts, convertendo em números de **0 a 1023** (10 bits de resolução).  
- Usadas para ler sensores que entregam valores contínuos, como luminosidade, temperatura, posição do potenciômetro, etc.

---

## Componentes básicos do Arduino

### LED (Diodo Emissor de Luz)

- **O que é?** Componente que acende uma luz quando recebe corrente elétrica no sentido certo.  
- **Como usar?**  
  - Perna longa: **ânodo**, conecte ao pino digital do Arduino.  
  - Perna curta: **cátodo**, conecte ao GND (terra).  
  - Use sempre um resistor em série para proteger o LED.

---


### Resistor

- **O que é?** Componente que limita a quantidade de corrente que passa pelo circuito.  
- **Para que serve?** Evita que outros componentes, como LEDs, queimem por excesso de corrente.  
- **Como usar?** Conecte em série com o componente (por exemplo, entre o pino do Arduino e o LED).  
- **Valores comuns:** geralmente entre 220Ω e 1kΩ para LEDs.  
- **Importante:** o resistor é um componente físico, não precisa ser programado no Arduino.

---

### Slide Switch (Interruptor Deslizante)

- **O que é?** Um tipo de interruptor que você pode deslizar para ligar ou desligar um circuito.  
- **Como funciona?** Quando está em uma posição, conecta o circuito (fechado); na outra, desconecta (aberto).  
- **Uso no Arduino:**  
  - Ligado a uma porta digital para ler o estado (HIGH ou LOW).  
  - Pode funcionar como uma chave liga/desliga para outros componentes, como LEDs.

---

### Botão (Button)

- **O que é?** Um componente que faz contato elétrico apenas quando pressionado.  
- **Como funciona?**  
  - Quando você aperta, o circuito fecha e envia um sinal HIGH ou LOW para o Arduino.  
  - Quando solta, o circuito abre e o sinal retorna ao estado oposto.  
- **Uso no Arduino:**  
  - Usado para interagir com o usuário — por exemplo, iniciar ações, mudar modos ou controlar dispositivos.

---

### Buzzer (Campainha Eletrônica)

- **O que é?** Dispositivo que emite som.  
- Pode ser:  
  - **Ativo:** emite som ao receber energia, sem necessidade de controle.  
  - **Passivo:** precisa de sinal para gerar diferentes tons (como música).  
- **Como usar?**  
  - Pino positivo ao pino digital do Arduino.  
  - Pino negativo ao GND.

---

### Display de 7 Segmentos

- **O que é?** Conjunto de 7 LEDs que juntos formam números e algumas letras.  
- **Tipos:**  
  - **Cátodo comum:** todos os negativos unidos.  
  - **Ânodo comum:** todos os positivos unidos.  
- **Como usar?**  
  - Ligue cada segmento a um pino do Arduino.  
  - Controle quais segmentos acender para formar os números.

---

### Fotoresistor (LDR)

- **O que é?** Sensor que muda sua resistência conforme a luz que recebe.  
- **Para que serve?** Detectar luminosidade do ambiente, como acender uma lâmpada quando escurece.  
- **Como funciona?**  
  - Muita luz → baixa resistência → maior tensão na porta analógica  
  - Pouca luz → alta resistência → menor tensão

---

### Display LCD (Liquid Crystal Display)

#### O que é?

- Um visor que mostra texto e números.  
- O mais comum tem **16 colunas e 2 linhas** (16x2).

#### Para que serve?

- Exibir informações como temperatura, mensagens, menus, etc.

#### Como usar?

- Pode ser ligado diretamente ao Arduino (modo paralelo) ou com módulo I2C, que facilita a conexão (menos fios).

#### Principais pinos do LCD 16x2 (modo paralelo)

| Nº  | Nome | Função                                  |
|------|-------|-----------------------------------------|
| 1    | VSS   | Terra (GND)                            |
| 2    | VDD   | Alimentação (5V)                       |
| 3    | VO    | Ajuste do contraste (com potenciômetro) |
| 4    | RS    | Seleciona comando (0) ou dados (1)     |
| 5    | RW    | Leitura (1) ou escrita (0)             |
| 6    | E     | Habilita envio de dados                |
| 7-14 | D0-D7 | Dados (usados em modo 8 bits)          |
| 11-14| D4-D7 | Dados usados em modo 4 bits             |
| 15   | LED+  | Anodo luz de fundo (com resistor)     |
| 16   | LED-  | Cátodo luz de fundo (GND)              |

---

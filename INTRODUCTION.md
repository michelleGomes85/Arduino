# 🚀 Introdução ao Arduino

[⬅ Voltar para o README](./README.md)

[![Arduino](https://img.shields.io/badge/Plataforma-Arduino-blue?logo=arduino)](https://www.arduino.cc/)
[![Licença](https://img.shields.io/badge/License-MIT-green)](./LICENSE)
[![Repositório](https://img.shields.io/badge/GitHub-Visitar_Repositório-181717?logo=github)](.)

Um guia direto, claro e completo para entender como o **Arduino**, seus **sensores**, **atuadores**, **portas** e **componentes eletrônicos** funcionam e se conectam.

---

# 📚 **Índice**

1. [O que é o Arduino?](#-o-que-é-o-arduino)  
2. [Portas do Arduino](#-portas-do-arduino)  
   - [Portas Digitais](#portas-digitais)  
   - [PWM](#pwm)  
   - [Portas Analógicas (A0–A5)](#portas-analógicas-a0a5)  
3. [Componentes Eletrônicos](#-componentes-eletrônicos)  
   - [Componentes Básicos](#componentes-básicos)  
   - [Sensores](#sensores)  
   - [Displays](#displays)  
   - [Atuadores](#atuadores)  
4. [Links Úteis](#-links-úteis)

---

# 🧠 O que é o Arduino?

O **Arduino** é uma plataforma de prototipagem eletrônica que combina:

- **Placas físicas** com microcontroladores (hardware)  
- **IDE Arduino** para programar em C/C++ (software)  
- **Ecossistema de sensores, atuadores e módulos**  
- **Uma comunidade gigante com exemplos e tutoriais**

👉 Ele permite criar projetos como robôs, automações, sensores de presença, controles de luz, estações meteorológicas e muito mais.

🎯 **Vantagens:**

- Simples para iniciantes  
- Fácil de conectar componentes  
- Código acessível e muito documentado  
- Ótimo para aprender eletrônica e programação  
- Barato e amplamente disponível  

---

# 🔌 Portas do Arduino

## Portas Digitais

Portas numeradas de **0 a 13**.  
Podem ser configuradas como:

- **Entrada (INPUT)** → ler botões, sensores digitais  
- **Saída (OUTPUT)** → acender LED, ativar buzzer, relé, etc.

Valem apenas **2 estados**:

- `HIGH` → 5V  
- `LOW` → 0V

👉 Algumas portas possuem símbolo **~**, indicando suporte a PWM.

---

## PWM

PWM (**Pulse Width Modulation**) imita níveis analógicos variando a largura dos pulsos.

Escrevemos um valor entre **0 e 255**:

- 0 → desligado  
- 128 → metade da intensidade  
- 255 → intensidade máxima  

Usos:

- controlar brilho de LEDs  
- controlar velocidade de motores DC  
- mover servos via bibliotecas específicas  

---

## Portas Analógicas (A0–A5)

Diferente das digitais, **medem variações de tensão**.

Retornam valores entre:

- **0 a 1023** → leitura do conversor AD de 10 bits  
- Correspondendo de **0V a 5V**

Usos:

- ler LDR (luz)  
- ler potenciômetro  
- ler sensores de temperatura analógicos  
- medir tensão de sinais variados  

---

# 🔧 Componentes Eletrônicos

## Componentes Básicos

<details>
<summary><strong>LED – Diodo Emissor de Luz</strong></summary>

- Emite luz ao passar corrente  
- Necessita resistor (evita queima)  
- Perna longa: positivo (ânodo)  
- Perna curta: negativo (cátodo)  
</details>

<details>
<summary><strong>Resistor</strong></summary>

- Diminui/limita a corrente  
- Protege LEDs, sensores e microcontroladores  
- Valor indicado pelas faixas coloridas  
</details>

<details>
<summary><strong>Botão (Push Button)</strong></summary>

- Fecha o circuito apenas quando pressionado  
- Usado para comandos, controles e menus  
- Pode exigir resistor pull-up/pull-down  
</details>

<details>
<summary><strong>Slide Switch</strong></summary>

- Interruptor Liga/Desliga  
- Mantém o estado estável (não momentâneo)  
</details>

<details>
<summary><strong>Diodo</strong></summary>

- Permite corrente apenas em **uma direção**  
- Protege circuitos de polaridade reversa  
- Usado também para proteção de motores  
</details>

<details>
<summary><strong>Transistor</strong></summary>

- Funciona como chave eletrônica ou amplificador  
- Permite controlar cargas maiores que o Arduino sozinho não suporta  
- Base → controla  
- Coletor/Emissor → corrente da carga  
</details>

---

## Sensores

<details>
<summary><strong>LDR – Sensor de Luz</strong></summary>

- Varia resistência conforme a luminosidade  
- Usado em luz automática e medição ambiental  
- Necessita divisor resistivo para leitura correta  
</details>

<details>
<summary><strong>Sensor de Temperatura TMP36</strong></summary>

- Sensor analógico fácil de usar  
- Fornece tensão proporcional à temperatura  
- Pode medir ambientes internos com boa precisão  
</details>

<details>
<summary><strong>Sensor Ultrassônico</strong></summary>

Mede distância usando som.

**Como funciona:**
1. Envia um pulso ultrassônico  
2. Espera o eco  
3. Mede o tempo  
4. Calcula distância:  
      - distância = (tempo × velocidade do som) / 2


**Principais modelos:**

### ⭐ HC-SR04  
- Barato e mais comum  
- Pinos: **VCC, GND, TRIG, ECHO**

### ⭐ Parallax PING)))  
- Usa **apenas 1 pino (SIG)** para envio e leitura  
- Mais simples de conectar  
</details>

---

## Displays

<details>
<summary><strong>Display de 7 Segmentos</strong></summary>

- Composto por 7 LEDs formando números  
- Exibe 0 a 9  
- Existem modelos **anodo comum** e **catodo comum**  
</details>

<details>
<summary><strong>Display LCD 16x2</strong></summary>

- Exibe texto em 2 linhas de 16 caracteres  
- Ótimo para menus e leituras  
- Usa biblioteca **LiquidCrystal**  
- Pode ser usado com módulo I2C para economizar portas  
</details>

---

## Atuadores

<details>
<summary><strong>Buzzer</strong></summary>

- Produz sons simples (beeps)  
- Funciona com sinais digitais ou PWM  
- Pode tocar melodias usando `tone()`  
</details>

<details>
<summary><strong>Servomotor</strong></summary>

- Permite controlar ângulos (0° a 180°)  
- Ideal para braços robóticos e mecanismos móveis  
- Requer alimentação adequada (não usar 5V do Arduino para servos grandes)  
</details>

<details>
<summary><strong>Motor DC</strong></summary>

- Gira livremente, usado para carrinhos e ventilação  
- Precisa de **driver ou transistor**  
- Pode ser controlado em velocidade com PWM  
</details>

---

# 🔗 Links Úteis

- Documentação oficial: https://www.arduino.cc  
- Download da IDE: https://www.arduino.cc/en/software  
- Exemplos básicos: https://www.arduino.cc/en/Tutorial/HomePage  

---

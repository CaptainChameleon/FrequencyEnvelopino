# FrequencyEnvelopino
Creando Interfaces de Usuario - Práctica 1

## Introducción
Como toma de contacto con Arduino, se pide realizar un programa sencillo, el objetivo es generar una pulsación de frecuencia variable en el
LED integrado en la placa. Deberá producirse una señal senoidal que definirá la envolvente, de manera que cuando dicha señal alcance su valor 
máximo el LED parpadeará a una cierta frecuencia freqMax, mientras que cuando alcance el valor mínimo parpadeará a una frecuencia mínima freqMin.

## Implementación
Como el objetivo es alternar entre una frecuencia máxima y una mínima a partir de los valores de la senoidal basta con utilizar la siguiente ecuación:

`frequency = envelope * freqMax + (1-envelope) * freqMin`

Donde `envelope` corresponde al valor de la sinoidal en valor absoluto que cambia a razón de aproximadamente 11º grados por segundo.

Para encender el LED no hay más que enviar una señal de HIGH o LOW al pin correspondiente.

## Resultado
![GIF de Arduino ejecutando la rutina](https://github.com/CaptainChameleon/FrequencyEnvelopino/blob/c7f4ff771bf9059767ae8189dd2eb01ebee2fa2f/result.gif)

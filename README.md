# Proyecto-Final-1-ED2
# Sistema de Monitoreo de Cadena de Frío con ESP32

## Integrantes
Kathy Anzueto

## Descripción del proyecto
Este repositorio contiene el código del proyecto del curso Electrónica Digital 2. El sistema utiliza un ESP32 y un sensor LM35 para medir la temperatura de una cadena de frío mediante la pulsación de un botón. Dependiendo de la temperatura obtenida, el sistema determina el estado térmico y controla un LED RGB y una rejilla de ventilación mediante un servomotor.

## Funcionamiento general
El sistema clasifica la temperatura en cuatro estados. Para temperaturas menores a 23 °C se indica riesgo por frío con color azul y la rejilla cerrada. Entre 23 °C y 25 °C se indica un rango seguro con color verde y la rejilla en posición media. Entre 25 °C y 27 °C se utiliza color amarillo y posición media. Para temperaturas mayores a 27 °C se indica riesgo por calor con color rojo y la rejilla abierta. La temperatura se muestra con un decimal mediante tres displays de 7 segmentos utilizando multiplexeo. El LED RGB y el servomotor son controlados mediante señales PWM.

## Comunicación inalámbrica
El ESP32 se conecta mediante Wi-Fi a Adafruit IO. Cada vez que se presiona el botón y se realiza una nueva medición, el sistema envía al dashboard la temperatura obtenida y el estado de la rejilla, indicando si se encuentra cerrada, en posición media o abierta.

## Componentes utilizados
El proyecto utiliza un ESP32 DevKit, sensor LM35, botón pulsador, LED RGB, servomotor, tres displays de 7 segmentos, transistores, resistencias, protoboard, cables de conexión y una fuente externa de 5 V para alimentar el servomotor.

## Código
El programa está desarrollado en C++ utilizando PlatformIO y el framework Arduino para ESP32. El código integra lectura analógica, cuatro señales PWM, multiplexeo mediante Timer e interrupciones, control de actuadores y comunicación Wi-Fi con Adafruit IO.

## Estado del proyecto
El proyecto cuenta con una implementación física funcional que permite medir y visualizar la temperatura, indicar el estado térmico mediante un LED RGB, controlar automáticamente una rejilla de ventilación y enviar los resultados a un dashboard en Adafruit IO.

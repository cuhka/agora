#Overzicht

1. **AllOn**: Zet alle leds aan
2. **OnOff**: Zet de leds aan, dan weer uit, dan weer aan, dan weer uit
3. **RoundLeds**: Zet de leds één voor één aan, dan één voor één weer uit (etc)
4. **RoundLeds2**: Steeds één led aan, die de cirkel rond blijft gaan
5. **RoundLed3**: Steeds drie ledjes aan, die de cirkel rond blijven gaan
6. **RoundLedsWithBuzzer**: Laat een kort geluidje horen via de buzzer aan het begin van elke cyclus
7. **Light**: Gebruikt een lichtgevoelige weerstand om de snelheid van de cyclus te regelen
8. **Tilt**: Gebruikt de tilt sensor om de richting te bepalen van de beweging. 

#Pins
1. Led + resistor op pins 4-13
2. Buzzer op pin 3
3. Tilt op pin 2
4. Light dependent resistor op pin A0

#Concepten

## AllOn

* Led/diode - anode (+), cathode (-)
* Weerstanden
* Initializatie met `setup()` 
* Pin input/output definiëren met `pinMode()` 
* Led aanzetten met `digitalWrite(..., HIGH)` 

## OnOff

* Herhalend gedrag met `loop()`
* Vertragen met `delay()`
* Led uitzetten met `digitalWrite(..., LOW)`

## RoundLeds
* Creëer effect door strategische plaatsing `delay()`

## RoundLeds2
* Modulo (`%`) berekening om steeds weer terug te keren bij 0, zodat het lijkt dat de ledjes de cirkel rond blijven gaan

## RoundLed3
* Zet met behulp van dezelfde modulo berekening ledjes later uit, zodat meer ledjes aan blijven

## RoundLedsWithBuzzer
* Maak geluid met de `tone()` functie

## Light
* Lees een analoge waarde uit met `analogRead()` en gebruik deze in het programma
* Gebruik een pull-down resistor om leeswaarden te stabiliseren

## Tilt
* Zet een digitale poort in lees mode met `pinMode()`
* Lees een digitale waarde met `digitalRead()`
* Gebruik waarde in programma
* Vertraging zonder gebruik te maken van `delay()` zodat de sensor continue uitgelezen kan worden
* Debounce zodat waarden stabiel gelezen worden

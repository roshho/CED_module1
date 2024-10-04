# Piet Mondrian's ESP32 Canvas
[Link to blog Medium blog post](https://medium.com/@rh3210/piet-mondrians-esp32-canvas-f77085a8b9b3)
Project seeks to recreate one of Piet Mondrian's composition piece from Guggenheim adapted to Lilygo's 135x240 resolution screen. Also included code to recreate the "huh" cat meme in their respective folders. Outcome should look like the following:

![[piet-mondrian-video.gif|300]]![[cat_huh.gif|300]]
![[WhatsApp Video 2024-10-04 at 00.03.14_d80d8e90.gif]]

# Instructions to run
1) Using the [Arduino IDE]([https://www.arduino.cc/en/software](https://www.arduino.cc/en/software), open the respective ``.ino`` file
2) Install [TTGO T-display driver]([https://github.com/Xinyuan-LilyGO/TTGO-T-Display](https://github.com/Xinyuan-LilyGO/TTGO-T-Display))
3) Assign Arduino IDE port to the one that Lilygo TTGO is connected to
4) Install TFT_eSPI library (display library)
	- Under Arduino IDE/tools/library_manager, search ``tft_espi``
	- Navigate to the library, e.g. Documents/Arduino/libraries/tft_espi
	- Open up the file Arduino/libraries/TFT_eSPI/User_Setup_Select.h
	- comment out the line ``#include <User_setup.h>``
	- uncomment out the line include ``<User_Setups/Setup25_TTGO_T_Display.h>>``
	- note - commenting out means adding ``//`` in front of the line, to uncomment, remove ``//`` but don’t remove the ``#`` sign
5) Install [ESP32 Board defintion]([https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html)) under ``Installing using Arduino IDE``
6) Compile and upload the code from the ``.ino`` to your Lilygo TTGO
	- Note: for the "huh" cat meme, the ``.h`` file needs to be in the same directory level as the ``cat-huh.ino`` file
7) Money 💸💸💸

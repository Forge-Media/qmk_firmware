# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite		# Handles entering the bootloader by holding down key (0,0) while plugging keyboard in
MOUSEKEY_ENABLE = no		# Mouse keys
EXTRAKEY_ENABLE = yes		# Allow for system and audio control via keycodes
CONSOLE_ENABLE = no			# Console for debug
COMMAND_ENABLE = no			# Commands for debug and configuration
SLEEP_LED_ENABLE = no		# Breathing sleep LED during USB suspend (Don't enamble)
NKRO_ENABLE = yes			# USB Nkey Rollover
BACKLIGHT_ENABLE = no		# Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no		# Enable WS2812 RGB underglow / per-key backlight
BLUETOOTH_ENABLE = no		# Enable Bluetooth
MIDI_ENABLE = no			# MIDI controls
AUDIO_ENABLE = no			# Audio output
UNICODE_ENABLE = no			# Allow for sending unicode characters in your keymap

# RGB Matrix Setup
#
RGB_MATRIX_ENABLE = yes		# Enable Support for addressable RGB matrix lighting
RGB_MATRIX_DRIVER = WS2812  # Driver types (WS2812, IS31FL3733, IS31FL3731, APA102)

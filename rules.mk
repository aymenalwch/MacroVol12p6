BOARD = GENERIC_RP_RP2040
LTO_ENABLE = yes            # Link Time Optimization enabled
SERIAL_DRIVER = vendor

BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes        # Audio control and System control

# VELOCIKEY_ENABLE = yes-------
RGB_MATRIX_ENABLE = no      # Only needed for per-key RGB (you don't have that)
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.
WS2812_DRIVER = vendor
VIALRGB_ENABLE = no        # Allows Vial to control RGB settings

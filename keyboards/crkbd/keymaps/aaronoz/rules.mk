# enable LTO to reduce compiled size (take a bit longer to compile)
LTO_ENABLE 	= yes

WPM_ENABLE	= yes
MOUSEKEY_ENABLE = yes	# enable mousekeys
VIA_ENABLE      = no    # Enable VIA

# lights and oled setup
RGBLIGHT_ENABLE = no    # Enable WS2812 RGB underlight.
OLED_ENABLE 	= no
OLED_DRIVER 	= SSD1306
OLED_TRANSPORT 	= i2c

# If you want to change the display of OLED, you need to change here
SRC +=  ./keymaps/aaronoz/glcdfont.c \
        ./lib/rgb_state_reader.c \
        ./keymaps/aaronoz/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \

# elite-c uses DFU
BOOTLOADER = atmel-dfu

# make compiler more permissive such that it ignores duplicate definitions
CFLAGS += -fcommon

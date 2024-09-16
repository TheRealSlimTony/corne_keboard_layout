# Configuración básica del microcontrolador y firmware
MCU = atmega32u4
F_CPU = 16000000
BOOTLOADER = caterina

# Habilita RGB Matrix y deshabilita RGB Light para evitar conflictos
RGB_MATRIX_ENABLE = yes
RGBLIGHT_ENABLE = no

# Define el uso de comunicación entre las mitades; solo una opción debe estar habilitada
USE_SERIAL = yes
# USE_I2C = no

# Opciones adicionales para evitar errores en la compilación
EXTRAFLAGS += -Wno-error=cpp

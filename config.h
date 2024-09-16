#pragma once

// Configuración para RGB Matrix
#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // Reacciona a las pulsaciones de teclas
#   define RGB_MATRIX_SLEEP // Apaga los efectos cuando el teclado está suspendido

#   define RGB_MATRIX_HUE_STEP 8
#   define RGB_MATRIX_SAT_STEP 8
#   define RGB_MATRIX_VAL_STEP 8
#   define RGB_MATRIX_SPD_STEP 10
#endif

// Configuración de sincronización entre mitades
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_USB_DETECT
#define EE_HANDS

// Opciones de depuración
#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_ACTION

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // ajusta según tus preferencias
#define RGB_MATRIX_DEFAULT_VAL 60 // valor inicial del brillo
#define RGB_DISABLE_WHEN_USB_SUSPENDED // apaga los LEDs cuando el USB está suspendido

#define RGB_MATRIX_TIMEOUT 300000 // Tiempo en milisegundos; por ejemplo, 60000 ms es 1 minuto.

# Crkbd (Corne Keyboard) Configuration

Este repositorio contiene la configuración personalizada para el teclado Crkbd (Corne Keyboard) utilizando QMK Firmware. La configuración incluye un manejo avanzado de las capas y los LEDs, optimizando tanto la funcionalidad como la estética del teclado.

## Características

- **Diseño Split 3x6_3:** La configuración está basada en el diseño `LAYOUT_split_3x6_3`, que es típico del Crkbd, dividido en dos mitades con 3 filas de 6 teclas y una fila adicional de 3 teclas en cada lado.
- **Manejo de LEDs:** Implementación personalizada del manejo de LEDs para resaltar diferentes capas, ofreciendo retroiluminación dinámica que cambia según la capa activa.
- **Capas Múltiples:** Varias capas de configuración adaptadas para diferentes funciones, incluyendo navegación, edición de texto, y teclas de función.
- **Teclas Modificadoras y Funcionales:** Uso de modificadores y teclas especiales para maximizar la eficiencia durante la escritura y programación.

## Layout de Capas

### Capa 0 - Base

La capa base contiene la disposición estándar de letras y números, con modificadores en las esquinas inferiores.

```c
[0] = LAYOUT_split_3x6_3(
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                      KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G,                     KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,                     KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT,
                    KC_LGUI, S(KC_MINS), MO(2),            MO(1), KC_SPC, MO(3)
),
[1] = LAYOUT_split_3x6_3(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                      KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
    KC_TAB, XXXXXXX, KC_LGUI, KC_RCTL, KC_TAB, KC_F16,         KC_F18, KC_F7, KC_RIGHT, XXXXXXX, KC_F17, KC_DEL,
    KC_LGUI, KC_F7, KC_LEFT, KC_F1, KC_RIGHT, KC_F7,           KC_F19, KC_F4, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                         KC_LGUI, _______, KC_SPC,         KC_ENT, MO(3), KC_RALT
),
[2] = LAYOUT_split_3x6_3(
    KC_ESC, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),       KC_MINS, KC_EQL, S(KC_0), S(KC_9), S(KC_7), KC_ENT,
    KC_LCTL, KC_F2, KC_F15, KC_PAST, KC_PPLS, KC_PMNS,        S(KC_BSLS), KC_RBRC, KC_LBRC, S(KC_QUOT), KC_QUOT, S(KC_GRV),
    KC_LSFT, KC_P1, KC_P2, KC_P3, KC_LALT, KC_F4,             KC_BSLS, S(KC_RBRC), S(KC_LBRC), S(KC_SCLN), S(KC_SLSH), KC_RALT,
                        KC_LGUI, KC_TRNS, KC_SPC,          KC_MINS, _______, KC_ENT
),
[3] = LAYOUT_split_3x6_3(
    KC_TAB, KC_F4, KC_UP, KC_UP, KC_F2, KC_F5,                KC_F6, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_BSPC,
    KC_LSFT, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGUP, KC_PGDN,     KC_DEL, KC_F6, KC_F3, KC_LALT, KC_LCTL, KC_RSFT,
    KC_LCTL, KC_LALT, KC_Z, KC_C, KC_HOME, KC_RSFT,           KC_F9, KC_F11, KC_F10, KC_F5, KC_RSFT, KC_F12,
                            KC_RALT, KC_TRNS, KC_SPC,       KC_RSFT, RGB_VAI, RGB_VAD

),
```

## Replicalo 
git clone https://github.com/tu-usuario/crkbd-config
cd crkbd-config
qmk compile -kb crkbd -km <nombre_de_tu_layout>


## Flash por terminal, yo lo hago com QMK Toolbox 
qmk flash -kb crkbd -km <nombre_de_tu_layout>

#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
    rgb_matrix_enable();  
}

void suspend_power_down_user(void) {
    rgb_matrix_set_suspend_state(true); 
}

void suspend_wakeup_init_user(void) {
    rgb_matrix_set_suspend_state(false); 
}

bool rgb_matrix_indicators_user(void) {
    // Obtén la capa activa
    uint8_t layer = get_highest_layer(layer_state);
    rgb_matrix_set_color_all(3, 252, 215); // color cian 
    
    if (layer == 0) {
        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 a abajo izquierda
        rgb_matrix_set_color(1, 0, 255, 255);   // LED 1 a abajo izquierda
        rgb_matrix_set_color(2, 0, 0, 0);       // LED 2 a abajo izquierda
        rgb_matrix_set_color(3, 0, 255, 255);   // LED 3 a abajo izquierda
        rgb_matrix_set_color(4, 0, 255, 255);   // LED 4 a abajo izquierda
        rgb_matrix_set_color(5, 0, 255, 255);   // LED 5 a abajo izquierda
        rgb_matrix_set_color(6, 0, 0, 0);       // mod1(2)
        rgb_matrix_set_color(7, 0, 255, 255);   // KC_B
        rgb_matrix_set_color(8, 0, 255, 255);   // KC_G
        rgb_matrix_set_color(9, 0, 255, 255);   // KC_T
        rgb_matrix_set_color(10, 0, 0, 0);      // KC_R
        rgb_matrix_set_color(11, 0, 255, 255);  // KC_F
        rgb_matrix_set_color(12, 0, 255, 255);  // KC_V
        rgb_matrix_set_color(13, 0, 255, 255);  // KC_UNDS
        rgb_matrix_set_color(14, 0, 255, 255);  // KC_LGUI
        rgb_matrix_set_color(15, 0, 255, 255);  // KC_C
        rgb_matrix_set_color(16, 0, 255, 255);  // KC_D 
        rgb_matrix_set_color(17, 0, 255, 255);  // KC_E
        rgb_matrix_set_color(18, 0, 0, 0);      // KC_W
        rgb_matrix_set_color(19, 0, 255, 255);  // KC_S
        rgb_matrix_set_color(20, 0, 255, 255);  // KC_X
        rgb_matrix_set_color(21, 0, 255, 255);  // KC_Z
        rgb_matrix_set_color(22, 0, 255, 255);  // KC_A
        rgb_matrix_set_color(23, 0, 255, 255);  // KC_Q
        rgb_matrix_set_color(24, 0, 0, 0);      // KC_TAB
        rgb_matrix_set_color(25, 0, 255, 255);  // KC_CAPS
        rgb_matrix_set_color(26, 0, 255, 255);  // KC_LCTL

        rgb_matrix_set_color(27, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(28, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(29, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(30, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(31, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(32, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(33, 0, 0, 0);      // mod(1)
        rgb_matrix_set_color(34, 0, 255, 255);  // KC_N
        rgb_matrix_set_color(35, 0, 255, 255);  // KC_H
        rgb_matrix_set_color(36, 0, 255, 255);  // KC_Y
        rgb_matrix_set_color(37, 0, 0, 0);      // KC_U
        rgb_matrix_set_color(38, 0, 255, 255);  // KC_J
        rgb_matrix_set_color(39, 0, 255, 255);  // KC_M
        rgb_matrix_set_color(40, 0, 255, 255);  // KC_SPC
        rgb_matrix_set_color(41, 0, 255, 255);  // mod(3)
        rgb_matrix_set_color(42, 0, 255, 255);  // KC_,
        rgb_matrix_set_color(43, 0, 255, 255);  // KC_K
        rgb_matrix_set_color(44, 0, 255, 255);  // KC_I
        rgb_matrix_set_color(45, 0, 0, 0);      // KC_O
        rgb_matrix_set_color(46, 0, 255, 255);  // KC_L
        rgb_matrix_set_color(47, 0, 255, 255);  // KC_.
        rgb_matrix_set_color(48, 0, 255, 255);  // KC_/
        rgb_matrix_set_color(49, 0, 255, 255);  // KC_;
        rgb_matrix_set_color(50, 0, 255, 255);  // KC_P
        rgb_matrix_set_color(51, 0, 255, 255);  // KC_BACKSPACE
        rgb_matrix_set_color(52, 0, 255, 255);  // KC_ENTER
        rgb_matrix_set_color(53, 0, 255, 255);  // KC_LSFT   
    }
    if (layer == 1) {
        //Template
        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 a abajo izquierda
        rgb_matrix_set_color(1, 0, 255, 255);   // LED 1 a abajo izquierda
        rgb_matrix_set_color(2, 0, 0, 0);       // LED 2 a abajo izquierda
        rgb_matrix_set_color(3, 0, 255, 255);   // LED 3 a abajo izquierda
        rgb_matrix_set_color(4, 0, 255, 255);   // LED 4 a abajo izquierda
        rgb_matrix_set_color(5, 0, 255, 255);   // LED 5 a abajo izquierda
        rgb_matrix_set_color(24, 0, 0, 0);      // KC_TAB
        rgb_matrix_set_color(10, 0, 0, 0);      // KC_R
        rgb_matrix_set_color(18, 0, 0, 0);      // KC_W
        rgb_matrix_set_color(37, 0, 0, 0);      // KC_U
        rgb_matrix_set_color(45, 0, 0, 0);      // KC_O
        rgb_matrix_set_color(27, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(28, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(29, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(30, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(31, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(32, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 a abajo
        rgb_matrix_set_color(27, 0, 0, 0);      // LED 27 abajo 
        rgb_matrix_set_color(6, 0, 0, 0);       // 
        rgb_matrix_set_color(33, 0, 0, 0);      //
        //Template
    }
    if (layer == 2) {
        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 a abajo izquierda
        rgb_matrix_set_color(1, 0, 255, 255);   // LED 1 a abajo izquierda
        rgb_matrix_set_color(2, 0, 0, 0);       // LED 2 a abajo izquierda
        rgb_matrix_set_color(3, 0, 255, 255);   // LED 3 a abajo izquierda
        rgb_matrix_set_color(4, 0, 255, 255);   // LED 4 a abajo izquierda
        rgb_matrix_set_color(5, 0, 255, 255);   // LED 5 a abajo izquierda
        rgb_matrix_set_color(24, 0, 0, 0);      // KC_TAB
        rgb_matrix_set_color(10, 0, 0, 0);      // KC_R
        rgb_matrix_set_color(18, 0, 0, 0);      // KC_W
        rgb_matrix_set_color(37, 0, 0, 0);      // KC_U
        rgb_matrix_set_color(45, 0, 0, 0);      // KC_O
        rgb_matrix_set_color(27, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(28, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(29, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(30, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(31, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(32, 0, 255, 255);  // LED abajo derecha

        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 a abajo
        rgb_matrix_set_color(27, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(6, 0, 0, 0);       // mod1(2)
        rgb_matrix_set_color(33, 0, 0, 0);      // LED 42 a amarillos
        rgb_matrix_set_color(19, 255, 255, 0);  // f5
        rgb_matrix_set_color(22, 255, 255, 0);  // f5

        rgb_matrix_set_color(44, 110, 3, 145);  // KC_I
        rgb_matrix_set_color(45, 110, 3, 145);  // KC_O
        rgb_matrix_set_color(43, 110, 3, 145);  // KC_K
        rgb_matrix_set_color(46, 110, 3, 145);  // KC_L
        rgb_matrix_set_color(47, 110, 3, 145);  // KC_.
        rgb_matrix_set_color(42, 110, 3, 145);  // KC_,
    }
    if (layer == 3) {
        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 a abajo izquierda
        rgb_matrix_set_color(1, 0, 255, 255);   // LED 1 a abajo izquierda
        rgb_matrix_set_color(2, 0, 0, 0);       // LED 2 a abajo izquierda
        rgb_matrix_set_color(3, 0, 255, 255);   // LED 3 a abajo izquierda
        rgb_matrix_set_color(4, 0, 255, 255);   // LED 4 a abajo izquierda
        rgb_matrix_set_color(5, 0, 255, 255);   // LED 5 a abajo izquierda
        rgb_matrix_set_color(27, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(28, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(29, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(30, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(31, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(32, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(24, 0, 0, 0);      // KC_TAB
        rgb_matrix_set_color(10, 0, 0, 0);      // KC_R
        rgb_matrix_set_color(18, 0, 0, 0);      // KC_W
        rgb_matrix_set_color(37, 0, 0, 0);      // KC_U
        rgb_matrix_set_color(45, 0, 0, 0);      // KC_O
        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 abajo izquierda
        rgb_matrix_set_color(27, 0, 0, 0);      // LED 27 abajo derecha
        rgb_matrix_set_color(6, 0, 0, 0);       // mod1(2)
        rgb_matrix_set_color(33, 0, 0, 0);      // LED 33

        rgb_matrix_set_color(35, 255, 255, 0);  // KC_F5
        rgb_matrix_set_color(38, 255, 255, 0);  // KC_F10
        rgb_matrix_set_color(43, 255, 255, 0);  // KC_F11
        rgb_matrix_set_color(46, 255, 255, 0);  // 
        rgb_matrix_set_color(49, 255, 255, 0);  // break
        rgb_matrix_set_color(8, 252, 100, 5);   // KC_G
        rgb_matrix_set_color(11, 252, 100, 5);  // KC_F
        rgb_matrix_set_color(16, 252, 100, 5);  // KC_D
        rgb_matrix_set_color(18, 252, 100, 5);  // KC_W
        rgb_matrix_set_color(19, 252, 100, 5);  // KC_S
        rgb_matrix_set_color(22, 252, 100, 5);  // KC_A
    }
    if (layer == 4) {
        //Template
        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 a abajo izquierda
        rgb_matrix_set_color(1, 0, 255, 255);   // LED 1 a abajo izquierda
        rgb_matrix_set_color(2, 0, 0, 0);       // LED 2 a abajo izquierda
        rgb_matrix_set_color(3, 0, 255, 255);   // LED 3 a abajo izquierda
        rgb_matrix_set_color(4, 0, 255, 255);   // LED 4 a abajo izquierda
        rgb_matrix_set_color(5, 0, 255, 255);   // LED 5 a abajo izquierda
        rgb_matrix_set_color(24, 0, 0, 0);      // KC_TAB
        rgb_matrix_set_color(10, 0, 0, 0);      // KC_R
        rgb_matrix_set_color(18, 0, 0, 0);      // KC_W
        rgb_matrix_set_color(37, 0, 0, 0);      // KC_U
        rgb_matrix_set_color(45, 0, 0, 0);      // KC_O
        rgb_matrix_set_color(27, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(28, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(29, 0, 0, 0);      // LED abajo derecha
        rgb_matrix_set_color(30, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(31, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(32, 0, 255, 255);  // LED abajo derecha
        rgb_matrix_set_color(0, 0, 0, 0);       // LED 0 a abajo
        rgb_matrix_set_color(27, 0, 0, 0);      // LED 27 abajo 
        rgb_matrix_set_color(6, 0, 0, 0);       // 
        rgb_matrix_set_color(33, 0, 0, 0);      //
        //Template
    }
    return false; 
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
             KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_ENT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_LSFT,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                               KC_LGUI,   KC_UNDS,  MO(2),     MO(1) ,   KC_SPC,  MO(3)
                                           //`--------------------------'  `--------------------------'
    ),

    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
             KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_TAB, XXXXXXX, KC_LGUI, KC_RCTL, KC_TAB, KC_F16,                         KC_F18,   KC_F7,  KC_LEFT,  XXXXXXX, KC_F17, KC_DEL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           KC_LGUI, KC_F7, KC_LEFT, KC_F1, KC_RIGHT, KC_F7,                          KC_F19,   KC_F4,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                               KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                           //`--------------------------'  `--------------------------'
    ),

    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
             KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                     KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_EQL, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LCTL, KC_F2, KC_F15, KC_PAST, KC_PPLS, KC_PMNS,                        KC_QUOT, S(KC_QUOT), KC_LBRC, KC_RBRC, KC_RBRC,  KC_GRV,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           KC_LSFT, KC_1,    KC_2,    KC_3,    KC_RALT,   KC_F4,                     S(KC_SLSH), KC_COLN, S(KC_LBRC), KC_RCBR, KC_PIPE, KC_TILD,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                               KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, MO(4)
                                           //`--------------------------'  `--------------------------'
    ),

    [3] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_TAB,   KC_F4,  KC_UP,   KC_UP,  KC_F2,   KC_F5,                      KC_F6, KC_F3, KC_LALT, KC_F6, KC_DEL, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           KC_LSFT, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGUP, KC_PGDN,                      KC_F5,   KC_F10,  KC_F11,  KC_F9, KC_HOME,  KC_END,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           KC_LCTL, KC_LALT,  KC_Z,   KC_C,   KC_HOME, KC_RSFT,                        KC_F13, RGB_VAI, RGB_VAD, KC_F12, KC_RSFT,  KC_RSFT,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                               KC_LCTL, KC_LCTL,  KC_LALT,     KC_RSFT, _______, KC_RALT
                                           //`--------------------------'  `--------------------------'
    ),

    [4] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        _______, _______,  _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, _______, _______, _______, _______, _______,                      _______, _______, KC_LABK, KC_RABK, _______,  _______,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, _______,    _______,    _______,    _______,   _______,           _______, _______, _______, _______, _______, _______,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RALT
                                        //`--------------------------'  `--------------------------'
    )
};

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *   Layer 1 :
     *   ┌───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐ ┌───┐
     *   |Esc| | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | |BSP|
     *   ├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─┴─┬─┘
     *   |CTL| | Q | W | E | R | T | Y | U | I | O | P |***|
     *   ├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼───┼─┬─┴─┬─┘ ┌───┐
     *   |FNC| | A | S | D | F | G | H | J | K | L | |ENT|   | ↑ |
     *   ├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼─┬─┴─┼───┼───┼───┼───┐
     *   |SFT| | Z | X | C | V | B | N | M | . | |SPC|   | ← | ↓ | → |
     *   └───┘ └───┴───┴───┴───┴───┴───┴───┴───┘ └───┘   └───┴───┴───┘
     *   
     *    
     *   Layer 2 :
     *   ┌───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐ ┌───┐
     *   |TAB| | ! | @ | # | $ | % | ^ | & | * | ( | ) | |DEL|
     *   ├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─┴─┬─┘
     *   |ALT| | - | = | + | [ | ] | { | } | < | > | _ |***|
     *   ├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼───┼─┬─┴─┬─┘ ┌───┐
     *   |SYM| | ' | ` | \ | / | | | " | ; | : | ? | |ENT|   |PGU|
     *   ├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼─┬─┴─┼───┼───┼───┼───┐
     *   |SFT| |SFT| ⏻ | ~ |⏯ | ■ | ⏮| ⏭ | , | |SPC|   |HOM|PGD|END|
     *   └───┘ └───┴───┴───┴───┴───┴───┴───┴───┘ └───┘   └───┴───┴───┘
     *
     */
    [0] = LAYOUT_custom_49keys(
        KC_ESC,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC,
        KC_LCTL,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_PSCR,
        MO(1),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G, KC_H, KC_J,   KC_K,   KC_L,   KC_ENT, KC_UP,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_DOT,   KC_SPC, KC_LEFT, KC_DOWN,   KC_RGHT
    ),
    //A modifier
    [1] = LAYOUT_custom_49keys(
        KC_TAB,   KC_EXLM,   KC_AT,   KC_HASH,   KC_DLR,   KC_PERC,   KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_DEL,
        KC_LALT,  KC_PMNS,   KC_PEQL,   KC_PPLS,   KC_LBRC,   KC_RBRC,   KC_LCBR,   KC_RCBR,   KC_LEFT_ANGLE_BRACKET,   KC_RIGHT_ANGLE_BRACKET,   KC_UNDS,   KC_PSCR,
        KC_SYSTEM_POWER,   KC_QUOTE,   KC_GRAVE,   KC_BSLS,   KC_SLSH,   KC_PIPE, KC_DQT, KC_SCLN,   KC_COLN,   KC_QUES,   KC_ENT, KC_PGUP,
        KC_LSFT,   KC_RSFT,   KC_SYSTEM_POWER,   KC_TILDE,   KC_MPLY,   KC_MSTP,   KC_MPRV,   KC_MNXT,   KC_COMMA,   KC_SPC, KC_HOME , KC_PGDN,   KC_END
    )
};

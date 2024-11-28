#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  MAC_MISSION_CONTROL,
  MAC_LOCK,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    OSL(6),         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_HYPR,        
    KC_MEH,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_QUOTE,       
    LT(1,KC_ESCAPE),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_ENTER,       
    KC_NO,          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_NO,          
                                                    LT(2,KC_SPACE), MO(4),                                          MO(4),          MO(3)
  ),
  [1] = LAYOUT_voyager(
    TOGGLE_LAYER_COLOR,RGB_VAD,        RGB_VAI,        KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,MAC_LOCK,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_SYSTEM_SLEEP,                                KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          QK_DYNAMIC_TAPPING_TERM_UP,
    KC_TRANSPARENT, KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          QK_DYNAMIC_TAPPING_TERM_DOWN,
    KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_PRINT,
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [2] = LAYOUT_voyager(
    TO(7),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          OSL(3),                                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          ST_MACRO_0,     MAC_MISSION_CONTROL,ST_MACRO_1,     KC_NO,                                          KC_NO,          KC_AMPR,        KC_ASTR,        KC_UNDS,        KC_NO,          KC_NO,          
    KC_NO,          OSM(MOD_LCTL),  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LSFT),  LALT(LCTL(LSFT(KC_Q))),                                KC_NO,          KC_DLR,         KC_PERC,        KC_CIRC,        KC_BSLS,        KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,        KC_ENTER,                                       KC_NO,          KC_EXLM,        KC_AT,          KC_HASH,        KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(0),                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TILD,        KC_LCBR,        KC_RCBR,        KC_GRAVE,       KC_PIPE,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(5),          
    KC_COLN,        KC_PLUS,        KC_LBRC,        KC_RBRC,        KC_MINUS,       KC_DLR,                                         KC_TRANSPARENT, KC_BSPC,        CW_TOGG,        KC_NO,          KC_NO,          KC_NO,          
    KC_EXLM,        KC_LABK,        KC_LPRN,        KC_RPRN,        KC_RABK,        KC_EQUAL,                                       KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_NO,          KC_TILD,        KC_NO,          KC_NO,          KC_GRAVE,       KC_NO,                                          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,          
    KC_NO,          KC_QUES,        KC_COLN,        KC_NO,          KC_ENTER,       KC_NO,                                          QK_LLCK,        KC_4,           KC_5,           KC_6,           KC_0,           KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_DELETE,      KC_NO,                                          KC_NO,          KC_1,           KC_2,           KC_3,           KC_DOT,         KC_COMMA,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          LGUI(KC_X),     LGUI(KC_C),     LGUI(KC_V),     KC_NO,                                          KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_NO,          TO(0),          
    KC_MS_ACCEL2,   MAC_MISSION_CONTROL,KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1,     KC_NO,                                          KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_ACCEL2,   KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MS_BTN1,     OSM(MOD_RSFT),  OSM(MOD_RGUI),  OSM(MOD_RALT),  OSM(MOD_RCTL),  MAC_MISSION_CONTROL,
                                                    KC_MS_ACCEL1,   KC_MS_ACCEL0,                                   KC_MS_BTN1,     KC_MS_BTN1
  ),
  [6] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_P,           KC_O,           KC_I,           KC_U,           KC_Y,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SCLN,        KC_L,           KC_K,           KC_J,           KC_H,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SLASH,       KC_DOT,         KC_COMMA,       KC_M,           KC_N,                                           KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_NO
  ),
  [7] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_KP_ASTERISK, KC_KP_SLASH,    KC_KP_EQUAL,                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_PLUS,        KC_4,           KC_5,           KC_6,           KC_COMMA,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_MINUS,       KC_1,           KC_2,           KC_3,           KC_DOT,                                         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_0,                                           KC_NO,          KC_NO
  ),
};

const uint16_t PROGMEM combo0[] = { KC_U, KC_I, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_TAB),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1,KC_ESCAPE):
            return g_tapping_term -20;
        case MT(MOD_LSFT, KC_F):
            return g_tapping_term -60;
        case KC_V:
            return g_tapping_term -15;
        case MT(MOD_RSFT, KC_J):
            return g_tapping_term -60;
        case KC_M:
            return g_tapping_term -15;
        case KC_COMMA:
            return g_tapping_term + 50;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {14,250,255}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {0,0,0}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {14,250,255}, {14,250,255}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {0,0,0}, {19,252,224}, {14,250,255} },

    [1] = { {233,248,247}, {233,248,247}, {233,248,247}, {204,232,247}, {204,232,247}, {0,232,247}, {0,0,0}, {0,0,0}, {204,232,247}, {204,232,247}, {204,232,247}, {0,232,247}, {0,0,0}, {0,0,0}, {204,232,247}, {204,232,247}, {204,232,247}, {0,0,0}, {0,0,0}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {233,248,247}, {233,248,247}, {233,248,247}, {233,248,247}, {0,0,0}, {233,248,247}, {233,248,247}, {233,248,247}, {233,248,247}, {233,248,247}, {0,0,0}, {233,248,247}, {0,0,0}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {233,248,247}, {0,0,0}, {0,0,0} },

    [2] = { {125,255,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {125,255,247}, {0,0,0}, {0,0,0}, {233,248,247}, {204,232,247}, {233,248,247}, {0,0,0}, {0,0,0}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {204,232,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,232,247}, {41,255,255}, {125,255,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,250,255}, {14,250,255}, {14,250,255}, {0,0,0}, {0,0,0}, {0,0,0}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {0,0,0}, {0,0,0}, {14,250,255}, {14,250,255}, {14,250,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {125,255,247}, {0,0,0}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {14,250,255}, {125,255,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,250,255}, {0,0,0}, {249,218,204}, {92,252,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {0,0,0}, {0,0,0}, {125,255,247} },

    [4] = { {0,0,0}, {208,7,242}, {208,7,242}, {208,7,242}, {208,7,242}, {208,7,242}, {0,0,0}, {14,250,255}, {0,0,0}, {0,0,0}, {14,250,255}, {0,0,0}, {0,0,0}, {14,250,255}, {14,250,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {125,255,247}, {125,255,247}, {208,7,242}, {208,7,242}, {208,7,242}, {208,7,242}, {208,7,242}, {0,0,0}, {0,0,0}, {208,7,242}, {208,7,242}, {208,7,242}, {0,0,0}, {0,0,0}, {125,255,247}, {208,7,242}, {208,7,242}, {208,7,242}, {208,7,242}, {0,0,0}, {0,0,0}, {208,7,242}, {208,7,242}, {208,7,242}, {14,250,255}, {14,250,255}, {0,0,0}, {125,255,247} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {204,232,247}, {204,232,247}, {204,232,247}, {0,0,0}, {233,248,247}, {204,232,247}, {233,248,247}, {233,248,247}, {233,248,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {233,248,247}, {233,248,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {233,248,247}, {233,248,247}, {233,248,247}, {233,248,247}, {0,0,0}, {125,255,247}, {233,248,247}, {233,248,247}, {233,248,247}, {233,248,247}, {233,248,247}, {0,0,0}, {233,248,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {204,232,247}, {233,248,247}, {233,248,247} },

    [6] = { {125,255,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {14,250,255}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {14,250,255}, {14,250,255}, {14,250,255}, {125,255,247}, {125,255,247}, {125,255,247}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,250,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {125,255,247}, {0,0,0}, {0,0,0} },

    [7] = { {125,255,247}, {0,0,0}, {0,0,0}, {14,250,255}, {14,250,255}, {14,250,255}, {0,0,0}, {0,0,0}, {208,7,242}, {208,7,242}, {208,7,242}, {0,0,0}, {0,0,0}, {14,250,255}, {208,7,242}, {208,7,242}, {208,7,242}, {14,250,255}, {0,0,0}, {14,250,255}, {208,7,242}, {208,7,242}, {208,7,242}, {14,250,255}, {125,255,247}, {0,0,253}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_RIGHT)));
    }
    break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}




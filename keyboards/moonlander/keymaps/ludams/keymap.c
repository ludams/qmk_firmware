#include QMK_KEYBOARD_H
#include "version.h"
#include "features/achordion.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Base
  [0] = LAYOUT_moonlander(
    _______,            _______,            _______,            _______,            _______,            _______,            _______,                           _______,            _______,            _______,            _______,            _______,            _______,            _______,        
    _______,            KC_Q,               KC_W,               KC_F,               KC_P,               KC_B,               _______,                           _______,            KC_J,               KC_L,               KC_U,               KC_Y,               KC_SCLN,            _______,        
    _______,            MT(MOD_LCTL, KC_A), MT(MOD_LALT, KC_R), MT(MOD_LGUI, KC_S), MT(MOD_LSFT, KC_T), KC_G,               _______,                           _______,            KC_M,               MT(MOD_RSFT, KC_N), MT(MOD_RGUI, KC_E), MT(MOD_RALT, KC_I), MT(MOD_RCTL, KC_O), _______,        
    _______,            KC_Z,               KC_X,               KC_C,               KC_D,               KC_V,                                                                      KC_K,               KC_H,               KC_COMMA,           KC_DOT,             KC_SLASH,           _______,        
    _______,            _______,            _______,            _______,            LT(3,KC_TAB),                           _______,                           _______,                                LT(6,KC_DELETE),    _______,            _______,            _______,            _______,        
                                                                                    LT(1,KC_ENTER),     LT(2,KC_ESCAPE),    _______,                           _______,            LT(5,KC_BSPC),      LT(4,KC_SPACE)
  ),
  // Nav
  [1] = LAYOUT_moonlander(
    _______,            _______,            _______,            _______,            _______,            _______,            _______,                           _______,            _______,            _______,            _______,            _______,            _______,            _______,        
    _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,                           _______,            XXXXXXX,            XXXXXXX,            KC_UP,              XXXXXXX,            XXXXXXX,            _______,        
    _______,            KC_LEFT_CTRL,       KC_LEFT_ALT,        KC_LEFT_GUI,        KC_LEFT_SHIFT,      XXXXXXX,            _______,                           _______,            XXXXXXX,            KC_LEFT,            KC_DOWN,            KC_RIGHT,           XXXXXXX,            _______,        
    _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,                                                                   XXXXXXX,            KC_HOME,            KC_PGDN,            KC_PAGE_UP,         KC_END,             _______,        
    _______,            _______,            _______,            _______,            _______,                                _______,                           _______,                                KC_DELETE,          _______,            _______,            _______,            _______,        
                                                                                    _______,            _______,            _______,                           _______,            KC_BSPC,            KC_SPACE
  ),
  // Mouse
  [2] = LAYOUT_moonlander(
    _______,            _______,            _______,            _______,            _______,            _______,            _______,                           _______,            _______,            _______,            _______,            _______,            _______,            _______,        
    _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,                           _______,            XXXXXXX,            XXXXXXX,            KC_MS_UP,           XXXXXXX,            XXXXXXX,            _______,        
    _______,            KC_LEFT_CTRL,       KC_LEFT_ALT,        KC_LEFT_GUI,        KC_LEFT_SHIFT,      XXXXXXX,            _______,                           _______,            XXXXXXX,            KC_MS_LEFT,         KC_MS_DOWN,         KC_MS_RIGHT,        XXXXXXX,            _______,        
    _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,                                                                   XXXXXXX,            KC_MS_WH_RIGHT,     KC_MS_WH_UP,        KC_MS_WH_DOWN,      KC_MS_WH_LEFT,      _______,        
    _______,            _______,            _______,            _______,            _______,                                _______,                           _______,                                KC_MS_BTN3,         _______,            _______,            _______,            _______,        
                                                                                    _______,            _______,            _______,                           _______,            KC_MS_BTN2,         KC_MS_BTN1
  ),
  // Media
  [3] = LAYOUT_moonlander(
    _______,            _______,            _______,            _______,            _______,            _______,            _______,                           _______,            _______,            _______,            _______,            _______,            _______,            _______,        
    _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            MOON_LED_LEVEL,     RGB_SLD,            _______,                           _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,        
    _______,            RGB_SAI,            RGB_HUI,            RGB_TOG,            RGB_VAI,            RGB_SPI,            _______,                           _______,            XXXXXXX,            KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,    KC_MEDIA_NEXT_TRACK,_______,        
    _______,            RGB_SAD,            RGB_HUD,            RGB_MODE_FORWARD,   RGB_VAD,            RGB_SPD,                                                                   XXXXXXX,            XXXXXXX,            KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP,   XXXXXXX,            _______,        
    _______,            _______,            _______,            _______,            _______,                                _______,                           _______,                                KC_AUDIO_MUTE,      _______,            _______,            _______,            _______,        
                                                                                    _______,            _______,            _______,                           _______,            KC_MEDIA_STOP,      KC_MEDIA_PLAY_PAUSE
  ),
  // Symbol
  [4] = LAYOUT_moonlander(
    QK_BOOT,            _______,            _______,            _______,            _______,            _______,            _______,                           _______,            _______,            _______,            _______,            _______,            _______,            _______,        
    _______,            XXXXXXX,            KC_LPRN,            KC_RPRN,            KC_BSLS,            XXXXXXX,            _______,                           _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,        
    _______,            KC_MINUS,           KC_LBRC,            KC_RBRC,            KC_EQUAL,           XXXXXXX,            _______,                           _______,            XXXXXXX,            KC_RIGHT_SHIFT,     KC_RIGHT_GUI,       KC_RIGHT_ALT,       KC_RIGHT_CTRL,      _______,        
    _______,            XXXXXXX,            XXXXXXX,            KC_GRAVE,           KC_QUOTE,           XXXXXXX,                                                                   XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,        
    _______,            _______,            _______,            _______,            _______,                                _______,                           _______,                                _______,            _______,            _______,            _______,            _______,        
                                                                                    _______,            _______,            _______,                           _______,            _______,            _______
  ),
  // Number
  [5] = LAYOUT_moonlander(
    _______,            _______,            _______,            _______,            _______,            _______,            _______,                           _______,            _______,            _______,            _______,            _______,            _______,            _______,        
    _______,            XXXXXXX,            KC_7,               KC_8,               KC_9,               XXXXXXX,            _______,                           _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,        
    _______,            XXXXXXX,            KC_4,               KC_5,               KC_6,               XXXXXXX,            _______,                           _______,            XXXXXXX,            KC_RIGHT_SHIFT,     KC_RIGHT_GUI,       KC_RIGHT_ALT,       KC_RIGHT_CTRL,      _______,        
    _______,            XXXXXXX,            KC_1,               KC_2,               KC_3,               XXXXXXX,                                                                   XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,        
    _______,            _______,            _______,            _______,            KC_0,                                   _______,                           _______,                                _______,            _______,            _______,            _______,            _______,        
                                                                                    KC_0,               _______,            _______,                           _______,            _______,            _______
  ),
  // Function
  [6] = LAYOUT_moonlander(
    _______,            _______,            _______,            _______,            _______,            _______,            _______,                           _______,            _______,            _______,            _______,            _______,            _______,            _______,        
    _______,            KC_F12,             KC_F7,              KC_F8,              KC_F9,              XXXXXXX,            _______,                           _______,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,        
    _______,            KC_F11,             KC_F4,              KC_F5,              KC_F6,              XXXXXXX,            _______,                           _______,            XXXXXXX,            KC_RIGHT_SHIFT,     KC_RIGHT_GUI,       KC_RIGHT_ALT,       KC_RIGHT_CTRL,      _______,        
    _______,            KC_F10,             KC_F1,              KC_F2,              KC_F3,              XXXXXXX,                                                                   XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            _______,        
    _______,            _______,            _______,            _______,            _______,                                _______,                           _______,                                _______,            _______,            _______,            _______,            _______,        
                                                                                    _______,            _______,            _______,                           _______,            _______,            _______
  ),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_T):
            return g_tapping_term -40;
        case MT(MOD_RSFT, KC_N):
            return g_tapping_term -40;
        default:
            return g_tapping_term;
    }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


void matrix_scan_user(void) {
  achordion_task();
}


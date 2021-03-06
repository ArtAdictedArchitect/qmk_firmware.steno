
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// .................................................................. Short Cuts

  // .-----------------------------------------------------------------------------------.
  // |      |      |XCopy |XPaste|      |      |      |      |      |      |      |      |
  // |--------------------------------------------------------------+------+------+------|
  // | Undo |  Cut | Copy | Paste|      |      |      |      | PRIV |  PUB |      |      |
  // |-----------------------------------------------------------------------------------|
  // |      |      |  Nak |  Eot |      |      |      |      |      |      |      |Plover|
  // |-----------------------------------------------------------------------------------|
  // |                           |      |      |      |  f() |                           |
  // |      |      |      |      |      |      |  f() |      |      |      |      |      |
  // '-----------------------------------------------------------------------------------'

  [_EDIT] = {
    {_______, _______, XCOPY,   XPASTE,  _______, _______, _______, _______, _______, _______, _______, _______},
    {UNDO,    CUT,     COPY,    PASTE,   _______, _______, _______, _______, TD_PRIV, TD_SEND, _______, _______},
    {_______, _______, NAK,     EOT,     _______, _______, _______, _______, _______, _______, _______, PLOVER },
#ifdef SPLITOGRAPHY
    {_______, _______, _______, _______, _______, _______, ___x___, ___fn__, _______, _______, _______, _______}, // _x_ capslock
#else
    {_______, _______, _______, _______, _______, _______, ___fn__, ___x___, ___fn__, _______, _______, _______},
#endif
  },

// ................................................................ Adjust Layer

  // ,-----------------------------------------------------------------------------------.
  // |Plover|      |      |      |      |      |      |      |      |      |      |      |
  // |------+------+------+------+------+-------------+------+------+------+------+------|
  // |Aud on|      |      |      |      |      |      |      |      |      |      |      |
  // |------+------+------+------+------+------|------+------+------+------+------+------|
  // | Reset|      |      |      |      |      |      |      |      |      |      |      |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // |      |      |      |  f() |      |      |      |      |  f() |      |      |      |
  // `-----------------------------------------------------------------------------------'

#ifdef PLANCK
  [_ADJUST] = {
    {PLOVER,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
    {AU_ON,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
    {RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
    {_______, _______, _______, ___fn__, _______, _______, _______, _______, ___fn__, _______, _______, _______},
  },
#endif

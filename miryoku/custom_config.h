// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN

//--- modified from miryoku/mapping/42/corne.h

/ {
  behaviors {
    // Note: quick-release fixes the issue of sticky shift producing multiple upper case letters (see https://github.com/zmkfirmware/zmk/issues/903#issuecomment-909209198).
    skq: sticky_key_quick_release {
      compatible = "zmk,behavior-sticky-key";
      label = "STICKY_KEY_QUICK_RELEASE";
      #binding-cells = <1>;
      bindings = <&kp>;
      release-after-ms = <1500>;
      quick-release;
    };
  };
};


#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp LBKT        K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RBKT \
&kp TAB         K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &key_repeat \
&mt LSHFT LPAR  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &mt RSHFT RPAR \
                          K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

//--- modified from miryoku_layer_alternatives.h

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hms LSHFT T,      &kp D,             &kp H,             &hms LSHFT N,      &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&lt U_NUM Z,       &lt U_FUN X,       &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &lt U_FUN DEL,     &sl U_NUM,         &skq LSHFT,        &lt U_SYM SPC,     &lt U_NAV SPC,     &lt U_MEDIA ESC,   U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hms LSHFT F,      &kp G,             &kp H,             &hms LSHFT J,      &hm LCTRL K,       &hm LALT L,        &hm LGUI SQT,      \
&lt U_NUM Z,       &lt U_FUN X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,\
U_NP,              U_NP,              &lt U_FUN DEL,     &sl U_NUM,         &skq LSHFT,        &lt U_SYM SPC,     &lt U_NAV SPC,     &lt U_MEDIA ESC,   U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp D,             &kp H,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &lt U_FUN DEL,     &sl U_NUM,         &skq LSHFT,        &lt U_SYM SPC,     &lt U_NAV SPC,     &lt U_MEDIA ESC,   U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,     &kp K_APP,              &to U_BASE,        &to U_EXTRA,       U_NA,              &kp DEL,               \
&kp COLON,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          &mo U_MOUSE,       &kp BSPC,          &bspc2_macro,      &bspc3_macro,      &kp RET,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          &kp UNDER,         &kp MINUS,         &kp LESS_THAN,     &kp GREATER_THAN,  &kp QUESTION,          \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

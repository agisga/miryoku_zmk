// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN

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

    // currently not used
    hms: homerow_shift {
      compatible = "zmk,behavior-hold-tap";
      label = "HOMEROW_SHIFT";
      #binding-cells = <2>;
      tapping-term-ms = <190>;
      flavor = "tap-preferred";
      quick-tap-ms = <0>;
      bindings = <&kp>, <&kp>;
    };

  };
};

//--- modified from miryoku/mapping/42/corne.h

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC    K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSPC \
&kp TAB    K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RET \
&skq LSHFT K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &skq RSHFT \
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

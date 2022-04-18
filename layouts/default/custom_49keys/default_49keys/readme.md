# minikeeb

![minikeeb](imgur.com image replace me!)

minikeeb is a mini keyboard project based on [QMK](https://github.com/qmk/qmk_firmware) and [mini (Pi)QWERTY USB keyboard II](https://hackaday.io/project/175405-mini-piqwerty-usb-keyboard-ii) by [bobricius](https://github.com/bobricius).

* Keyboard Maintainer: [minikeeb](https://github.com/Pooky-s/minikeeb)
* Hardware Supported: [minikeeb](https://github.com/Pooky-s/minikeeb)
* Hardware Availability: [minikeeb](https://github.com/Pooky-s/minikeeb)

Make example for this keyboard (after setting up your build environment):

    make minikeeb:default

Flashing example for this keyboard:

    make minikeeb:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

This actually isn't true but will stay here as a note for future possibilities. 
Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available

```
Layer 1 :
┌───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐ ┌───┐
|Esc| | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | |BSP|
├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─┴─┬─┘
|CTL| | Q | W | E | R | T | Y | U | I | O | P |***|
├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼───┼─┬─┴─┬─┘ ┌───┐
|FNC| | A | S | D | F | G | H | J | K | L | |ENT|   | ↑ |
├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼─┬─┴─┼───┼───┼───┼───┐
|SFT| | Z | X | C | V | B | N | M | . | |SPC|   | ← | ↓ | → |
└───┘ └───┴───┴───┴───┴───┴───┴───┴───┘ └───┘   └───┴───┴───┘
```

```
Layer 2 :
┌───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐ ┌───┐
|TAB| | ! | @ | # | $ | % | ^ | & | * | ( | ) | |DEL|
├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼─┴─┬─┘
|ALT| | - | = | + | [ | ] | { | } | < | > | _ |***|
├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼───┼─┬─┴─┬─┘ ┌───┐
|SYM| | ' | ` | \ | / | | | " | ; | : | ? | |ENT|   |PGU|
├───┤ ├───┼───┼───┼───┼───┼───┼───┼───┼─┬─┴─┼───┼───┼───┼───┐
|SFT| |SFT| ⏼ |⏸ | ▶ | ■ | ⏮ |⏭ | , | |SPC|   |HOM|PGD|END|
└───┘ └───┴───┴───┴───┴───┴───┴───┴───┘ └───┘   └───┴───┴───┘
```
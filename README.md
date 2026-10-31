# Audio Control & Macro Pad

A custom HID (Human Interface Device) macro pad built with Arduino. This project features volume control, system shortcuts, and automated git workflows, housed in a custom 3D-printed enclosure.

## 🚀 Features

The macro pad consists of 4 physical buttons mapped to the following functions:

- **Button 1 (Pin 16):** Terminal Toggle (`Ctrl` + `Shift` + `` ` ``)
- **Button 2 (Pin 3):** System Mute/Unmute
- **Button 3 (Pin 5):** Show/Hide Desktop (`Win` + `D`)
- **Button 4 (Pin 10):** "Panic" Git Push - Automatically runs:
  - `git add .`
  - `git commit -m 'TEMPORARY COMMIT'`
  - `git push`

## 🛠️ Hardware Requirements

- **Microcontroller:** Arduino Pro Micro (or any ATMega32U4 based board for HID support)
- **Switches:** 4x Mechanical switches (e.g., Cherry MX or clones)
- **Enclosure:** 
  - `keycase.stl`: The main body of the pad.
  - `keyplate.stl`: The mounting plate for the switches.

## 💻 Software Setup

1. **Libraries:** You must install the [HID-Project](https://github.com/NicoHood/HID) library in the Arduino IDE.
   - Go to `Sketch` -> `Include Library` -> `Manage Libraries...`
   - Search for "HID-Project" and install it.
2. **Board:** Select **Arduino Leonardo** or **Arduino Micro** in the IDE.
3. **Upload:** Open `code.ino` and upload it to your board.

## 🔌 Wiring Diagram

| Component | Pin |
|-----------|-----|
| Button 1  | 16  |
| Button 2  | 3   |
| Button 3  | 5   |
| Button 4  | 10  |
| Common    | GND |

*Note: The code uses `INPUT_PULLUP`, so switches should be wired between the digital pin and Ground.*
a
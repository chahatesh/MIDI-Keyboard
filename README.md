# MIDI Keyboard

This is a custom-built MIDI keyboard that I designed using a PCB and electronic components. The goal of this project was to create a compact, customizable MIDI controller with different types of inputs, including capacitive touch keys, buttons, sliders, and rotary encoders.

The keyboard is designed to be assembled by soldering components onto a custom PCB and uploading the firmware to the microcontroller.

All the PCB design files are included in this repository so you can build your own!

## Images

![MIDI Keyboard PCB](Images/Screenshot%202026-10-21%20171931.png)

![MIDI Keyboard Layout](Images/Screenshot%202026-10-21%20173026.png)

## Features

The MIDI keyboard includes several different controls:

- **Capacitive Touch Keys** – Touch-sensitive keys that can be used for musical notes or other inputs.
- **Push Buttons** – Additional buttons that can be programmed for different functions.
- **Sliders** – Adjustable controls for changing values such as volume or effects.
- **Rotary Encoders** – Rotating controls that can be used to adjust settings.
- **RGB LEDs** – SK6812MINI-E LEDs for visual feedback.
- **Custom PCB** – A board designed specifically for this project.

The firmware can be modified to change how the controls work, making the keyboard customizable for different applications.

## How to Build

### 1. Order the PCB

Start by downloading the PCB manufacturing files from this repository.

You can order the board from a PCB manufacturer such as [JLCPCB](https://jlcpcb.com/) or another PCB fabrication service.

Make sure to use the correct PCB files and check the board specifications before ordering.

### 2. Get the Components

Once you have ordered the PCB, you'll need to get all the electronic components required for the build.

These include the components shown in the PCB design, such as:

- Microcontroller and supporting components
- Buttons and switches
- Capacitive touch components
- Sliders
- Rotary encoders
- SK6812MINI-E LEDs
- Resistors, capacitors, and other components

Check the PCB design and bill of materials (BOM), if provided, for the exact parts and quantities.

### 3. Solder the Components

Once your PCB and components arrive, you can start assembling the keyboard.

Follow the PCB layout to determine where each component belongs.

I recommend starting with the smaller components before moving on to larger parts such as buttons, sliders, and rotary encoders.

Make sure that:

- Components are placed in the correct positions.
- Polarized components are facing the correct direction.
- Solder joints are clean and properly connected.
- There are no accidental solder bridges between pins.

Before connecting power, double-check the board for any mistakes.

### 4. Upload the Code

After soldering everything, connect the keyboard to your computer using the appropriate USB cable or programming connection.

Open the firmware in its supported development environment, select the correct board and port, and upload the code.

The firmware handles the keyboard's inputs and outputs, including its buttons, touch keys, sliders, encoders, and LEDs.

You can also modify the code to customize how the keyboard responds to different inputs.

### 5. Test Everything

After uploading the code, test the different parts of the keyboard.

Check that the buttons, touch keys, sliders, rotary encoders, and LEDs are responding correctly.

If something isn't working, check the solder joints, wiring, component orientation, and firmware settings.

If your firmware supports MIDI output, you can also connect the keyboard to compatible music software and test its MIDI controls.

### 6. Have Fun!

Once everything is working, your custom keyboard is ready!

You can experiment with different firmware, customize the controls, and use it for your own projects.

## CAD Design

The CAD model for this project is available on Onshape.

**[View the Onshape CAD Model](https://cad.onshape.com/documents/587d2ace9f77041b4f50040f/w/845a50b27325c4e045b03186/e/2a77872a340160e4eacdba4f)**

You can use this model to view the mechanical design, check dimensions, and understand how the parts fit together.

## Project Files

This repository contains the files needed to understand and reproduce the project.

- `Instrument/` – PCB design files, including the electronic design.
- `Images/` – Screenshots and images of the project.
- 'Code/' – Code used to control the keyboard, where included.

## Customization

One of the main reasons I made this keyboard was to have something that could be customized.

Depending on the firmware, you can experiment with different button functions, MIDI note mappings, slider controls, encoder behavior, and LED effects.

You can also modify the PCB design or CAD model to create your own version.


## About the Project

I created this project to learn more about PCB design, electronics, soldering, and programming.

It combines hardware and software into one device and provides a way to experiment with different input methods.

Feel free to explore the files, modify the design, and build your own version!

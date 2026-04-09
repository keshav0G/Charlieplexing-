# Charlieplexing AVR

Efficient LED control using Charlieplexing on AVR microcontrollers.

This project demonstrates how to drive multiple LEDs using a minimal number of GPIO pins through Charlieplexing. It targets AVR-based MCUs (e.g., ATmega328P) and focuses on low-level control, timing, and pin-state manipulation.

The implementation avoids external drivers and relies on direct register-level programming to maximize performance and control.

---

## Description

Charlieplexing is a technique that allows controlling **N × (N - 1)** LEDs using only **N GPIO pins** by leveraging tri-state logic (HIGH, LOW, INPUT).

This repository provides a working implementation on AVR microcontrollers, showcasing:

* Efficient multiplexing logic
* Direct port manipulation
* Deterministic timing control
* Minimal hardware footprint

The code is designed to be simple, readable, and adaptable for embedded projects where GPIO resources are limited.

---

## Techniques Used

### 1. Direct Register Manipulation

Instead of using Arduino abstractions, the project directly accesses AVR registers like `DDRx`, `PORTx`, and `PINx`.

* Reduces overhead and improves execution speed
* Gives full control over pin states and transitions


### 2. Tri-state GPIO Control

Charlieplexing relies on dynamically switching pins between:

* OUTPUT HIGH
* OUTPUT LOW
* INPUT (High-Z)

This enables selective current paths through LEDs.

---


### 3. Bitwise Operations

Efficient bit masking and shifting are used to control individual pins.

* Minimizes CPU cycles
* Keeps code deterministic

---

### 4. Lookup-Based LED Addressing

Instead of computing pin states dynamically, LED mappings are predefined.

* Faster execution
* Easier debugging
* Cleaner logic separation

---

## Notable Technologies & Concepts

* **Bare-metal Programming**
  No RTOS or framework; full control over hardware behavior

* **Hardware-Level Timing Control**
  Delay loops or timer-based refresh; critical for stable multiplexing

* **Electrical Characteristics Awareness**
  Current limiting, pin sourcing/sinking constraints, and avoiding ghosting

---




## Why This Matters

Charlieplexing is useful when:

* GPIO pins are limited
* You want to avoid external LED drivers
* You need fine-grained control over LED behavior

This repo is a practical reference for implementing it efficiently on real hardware.

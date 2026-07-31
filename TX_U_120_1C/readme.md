TX_Ultimate_120

⚠️ Under Investigation

This repository documents the reverse engineering of the Sonoff TX Ultimate 120 and the development of an ESPHome external component.

# TX Ultimate 120 - Debug V1

## Overview

This repository contains the development version of an ESPHome external component for the Sonoff TX Ultimate 120 series.

The purpose of **Debug V1** is **only** to verify that the component works exactly like the current implementation before any modifications are made.

No functional changes have been introduced.

## Initial Source

The initial implementation used in **Debug V1** is based on the work of:

**Daniel Scheidler (@danielscheidler)**

Original repository:

https://github.com/SmartHome-yourself/sonoff-tx-ultimate-for-esphome

The original files were imported only as the starting point for testing and validation.

## Debug V1 Goals

- Verify UART communication
- Verify touch events
- Verify ESPHome integration
- Confirm identical behaviour with the existing implementation

## Planned Future Work

After Debug V1 is verified, the component will gradually evolve into an independent implementation including:

- UART protocol improvements
- Support for the TX Ultimate 120 hardware
- Improved touch parser
- Additional hardware features
- Code cleanup and refactoring

Each change will be introduced in separate commits to keep the project history clear.

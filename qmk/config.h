#pragma once

/* USB Connection */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x1234
#define USB_VID 0xFEED
#define USB_PID 0x1234
#define DEVICE_VER 0x0100
#define MANUFACTURER Reid Quigley
#define PRODUCT Hackpad

/* Direct Pin config */
/* #remember  Remember to change GP0, GP1, and GP2 to the actual pins */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3
#define DIODE_DIRECTION COL2ROW

#define USB_POLLING_INTERFACE_MS 1
/* No diode direction */
#define DEBOUNCE 5

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

// Buttons
#define BTN_ALARM GPIO(GPIO_PORTA, 2)
#define WATCH_BTN_ALARM_EIC_CHANNEL 2
#define BTN_LIGHT GPIO(GPIO_PORTA, 25)
#define WATCH_BTN_LIGHT_EIC_CHANNEL 13
#define BTN_MODE GPIO(GPIO_PORTA, 24)
#define WATCH_BTN_MODE_EIC_CHANNEL 12

// Buzzer
#define BUZZER GPIO(GPIO_PORTA, 27)
#define WATCH_BUZZER_TCC_PINMUX PINMUX_PA27F_TCC0_WO5
#define WATCH_BUZZER_TCC_CHANNEL 1

// LEDs
#define WATCH_INVERT_LED_POLARITY

#define LEFT_LED_1 GPIO(GPIO_PORTA, 21)
#define WATCH_LEFT_LED_1_TCC_CHANNEL 3
#define WATCH_LEFT_LED_1_TCC_PINMUX PINMUX_PA21F_TCC0_WO7

#define LEFT_LED_2 GPIO(GPIO_PORTA, 22)
#define WATCH_LEFT_LED_2_TCC_CHANNEL 0
#define WATCH_LEFT_LED_2_TCC_PINMUX PINMUX_PA22F_TCC0_WO4

#define RIGHT_LED_1 GPIO(GPIO_PORTB, 23)
#define WATCH_RIGHT_LED_1_TCC_CHANNEL 3
#define WATCH_RIGHT_LED_1_TCC_PINMUX PINMUX_PB23F_TCC0_WO3

#define RIGHT_LED_2 GPIO(GPIO_PORTB, 30)
#define WATCH_RIGHT_LED_2_TCC_CHANNEL 0
#define WATCH_RIGHT_LED_2_TCC_PINMUX PINMUX_PB30E_TCC0_WO0


// Segment LCD
#define SLCD0 GPIO(GPIO_PORTB, 6)
#define SLCD1 GPIO(GPIO_PORTB, 7)
#define SLCD2 GPIO(GPIO_PORTB, 8)
#define SLCD3 GPIO(GPIO_PORTB, 9)
#define SLCD4 GPIO(GPIO_PORTA, 5)
#define SLCD5 GPIO(GPIO_PORTA, 6)
#define SLCD6 GPIO(GPIO_PORTA, 8)
#define SLCD7 GPIO(GPIO_PORTA, 9)
#define SLCD8 GPIO(GPIO_PORTA, 10)
#define SLCD9 GPIO(GPIO_PORTA, 11)
#define SLCD10 GPIO(GPIO_PORTB, 11)
#define SLCD11 GPIO(GPIO_PORTB, 12)
#define SLCD12 GPIO(GPIO_PORTB, 13)
#define SLCD13 GPIO(GPIO_PORTB, 14)
#define SLCD14 GPIO(GPIO_PORTB, 15)
#define SLCD15 GPIO(GPIO_PORTA, 14)
#define SLCD16 GPIO(GPIO_PORTA, 15)
#define SLCD17 GPIO(GPIO_PORTA, 16)
#define SLCD18 GPIO(GPIO_PORTA, 17)
#define SLCD19 GPIO(GPIO_PORTA, 18)
#define SLCD20 GPIO(GPIO_PORTA, 19)
#define SLCD21 GPIO(GPIO_PORTB, 16)
#define SLCD22 GPIO(GPIO_PORTB, 17)
#define SLCD23 GPIO(GPIO_PORTA, 20)
#define SLCD24 GPIO(GPIO_PORTA, 21)
#define SLCD25 GPIO(GPIO_PORTA, 22)
#define SLCD26 GPIO(GPIO_PORTA, 23)
// This board uses a slightly different pin mapping from the standard watch, and it's not enough to
// just declare the pins. We also have to set the LCD Pin Enable register with the SLCD pins we're
// using. These numbers are not port/pin numbers, but the "SLCD/LP[x]" numbers in the pinmux table.
// If not defined in pins.h, the LCD driver will fall back to the pin mapping in hpl_slcd_config.h.
// LPENL is for pins SLCD/LP[0..31].
#define CONF_SLCD_LPENL (\
        (uint32_t)1 <<  0 | \
        (uint32_t)1 <<  1 | \
        (uint32_t)1 <<  2 | \
        (uint32_t)1 <<  3 | \
        (uint32_t)1 <<  5 | \
        (uint32_t)1 <<  6 | \
        (uint32_t)1 << 11 | \
        (uint32_t)1 << 12 | \
        (uint32_t)1 << 13 | \
        (uint32_t)1 << 14 | \
        (uint32_t)1 << 21 | \
        (uint32_t)1 << 22 | \
        (uint32_t)1 << 23 | \
        (uint32_t)1 << 24 | \
        (uint32_t)1 << 25 | \
        (uint32_t)1 << 30 | \
        (uint32_t)1 << 31 | 0)
// LPENH is for pins SLCD/LP[32..51], where bit 0 represents pin 32.
#define CONF_SLCD_LPENH (\
        (uint32_t)1 << (32 - 32) | \
        (uint32_t)1 << (33 - 32) | \
        (uint32_t)1 << (34 - 32) | \
        (uint32_t)1 << (35 - 32) | \
        (uint32_t)1 << (42 - 32) | \
        (uint32_t)1 << (43 - 32) | \
        (uint32_t)1 << (48 - 32) | \
        (uint32_t)1 << (49 - 32) | \
        (uint32_t)1 << (50 - 32) | \
        (uint32_t)1 << (51 - 32) | 0)


// 9-pin connector
#define A0 GPIO(GPIO_PORTB, 4)
#define WATCH_A0_EIC_CHANNEL 4
#define A1 GPIO(GPIO_PORTB, 1)
#define WATCH_A1_EIC_CHANNEL 1
#define A2 GPIO(GPIO_PORTB, 2)
#define WATCH_A2_EIC_CHANNEL 2
#define A3 GPIO(GPIO_PORTB, 3)
#define WATCH_A3_EIC_CHANNEL 3
#define A4 GPIO(GPIO_PORTB, 0)
#define WATCH_A4_EIC_CHANNEL 0
#define SDA GPIO(GPIO_PORTB, 30)
#define SCL GPIO(GPIO_PORTB, 31)

// aliases for as A3/A4; these were mentioned as D0/D1 in early documentation.
#define D0 GPIO(GPIO_PORTB, 3)
#define D1 GPIO(GPIO_PORTB, 0)

#endif // PINS_H_INCLUDED

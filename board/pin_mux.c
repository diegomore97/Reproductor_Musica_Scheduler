/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: MKL25Z128xxx4
package_id: MKL25Z128VLK4
mcu_data: ksdk2_0
processor_version: 7.0.1
board: FRDM-KL25Z
pin_labels:
- {pin_num: '1', pin_signal: PTE0/UART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA, label: 'J2[18]/D14', identifier: UART1_TX}
- {pin_num: '2', pin_signal: PTE1/SPI1_MOSI/UART1_RX/SPI1_MISO/I2C1_SCL, label: 'J2[20]/D15', identifier: UART1_RX}
- {pin_num: '3', pin_signal: PTE2/SPI1_SCK, label: 'J9[9]', identifier: CANCION_B0}
- {pin_num: '4', pin_signal: PTE3/SPI1_MISO/SPI1_MOSI, label: 'J9[11]', identifier: CANCION_B1}
- {pin_num: '5', pin_signal: PTE4/SPI1_PCS0, label: 'J9[13]', identifier: LED2}
- {pin_num: '6', pin_signal: PTE5, label: 'J9[15]', identifier: LED1}
- {pin_num: '13', pin_signal: ADC0_DP0/ADC0_SE0/PTE20/TPM1_CH0/UART0_TX, label: 'J10[1]', identifier: POT}
- {pin_num: '14', pin_signal: ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/UART0_RX, label: 'J10[3]', identifier: BOTON_2}
- {pin_num: '15', pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX, label: 'J10[5]', identifier: BOTON_3}
- {pin_num: '16', pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX, label: 'J10[7]', identifier: BOTON_1}
- {pin_num: '21', pin_signal: CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0, label: 'J10[9]', identifier: LED_PWM}
- {pin_num: '22', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1, label: 'J10[11]', identifier: LED0}
- {pin_num: '36', pin_signal: PTA16/SPI0_MOSI/SPI0_MISO, label: 'J2[9]'}
- {pin_num: '37', pin_signal: PTA17/SPI0_MISO/SPI0_MOSI, label: 'J2[11]'}
- {pin_num: '43', pin_signal: ADC0_SE8/TSI0_CH0/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0, label: 'J10[2]/A0'}
- {pin_num: '44', pin_signal: ADC0_SE9/TSI0_CH6/PTB1/I2C0_SDA/TPM1_CH1, label: 'J10[4]/A1'}
- {pin_num: '45', pin_signal: ADC0_SE12/TSI0_CH7/PTB2/I2C0_SCL/TPM2_CH0, label: 'J10[6]/A2'}
- {pin_num: '46', pin_signal: ADC0_SE13/TSI0_CH8/PTB3/I2C0_SDA/TPM2_CH1, label: 'J10[8]/A3'}
- {pin_num: '54', pin_signal: TSI0_CH12/PTB19/TPM2_CH1, label: 'D3[4]/LEDRGB_GREEN', identifier: LED_GREEN;PWM}
- {pin_num: '71', pin_signal: PTC16, label: 'J2[5]'}
- {pin_num: '72', pin_signal: PTC17, label: 'J2[7]'}
- {pin_num: '73', pin_signal: PTD0/SPI0_PCS0/TPM0_CH0, label: 'J2[6]/D10'}
- {pin_num: '74', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1, label: 'J2[12]/D3[3]/D13/LEDRGB_BLUE'}
- {pin_num: '75', pin_signal: PTD2/SPI0_MOSI/UART2_RX/TPM0_CH2/SPI0_MISO, label: 'J2[8]/D11'}
- {pin_num: '76', pin_signal: PTD3/SPI0_MISO/UART2_TX/TPM0_CH3/SPI0_MOSI, label: 'J2[10]/D12'}
- {pin_num: '77', pin_signal: PTD4/LLWU_P14/SPI1_PCS0/UART2_RX/TPM0_CH4, label: 'J1[6]/D2'}
- {pin_num: '78', pin_signal: ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5, label: 'J2[4]/D9'}
- {pin_num: '80', pin_signal: PTD7/SPI1_MISO/UART0_TX/SPI1_MOSI, label: 'J2[19]'}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '28', peripheral: UART0, signal: TX, pin_signal: TSI0_CH3/PTA2/UART0_TX/TPM2_CH1}
  - {pin_num: '27', peripheral: UART0, signal: RX, pin_signal: TSI0_CH2/PTA1/UART0_RX/TPM2_CH0}
  - {pin_num: '13', peripheral: ADC0, signal: 'DP, 0', pin_signal: ADC0_DP0/ADC0_SE0/PTE20/TPM1_CH0/UART0_TX, pull_select: no_init}
  - {pin_num: '15', peripheral: GPIOE, signal: 'GPIO, 22', pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX, direction: INPUT, gpio_interrupt: no_init, pull_enable: enable}
  - {pin_num: '16', peripheral: GPIOE, signal: 'GPIO, 23', pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX, direction: INPUT, gpio_interrupt: no_init, pull_enable: enable}
  - {pin_num: '14', peripheral: GPIOE, signal: 'GPIO, 21', pin_signal: ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/UART0_RX, direction: INPUT, gpio_interrupt: no_init, pull_enable: enable}
  - {pin_num: '21', peripheral: TPM0, signal: 'CH, 2', pin_signal: CMP0_IN5/ADC0_SE4b/PTE29/TPM0_CH2/TPM_CLKIN0, direction: OUTPUT, pull_select: no_init}
  - {pin_num: '6', peripheral: GPIOE, signal: 'GPIO, 5', pin_signal: PTE5, direction: OUTPUT, pull_select: no_init}
  - {pin_num: '5', peripheral: GPIOE, signal: 'GPIO, 4', pin_signal: PTE4/SPI1_PCS0, direction: OUTPUT, pull_select: no_init}
  - {pin_num: '3', peripheral: GPIOE, signal: 'GPIO, 2', pin_signal: PTE2/SPI1_SCK, direction: OUTPUT, pull_select: no_init}
  - {pin_num: '4', peripheral: GPIOE, signal: 'GPIO, 3', pin_signal: PTE3/SPI1_MISO/SPI1_MOSI, direction: OUTPUT, pull_select: no_init}
  - {pin_num: '22', peripheral: GPIOE, signal: 'GPIO, 30', pin_signal: DAC0_OUT/ADC0_SE23/CMP0_IN4/PTE30/TPM0_CH3/TPM_CLKIN1, direction: OUTPUT, pull_select: no_init}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port E Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    gpio_pin_config_t CANCION_B0_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE2 (pin 3)  */
    GPIO_PinInit(BOARD_INITPINS_CANCION_B0_GPIO, BOARD_INITPINS_CANCION_B0_PIN, &CANCION_B0_config);

    gpio_pin_config_t CANCION_B1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE3 (pin 4)  */
    GPIO_PinInit(BOARD_INITPINS_CANCION_B1_GPIO, BOARD_INITPINS_CANCION_B1_PIN, &CANCION_B1_config);

    gpio_pin_config_t LED2_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE4 (pin 5)  */
    GPIO_PinInit(BOARD_INITPINS_LED2_GPIO, BOARD_INITPINS_LED2_PIN, &LED2_config);

    gpio_pin_config_t LED1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE5 (pin 6)  */
    GPIO_PinInit(BOARD_INITPINS_LED1_GPIO, BOARD_INITPINS_LED1_PIN, &LED1_config);

    gpio_pin_config_t BOTON_2_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE21 (pin 14)  */
    GPIO_PinInit(BOARD_INITPINS_BOTON_2_GPIO, BOARD_INITPINS_BOTON_2_PIN, &BOTON_2_config);

    gpio_pin_config_t BOTON_3_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE22 (pin 15)  */
    GPIO_PinInit(BOARD_INITPINS_BOTON_3_GPIO, BOARD_INITPINS_BOTON_3_PIN, &BOTON_3_config);

    gpio_pin_config_t BOTON_1_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE23 (pin 16)  */
    GPIO_PinInit(BOARD_INITPINS_BOTON_1_GPIO, BOARD_INITPINS_BOTON_1_PIN, &BOTON_1_config);

    gpio_pin_config_t LED0_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE30 (pin 22)  */
    GPIO_PinInit(BOARD_INITPINS_LED0_GPIO, BOARD_INITPINS_LED0_PIN, &LED0_config);

    /* PORTA1 (pin 27) is configured as UART0_RX */
    PORT_SetPinMux(BOARD_INITPINS_DEBUG_UART_RX_PORT, BOARD_INITPINS_DEBUG_UART_RX_PIN, kPORT_MuxAlt2);

    /* PORTA2 (pin 28) is configured as UART0_TX */
    PORT_SetPinMux(BOARD_INITPINS_DEBUG_UART_TX_PORT, BOARD_INITPINS_DEBUG_UART_TX_PIN, kPORT_MuxAlt2);

    /* PORTE2 (pin 3) is configured as PTE2 */
    PORT_SetPinMux(BOARD_INITPINS_CANCION_B0_PORT, BOARD_INITPINS_CANCION_B0_PIN, kPORT_MuxAsGpio);

    /* PORTE20 (pin 13) is configured as ADC0_DP0 */
    PORT_SetPinMux(BOARD_INITPINS_POT_PORT, BOARD_INITPINS_POT_PIN, kPORT_PinDisabledOrAnalog);

    const port_pin_config_t BOTON_2 = {/* Internal pull-up resistor is enabled */
                                       kPORT_PullUp,
                                       /* Slow slew rate is configured */
                                       kPORT_SlowSlewRate,
                                       /* Passive filter is disabled */
                                       kPORT_PassiveFilterDisable,
                                       /* Low drive strength is configured */
                                       kPORT_LowDriveStrength,
                                       /* Pin is configured as PTE21 */
                                       kPORT_MuxAsGpio};
    /* PORTE21 (pin 14) is configured as PTE21 */
    PORT_SetPinConfig(BOARD_INITPINS_BOTON_2_PORT, BOARD_INITPINS_BOTON_2_PIN, &BOTON_2);

    const port_pin_config_t BOTON_3 = {/* Internal pull-up resistor is enabled */
                                       kPORT_PullUp,
                                       /* Slow slew rate is configured */
                                       kPORT_SlowSlewRate,
                                       /* Passive filter is disabled */
                                       kPORT_PassiveFilterDisable,
                                       /* Low drive strength is configured */
                                       kPORT_LowDriveStrength,
                                       /* Pin is configured as PTE22 */
                                       kPORT_MuxAsGpio};
    /* PORTE22 (pin 15) is configured as PTE22 */
    PORT_SetPinConfig(BOARD_INITPINS_BOTON_3_PORT, BOARD_INITPINS_BOTON_3_PIN, &BOTON_3);

    const port_pin_config_t BOTON_1 = {/* Internal pull-up resistor is enabled */
                                       kPORT_PullUp,
                                       /* Slow slew rate is configured */
                                       kPORT_SlowSlewRate,
                                       /* Passive filter is disabled */
                                       kPORT_PassiveFilterDisable,
                                       /* Low drive strength is configured */
                                       kPORT_LowDriveStrength,
                                       /* Pin is configured as PTE23 */
                                       kPORT_MuxAsGpio};
    /* PORTE23 (pin 16) is configured as PTE23 */
    PORT_SetPinConfig(BOARD_INITPINS_BOTON_1_PORT, BOARD_INITPINS_BOTON_1_PIN, &BOTON_1);

    /* PORTE29 (pin 21) is configured as TPM0_CH2 */
    PORT_SetPinMux(BOARD_INITPINS_LED_PWM_PORT, BOARD_INITPINS_LED_PWM_PIN, kPORT_MuxAlt3);

    /* PORTE3 (pin 4) is configured as PTE3 */
    PORT_SetPinMux(BOARD_INITPINS_CANCION_B1_PORT, BOARD_INITPINS_CANCION_B1_PIN, kPORT_MuxAsGpio);

    /* PORTE30 (pin 22) is configured as PTE30 */
    PORT_SetPinMux(BOARD_INITPINS_LED0_PORT, BOARD_INITPINS_LED0_PIN, kPORT_MuxAsGpio);

    /* PORTE4 (pin 5) is configured as PTE4 */
    PORT_SetPinMux(BOARD_INITPINS_LED2_PORT, BOARD_INITPINS_LED2_PIN, kPORT_MuxAsGpio);

    /* PORTE5 (pin 6) is configured as PTE5 */
    PORT_SetPinMux(BOARD_INITPINS_LED1_PORT, BOARD_INITPINS_LED1_PIN, kPORT_MuxAsGpio);

    SIM->SOPT5 = ((SIM->SOPT5 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT5_UART0TXSRC_MASK | SIM_SOPT5_UART0RXSRC_MASK)))

                  /* UART0 transmit data source select: UART0_TX pin. */
                  | SIM_SOPT5_UART0TXSRC(SOPT5_UART0TXSRC_UART_TX)

                  /* UART0 receive data source select: UART0_RX pin. */
                  | SIM_SOPT5_UART0RXSRC(SOPT5_UART0RXSRC_UART_RX));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

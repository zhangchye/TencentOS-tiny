/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_B0_13 (coord L14), UART1_RXD */
/* Routed pin properties */
#define BOARD_INITPINS_UART1_RXD_PERIPHERAL                              LPUART1   /*!< Peripheral name */
#define BOARD_INITPINS_UART1_RXD_SIGNAL                                       RX   /*!< Signal name */

/* GPIO_AD_B0_12 (coord K14), UART1_TXD */
/* Routed pin properties */
#define BOARD_INITPINS_UART1_TXD_PERIPHERAL                              LPUART1   /*!< Peripheral name */
#define BOARD_INITPINS_UART1_TXD_SIGNAL                                       TX   /*!< Signal name */

/* GPIO_AD_B1_03 (coord M12), SPDIF_IN/J22[8] */
/* Routed pin properties */
#define BOARD_INITPINS_SPDIF_IN_PERIPHERAL                               LPUART2   /*!< Peripheral name */
#define BOARD_INITPINS_SPDIF_IN_SIGNAL                                        RX   /*!< Signal name */

/* GPIO_AD_B1_02 (coord L11), SPDIF_OUT/J22[7] */
/* Routed pin properties */
#define BOARD_INITPINS_SPDIF_OUT_PERIPHERAL                              LPUART2   /*!< Peripheral name */
#define BOARD_INITPINS_SPDIF_OUT_SIGNAL                                       TX   /*!< Signal name */

/* GPIO_SD_B1_01 (coord M5), FlexSPI_D2_B */
/* Routed pin properties */
#define BOARD_INITPINS_FlexSPI_D2_B_PERIPHERAL                           LPUART4   /*!< Peripheral name */
#define BOARD_INITPINS_FlexSPI_D2_B_SIGNAL                                    RX   /*!< Signal name */

/* GPIO_SD_B1_00 (coord L5), FlexSPI_D3_B */
/* Routed pin properties */
#define BOARD_INITPINS_FlexSPI_D3_B_PERIPHERAL                           LPUART4   /*!< Peripheral name */
#define BOARD_INITPINS_FlexSPI_D3_B_SIGNAL                                    TX   /*!< Signal name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
/*
 * Component description for GCLK
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2019-11-25T07:00:47Z */
#ifndef _SAMD11_GCLK_COMPONENT_
#define _SAMD11_GCLK_COMPONENT_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR GCLK                                         */
/* ************************************************************************** */

#define GCLK_U2102
#define REV_GCLK                    0x210

/* -------- GCLK_CTRL : (GCLK Offset: 0x00) (R/W 8) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} GCLK_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_CTRL_RESETVALUE                  _UINT8_(0x00)                                        /*  (GCLK_CTRL) Control  Reset Value */

#define GCLK_CTRL_SWRST_Pos                   _UINT8_(0)                                           /* (GCLK_CTRL) Software Reset Position */
#define GCLK_CTRL_SWRST_Msk                   (_UINT8_(0x1) << GCLK_CTRL_SWRST_Pos)                /* (GCLK_CTRL) Software Reset Mask */
#define GCLK_CTRL_SWRST(value)                (GCLK_CTRL_SWRST_Msk & (_UINT8_(value) << GCLK_CTRL_SWRST_Pos)) /* Assigment of value for SWRST in the GCLK_CTRL register */
#define GCLK_CTRL_MASK                         _UINT8_(0x01)                                        /* (GCLK_CTRL) Register Mask  */


/* -------- GCLK_STATUS : (GCLK Offset: 0x01) ( R/ 8) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :7;               /*!< bit:  0.. 6  Reserved                           */
    uint8_t  SYNCBUSY:1;       /*!< bit:      7  Synchronization Busy Status        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} GCLK_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#define GCLK_STATUS_RESETVALUE                _UINT8_(0x00)                                        /*  (GCLK_STATUS) Status  Reset Value */

#define GCLK_STATUS_SYNCBUSY_Pos              _UINT8_(7)                                           /* (GCLK_STATUS) Synchronization Busy Status Position */
#define GCLK_STATUS_SYNCBUSY_Msk              (_UINT8_(0x1) << GCLK_STATUS_SYNCBUSY_Pos)           /* (GCLK_STATUS) Synchronization Busy Status Mask */
#define GCLK_STATUS_SYNCBUSY(value)           (GCLK_STATUS_SYNCBUSY_Msk & (_UINT8_(value) << GCLK_STATUS_SYNCBUSY_Pos)) /* Assigment of value for SYNCBUSY in the GCLK_STATUS register */
#define GCLK_STATUS_MASK                       _UINT8_(0x80)                                        /* (GCLK_STATUS) Register Mask  */


/* -------- GCLK_CLKCTRL : (GCLK Offset: 0x02) (R/W 16) Generic Clock Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t ID:6;             /*!< bit:  0.. 5  Generic Clock Selection ID         */
    uint16_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint16_t GEN:4;            /*!< bit:  8..11  Generic Clock Generator            */
    uint16_t :2;               /*!< bit: 12..13  Reserved                           */
    uint16_t CLKEN:1;          /*!< bit:     14  Clock Enable                       */
    uint16_t WRTLOCK:1;        /*!< bit:     15  Write Lock                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} GCLK_CLKCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_CLKCTRL_RESETVALUE               _UINT16_(0x00)                                       /*  (GCLK_CLKCTRL) Generic Clock Control  Reset Value */

#define GCLK_CLKCTRL_ID_Pos                   _UINT16_(0)                                          /* (GCLK_CLKCTRL) Generic Clock Selection ID Position */
#define GCLK_CLKCTRL_ID_Msk                   (_UINT16_(0x3F) << GCLK_CLKCTRL_ID_Pos)              /* (GCLK_CLKCTRL) Generic Clock Selection ID Mask */
#define GCLK_CLKCTRL_ID(value)                (GCLK_CLKCTRL_ID_Msk & (_UINT16_(value) << GCLK_CLKCTRL_ID_Pos)) /* Assigment of value for ID in the GCLK_CLKCTRL register */
#define   GCLK_CLKCTRL_ID_DFLL48_Val          _UINT16_(0x0)                                        /* (GCLK_CLKCTRL) DFLL48  */
#define   GCLK_CLKCTRL_ID_FDPLL_Val           _UINT16_(0x1)                                        /* (GCLK_CLKCTRL) FDPLL  */
#define   GCLK_CLKCTRL_ID_FDPLL32K_Val        _UINT16_(0x2)                                        /* (GCLK_CLKCTRL) FDPLL32K  */
#define   GCLK_CLKCTRL_ID_WDT_Val             _UINT16_(0x3)                                        /* (GCLK_CLKCTRL) WDT  */
#define   GCLK_CLKCTRL_ID_RTC_Val             _UINT16_(0x4)                                        /* (GCLK_CLKCTRL) RTC  */
#define   GCLK_CLKCTRL_ID_EIC_Val             _UINT16_(0x5)                                        /* (GCLK_CLKCTRL) EIC  */
#define   GCLK_CLKCTRL_ID_USB_Val             _UINT16_(0x6)                                        /* (GCLK_CLKCTRL) USB  */
#define   GCLK_CLKCTRL_ID_EVSYS_0_Val         _UINT16_(0x7)                                        /* (GCLK_CLKCTRL) EVSYS_0  */
#define   GCLK_CLKCTRL_ID_EVSYS_1_Val         _UINT16_(0x8)                                        /* (GCLK_CLKCTRL) EVSYS_1  */
#define   GCLK_CLKCTRL_ID_EVSYS_2_Val         _UINT16_(0x9)                                        /* (GCLK_CLKCTRL) EVSYS_2  */
#define   GCLK_CLKCTRL_ID_EVSYS_3_Val         _UINT16_(0xA)                                        /* (GCLK_CLKCTRL) EVSYS_3  */
#define   GCLK_CLKCTRL_ID_EVSYS_4_Val         _UINT16_(0xB)                                        /* (GCLK_CLKCTRL) EVSYS_4  */
#define   GCLK_CLKCTRL_ID_EVSYS_5_Val         _UINT16_(0xC)                                        /* (GCLK_CLKCTRL) EVSYS_5  */
#define   GCLK_CLKCTRL_ID_SERCOMX_SLOW_Val    _UINT16_(0xD)                                        /* (GCLK_CLKCTRL) SERCOMX_SLOW  */
#define   GCLK_CLKCTRL_ID_SERCOM0_CORE_Val    _UINT16_(0xE)                                        /* (GCLK_CLKCTRL) SERCOM0_CORE  */
#define   GCLK_CLKCTRL_ID_SERCOM1_CORE_Val    _UINT16_(0xF)                                        /* (GCLK_CLKCTRL) SERCOM1_CORE  */
#define   GCLK_CLKCTRL_ID_SERCOM2_CORE_Val    _UINT16_(0x10)                                       /* (GCLK_CLKCTRL) SERCOM2_CORE  */
#define   GCLK_CLKCTRL_ID_TCC0_Val            _UINT16_(0x11)                                       /* (GCLK_CLKCTRL) TCC0  */
#define   GCLK_CLKCTRL_ID_TC1_TC2_Val         _UINT16_(0x12)                                       /* (GCLK_CLKCTRL) TC1_TC2  */
#define   GCLK_CLKCTRL_ID_ADC_Val             _UINT16_(0x13)                                       /* (GCLK_CLKCTRL) ADC  */
#define   GCLK_CLKCTRL_ID_AC_DIG_Val          _UINT16_(0x14)                                       /* (GCLK_CLKCTRL) AC_DIG  */
#define   GCLK_CLKCTRL_ID_AC_ANA_Val          _UINT16_(0x15)                                       /* (GCLK_CLKCTRL) AC_ANA  */
#define   GCLK_CLKCTRL_ID_DAC_Val             _UINT16_(0x16)                                       /* (GCLK_CLKCTRL) DAC  */
#define GCLK_CLKCTRL_ID_DFLL48                (GCLK_CLKCTRL_ID_DFLL48_Val << GCLK_CLKCTRL_ID_Pos)  /* (GCLK_CLKCTRL) DFLL48 Position  */
#define GCLK_CLKCTRL_ID_FDPLL                 (GCLK_CLKCTRL_ID_FDPLL_Val << GCLK_CLKCTRL_ID_Pos)   /* (GCLK_CLKCTRL) FDPLL Position  */
#define GCLK_CLKCTRL_ID_FDPLL32K              (GCLK_CLKCTRL_ID_FDPLL32K_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) FDPLL32K Position  */
#define GCLK_CLKCTRL_ID_WDT                   (GCLK_CLKCTRL_ID_WDT_Val << GCLK_CLKCTRL_ID_Pos)     /* (GCLK_CLKCTRL) WDT Position  */
#define GCLK_CLKCTRL_ID_RTC                   (GCLK_CLKCTRL_ID_RTC_Val << GCLK_CLKCTRL_ID_Pos)     /* (GCLK_CLKCTRL) RTC Position  */
#define GCLK_CLKCTRL_ID_EIC                   (GCLK_CLKCTRL_ID_EIC_Val << GCLK_CLKCTRL_ID_Pos)     /* (GCLK_CLKCTRL) EIC Position  */
#define GCLK_CLKCTRL_ID_USB                   (GCLK_CLKCTRL_ID_USB_Val << GCLK_CLKCTRL_ID_Pos)     /* (GCLK_CLKCTRL) USB Position  */
#define GCLK_CLKCTRL_ID_EVSYS_0               (GCLK_CLKCTRL_ID_EVSYS_0_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) EVSYS_0 Position  */
#define GCLK_CLKCTRL_ID_EVSYS_1               (GCLK_CLKCTRL_ID_EVSYS_1_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) EVSYS_1 Position  */
#define GCLK_CLKCTRL_ID_EVSYS_2               (GCLK_CLKCTRL_ID_EVSYS_2_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) EVSYS_2 Position  */
#define GCLK_CLKCTRL_ID_EVSYS_3               (GCLK_CLKCTRL_ID_EVSYS_3_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) EVSYS_3 Position  */
#define GCLK_CLKCTRL_ID_EVSYS_4               (GCLK_CLKCTRL_ID_EVSYS_4_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) EVSYS_4 Position  */
#define GCLK_CLKCTRL_ID_EVSYS_5               (GCLK_CLKCTRL_ID_EVSYS_5_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) EVSYS_5 Position  */
#define GCLK_CLKCTRL_ID_SERCOMX_SLOW          (GCLK_CLKCTRL_ID_SERCOMX_SLOW_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) SERCOMX_SLOW Position  */
#define GCLK_CLKCTRL_ID_SERCOM0_CORE          (GCLK_CLKCTRL_ID_SERCOM0_CORE_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) SERCOM0_CORE Position  */
#define GCLK_CLKCTRL_ID_SERCOM1_CORE          (GCLK_CLKCTRL_ID_SERCOM1_CORE_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) SERCOM1_CORE Position  */
#define GCLK_CLKCTRL_ID_SERCOM2_CORE          (GCLK_CLKCTRL_ID_SERCOM2_CORE_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) SERCOM2_CORE Position  */
#define GCLK_CLKCTRL_ID_TCC0                  (GCLK_CLKCTRL_ID_TCC0_Val << GCLK_CLKCTRL_ID_Pos)    /* (GCLK_CLKCTRL) TCC0 Position  */
#define GCLK_CLKCTRL_ID_TC1_TC2               (GCLK_CLKCTRL_ID_TC1_TC2_Val << GCLK_CLKCTRL_ID_Pos) /* (GCLK_CLKCTRL) TC1_TC2 Position  */
#define GCLK_CLKCTRL_ID_ADC                   (GCLK_CLKCTRL_ID_ADC_Val << GCLK_CLKCTRL_ID_Pos)     /* (GCLK_CLKCTRL) ADC Position  */
#define GCLK_CLKCTRL_ID_AC_DIG                (GCLK_CLKCTRL_ID_AC_DIG_Val << GCLK_CLKCTRL_ID_Pos)  /* (GCLK_CLKCTRL) AC_DIG Position  */
#define GCLK_CLKCTRL_ID_AC_ANA                (GCLK_CLKCTRL_ID_AC_ANA_Val << GCLK_CLKCTRL_ID_Pos)  /* (GCLK_CLKCTRL) AC_ANA Position  */
#define GCLK_CLKCTRL_ID_DAC                   (GCLK_CLKCTRL_ID_DAC_Val << GCLK_CLKCTRL_ID_Pos)     /* (GCLK_CLKCTRL) DAC Position  */
#define GCLK_CLKCTRL_GEN_Pos                  _UINT16_(8)                                          /* (GCLK_CLKCTRL) Generic Clock Generator Position */
#define GCLK_CLKCTRL_GEN_Msk                  (_UINT16_(0xF) << GCLK_CLKCTRL_GEN_Pos)              /* (GCLK_CLKCTRL) Generic Clock Generator Mask */
#define GCLK_CLKCTRL_GEN(value)               (GCLK_CLKCTRL_GEN_Msk & (_UINT16_(value) << GCLK_CLKCTRL_GEN_Pos)) /* Assigment of value for GEN in the GCLK_CLKCTRL register */
#define   GCLK_CLKCTRL_GEN_GCLK0_Val          _UINT16_(0x0)                                        /* (GCLK_CLKCTRL) Generic clock generator 0  */
#define   GCLK_CLKCTRL_GEN_GCLK1_Val          _UINT16_(0x1)                                        /* (GCLK_CLKCTRL) Generic clock generator 1  */
#define   GCLK_CLKCTRL_GEN_GCLK2_Val          _UINT16_(0x2)                                        /* (GCLK_CLKCTRL) Generic clock generator 2  */
#define   GCLK_CLKCTRL_GEN_GCLK3_Val          _UINT16_(0x3)                                        /* (GCLK_CLKCTRL) Generic clock generator 3  */
#define   GCLK_CLKCTRL_GEN_GCLK4_Val          _UINT16_(0x4)                                        /* (GCLK_CLKCTRL) Generic clock generator 4  */
#define   GCLK_CLKCTRL_GEN_GCLK5_Val          _UINT16_(0x5)                                        /* (GCLK_CLKCTRL) Generic clock generator 5  */
#define GCLK_CLKCTRL_GEN_GCLK0                (GCLK_CLKCTRL_GEN_GCLK0_Val << GCLK_CLKCTRL_GEN_Pos) /* (GCLK_CLKCTRL) Generic clock generator 0 Position  */
#define GCLK_CLKCTRL_GEN_GCLK1                (GCLK_CLKCTRL_GEN_GCLK1_Val << GCLK_CLKCTRL_GEN_Pos) /* (GCLK_CLKCTRL) Generic clock generator 1 Position  */
#define GCLK_CLKCTRL_GEN_GCLK2                (GCLK_CLKCTRL_GEN_GCLK2_Val << GCLK_CLKCTRL_GEN_Pos) /* (GCLK_CLKCTRL) Generic clock generator 2 Position  */
#define GCLK_CLKCTRL_GEN_GCLK3                (GCLK_CLKCTRL_GEN_GCLK3_Val << GCLK_CLKCTRL_GEN_Pos) /* (GCLK_CLKCTRL) Generic clock generator 3 Position  */
#define GCLK_CLKCTRL_GEN_GCLK4                (GCLK_CLKCTRL_GEN_GCLK4_Val << GCLK_CLKCTRL_GEN_Pos) /* (GCLK_CLKCTRL) Generic clock generator 4 Position  */
#define GCLK_CLKCTRL_GEN_GCLK5                (GCLK_CLKCTRL_GEN_GCLK5_Val << GCLK_CLKCTRL_GEN_Pos) /* (GCLK_CLKCTRL) Generic clock generator 5 Position  */
#define GCLK_CLKCTRL_CLKEN_Pos                _UINT16_(14)                                         /* (GCLK_CLKCTRL) Clock Enable Position */
#define GCLK_CLKCTRL_CLKEN_Msk                (_UINT16_(0x1) << GCLK_CLKCTRL_CLKEN_Pos)            /* (GCLK_CLKCTRL) Clock Enable Mask */
#define GCLK_CLKCTRL_CLKEN(value)             (GCLK_CLKCTRL_CLKEN_Msk & (_UINT16_(value) << GCLK_CLKCTRL_CLKEN_Pos)) /* Assigment of value for CLKEN in the GCLK_CLKCTRL register */
#define GCLK_CLKCTRL_WRTLOCK_Pos              _UINT16_(15)                                         /* (GCLK_CLKCTRL) Write Lock Position */
#define GCLK_CLKCTRL_WRTLOCK_Msk              (_UINT16_(0x1) << GCLK_CLKCTRL_WRTLOCK_Pos)          /* (GCLK_CLKCTRL) Write Lock Mask */
#define GCLK_CLKCTRL_WRTLOCK(value)           (GCLK_CLKCTRL_WRTLOCK_Msk & (_UINT16_(value) << GCLK_CLKCTRL_WRTLOCK_Pos)) /* Assigment of value for WRTLOCK in the GCLK_CLKCTRL register */
#define GCLK_CLKCTRL_MASK                      _UINT16_(0xCF3F)                                     /* (GCLK_CLKCTRL) Register Mask  */


/* -------- GCLK_GENCTRL : (GCLK Offset: 0x04) (R/W 32) Generic Clock Generator Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ID:4;             /*!< bit:  0.. 3  Generic Clock Generator Selection  */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t SRC:5;            /*!< bit:  8..12  Source Select                      */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t GENEN:1;          /*!< bit:     16  Generic Clock Generator Enable     */
    uint32_t IDC:1;            /*!< bit:     17  Improve Duty Cycle                 */
    uint32_t OOV:1;            /*!< bit:     18  Output Off Value                   */
    uint32_t OE:1;             /*!< bit:     19  Output Enable                      */
    uint32_t DIVSEL:1;         /*!< bit:     20  Divide Selection                   */
    uint32_t RUNSTDBY:1;       /*!< bit:     21  Run in Standby                     */
    uint32_t :10;              /*!< bit: 22..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GCLK_GENCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_GENCTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (GCLK_GENCTRL) Generic Clock Generator Control  Reset Value */

#define GCLK_GENCTRL_ID_Pos                   _UINT32_(0)                                          /* (GCLK_GENCTRL) Generic Clock Generator Selection Position */
#define GCLK_GENCTRL_ID_Msk                   (_UINT32_(0xF) << GCLK_GENCTRL_ID_Pos)               /* (GCLK_GENCTRL) Generic Clock Generator Selection Mask */
#define GCLK_GENCTRL_ID(value)                (GCLK_GENCTRL_ID_Msk & (_UINT32_(value) << GCLK_GENCTRL_ID_Pos)) /* Assigment of value for ID in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_SRC_Pos                  _UINT32_(8)                                          /* (GCLK_GENCTRL) Source Select Position */
#define GCLK_GENCTRL_SRC_Msk                  (_UINT32_(0x1F) << GCLK_GENCTRL_SRC_Pos)             /* (GCLK_GENCTRL) Source Select Mask */
#define GCLK_GENCTRL_SRC(value)               (GCLK_GENCTRL_SRC_Msk & (_UINT32_(value) << GCLK_GENCTRL_SRC_Pos)) /* Assigment of value for SRC in the GCLK_GENCTRL register */
#define   GCLK_GENCTRL_SRC_XOSC_Val           _UINT32_(0x0)                                        /* (GCLK_GENCTRL) XOSC oscillator output  */
#define   GCLK_GENCTRL_SRC_GCLKIN_Val         _UINT32_(0x1)                                        /* (GCLK_GENCTRL) Generator input pad  */
#define   GCLK_GENCTRL_SRC_GCLKGEN1_Val       _UINT32_(0x2)                                        /* (GCLK_GENCTRL) Generic clock generator 1 output  */
#define   GCLK_GENCTRL_SRC_OSCULP32K_Val      _UINT32_(0x3)                                        /* (GCLK_GENCTRL) OSCULP32K oscillator output  */
#define   GCLK_GENCTRL_SRC_OSC32K_Val         _UINT32_(0x4)                                        /* (GCLK_GENCTRL) OSC32K oscillator output  */
#define   GCLK_GENCTRL_SRC_XOSC32K_Val        _UINT32_(0x5)                                        /* (GCLK_GENCTRL) XOSC32K oscillator output  */
#define   GCLK_GENCTRL_SRC_OSC8M_Val          _UINT32_(0x6)                                        /* (GCLK_GENCTRL) OSC8M oscillator output  */
#define   GCLK_GENCTRL_SRC_DFLL48M_Val        _UINT32_(0x7)                                        /* (GCLK_GENCTRL) DFLL48M output  */
#define   GCLK_GENCTRL_SRC_DPLL96M_Val        _UINT32_(0x8)                                        /* (GCLK_GENCTRL) DPLL96M output  */
#define GCLK_GENCTRL_SRC_XOSC                 (GCLK_GENCTRL_SRC_XOSC_Val << GCLK_GENCTRL_SRC_Pos)  /* (GCLK_GENCTRL) XOSC oscillator output Position  */
#define GCLK_GENCTRL_SRC_GCLKIN               (GCLK_GENCTRL_SRC_GCLKIN_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) Generator input pad Position  */
#define GCLK_GENCTRL_SRC_GCLKGEN1             (GCLK_GENCTRL_SRC_GCLKGEN1_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) Generic clock generator 1 output Position  */
#define GCLK_GENCTRL_SRC_OSCULP32K            (GCLK_GENCTRL_SRC_OSCULP32K_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) OSCULP32K oscillator output Position  */
#define GCLK_GENCTRL_SRC_OSC32K               (GCLK_GENCTRL_SRC_OSC32K_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) OSC32K oscillator output Position  */
#define GCLK_GENCTRL_SRC_XOSC32K              (GCLK_GENCTRL_SRC_XOSC32K_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) XOSC32K oscillator output Position  */
#define GCLK_GENCTRL_SRC_OSC8M                (GCLK_GENCTRL_SRC_OSC8M_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) OSC8M oscillator output Position  */
#define GCLK_GENCTRL_SRC_DFLL48M              (GCLK_GENCTRL_SRC_DFLL48M_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) DFLL48M output Position  */
#define GCLK_GENCTRL_SRC_DPLL96M              (GCLK_GENCTRL_SRC_DPLL96M_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) DPLL96M output Position  */
#define GCLK_GENCTRL_GENEN_Pos                _UINT32_(16)                                         /* (GCLK_GENCTRL) Generic Clock Generator Enable Position */
#define GCLK_GENCTRL_GENEN_Msk                (_UINT32_(0x1) << GCLK_GENCTRL_GENEN_Pos)            /* (GCLK_GENCTRL) Generic Clock Generator Enable Mask */
#define GCLK_GENCTRL_GENEN(value)             (GCLK_GENCTRL_GENEN_Msk & (_UINT32_(value) << GCLK_GENCTRL_GENEN_Pos)) /* Assigment of value for GENEN in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_IDC_Pos                  _UINT32_(17)                                         /* (GCLK_GENCTRL) Improve Duty Cycle Position */
#define GCLK_GENCTRL_IDC_Msk                  (_UINT32_(0x1) << GCLK_GENCTRL_IDC_Pos)              /* (GCLK_GENCTRL) Improve Duty Cycle Mask */
#define GCLK_GENCTRL_IDC(value)               (GCLK_GENCTRL_IDC_Msk & (_UINT32_(value) << GCLK_GENCTRL_IDC_Pos)) /* Assigment of value for IDC in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_OOV_Pos                  _UINT32_(18)                                         /* (GCLK_GENCTRL) Output Off Value Position */
#define GCLK_GENCTRL_OOV_Msk                  (_UINT32_(0x1) << GCLK_GENCTRL_OOV_Pos)              /* (GCLK_GENCTRL) Output Off Value Mask */
#define GCLK_GENCTRL_OOV(value)               (GCLK_GENCTRL_OOV_Msk & (_UINT32_(value) << GCLK_GENCTRL_OOV_Pos)) /* Assigment of value for OOV in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_OE_Pos                   _UINT32_(19)                                         /* (GCLK_GENCTRL) Output Enable Position */
#define GCLK_GENCTRL_OE_Msk                   (_UINT32_(0x1) << GCLK_GENCTRL_OE_Pos)               /* (GCLK_GENCTRL) Output Enable Mask */
#define GCLK_GENCTRL_OE(value)                (GCLK_GENCTRL_OE_Msk & (_UINT32_(value) << GCLK_GENCTRL_OE_Pos)) /* Assigment of value for OE in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_DIVSEL_Pos               _UINT32_(20)                                         /* (GCLK_GENCTRL) Divide Selection Position */
#define GCLK_GENCTRL_DIVSEL_Msk               (_UINT32_(0x1) << GCLK_GENCTRL_DIVSEL_Pos)           /* (GCLK_GENCTRL) Divide Selection Mask */
#define GCLK_GENCTRL_DIVSEL(value)            (GCLK_GENCTRL_DIVSEL_Msk & (_UINT32_(value) << GCLK_GENCTRL_DIVSEL_Pos)) /* Assigment of value for DIVSEL in the GCLK_GENCTRL register */
#define   GCLK_GENCTRL_DIVSEL_DIV1_Val        _UINT32_(0x0)                                        /* (GCLK_GENCTRL) Divide input directly by divider factor  */
#define   GCLK_GENCTRL_DIVSEL_DIV2_Val        _UINT32_(0x1)                                        /* (GCLK_GENCTRL) Divide input by 2^(divider factor+ 1)  */
#define GCLK_GENCTRL_DIVSEL_DIV1              (GCLK_GENCTRL_DIVSEL_DIV1_Val << GCLK_GENCTRL_DIVSEL_Pos) /* (GCLK_GENCTRL) Divide input directly by divider factor Position  */
#define GCLK_GENCTRL_DIVSEL_DIV2              (GCLK_GENCTRL_DIVSEL_DIV2_Val << GCLK_GENCTRL_DIVSEL_Pos) /* (GCLK_GENCTRL) Divide input by 2^(divider factor+ 1) Position  */
#define GCLK_GENCTRL_RUNSTDBY_Pos             _UINT32_(21)                                         /* (GCLK_GENCTRL) Run in Standby Position */
#define GCLK_GENCTRL_RUNSTDBY_Msk             (_UINT32_(0x1) << GCLK_GENCTRL_RUNSTDBY_Pos)         /* (GCLK_GENCTRL) Run in Standby Mask */
#define GCLK_GENCTRL_RUNSTDBY(value)          (GCLK_GENCTRL_RUNSTDBY_Msk & (_UINT32_(value) << GCLK_GENCTRL_RUNSTDBY_Pos)) /* Assigment of value for RUNSTDBY in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_MASK                      _UINT32_(0x003F1F0F)                                 /* (GCLK_GENCTRL) Register Mask  */


/* -------- GCLK_GENDIV : (GCLK Offset: 0x08) (R/W 32) Generic Clock Generator Division -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ID:4;             /*!< bit:  0.. 3  Generic Clock Generator Selection  */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t DIV:16;           /*!< bit:  8..23  Division Factor                    */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GCLK_GENDIV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_GENDIV_RESETVALUE                _UINT32_(0x00)                                       /*  (GCLK_GENDIV) Generic Clock Generator Division  Reset Value */

#define GCLK_GENDIV_ID_Pos                    _UINT32_(0)                                          /* (GCLK_GENDIV) Generic Clock Generator Selection Position */
#define GCLK_GENDIV_ID_Msk                    (_UINT32_(0xF) << GCLK_GENDIV_ID_Pos)                /* (GCLK_GENDIV) Generic Clock Generator Selection Mask */
#define GCLK_GENDIV_ID(value)                 (GCLK_GENDIV_ID_Msk & (_UINT32_(value) << GCLK_GENDIV_ID_Pos)) /* Assigment of value for ID in the GCLK_GENDIV register */
#define GCLK_GENDIV_DIV_Pos                   _UINT32_(8)                                          /* (GCLK_GENDIV) Division Factor Position */
#define GCLK_GENDIV_DIV_Msk                   (_UINT32_(0xFFFF) << GCLK_GENDIV_DIV_Pos)            /* (GCLK_GENDIV) Division Factor Mask */
#define GCLK_GENDIV_DIV(value)                (GCLK_GENDIV_DIV_Msk & (_UINT32_(value) << GCLK_GENDIV_DIV_Pos)) /* Assigment of value for DIV in the GCLK_GENDIV register */
#define GCLK_GENDIV_MASK                       _UINT32_(0x00FFFF0F)                                 /* (GCLK_GENDIV) Register Mask  */


/** \brief GCLK register offsets definitions */
#define GCLK_CTRL_REG_OFFSET             _UINT32_(0x00)      /* (GCLK_CTRL) Control Offset */
#define GCLK_STATUS_REG_OFFSET           _UINT32_(0x01)      /* (GCLK_STATUS) Status Offset */
#define GCLK_CLKCTRL_REG_OFFSET          _UINT32_(0x02)      /* (GCLK_CLKCTRL) Generic Clock Control Offset */
#define GCLK_GENCTRL_REG_OFFSET          _UINT32_(0x04)      /* (GCLK_GENCTRL) Generic Clock Generator Control Offset */
#define GCLK_GENDIV_REG_OFFSET           _UINT32_(0x08)      /* (GCLK_GENDIV) Generic Clock Generator Division Offset */


/** \brief GCLK register API structure */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO GCLK_CTRL_Type            CTRL;        /**< \brief Offset: 0x0 (R/W  8) Control */
  __I  GCLK_STATUS_Type          STATUS;      /**< \brief Offset: 0x1 (R/   8) Status */
  __IO GCLK_CLKCTRL_Type         CLKCTRL;     /**< \brief Offset: 0x2 (R/W 16) Generic Clock Control */
  __IO GCLK_GENCTRL_Type         GENCTRL;     /**< \brief Offset: 0x4 (R/W 32) Generic Clock Generator Control */
  __IO GCLK_GENDIV_Type          GENDIV;      /**< \brief Offset: 0x8 (R/W 32) Generic Clock Generator Division */
} Gclk;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMD11_GCLK_COMPONENT_H_ */

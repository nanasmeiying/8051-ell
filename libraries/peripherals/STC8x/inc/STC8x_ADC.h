/*-----------------------------------------------------------------------
|                            FILE DESCRIPTION                           |
-----------------------------------------------------------------------*/
/*----------------------------------------------------------------------
  - File name     : STC8x_ADC.h
  - Author        : zeweni
  - Update date   : 2020.04.23
  -	Copyright(C)  : 2020-2021 zeweni. All rights reserved.
-----------------------------------------------------------------------*/
/*------------------------------------------------------------------------
|                            COPYRIGHT NOTICE                            |
------------------------------------------------------------------------*/
/*
 * Copyright (C) 2021, zeweni (17870070675@163.com)

 * This file is part of 8051 ELL low-layer libraries.

 * 8051 ELL low-layer libraries is free software: you can redistribute 
 * it and/or modify it under the terms of the Apache-2.0 License.

 * 8051 ELL low-layer libraries is distributed in the hope that it will 
 * be useful,but WITHOUT ANY WARRANTY; without even the implied warranty 
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
 * Apache-2.0 License License for more details.

 * You should have received a copy of the Apache-2.0 License.8051 ELL 
 * low-layer libraries. If not, see <http://www.apache.org/licenses/>.
**/
/*-----------------------------------------------------------------------
|                               INCLUDES                                |
-----------------------------------------------------------------------*/
#ifndef __STC8x_ADC_H_
#define __STC8x_ADC_H_

/*--------------------------------------------------------
| @Description: STC8x MCU Register                       |
--------------------------------------------------------*/

#include "Lib_CFG.h"
#ifndef PER_LIB_MCU_MUODEL
    #define PER_LIB_MCU_MUODEL STC8Ax
#endif

#if    (PER_LIB_MCU_MUODEL == STC8Ax)
    #include "STC8Ax_REG.h"  
#elif  (PER_LIB_MCU_MUODEL == STC8Cx)
    #include "STC8Cx_REG.h"
#elif  (PER_LIB_MCU_MUODEL == STC8Fx)
    #include "STC8Fx_REG.h"
#elif  (PER_LIB_MCU_MUODEL == STC8Gx)
    #include "STC8Gx_REG.h"
#elif  (PER_LIB_MCU_MUODEL == STC8Hx)
    #include "STC8Hx_REG.h"
#endif

/*--------------------------------------------------------
| @Description: ELL library core                         |
--------------------------------------------------------*/
#include "ELL_CORE.h"

/*-----------------------------------------------------------------------
|                                 DATA                                  |
-----------------------------------------------------------------------*/

#if (PER_LIB_MCU_MUODEL == STC8Ax || PER_LIB_MCU_MUODEL == STC8Gx || PER_LIB_MCU_MUODEL == STC8Hx)

/*--------------------------------------------------------
| @Description: ADC road defin                           |
--------------------------------------------------------*/

#define    ADC_Road_REV    0x0F	   //Test the internal refv voltage

/* STC8Ax */
#define    ADC_Channel_P10_8Ax    0x00
#define    ADC_Channel_P11_8Ax    0x01
#define    ADC_Channel_P12_8Ax    0x02
#define    ADC_Channel_P13_8Ax    0x03
#define    ADC_Channel_P14_8Ax    0x04
#define    ADC_Channel_P15_8Ax    0x05
#define    ADC_Channel_P16_8Ax    0x06
#define    ADC_Channel_P17_8Ax    0x07
#define    ADC_Channel_P00_8Ax    0x08
#define    ADC_Channel_P01_8Ax    0x09
#define    ADC_Channel_P02_8Ax    0x0A
#define    ADC_Channel_P03_8Ax    0x0B
#define    ADC_Channel_P04_8Ax    0x0C
#define    ADC_Channel_P05_8Ax    0x0D
#define    ADC_Channel_P06_8Ax    0x0E

/* STC8G1K08A 8Pin */
#define    ADC_Channel_P30_8G1K08A    0x00
#define    ADC_Channel_P31_8G1K08A    0x01
#define    ADC_Channel_P32_8G1K08A    0x02
#define    ADC_Channel_P33_8G1K08A    0x03        
#define    ADC_Channel_P54_8G1K08A    0x04
#define    ADC_Channel_P55_8G1K08A    0x05

/* STC8G1K08 16Pin and 20Pin / STC8G1K08T 20Pin */
#define    ADC_Channel_P10_8G1K08_T    0x00
#define    ADC_Channel_P11_8G1K08_T    0x01
#define    ADC_Channel_P12_8G1K08_T    0x02
#define    ADC_Channel_P13_8G1K08_T    0x03
#define    ADC_Channel_P14_8G1K08_T    0x04
#define    ADC_Channel_P15_8G1K08_T    0x05
#define    ADC_Channel_P16_8G1K08_T    0x06
#define    ADC_Channel_P17_8G1K08_T    0x07
#define    ADC_Channel_P30_8G1K08_T    0x08
#define    ADC_Channel_P31_8G1K08_T    0x09
#define    ADC_Channel_P32_8G1K08_T    0x0A
#define    ADC_Channel_P33_8G1K08_T    0x0B
#define    ADC_Channel_P34_8G1K08_T    0x0C
#define    ADC_Channel_P35_8G1K08_T    0x0D
#define    ADC_Channel_P36_8G1K08_T    0x0E

/* STC8G2K64S4 16Pin / STC8G2K64S2 */
#define    ADC_Channel_P10_8G2K64S2_S4    0x00
#define    ADC_Channel_P11_8G2K64S2_S4    0x01
#define    ADC_Channel_P12_8G2K64S2_S4    0x02
#define    ADC_Channel_P13_8G2K64S2_S4    0x03
#define    ADC_Channel_P14_8G2K64S2_S4    0x04
#define    ADC_Channel_P15_8G2K64S2_S4    0x05
#define    ADC_Channel_P16_8G2K64S2_S4    0x06
#define    ADC_Channel_P17_8G2K64S2_S4    0x07
#define    ADC_Channel_P00_8G2K64S2_S4    0x08
#define    ADC_Channel_P01_8G2K64S2_S4    0x09
#define    ADC_Channel_P02_8G2K64S2_S4    0x0A
#define    ADC_Channel_P03_8G2K64S2_S4    0x0B
#define    ADC_Channel_P04_8G2K64S2_S4    0x0C
#define    ADC_Channel_P05_8G2K64S2_S4    0x0D
#define    ADC_Channel_P06_8G2K64S2_S4    0x0E

/* STC8H1K28 */
#define    ADC_Channel_P10_8H1K28    0x00
#define    ADC_Channel_P11_8H1K28    0x01
#define    ADC_Channel_P12_8H1K28    0x02
#define    ADC_Channel_P13_8H1K28    0x03
#define    ADC_Channel_P14_8H1K28    0x04
#define    ADC_Channel_P15_8H1K28    0x05
#define    ADC_Channel_P16_8H1K28    0x06
#define    ADC_Channel_P17_8H1K28    0x07
#define    ADC_Channel_P00_8H1K28    0x08
#define    ADC_Channel_P01_8H1K28    0x09
#define    ADC_Channel_P02_8H1K28    0x0A
#define    ADC_Channel_P03_8H1K28    0x0B

/* STC8H1K08 */
#define    ADC_Channel_P10_8H1K08    0x00
#define    ADC_Channel_P11_8H1K08    0x01
#define    ADC_Channel_P30_8H1K08    0x08
#define    ADC_Channel_P31_8H1K08    0x09
#define    ADC_Channel_P32_8H1K08    0x0A
#define    ADC_Channel_P33_8H1K08    0x0B
#define    ADC_Channel_P34_8H1K08    0x0C
#define    ADC_Channel_P35_8H1K08    0x0D
#define    ADC_Channel_P36_8H1K08    0x0E

/* STC8H3K64S2 / STC8H3K64S4 */
#define    ADC_Channel_P10_8H3K64S2_S4    0x00
#define    ADC_Channel_P11_8H3K64S2_S4    0x01
#define    ADC_Channel_P12_8H3K64S2_S4    0x02
#define    ADC_Channel_P16_8H3K64S2_S4    0x06
#define    ADC_Channel_P17_8H3K64S2_S4    0x07
#define    ADC_Channel_P00_8H3K64S2_S4    0x08
#define    ADC_Channel_P01_8H3K64S2_S4    0x09
#define    ADC_Channel_P02_8H3K64S2_S4    0x0A
#define    ADC_Channel_P03_8H3K64S2_S4    0x0B
#define    ADC_Channel_P04_8H3K64S2_S4    0x0C
#define    ADC_Channel_P05_8H3K64S2_S4    0x0D
#define    ADC_Channel_P06_8H3K64S2_S4    0x0E

/* STC8H8K64U / STC8H2K64T */
#define    ADC_Channel_P10_8H8K64U_2K64T    0x00
#define    ADC_Channel_P11_8H8K64U_2K64T    0x01
#define    ADC_Channel_P54_8H8K64U_2K64T    0x02
#define    ADC_Channel_P13_8H8K64U_2K64T    0x03
#define    ADC_Channel_P14_8H8K64U_2K64T    0x04
#define    ADC_Channel_P15_8H8K64U_2K64T    0x05
#define    ADC_Channel_P16_8H8K64U_2K64T    0x06
#define    ADC_Channel_P17_8H8K64U_2K64T    0x07
#define    ADC_Channel_P00_8H8K64U_2K64T    0x08
#define    ADC_Channel_P01_8H8K64U_2K64T    0x09
#define    ADC_Channel_P02_8H8K64U_2K64T    0x0A
#define    ADC_Channel_P03_8H8K64U_2K64T    0x0B
#define    ADC_Channel_P04_8H8K64U_2K64T    0x0C
#define    ADC_Channel_P05_8H8K64U_2K64T    0x0D
#define    ADC_Channel_P06_8H8K64U_2K64T    0x0E

/**
 * @name    ADCAcc_Type
 * @brief   ADC采集精度枚举体。
 *          ADC acquisition accuracy enumeration.
 * @param   ADC_Acc_12Bit [uint8_t] ADC12位采集精度（部分型号可能没有）。
 *                                  ADC12 bit acquisition accuracy (some models may not have).
 * @param   ADC_Acc_11Bit [uint8_t] ADC11位采集精度。ADC 11 bit acquisition accuracy.
 * @param   ADC_Acc_10Bit [uint8_t] ADC10位采集精度。ADC 10 bit acquisition accuracy.
 * @param   ADC_Acc_9Bit  [uint8_t] ADC9位采集精度。ADC 9 bit acquisition accuracy.
 * @param   ADC_Acc_8Bit  [uint8_t] ADC8位采集精度。ADC 8 bit acquisition accuracy.
***/
typedef enum
{
	#if (PER_LIB_MCU_MUODEL == STC8Ax || PER_LIB_MCU_MUODEL == STC8Hx )
		ADC_Acc_12Bit = 0x00,    //12 bit accuracy
		ADC_Acc_11Bit = 0x01,    //11 bit accuracy
		ADC_Acc_10Bit = 0x02,    //10 bit accuracy
		ADC_Acc_9Bit  = 0x03,    //9  bit accuracy
		ADC_Acc_8Bit  = 0x04     //8  bit accuracy
	#elif (PER_LIB_MCU_MUODEL == STC8Gx )
		ADC_Acc_10Bit = 0x00,    //10 bit accuracy
		ADC_Acc_09Bit = 0x01,    // 9 bit accuracy
		ADC_Acc_08Bit = 0x02     // 8 bit accuracy
    #endif
} ADCAcc_Type;


/**
 * @name    ADCAlign_Type
 * @brief   ADC输出结果对齐方向枚举体。
 *          The ADC output is aligned with the direction enumerator.
 * @param   ADC_Left  ADC power control bit
 * @param   ADC_Right  ADC channel selection
***/
typedef enum
{
	ADC_Left  = 0x00,  //After set, the data is aligned to the left
	ADC_Right = 0x01  //After collection, the data is aligned to the right
}   ADCAlign_Type;


/**
 * @name    ADC_InitType
 * @brief   ADC初始化结构体句柄，初始化时请定义该句柄，并用其地址来传参。
  *         The ADC initializes the structure handle. When initializing, 
  *         please define the handle and use its address to pass parameters.
 * @param   Power   [BOOL] ADC电源控制位。  ADC power control bit.
 * @param   Channel [uint8_t]  ADC采集通道选择。ADC channel selection.
 * @param   Speed   [uint8_t]  ADC采集速度,最大速度0x0F，如果大于这个值，将初始化失败。
 *                             The maximum ADC conversion speed (working clock frequency) is 0x0F.
 * @param   Align   [ADCAlign_Type] ADC采样结果对齐方式。ADC data format alignment.
 * @param   Run     [BOOL] ADC运行控制位。ADC conversion operation control bit.
***/
typedef struct 
{
	BOOL Power;
	uint8_t Channel;
	uint8_t Speed;
	ADCAlign_Type Align; 
	BOOL Run;
}   ADC_InitType;

/*-----------------------------------------------------------------------
|                             API FUNCTION                              |
-----------------------------------------------------------------------*/

/**
 * @name    ADC_Init
 * @brief   ADC外设初始化函数。
 *          ADC peripheral init function.
 * @param   *adcx  [IN] ADC结构体句柄，初始化时请定义该句柄，并用其地址来传参。
 *                      ADC structure handle. When initializing, 
 *                      please define the handle and use its address
 *                      to pass parameters.
 * @retval  [FSC_SUCCESS / FSC_FAIL]
***/
FSCSTATE ADC_Init(const ADC_InitType* adcx);


/**
 * @name    ADC_Get_Sample
 * @brief   ADC获取采集结果函数（查询法）。
 *          ADC get sample function.
 * @param   channel[IN] ADC采集通道,不同的芯片型号，通道有所不同，请查看头文件的宏定义。
 *                      ADC acquisition channel, different chip models, 
 *                      the channel is different, 
 *                      please check the macro definition of the header file
 * @param   acc    [IN] ADC采集精度，不同的芯片型号，最高精度有所不同，请查看头文件的宏定义。
 *                      ADC acquisition accuracy, different chip models, 
 *                      the highest accuracy is different, 
 *                      please check the macro definition of the header file.
 * @retval  [uint16_t]  返回采集到的ADC值。Returns the collected ADC value.
***/
uint16_t ADC_Get_Sample(uint8_t channel, ADCAcc_Type acc);

/**
 * @name    ADC_Get_Sample_Interrupt
 * @brief   ADC获取采集结果函数（中断法）。
 *          ADC get sample function.
 * @param   acc      [IN] ADC采集精度，不同的芯片型号，最高精度有所不同，请查看头文件的宏定义。
 *                        ADC acquisition accuracy, different chip models, 
 *                        the highest accuracy is different, 
 *                        please check the macro definition of the header file.
 * @retval  [uint16_t]    返回采集到的ADC值。Returns the collected ADC value.
***/
uint16_t ADC_Get_Sample_Interrupt(ADCAcc_Type acc);

/**
  * @name    NVIC_ADC_Init
  * @brief   ADC优先级初始化函数。
  *          ADC priority initialization function.
  * @param   priority NVIC_PR0 | NVIC_PR1 | NVIC_PR2 | NVIC_PR3
  * @param   run      ENABLE | DISABLE
  * @retval  FSC_SUCCESS(1) / FSC_FAIL(0) 
***/
FSCSTATE NVIC_ADC_Init(NVICPri_Type priority,BOOL run);

/**
  * @name    ADC_GET_FLAG
  * @brief   ADC获取采集完成（中断）标志位宏函数。
  *          ADC obtains macro function of acquisition 
  *          completion (interrupt) flag bit.
  * @retval  [bit] 完成（中断）标志位。Completion (interrupt) flag bit.
***/
#define ADC_GET_FLAG()       (ADC_CONTR & 0x20)


/**
  * @name    ADC_CLEAR_FLAG
  * @brief   ADC清除采集完成（中断）标志位宏函数。
  *          ADC clears macro function of acquisition 
  *          completion (interrupt) flag bit.
***/
#define ADC_CLEAR_FLAG()      {ADC_CONTR &= 0xDF;}


/**
  * @name    ADC_GET_CHANNEL
  * @brief   ADC获取当前采集通道宏函数。
  *          ADC obtains the macro function of 
  *          the current acquisition channel.
***/
#define ADC_GET_CHANNEL()        (ADC_CONTR & 0x0F)


/**
  * @name    ADC_CHANGE_CHANNEL
  * @brief   ADC改变采集通道宏函数。
  *          ADC change the macro function of 
  *          the current acquisition channel.
  * @param   channel[IN] ADC采集通道,不同的芯片型号，通道有所不同，请查看头文件的宏定义。
  *                      ADC acquisition channel, different chip models, 
  *                      the channel is different, 
  *                      please check the macro definition of the header file
***/
#define ADC_CHANGE_CHANNEL(channel)     {ADC_CONTR = (ADC_CONTR & 0xF0) | (channel);}


/**
  * @name    NVIC_ADC_CTRL
  * @brief   ADC中断开关控制宏函数。
  *          ADC interrupt switch control macro function.
  * @param   run [BOOL] 使能控制位。Enable control bit.
***/
#define NVIC_ADC_CTRL(run)     {EADC = run;}
	


#endif


#endif
/*-----------------------------------------------------------------------
|                   END OF FLIE.  (C) COPYRIGHT zeweni                  | 
-----------------------------------------------------------------------*/


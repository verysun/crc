/**
  ******************************************************************************
  * @file    crc32.h
  * @author  Ray
  * @brief            
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright 2022 verysun
  * All rights reserved.</center></h2>
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef CRC32_H_
#define CRC32_H_

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

/* Exported typedef -----------------------------------------------------------*/

/* Exported define ------------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported variables ---------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/ 
unsigned int crc32_calc(unsigned char * p_data, unsigned int size, unsigned int * p_crc);
 
   
#ifdef __cplusplus
}
#endif

#endif /* CRC32_H_ */


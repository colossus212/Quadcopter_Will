/*************************************************************************************************************
圆点博士小四轴飞行器2014版配套源代码声明:
该源代码仅供参考,圆点博士不对源代码提供任何形式的担保,也不对因使用该源代码而出现的损失负责.
用户可以以学习的目的修改和使用该源代码.
但用户在修改该源代码时,不得移除该部分版权信息，必须保留原版声明.

更多信息，请访问官方网站www.etootle.com, 官方博客:http://weibo.com/xiaosizhou
**************************************************************************************************************/
#include "stm32f10x_it.h"
#include <math.h>

#define B_COM1_TX	GPIO_Pin_9
#define B_COM1_RX	GPIO_Pin_10

void B_COM1_Communication(void);
void B_COM1_Interrupt(void);  
//
void B_COM1_Send_Char(unsigned char ascii_code);
void B_COM1_Send_Num(unsigned char number);
void B_COM1_Send_Str_Head(void);
void B_COM1_Send_Str_Body(unsigned char* str_buf);
void B_COM1_Send_Str_Tail(void);
void B_COM1_Send_4bits_BCD_Num(int number);
//
void B_COM1_GPIO_Configuration(void);
void B_COM1_Port_Configuration(void);
void B_COM1_NVIC_Configuration(void);
unsigned char B_COM1_Task_Process(void);
//

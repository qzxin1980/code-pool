//==============================================================================
//
// Title:       F2C Converter.c
// Purpose:     A short description of the implementation.
//
// Created on:  2014/1/15 at 20:19:33 by Nick.
// Copyright:   . All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <stdio.h>
#include <utility.h>
//include "F2C Converter.h"

//==============================================================================
// Constants
#define LOWER 0
#define UPPER 300
#define STEP 20
//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

/// HIFN  What does your function do?
/// HIPAR x/What inputs does your function expect?
/// HIRET What does your function return?


/* ��fahr = 0��20��...��300ʱ���ֱ��ӡ�����¶��������¶ȶ��ձ� */

int main (void) 
{
	float fahr, celsius;
	//int lower, upper, step;
	
	//lower = 0;
	//upper = 300;
	//step = 20;
	
	fahr = LOWER;
	DebugPrintf("�����¶Ⱥ������¶�ת����\n");
	while(fahr <= UPPER)
	{
		celsius = 5 * (fahr - 32)/9;
		DebugPrintf("%3.0f\t\t    %6.1f\n", fahr, celsius);
		fahr += STEP;
	}
	
	fahr = UPPER; //�����ӡ
	while(fahr >= LOWER)                                   
	{                                                      
		celsius = 5 * (fahr - 32)/9;                       
		DebugPrintf("%3.0f\t\t    %6.1f\n", fahr, celsius);
   	    fahr -= STEP;
	}
	return 0;  
}


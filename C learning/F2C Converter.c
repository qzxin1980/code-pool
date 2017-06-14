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


/* 当fahr = 0，20，...，300时，分别打印华氏温度与摄氏温度对照表 */

int main (void) 
{
	float fahr, celsius;
	//int lower, upper, step;
	
	//lower = 0;
	//upper = 300;
	//step = 20;
	
	fahr = LOWER;
	DebugPrintf("华氏温度和摄氏温度转换表\n");
	while(fahr <= UPPER)
	{
		celsius = 5 * (fahr - 32)/9;
		DebugPrintf("%3.0f\t\t    %6.1f\n", fahr, celsius);
		fahr += STEP;
	}
	
	fahr = UPPER; //倒序打印
	while(fahr >= LOWER)                                   
	{                                                      
		celsius = 5 * (fahr - 32)/9;                       
		DebugPrintf("%3.0f\t\t    %6.1f\n", fahr, celsius);
   	    fahr -= STEP;
	}
	return 0;  
}


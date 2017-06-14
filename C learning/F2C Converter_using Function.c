//==============================================================================
//
// Title:       F2C Converter_using Function.c
// Purpose:     A short description of the implementation.
//
// Created on:  2014/1/23 at 19:31:35 by Nick.
// Copyright:   . All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

#include "F2C Converter_using Function.h"

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
		celsius = FToC(fahr);                             
		DebugPrintf("%3.0f\t\t    %6.1f\n", fahr, celsius);      
		fahr += STEP;                                            
	}                                                            
	                                                             
	     
	return 0;                                                    
}                                                                
                                                                 
float FToC(float fahr)               
{                                    
    float celsius = 0;               
	                                 
	celsius = 5.0 * (fahr - 32)/9;   
	return celsius;                  
}                                    

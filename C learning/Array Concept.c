//==============================================================================
//
// Title:       Array Concept.c
// Purpose:     A short description of the implementation.
//
// Created on:  2014/1/22 at 20:28:58 by Nick.
// Copyright:   . All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <formatio.h>
#include <stdio.h>
//#include "Array Concept.h"

//==============================================================================
// Constants

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
int ConnectArray (double *dSourceArray, double *dTargetArray, int length)
{
    int i,j;
	for(i=0;i<length;i++)
		dTargetArray[i+5] = dSourceArray[i];
	return 0;
}

int main()                                 
{                                      
	int c, i, nwhite, nother;
	int ndigit[10];
	double dSourceArray[5]    = {10.2, 21.1, 134.5, 314.5, 99.9};
	double dTargetArray[10]  = {100.2, 201.1, 1304.5, 3140.5, 990.9};
	int    length;
	
	length=sizeof(dSourceArray)/sizeof(dSourceArray[0]);
	
	ConnectArray(dSourceArray, dTargetArray,length);
	ArrayToFile ("waveform data.txt", dTargetArray, VAL_DOUBLE, 10, 2, VAL_GROUPS_TOGETHER, VAL_GROUPS_AS_COLUMNS, VAL_SEP_BY_TAB, 10, VAL_ASCII, VAL_TRUNCATE);
	
	
	return 0;
	
	/*
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	                                   
	while( (c = getchar()) != EOF) 
		if(c >= '0' && c <= '9')                  
			++ndigit[c - '0'];             
		else if( c == ' ' || c == '\n' || c == '\t')            
		    ++nwhite;            
		else                       
		    ++nother;
	
		printf("digits =");
		for( i = 0;i < 10; i++)
			printf(" %d", ndigit[i]);
		printf(", white space = %d, other = %d\n", nwhite, nother);
		*/
}                                      

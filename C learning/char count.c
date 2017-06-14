//==============================================================================
//
// Title:       char count.c
// Purpose:     A short description of the implementation.
//
// Created on:  2014/1/19 at 16:15:57 by Nick.
// Copyright:   . All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <stdio.h>
//#include "char count.h"

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
int Define_Your_Functions_Here (int x)
{
    return x;
}


main()
{
	long nc = 0;
	long space, tab, carrier;
	int c;
	
	space = 0;
	tab = 0;
	carrier = 0;
	
	/*
	while( getchar() != EOF)// 待增加不等于回车符计数功能
		++ nc;
	printf("%ld\n", nc);
	*/
	while( ( c = getchar()) != EOF)
	{
	
		if(c == ' ')
			++ space;
		else if( c == '\t')
			++ tab;
		else if( c == '\n')
			++carrier;
	}
	printf("the no. of space = %ld\nthe no. of tab = %ld\nthe no. of carrier = %ld\n", space, tab, carrier);
}
	

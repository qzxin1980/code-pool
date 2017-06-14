//==============================================================================
//
// Title:       EOF checking.c
// Purpose:     A short description of the implementation.
//
// Created on:  2014/1/19 at 15:34:33 by Nick.
// Copyright:   . All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <stdio.h>
//#include "EOF checking.h"

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
	int c;
	
	while(c = getchar() != EOF)
		printf("%d\n", c);
	printf("%d - @ EOF \n", c);
	
	if( (c = getchar()) == EOF)
		printf("%d\n", c);
	else
		printf("not EOF\n");
}


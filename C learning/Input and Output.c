//==============================================================================
//
// Title:       Input and Output.c
// Purpose:     A short description of the implementation.
//
// Created on:  2014/1/19 at 11:38:46 by Nick.
// Copyright:   . All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <stdio.h>
//#include "Input and Output.h"

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
	
	c = getchar();
	while( c != EOF)//ctrl+z means EOF
	{
		putchar(c);
		c = getchar();
	}
	
}

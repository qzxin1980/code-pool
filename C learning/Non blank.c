//==============================================================================
//
// Title:       Non blank.c
// Purpose:     A short description of the implementation.
//
// Created on:  2014/1/19 at 18:10:02 by Nick.
// Copyright:   . All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <stdio.h>
//#include "Non blank.h"

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
	int c = 0;
	int lastc = 0;
	
	while( (c = getchar()) != EOF)
	{
		if ( c != ' ')
			putchar(c);
		else 
			if ( lastc != ' ')
				putchar(c);
		lastc = c;
	
	}
}


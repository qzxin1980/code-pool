//==============================================================================
//
// Title:       Display invisible characters.c
// Purpose:     A short description of the implementation.
//
// Created on:  2014/1/20 at 19:43:25 by Nick.
// Copyright:   . All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files
#include <stdio.h>
//#include "Display invisible characters.h"

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
	
	while( (c = getchar()) != EOF)                                                                            
	{                                                                                                          
		if(c == '\t')                                                                                           
			printf("\\t");                                                                                          
		//else if( c == '\b')                                                                                    
			//printf("\\b");                                                                                                  
		else if( c == '\\')                                                                                    
		    printf("\\\\");
		else
		    putchar(c);
		    printf("%d", c);  
	}                                                                                                          
}                                                                                                              

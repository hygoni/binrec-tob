// ***************************************************************************** 
// Module: Test.c
// Description: Shows how to call Code Virtualizer Macros in PellesC
//
// Authors: Rafael Ahucha  
// (c) 2013 Oreans Technologies
// ***************************************************************************** 


// ***************************************************************************** 
//                   Libraries used by this module
// ******************************************************************************

#include <stdio.h>
#include "..\..\..\Include\C\VirtualizerSDK.h"


// ****************************************************************************** 
//                          Function prototypes
// ****************************************************************************** 


// ****************************************************************************** 
//                          Global variables
// ****************************************************************************** 


// *****************************************************************************
// Main
//
//  Main program function
//
// Inputs
//  None
// 
// Outputs
//  None
//
// Returns
//  Exit Code
// ******************************************************************************

int main(void)
{

   VIRTUALIZER_TIGER_WHITE_START

   printf("Hello, world!\n");
 
   VIRTUALIZER_TIGER_WHITE_END
   
   return 0;
 
}


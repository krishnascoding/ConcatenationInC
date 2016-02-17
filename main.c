//
//  main.c
//  Concatenation
//
//  Created by Krishna Ramachandran on 1/7/16.
//  Copyright © 2016 Krishna Ramachandran. All rights reserved.
//

/*
 Original problem - solve in C: 
 
 Concatenate an array of strings, even if they are empty, into one string. The length of the new string should equal the length of the original array of strings.
 */

#include <stdio.h>
#include <stdlib.h>

int stringLength (char *string)
{
    int length = 0;
    
    while (string[length] != '\0') {
        length++;
    }
    
    return length;
}


int main(int argc, const char * argv[]) {

    char *myArray [] = {"One", "word2","three", "fourth", "cinco", "string6"};
    int arrayLen = sizeof(myArray)/sizeof(myArray[0]);
    int newStringLen = 0;
    int k = 0;
    char *newString;
   
    // Get length of newString by adding length of each string in myArray
    
    for (int i = 0; i< arrayLen; i++) {
        
        for (int j = 0; j < stringLength(myArray[i]); j++) {
            
            newStringLen++;
        }
    }

    // Allocate enough memory to hold newString using length of k (all characters in array of strings)
    
    newString = malloc(sizeof(char) * newStringLen);
    
    // Update newString with strings from Array

    for (int i = 0; i< arrayLen; i++) {
       
        for (int j = 0; j < stringLength(myArray[i]); j++) {
            
            newString[k] = myArray[i][j];
            k++;
        }
        newString[k] = '\0';
    }
   
    // Pring new string
    
    printf("New String: %s\n", newString);

    
    return 0;
}

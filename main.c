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

    char *myArray [] = {"string1", "word2"," ", "fourth", "cinco", "6"};
    
    int arrayLen = sizeof(myArray)/sizeof(myArray[0]);
    int newStringLen = 0;
    char *newString = malloc((sizeof(char)* newStringLen)+5);
    int k = 0;
   

    for (int i = 0; i< arrayLen; i++) {
       
        for (int j = 0; j < stringLength(myArray[i]); j++) {
            
            newString[k] = myArray[i][j];
            k++;
        }
        newString[k] = '\0';
    }
   

    printf("%s\n", newString);
    printf("%d\n", arrayLen);

    
    return 0;
}

#include <stdio.h>
#include "binary_to_decimal.h"
#include <stdlib.h>
#include <string.h>

char text_input_binary_to_decimal[1000];


void binary_to_decimal(){
    system("clear");
    printf("Binary to Decimal\n\n");
    printf("Enter Binary you want to convert: \n");
    printf("> ");
    fgets(text_input_binary_to_decimal, sizeof(text_input_binary_to_decimal), stdin);  //get input
    text_input_binary_to_decimal[strcspn(text_input_binary_to_decimal, "\n")] = 0;  // remove enter



    // removes all blanks
    int j = 0;       
    for (int i = 0; text_input_binary_to_decimal[i]; i++) {
        if (text_input_binary_to_decimal[i] != ' ') {
            text_input_binary_to_decimal[j++] = text_input_binary_to_decimal[i];
        }
    }
    text_input_binary_to_decimal[j] = '\0';


    int len = strlen(text_input_binary_to_decimal);
    int result = 0;

    for (int i = 0; i < len; i++) {
        result = result * 2 + (text_input_binary_to_decimal[i] - '0'); 
    }    
    
    printf("%d", result);
    

    printf("\n");
    
};
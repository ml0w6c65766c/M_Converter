#include <stdio.h>
#include "binary_to_hex.h"
#include <stdlib.h>
#include <string.h>

char text_input_binary_to_hex[1000];
char chunk[5];

void binary_to_hex(){
    system("clear");
    printf("Binary to Hex\n\n");
    printf("Enter Binary you want to convert: \n");
    printf("> ");
    fgets(text_input_binary_to_hex, sizeof(text_input_binary_to_hex), stdin);  //get input
    text_input_binary_to_hex[strcspn(text_input_binary_to_hex, "\n")] = 0;  // remove enter



    // removes all blanks
    int j = 0;       
    for (int i = 0; text_input_binary_to_hex[i]; i++) {
        if (text_input_binary_to_hex[i] != ' ') {
            text_input_binary_to_hex[j++] = text_input_binary_to_hex[i];
        }
    }
    text_input_binary_to_hex[j] = '\0';


    for (int i = 0; i < strlen(text_input_binary_to_hex); i += 4) {  // for loop runs as long as the string goes
        strncpy(chunk, text_input_binary_to_hex + i, 4);  // copies 4 chars from position i
        chunk[4] = '\0';
        // compare chunk
        if (strcmp(chunk, "0000") == 0) printf("0");
        else if (strcmp(chunk, "0001") == 0) printf("1");
        else if (strcmp(chunk, "0010") == 0) printf("2");
        else if (strcmp(chunk, "0011") == 0) printf("3");
        else if (strcmp(chunk, "0100") == 0) printf("4");
        else if (strcmp(chunk, "0101") == 0) printf("5");
        else if (strcmp(chunk, "0110") == 0) printf("6");
        else if (strcmp(chunk, "0111") == 0) printf("7");
        else if (strcmp(chunk, "1000") == 0) printf("8");
        else if (strcmp(chunk, "1001") == 0) printf("9");
        else if (strcmp(chunk, "1010") == 0) printf("A");
        else if (strcmp(chunk, "1011") == 0) printf("B");
        else if (strcmp(chunk, "1100") == 0) printf("C");
        else if (strcmp(chunk, "1101") == 0) printf("D");
        else if (strcmp(chunk, "1110") == 0) printf("E");
        else if (strcmp(chunk, "1111") == 0) printf("F");
    
    }
    

    

    printf("\n");
    
};
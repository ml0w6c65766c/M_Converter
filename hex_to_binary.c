#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hex_to_binary.h"

char text_input_hex_to_binary[1000];
char binary[2];

void hex_to_binary(){
    system("clear");
    printf("Hex to Binary\n\n");
    printf("Enter Hex you want to convert(only Capital letters): \n");
    printf("> ");
    fgets(text_input_hex_to_binary, sizeof(text_input_hex_to_binary), stdin);
    text_input_hex_to_binary[strcspn(text_input_hex_to_binary, "\n")] = 0; // remove enter 



    // removes all blanks
    int j = 0;       
    for (int i = 0; text_input_hex_to_binary[i]; i++) {
        if (text_input_hex_to_binary[i] != ' ') {
            text_input_hex_to_binary[j++] = text_input_hex_to_binary[i];
        }
    }
    text_input_hex_to_binary[j] = '\0';


    for (int i = 0; i < strlen(text_input_hex_to_binary); i += 1) {  // for loop runs as long as the string goes
        strncpy(binary, text_input_hex_to_binary + i, 1);  // copies 4 chars from position i
        binary[1] = '\0';
        // compare chunk
        if (strcmp(binary, "0") == 0) printf("0000");
        else if (strcmp(binary, "1") == 0) printf("0001");
        else if (strcmp(binary, "2") == 0) printf("0010");
        else if (strcmp(binary, "3") == 0) printf("0011");
        else if (strcmp(binary, "4") == 0) printf("0100");
        else if (strcmp(binary, "5") == 0) printf("0101");
        else if (strcmp(binary, "6") == 0) printf("0110");
        else if (strcmp(binary, "7") == 0) printf("0111");
        else if (strcmp(binary, "8") == 0) printf("1000");
        else if (strcmp(binary, "9") == 0) printf("1001");
        else if (strcmp(binary, "A") == 0) printf("1010");
        else if (strcmp(binary, "B") == 0) printf("1011");
        else if (strcmp(binary, "C") == 0) printf("1100");
        else if (strcmp(binary, "D") == 0) printf("1101");
        else if (strcmp(binary, "E") == 0) printf("1110");
        else if (strcmp(binary, "F") == 0) printf("1111");
    
    }
    printf("\n");

}
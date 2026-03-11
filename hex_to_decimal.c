#include <stdio.h>
#include <string.h>

void hex_to_decimal(){

    char text_input_hex_to_decimal[1000];
    int decimal = 0;

    printf("Hex to Decimal\n\n");
    printf("Enter Hex to convert: \n");
    printf("> ");
    scanf("%s", text_input_hex_to_decimal);

    for(int i = 0; i < strlen(text_input_hex_to_decimal); i++){

        char c = text_input_hex_to_decimal[i];
        int value;

        if(c >= '0' && c <= '9')
            value = c - '0';
        else if(c >= 'A' && c <= 'F')
            value = c - 'A' + 10;
        else if(c >= 'a' && c <= 'f')
            value = c - 'a' + 10;

        decimal = decimal * 16 + value;
    }

    printf("Decimal: %d\n", decimal);
}
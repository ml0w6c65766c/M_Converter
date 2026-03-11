#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int text_input_decimal_to_hex;
char hex_output[1000];
int indx = 0;

void decimal_to_hex(){

    system("clear");
    printf("Decimal to Hex\n\n");
    printf("Enter Decimal to convert: \n");
    printf("> ");
    scanf("%d", &text_input_decimal_to_hex);

    indx = 0;

    while(text_input_decimal_to_hex > 0){

        int remainder = text_input_decimal_to_hex % 16;

        if(remainder < 10){
            hex_output[indx] = remainder + '0';
        }
        else{
            hex_output[indx] = remainder - 10 + 'A';
        }

        text_input_decimal_to_hex = text_input_decimal_to_hex / 16;
        indx++;
    }

    printf("0x");
    for(int k = indx - 1; k >= 0; k--){
        printf("%c", hex_output[k]);
    }

    printf("\n\n");
}
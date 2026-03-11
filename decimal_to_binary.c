#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int text_input_decimal_to_binary;
int binary_output[4000];
int i = 0;

void decimal_to_binary() {
    system("clear");
    printf("Decimal to Binary \n\n");
    printf("Enter decimal to convert: \n");
    printf("> ");
    scanf("%d", &text_input_decimal_to_binary);

    while(text_input_decimal_to_binary > 0) {
        binary_output[i] = text_input_decimal_to_binary % 2;
        text_input_decimal_to_binary = text_input_decimal_to_binary / 2;
        i++;

    }

    for(int j = i - 1; j >= 0; j-- ) {
        printf("%d", binary_output[j]);
    }
    printf("\n\n");
}
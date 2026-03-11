/*
Converter: 

binary to hex,     // done
binary to decimal, // done
decimal to binary, // done
decimal to hex,    // done
hex to binary,     // done  
hex to decimal     // progress

made by ml0w6c65766c
*/


// include header files
#include "binary_to_hex.h"
#include "hex_to_binary.h"
#include "binary_to_decimal.h"
#include "decimal_to_binary.h"
#include "decimal_to_hex.h"
#include "hex_to_decimal.h"


// include libs
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


char user_input[4];

void ascii_banner() {
    printf(
        "                                                               \n"
        "      __  ___   ______                           __           \n"
        "     /  |/  /  / ____/___  ____ _   _____  _____/ /____  _____\n"
        "    / /|_/ /  / /   / __ \\/ __ \\ | / / _ \\/ ___/ __/ _ \\/ ___/ \n"
        "   / /  / /  / /___/ /_/ / / / / |/ /  __/ /  / /_/  __/ /     \n"
        "  /_/  /_/   \\____/\\____/_/ /_/|___/\\___/_/   \\__/\\___/_/      \n"
        "                                                             \n"
        "  [*] M Converter  v0.1\n"
        "  [*] made by Github: https://github.com/ml0w6c65766c\n"
        "\n"
        "\n"
    );
}

void main_menu() {
    ascii_banner();

    printf("  ┌───────────────────────────────────────────────────────────┐\n");
    printf("  │                       Convert Options                     │\n");
    printf("  ├───────────────────────────────────────────────────────────┤\n");
    printf("  │                                                           │\n");
    printf("  │   [1] Binary to Hex                                       │\n");
    printf("  │   [2] Binary to Decimal                                   │\n");
    printf("  │                                                           │\n");
    printf("  │   [3] Decimal to Binary                                   │\n");
    printf("  │   [4] Decimal to Hex                                      │\n");
    printf("  │                                                           │\n");
    printf("  │   [5] Hex to Binary                                       │\n");
    printf("  │   [6] Hex to Decimal                                      │\n");
    printf("  │                                                           │\n");
    printf("  └───────────────────────────────────────────────────────────┘\n");
    printf("\n  > ");

    fgets(user_input, sizeof(user_input), stdin);
    user_input[strcspn(user_input, "\n")] = 0;
}


// main
int main() {
    
    main_menu();  
    if (strcmp(user_input, "1") == 0) {
        binary_to_hex();
    }

    else if (strcmp(user_input, "2") == 0) {
        binary_to_decimal();
    }

    else if (strcmp(user_input, "3") == 0) {
        decimal_to_binary();
    }

    else if (strcmp(user_input, "4") == 0) {
        decimal_to_hex();
    }

    else if (strcmp(user_input, "5") == 0) {
        hex_to_binary();
    }

    else if (strcmp(user_input, "6") == 0) {
        hex_to_decimal();
    }

    
        
        
        
    else {
        printf("Ungültige Eingabe!\n");
    }

    
    return 0;  
}
#include "print.h"

void kernel_main(){
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to out 64-bit kernel\n");
    print_set_color(PRINT_COLOR_LIGHT_BLUE , PRINT_COLOR_BLACK);
    print_str("*****  *****\n");
    print_str("*****  *****\n");
    print_str("*****  *****\n\n");
    print_str("*****  *****\n");
    print_str("*****  *****\n");
    print_str("*****  *****\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("Please Wait Loading the Kernel into Memory\n");
    print_str(":-)\n");
}
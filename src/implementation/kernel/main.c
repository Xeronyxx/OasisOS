#include "print.h"

void kernel_main() {
    print_clear();
    print_set_colour(PRINT_COLOUR_WHITE, PRINT_COLOUR_BLACK);
    print_str("From one OS to another...\nOasisOS.\nInput a command\n> ");
}
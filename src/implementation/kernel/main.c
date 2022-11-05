#include "print.h"
extern getch;

void kernel_main() {
    print_clear();
    print_set_colour(PRINT_COLOUR_WHITE, PRINT_COLOUR_BLACK);
    print_str("From one OS to another...\nFinestOS.\nInput a command\n> ");
}

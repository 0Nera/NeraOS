#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <init.h>

void _start() {
    main();
    
    for (;;) {
        asm volatile("hlt");
    }
}
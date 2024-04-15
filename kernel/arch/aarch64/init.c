#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <limine.h>

static volatile LIMINE_BASE_REVISION(1);


static volatile struct limine_framebuffer_request framebuffer_request = {
    .id = LIMINE_FRAMEBUFFER_REQUEST,
    .revision = 0
};

void _start() {

    for (;;) {
        asm volatile("wfi");
    }
}
#include <stm32f1xx.h>
#include <stdio.h>

/* semihosting Initializing */
extern void initialise_monitor_handles(void);

int main(void)
{
    initialise_monitor_handles();   /* This Function MUST come before the first printf() */
    printf("Hello, world!\n");
    fflush(stdout);
}
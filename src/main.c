/*
    ARM Cortex M3 STM32 Bluepill Semihosting-Enabled Project by Mohammed Alsada
    GitHub: https://github.com/mohalsa

    Please follow the instructions carefully!
    First Connect Your STlink debugger to USB and to the bluepill board (Drivers must be installed before, if needed.).
    Then:
    1- Open Command Palette by holding "CMD + SHIFT + P" in Mac OS machines and "CTRL + SHIFT + P" or just click on "View" then "Command Palette...".
    2- Type "Tasks: Run Task" without the double qoutation marks and select it by pressing Enter.
    3- Select "OpenOCD (Allow semihosting output)".
    3.1- This Task Should run once when loading the project. If you try to run it again you'll get "The task 'OpenOCD (Allow semihosting output) (0-SemiHosting_Configurations)' is already active." message
    4- A terminal view will indicate a successfull connection with a final message of "Info : Listening on port 3333 for gdb connections".
    5- Click on the "Run and Debug" Icon (Left Side) or SHIFT+CMD+D (Mac OS) or SHIFT+CTRL+D (Windows OS)
    6- Click "Start Debugging" the green arrow (Top left), next to PIO Debug.
    7- Debugging session will start.
    8- In Terminal window, press any key to show the debugging info + the printf messages.

*/

#include <stm32f1xx.h>
#include <stdio.h>

/* semihosting Initializing */
extern void initialise_monitor_handles(void);

int main(void)
{
    initialise_monitor_handles();   /* This Function MUST come before the first printf() */
    printf("Hello, world!\n");
    fflush(stdout);                 /* Needed to display the printf message */
}
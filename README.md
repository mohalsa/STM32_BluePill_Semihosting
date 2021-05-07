# Enabling Semihosting Printf() debugging in Vscode + PlatformIO for ARM CORTEX STM32 BLUEPILL board

ARM Cortex M3 STM32 Bluepill Semihosting-Enabled PlatformIO Project by Mohammed Alsada
Please first read all instructions, then follow them carefully!

**Connection:**

![bluepill_connections_stlink](https://user-images.githubusercontent.com/83306663/117422706-95b2ae80-af28-11eb-863c-024f09d68188.png)
credits:https://www.onetransistor.eu/2020/01/stm32-bluepill-arduino-support.html


**Ignore the optional "Enable Hardware rest mode" Line and don't connect it, and connect the rest of the wires as shown in the image.**

0- Connect Your STlink debugger to USB and to the bluepill board (Drivers must be installed before, if needed.).

1- Open Command Palette by holding "CMD + SHIFT + P" in Mac OS machines and "CTRL + SHIFT + P" or just click on "View" then "Command Palette...".

2- Type "Tasks: Run Task" without the double qoutation marks and select it by pressing Enter.

3- Select "OpenOCD (Allow semihosting output)".

4- This Task Should run once when loading the project. If you try to run it again you'll get "The task 'OpenOCD (Allow semihosting output) (0-SemiHosting_Configurations)' is already active." message

5- A terminal view will indicate a successfull connection with a final message of "Info : Listening on port 3333 for gdb connections".

6- Put a breakpoint on "int main(void" in the "main.c" file. 

7- Click on the "Run and Debug" Icon (Left Side) or SHIFT+CMD+D (Mac OS) or SHIFT+CTRL+D (Windows OS)

8- Click "Start Debugging" the green arrow (Top left), next to PIO Debug.

9- Debugging session will start and will halt on the reset handler file, click on "continue" or press "F5" to move to the breakpoint in the main.c file 

10- Failing to placing a breakpoint in the main.c file will lead the debugging session to hang!

11- In Terminal window, press any key to show the debugging info + the printf messages.

Enjoy a Painless debugging session ;)

Please let me know if there are any issues. Thank you!

# Time-and-Hardware-Interrupt-Handler

# What is an Interrupt?

Interrupts are signals sent to the CPU by external devices, normally I/O devices. They tell the CPU to stop its current activities and execute the appropriate part of the operating system.
Interrupts are important because they give the user better control over the computer. 
Without interrupts, a user may have to wait for a given application to have a higher priority over the CPU to be ran. This ensures that the CPU will deal with the process immediately.

# Interrupt handling

An interrupt handler, also known as an interrupt service routine or ISR, is a special block of code associated with a specific interrupt condition.
Interrupt handlers are initiated by hardware interrupts, software interrupt instructions, or software exceptions, and are used for implementing device drivers or transitions between protected modes of operation, such as system calls.

# Execution:
Displays messages when hardware or time induced interrupts are sent. 
CTRL + Z or CTRL + C interrupts along with time interrupts will be handled. 
Program stops when CTRL+Z is pressed.

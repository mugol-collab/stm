CC=arm-none-eabi-gcc
MACH=cortex-m3
CFLAGS= -c -mcpu=$(MACH)	-mthumb	-std=gnu11 -O0 

main.o:main.c
	$(CC)	$(CFLAGS)	-o $@ $^ 
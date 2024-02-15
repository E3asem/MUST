build1:
	gcc -E main.c -o main.i
	gcc -S main.c -o main.asm
	gcc -c main.c -o main.o
	gcc main.c -o main.exe
	gcc main.c -o main.elf
	gcc main.c -o main.hex
	
build2:
	gcc -E calc.c -o calc.i
	gcc -S calc.c -o calc.asm
	gcc -c calc.c -o calc.o

		
	
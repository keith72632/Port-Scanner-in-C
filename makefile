main: main.c 
	gcc -o main main.c port_scanner.c port_scanner.h -Wall
clean:
	rm -rf main
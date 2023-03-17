default:
	gcc -Wall -o prog main.c arrays.c  
debug:
	gcc -Wall -o prog -g main.c arrays.c 
clean:
	rm -f prog

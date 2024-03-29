all: import

import: import.o bu.o ins.o se.o quick.o merge.o
	gcc import.o bu.o ins.o se.o quick.o merge.o -o import

import.o: import.c
	gcc -c import.c 
bu.o: bu.c
	gcc -c bu.c  
ins.o: ins.c
	gcc -c ins.c
se.o: se.c
	gcc -c se.c
quick.o: quick.c
	gcc -c quick.o
merge.o: merge.c
	gcc -c merge.o

clean:
	rm -rf *.o

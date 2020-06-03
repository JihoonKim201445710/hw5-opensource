test.out : phoneBookMain.o register.o search.o delete.o link.o save_data.o
	gcc -o test.out phoneBookMain.o register.o search.o delete.o link.o save_data.o

phoneBookMain.o : phoneBookMain.c
	gcc -c -o phoneBookMain.o phoneBookMain.c

register.o : register.c
	gcc -c -o register.o register.c

search.o : search.c
	gcc -c -o search.o search.c

delete.o : delete.c
	gcc -c -o delete.o delete.c

link.o : link.c
	gcc -c -o link.o link.c

save_data.o : save_data.c
	gcc -c -o save_data.o save_data.c

clean :
	rm *.o test.out

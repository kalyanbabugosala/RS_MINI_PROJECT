App: main.o add.o view.o modify.o delete.o
	$(CC) main.c add.c view.c modify.c delete.c -o $@
%.o:%.c
	$(CC) -c $< 
clean:
	rm -f *.o
	rm -f App	

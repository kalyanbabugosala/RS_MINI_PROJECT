App: main.o add.o view.o modify.o delete.o TSIndia_Emp_DB.o
	$(CC) -g main.c add.c view.c modify.c delete.c TSIndia_Emp_DB.c -o $@
%.o:%.c
	$(CC) -c $< 
clean:
	rm -f *.o
	rm -f App	

app:app.c add.o sub.o myarith.h
	gcc app.c -o app libmy_arith.a

add.o:add.c
	gcc -c add.c
sub.o:sub.c
	gcc -c sub.c
clean:
	rm *.o app
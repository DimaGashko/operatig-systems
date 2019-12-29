default: area

area: libarea.a
	gcc main.c libarea.a -o main -lm

libarea.a: area.o
	ar -rcv $@ $^
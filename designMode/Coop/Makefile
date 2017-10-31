exe: main.o classA.o
	gcc -o exe main.o classA.o

main.o: classA.h

classA.o: classA.h

.PHONE: clean
clean:
	rm -fr *.o exe

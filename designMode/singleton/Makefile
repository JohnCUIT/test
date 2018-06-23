singleton: csingleton.o main.o
	gcc -o singleton csingleton.o main.o

csingleton.o: csingleton.h

main.o: csingleton.h

.PHONY: clean

clean:
	rm -fr *.o singleton

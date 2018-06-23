list: node.o list.o main.o
	gcc -o list node.o list.o main.o

node.o:

list.o: node.o

main.o: node.o list.o

.PHONY: clean

clean:
	rm -fr list *.o

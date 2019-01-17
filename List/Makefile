target = lib/liblist.so

VPATH = src:include
CFLAG = -I ./include

objects = src/list.o src/node.o

all: $(objects)
	gcc -shared -o ${target} $(objects)

$(objects): %.o: %.c
	gcc -c -fPIC $(CFLAG) $< -o $@

.PHONY: clean

clean:
	rm -fr ${target} $(objects)

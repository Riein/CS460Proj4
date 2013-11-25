COPTS = -std=gnu99
PROG = DLSim

all: $(PROG)

$(PROG): main.o
	gcc $^ -o $(PROG)

main.o: main.c
	gcc $(COPTS) -c main.c

clean:
	rm -rf *.o $(PROG)


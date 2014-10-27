CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0
LIBS =

BINARIES = decipher

all: $(BINARIES)

decipher: caesar.o decipher.o
	${CC} $(LFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f *.o

veryclean: clean
	rm -f $(BINARIES)

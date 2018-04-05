CC=g++
CFLAGS=-c -Wall
#-Iпутькinclude
LDFLAGS=
#-Lпутькlib -lбиб1 -lбиб2
SOURCES=circle.cpp output.cpp quadrangle.cpp triangle.cpp check.cpp poligon.cpp figure.cpp laba6.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab6

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

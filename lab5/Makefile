CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=circle.cpp check.cpp output.cpp quadrangle.cpp triangle.cpp laba5.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab5

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
  $(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp check.h circle.h figure.h output.h quadrangle.h triangle.h poligon.h
  $(CC) $(CFLAGS) $< -o $@

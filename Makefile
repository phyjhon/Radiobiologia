CXX = g++
CXXFLAGS = -Wall -std=c++2b -g -pthread # Añadido -pthread
LDFLAGS = -pthread # Añadido -pthread


TARGET = main
SRCS = main.cpp Fecha.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(TARGET) $(OBJS)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
CXX = g++
CXXFLAGS = -std=c++23 -O2 -flto -Wall -Wextra -Wpedantic
TARGET = ./out/Programlinkedlist
OBJS = main.o Linkedlist.o

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Linkedlist.h
	$(CXX) $(CXXFLAGS) -c main.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	$(CXX) $(CXXFLAGS) -c Linkedlist.cpp

clean:
	rm -f $(OBJS) $(TARGET)

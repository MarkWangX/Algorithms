CC := gcc
CFLAGS := -Wall -g
TARGET := HeapSort
OBJS := HeapSort.o main.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

main.o: main.c HeapSort.h
	$(CC) $(CFLAGS) -c main.c

HeapSort.o: HeapSort.h
	$(CC) $(CFLAGS) -c HeapSort.c

clean:
	rm -f $(OBJS) $(TARGET)
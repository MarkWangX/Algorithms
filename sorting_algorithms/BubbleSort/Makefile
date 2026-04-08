CC := gcc
CFLAGS := -Wall -g
TARGET := BubbleSort
OBJS := BubbleSort.o main.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

main.o: main.c BubbleSort.h
	$(CC) $(CFLAGS) -c main.c

BubbleSort.o: BubbleSort.c BubbleSort.h
	$(CC) $(CFLAGS) -c BubbleSort.c

clean:
	rm -f $(OBJS) $(TARGET)
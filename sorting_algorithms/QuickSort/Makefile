CC := gcc
CFLAGS := -Wall -g
TARGET := QuickSort
OBJS := QuickSort.o main.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

main.o: main.c QuickSort.h
	$(CC) $(CFLAGS) -c main.c

InsertSort.o: QuickSort.h
	$(CC) $(CFLAGS) -c QuickSort.c

clean:
	rm -f $(OBJS) $(TARGET)
CC := gcc
CFLAGS := -Wall -g
TARGET := InsertSort
OBJS := InsertSort.o main.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

main.o: main.c InsertSort.h
	$(CC) $(CFLAGS) -c main.c

InsertSort.o: InsertSort.h
	$(CC) $(CFLAGS) -c InsertSort.c

clean:
	rm -f $(OBJS) $(TARGET)
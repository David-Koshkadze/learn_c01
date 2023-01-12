CC=gcc
TARGET=main

all:
	$(CC) -Wall main.c -o $(TARGET)

word_count:
	$(CC) -Wall word_counting.c i2o_functions.c -o word_counting

char_count:
	$(CC) -Wall character_counting.c i2o_functions.c -o character_counting

i2o:
	$(CC) -Wall i2o.c -o i2o 

clean:
	rm *.o $(TARGET)
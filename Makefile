TARGET	= test_0
FLAG	= -Wall
LIB		=
OBJ		= main.o
CC		= gcc

$(TARGET):$(OBJ)
	$(CC) $(FLAG) -o $(TARGET) $(LIB) $(OBJ)

all:
	$(TARGET)

clean:
	rm -rf $(OBJ) $(TARGET)





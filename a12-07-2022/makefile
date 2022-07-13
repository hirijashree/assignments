CC = g++
CPPFLAGS = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: app

app: $(OBJ)main.o $(OBJ)
		$(CC) -o app $(OBJ)main.o  
			mv app $(BIN) 

$(OBJ)Main.o: $(SRC)main.cpp
		$(CC) $(CPPFLAGS) $(SRC)main.cpp -I $(INCLUDE)
			mv main.0 $(OBJ)


clean:
		rm -f a.out app *.o
		rm -f $(OBJ)*.o
		rm -f $(BIN)app

CC=g++
CPPFLAGS = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: app

app: $(OBJ)main.o 
		$(CC) -o app $(OBJ)main.o 
		mv app $(BIN) 

$(OBJ)Main.o: $(SRC)main.cpp
		$(CC) $(CPPFLAGS) $(SRC)main.cpp -I $(INCLUDE)
			mv main.o $(OBJ)


clean:
		rm -f a.out app *.o
	        rm -f $(OBJ)*.o
		rm -f $(BIN)app

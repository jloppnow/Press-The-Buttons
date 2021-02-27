CC = C:/gbdk/bin/lcc
CFLAGS = -Wa-l -Wl-m -Wl-j
CGBFLAG = -Wl-yp0x143=0x80

SRC = ./src
ASSETS = ./assets

define compile-source
	$(CC) $(CFLAGS) -c $<
endef

default: PTB.gb

OBJ = main.o state_manager.o splash_logo_data.o splash_logo_map.o 

main.o: $(SRC)/main.c
	${compile-source}

state_manager.o: $(SRC)/state_manager.c $(SRC)/state_manager.h
	${compile-source}

splash_logo_data.o: $(ASSETS)/splash_logo_data.c $(ASSETS)/splash_logo_data.h
	${compile-source}

splash_logo_map.o: $(ASSETS)/splash_logo_map.c $(ASSETS)/splash_logo_map.h
	${compile-source}

PTB.gb: $(OBJ) 
	$(CC) $(CFLAGS) $(CGBFLAG) $^ -o $@

clean:
	rm *.o
	rm *.lst
	rm *.sym
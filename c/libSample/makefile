CC = gcc
AR = ar
RANLIB = ranlib

SRC_PATH = ./src
INC_PATH = ./inc
BIN_PATH = ./bin
OBJ_LIBSAMPLE_PATH = $(BIN_PATH)/libSample.o
LIB_LIBSAMPLE_PATH = $(BIN_PATH)/libSample.a

CFLAGS_STATIC = -g -Wall
CFLAGS_SHARED = -fPIC -g -Wall -lc

RM = rm -f
SUDO = sudo

all: clean libSample_Static libSample_Shared
	-$(RM) $(BIN_PATH)/*.o

libSample_Static:
	@echo "=== libSample_Static =============================="
	-$(RM) $(BIN_PATH)/*.o
	$(CC) -c -o$(OBJ_LIBSAMPLE_PATH) -I$(INC_PATH) $(SRC_PATH)/libSample.c $(CFLAGS_STATIC)
	$(AR) rc $(LIB_LIBSAMPLE_PATH) $(OBJ_LIBSAMPLE_PATH)
	$(RANLIB) $(LIB_LIBSAMPLE_PATH)

libSample_Shared:
	@echo "=== libSample_Shared =============================="
	-$(RM) $(BIN_PATH)/*.o
	$(CC) -c -o$(OBJ_LIBSAMPLE_PATH) -I$(INC_PATH) $(SRC_PATH)/libSample.c $(CFLAGS_SHARED)
	$(CC) -shared -Wl,-soname,libSample.so -o $(BIN_PATH)/libSample.so.0.0.1 $(OBJ_LIBSAMPLE_PATH)
	@echo
	@echo ">>> UPDATE LDCONFIG <<<"
	@echo

clean:
	@echo "=== clean ========================================="
	$(RM) $(BIN_PATH)/*

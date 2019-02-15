CC = gcc

SRC_PATH = ./src
INC_PATH = -I ./inc -I./libSample/inc
BIN_PATH = ./bin

CFLAGS = -g -Wall -std=c11 -D_XOPEN_SOURCE=700 -D_POSIX_C_SOURCE=200809L -D_POSIX_SOURCE=1 -D_DEFAULT_SOURCE=1 -D_GNU_SOURCE=1

RM = rm -f
CPPCHECK = cppcheck
CPPCHECK_OPTS = --enable=all --std=c11 --platform=unix64 --language=c --check-config --suppress=missingIncludeSystem
CPPCHECK_NOT_SCANS = -i ./lib -i ./bin

CSCOPE = cscope
CSCOPE_OPTS = -b -R

CTAGS = ctags
CTAGS_OPTS = -R

LIBS_STATIC = -lSample
LIBS_SHARED = -lSample
LIBS_PATH = -L ./libSample/bin
LIBS_INC_PATH = -I ./lib/inc


all: clean cppcheck c
	@echo "=== ctags ========================================="
	-$(CTAGS) $(CTAGS_OPTS) *

	@echo "=== cscope ========================================"
	-$(CSCOPE) $(CSCOPE_OPTS)

c:
	@echo "=== c ============================================="
	$(CC) -o $(BIN_PATH)/main_static $(SRC_PATH)/main.c $(SRC_PATH)/src1.c $(INC_PATH) $(LIBS_PATH) $(LIB_INC_PATH) $(LIBS_STATIC) $(CFLAGS)
	$(CC) -o $(BIN_PATH)/main_shared $(SRC_PATH)/main.c $(SRC_PATH)/src1.c $(INC_PATH)              $(LIB_INC_PATH) $(LIBS_SHARED) $(CFLAGS)

sampleLib:
	@echo "=== lib ==========================================="
	(cd ./libSample; make)

cppcheck:
	@echo "=== cppcheck ======================================"
	$(CPPCHECK) $(CPPCHECK_OPTS) $(CPPCHECK_NOT_SCAN_PATHS) $(INC_PATH) $(SRC_PATH)/*

clean:
	@echo "=== clean ========================================="
	-$(RM) $(BIN_PATH)/* ./cscope.out ./tags

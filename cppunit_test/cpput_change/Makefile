
# Build CPP unit example test
# see ...


IDIR =src include test
GPP=g++
GCC=gcc
CFLAGS=-I$(IDIR)
SRC := $(wildcard src/*.c)
OBJ  := $(SRC:src/%.c=tmp/%.o)
SRC_TEST := $(wildcard test/*.cpp)
LDFLAGS= -lcppunit
EXEC_TEST     := test
EXEC := change.bin

OBJ_TEST := $(filter-out tmp/change_main.o, $(OBJ)) $(SRC_TEST:test/%.cpp=tmp/%.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	@$(GCC) $^ -o $@ && echo "[OK]  $@"

# --------------------------------------------------------------

.PHONY: test
test: $(OBJ_TEST)
	echo "**************************"
	@$(GPP) -o cppunit_example.bin $(LDFLAGS) $^ && echo "[OK]  $@"

tmp/%.o: src/%.c
	echo "compiling source $< to $@"
	@$(GCC) -c $< $(CFLAGS) -o $@ && echo "[OK]  $@"

tmp/%.o: test/%.cpp
	echo "compiling test $<"
	@$(GPP) -c $< $(CFLAGS) -o $@ && echo "[OK]  $@"


clean:
	rm tmp/*o *.bin

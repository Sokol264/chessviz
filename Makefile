COMPILER = gcc
FLAGS =  -Wall -Werror

.PHONY: clean all test


all: bin/main

test: bin/main-test

-include build/*.d

bin/main: build/main.o build/board.o build/cmove.o build/figures.o
	$(COMPILER) $(FLAGS) -o $@ $^ 

build/main.o: src/main.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

build/board.o: src/board.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

build/cmove.o: src/cmove.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

build/figures.o: src/figures.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

-include test/*.d

bin/main-test: build-test/main.o build-test/figures.o build-test/test.o
	$(COMPILER) $(FLAGS) -o $@ $^

build-test/main.o: test/main.c
	$(COMPILER) -I thirdparty -I src $(FLAGS) -MMD -c -o $@ $<

build-test/test.o: test/test.c
	$(COMPILER) -I thirdparty -I src $(FLAGS) -MMD -c -o $@ $<

build-test/figures.o: src/figures.c
	$(COMPILER) -I thirdparty -I src $(FLAGS) -MMD -c -o $@ $<



clean:
	rm build/*

clean-test:
	rm build-test/*
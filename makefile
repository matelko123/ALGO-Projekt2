SRCDIR := \src
BINDIR := \bin

SOURCES := $(shell find $(SRCDIR) -name "*.cpp")
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

CC 			:= g++ -std=c++11
FLAGS		:= -pedantic -Wc++11-extensions -Wall -Werror 
CC-FLAGS	:= $(CC) $(FLAGS)

ALLFILES := $(SOURCES)

.PHONY: all

all: clean sts2msw
	./out

sts2msw: $(OBJECTS)
	$(CC-FLAGS) $^ -o out

clean:
	rm -rf $(OBJECTS) out
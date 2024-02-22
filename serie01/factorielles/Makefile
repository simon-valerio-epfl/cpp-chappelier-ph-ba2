CC = $(CXX)
CXXFLAGS = -std=c++11 -pedantic -Wall

all: factorielleRecursive factorielleIterative

factorielleRecursive: factmain.o factorielleRecursive.o demander_nombre.o
factorielleIterative: factmain.o factorielleIterative.o demander_nombre.o

factorielleRecursive.o: factorielleRecursive.cc factorielle.h
factorielleIterative.o: factorielleIterative.cc factorielle.h

factmain.o: factmain.cc factorielle.h demander_nombre.h

demander_nombre.o: demander_nombre.cc demander_nombre.h

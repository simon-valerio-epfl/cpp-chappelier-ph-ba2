CC = $(CXX)
CXXFLAGS = -std=c++11 -pedantic -Wall

all: factorielleRecursive factorielleIterative

factorielleRecursive: factmain.o factorielleRecursive.o demander_nombre.o
factorielleIterative: factmain.o factorielleIterative.o demander_nombre.o

# it's useful to include .h files even if they are not strictly required
# in order to make sure that the .o files are recompiled when the .h files change
factorielleRecursive.o: factorielleRecursive.cc factorielle.h
factorielleIterative.o: factorielleIterative.cc factorielle.h

factmain.o: factmain.cc factorielle.h demander_nombre.h

demander_nombre.o: demander_nombre.cc demander_nombre.h

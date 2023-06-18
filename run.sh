#!/bin/bash

# Bison command
bison -d grammar.y

# Flex command
flex lexical.l

# GCC commands
gcc -c lex.yy.c -o lex.yy.o
gcc -c grammar.tab.c -o grammar.tab.o

# Linking
gcc lex.yy.o grammar.tab.o -o myParser.exe


# clear
# Run the parser
./myParser.exe CodeXML.xml


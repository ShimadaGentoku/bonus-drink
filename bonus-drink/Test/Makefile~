# "CUnit for Mr.Ando" is CppUnit-x based C langage testing framework
# for Mr.Ando. It provide the C source code for unit testing. 
# Copyright (C) 2004 Toshikazu Ando.
# 
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
# 
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

#CC=lint
CC=gcc
INCLUDE_OBJ =\
   -I../../TestRunner\
   -I../Target\
   -I./include
OBJS = \
   drink.o\
   drinkTest.o\
   testRunner.o
CFLAG_LM  = ${CFLAG} -ggdb -Wall
CFLAG_OBJ = ${CFLAG} -ggdb -Wall

#
LIB_X   = ${LIB}

LM = ./runExe.exe

#
all: ${LM}
#
${LM}: ${OBJS}
    ${CC} ${CFLAG_LM} ${CFLAG_OBJ} ${INCLUDE_OBJ} -o ${LM} ${OBJS} ${LIB_X}
#
drink.o: ../Target/drink.c
  ${CC} ${CFLAG_OBJ} ${INCLUDE_OBJ} -c ../Target/drink.c
drinkTest.o: ./drinkTest.c
  ${CC} ${CFLAG_OBJ} ${INCLUDE_OBJ} -c ./drinkTest.c
testRunner.o: ../../TestRunner/testRunner.c
  ${CC} ${CFLAG_OBJ} ${INCLUDE_OBJ} -c ../../TestRunner/testRunner.c
#
#
clean:
  rm -rf ${LM} ${OBJS}
#
run: all
  ${LM}
#

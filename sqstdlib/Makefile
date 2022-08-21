SQUIRREL= ..


CC?= gcc
OUT?= $(SQUIRREL)/lib/libsqstdlib.a
INCZ?= -I$(SQUIRREL)/include -I. -Iinclude
DEFS= $(CC_EXTRA_FLAGS)
LIB=

OBJS= \
	sqstdmath.o \
	sqstdstring.o \
	sqstdrex.o

SRCS= \
	sqstdmath.cpp \
	sqstdstring.cpp \
	sqstdrex.cpp

sq32:
	$(CC) -O2 -fno-exceptions -fno-rtti -Wall -fno-strict-aliasing -c $(SRCS) $(INCZ) $(DEFS)
	ar rc $(OUT) *.o
	rm *.o

sqprof:
	$(CC) -O2 -pg -fno-exceptions -fno-rtti -pie -gstabs -g3 -Wall -fno-strict-aliasing -c $(SRCS) $(INCZ) $(DEFS)
	ar rc $(OUT) *.o
	rm *.o

sq64:
	$(CC) -O2 -m64 -fno-exceptions -D_SQ64 -fno-rtti -Wall -fno-strict-aliasing -c $(SRCS) $(INCZ) $(DEFS)
	ar rc $(OUT) *.o
	rm *.o

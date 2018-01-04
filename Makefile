CXXFLAGS	+= -g -Wall --pedantic
LDFLAGS		+= -lboost_date_time -lboost_system
LINK.o		 = $(LINK.cc)

all: test

test: test.o logging.o

logging.o: logging.cpp logging.h

test.o: test.cpp logging.h

clean:
	-rm -f *.o

distclean: clean
	-rm -f test

.PHONY: all clean distclean

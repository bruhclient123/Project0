CXX = g++
CXXFLAGS = -std=c++17 -g -Wall -O2

PROG ?= test

OBJS = HelloWorld.o test.o

mainprog: $(PROG)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(PROG): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean:
	rm -rf $(PROG) *.o *.out

rebuild: clean all test

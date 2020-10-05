test.out: rot13.o rot13_test.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -std=c++11 -c $<

runTest: test.out
	./test.out

test.out: rot13.o rot13_test.o
	g++ -o $@ $^

rot13.o: rot13.cpp
	g++ -std=c++11 -c $<

rot13_test.o: rot13_test.cpp
	g++ -std=c++11 -c $<

runTest: test.out
	./test.out
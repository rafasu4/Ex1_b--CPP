#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

OBJECTS=snowman.o
SOURCES=snowman.cpp

run: test
	./$^
	
main: main.o snowman.o
	$(CXX) $(CXXFLAGS) -o main main.o snowman.o

main.o: main.cpp 
	$(CC) $(FLAGS) -c main.cpp

snowman.o: snowman.cpp
	$(CC) $(FLAGS) -c snowman.cpp
	
test: TestRunner.o StudentTest1.o StudentTest2.o StudentTest3.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

StudentTest1.cpp:  # Yosef Danan
	curl https://raw.githubusercontent.com/YD5463/System-Programing-2/master/Test.cpp > $@

StudentTest2.cpp: # Shlomo Glick
	curl https://raw.githubusercontent.com/shlomog12/ex1_partA/main/Test.cpp > $@

StudentTest3.cpp: # Eviatar Nachshoni
	curl https://raw.githubusercontent.com/EN555/EX1-c-/master/Test.cpp > $@

tidy:
	clang-tidy $(SOURCES) -checks=bugprone-*,clang-analyzer-*,cppcoreguidelines-*,performance-*,portability-*,readability-* --warnings-as-errors=* --

clean:
	rm -f *.o test main
	rm -f StudentTest*.cpp

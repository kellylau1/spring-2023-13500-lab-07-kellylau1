CXXFLAGS +=-std=c++11

main: main.o indent.o unindent.o funcs.o 
	g++ -o main main.o indent.o unindent.o funcs.o 

main.o: main.cpp indent.h unindent.h funcs.h 

indent.o: indent.cpp indent.h 
	g++ -g -c indent.cpp

unindent.o: unindent.cpp unindent.h 
	g++ -g -c unindent.cpp

clean:
	rm -f main.o indent.o unindent.o funcs.o


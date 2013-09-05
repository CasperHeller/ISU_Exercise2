EXECUTABLE = hello
CXX = g++

all: hello.o
	${CXX} -o ${EXECUTABLE} hello.o
	
hello.o: hello.cpp
	${CXX} -c hello.cpp
	
clean:
	@rm hello.o ${EXECUTABLE}
	
help:
	@echo all clean help
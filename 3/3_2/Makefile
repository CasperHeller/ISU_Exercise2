SOURCES = main.cpp part1.cpp part2.cpp
OBJECTS= ${SOURCES:.cpp=.o}
EXECUTABLE = parts
CXX = g++

all: ${OBJECTS}
	${CXX} -o ${EXECUTABLE} ${OBJECTS}
	
%.o: %.cpp
	${CXX} -c -o $@ $^

clean:
	@rm ${OBJECTS} ${EXECUTABLE}
	
help:
	@echo all clean help
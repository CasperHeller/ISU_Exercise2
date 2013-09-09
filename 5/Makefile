SOURCES = time.cpp
OBJECTS= ${SOURCES:.cpp=.o}
EXECUTABLE = time
CXX = g++

all: ${OBJECTS}
	${CXX} -o ${EXECUTABLE} ${OBJECTS}
	
%.o: %.cpp
	${CXX} -c -o $@ $^

clean:
	@rm ${OBJECTS} ${EXECUTABLE}
	
help:
	@echo all clean help ${EXECUTABLE}
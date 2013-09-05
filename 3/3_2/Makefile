SOURCES = main.cpp part1.cpp part2.cpp
OBJECTS= $(SOURCES:.cpp=.o)
EXECUTABLE = parts
CXX = g++

all: $(OBJECTS)
	$(CXX) -o $(EXECUTABLE) $(OBJECTS)
	
main.o: $(SOURCES)
	$(CXX) -c $(SOURCES)
	
part1.o: $(SOURCES)
	$(CXX) -c $(SOURCES)
	
part2.o: $(SOURCES)
	$(CXX) -c $(SOURCES)

clean:
	@rm $(OBJECTS) $(EXECUTABLE)
	
help:
	@echo all clean help
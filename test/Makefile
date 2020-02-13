MAKEFILE_PATH:=$(abspath $(lastword $(MAKEFILE_LIST)))
ROOT_DIR:=$(realpath $(dir $(MAKEFILE_PATH)))
CXXFLAGS=-c -std=c++11 -Wall -O2 -I$(ROOT_DIR)/../include
SOURCES=$(ROOT_DIR)/main.cpp
BASE_NAMES=$(basename $(SOURCES))
OBJECTS=$(BASE_NAMES:=.o)
EXECUTABLE=test

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) $(LDFLAGS) -o $(ROOT_DIR)/$@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	$(RM) $(ROOT_DIR)/$(EXECUTABLE) $(ROOT_DIR)/*.o
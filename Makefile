CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++20 -O2
LDFLAGS := -lfinal

# Find all .cpp files in the current directory
SRCS := $(wildcard *.cpp)

# Generate a list of executable names from source files
TARGETS := $(SRCS:.cpp=)

all: $(TARGETS)

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

# Clean up the generated files
clean:
	rm -f $(TARGETS)
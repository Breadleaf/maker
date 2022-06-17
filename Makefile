# Include all files that end in .c or .cpp
files = main.cpp

# Name of final executable
name = a

# Source directory
source = src/

# Build directory
build = build/

# Compilers and flags
linux_compiler = clang++
linux_flags = 

win_compiler = x86_64-w64-mingw32-g++
win_flags = -static

# Valid values: windows, linux
# Note: Both can be used (separate with a space)
target = windows linux

build: $(target)

linux:
	$(linux_compiler) $(source)$(files) $(linux_flags) -o $(build)$(name).out

windows:
	$(win_compiler) $(source)$(files) $(win_flags) -o $(build)$(name).exe

clean:
	rm -i $(name).out $(name).exe

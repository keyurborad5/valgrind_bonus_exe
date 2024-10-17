# Valgrind Exercise

## Standard install via command-line
```bash
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# To build with debugging information, do:
  cmake -S ./ -B build/ -D CMAKE_BUILD_TYPE=Debug
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```

### Use Valgrind to find bugs
```bash
# Run Valgrind to check for memory issues
  valgrind --leak-check=full ./build/app/shell-app
```

## Text output of valgrind before fixing bug
![Valgrind_Output_before](output/valgrind_output_before.txt)

## Text output of valgrind after fixing bug
![Valgrind_Output_before](output/valgrind_output_after.txt)

## Questions
#### What happens when the executable is linked statically?
When linked statically, the entire code, including libraries, is included directly in the executable. Static linking can increase the size of the executable.

#### Does Valgrind still detect the same bugs? Why or why not? 
If Valgrind detects the same bugs, it means the static linking hasn’t altered the bugs, as they are related to the way memory is used in the code. The behavior of the program in memory management would likely remain the same, regardless of static or dynamic linking.
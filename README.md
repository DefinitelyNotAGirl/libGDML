# welcome to libGDML

this branch contains a blank gdml project.

All the functions needed by libGDML have already been defined for you, the build system has been set up,
.gitignore is configured for C/C++ and .vscode/c-cpp-properties.json should be ready to go.

# functionality
the functions needed by libGDML have blank implementations that were sorted into files under the src/ directory.
the include directory (inc/) contains libGDML.hxx which has already been included in all the files under src/.
details on how/when the functions are called is detailed in comments within the respective functions, the files have been named in ways that should help you find your way around.

as for output, you can simple write all the content that needs to go into the output file into the std::string called output, libGDML will do the heavy lifting once its done with the gdml code

in case you need/want to add more source files you can simply do so, the build system is configured to simply build
all files of the following types:
- .asm (assembly)
- .s (assembly)
- .cxx (c++)
- .cpp (c++)
- .c (c)

after building the files the build system uses the c++ compiler to link the files together with libgdml.a into "exec"

## Happy coding!
#include <libGDML.hxx>
#include <iostream>

std::string content;

extern "C" uint64_t gdml_main(int argc, char** argv, std::string title)
{
    // this function gets called after libGDML has handled the input and output file arguments
    // but before libGDML starts to process the gdml code
    // this function must return 0 on success and non-zero on failure
    // if this function returns failure, libGDML will output an error message to stderr and exit

    return 0;
}
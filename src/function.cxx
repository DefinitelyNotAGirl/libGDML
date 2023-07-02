#include <libGDML.hxx>

extern "C" void gdml_function_open(std::string name)
{
    //this function gets called when a new function is defined
    //name is just the name of the function without any attributes or parameters 
    //i.e. "malloc" for void* malloc(size_t size)
}

extern "C" void gdml_function_close()
{
    //this function gets called when the data on a function ends
}

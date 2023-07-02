#include <libGDML.hxx>

extern "C" void gdml_parameter_open(std::string name, GDML_TYPE type)
{
    // this function is called when a new parameter is added
}
extern "C" void gdml_parameter_close()
{
    // this function is called when the data on a parameter ends
}
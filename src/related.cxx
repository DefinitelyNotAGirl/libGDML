#include <libGDML.hxx>

extern "C" void gdml_related_repo(std::string link)
{
    // this function gets called when a remark for a related git repository is to be made
    // link is the full link (https://......) to the repository
}

extern "C" void gdml_related_repofile(std::string link, std::string path)
{
    // this function gets called when a remark for a related file from a git repository is to be made
    // link is the full link (https://......) to the repository
    // path is file path starting from the root directory of the repository
}
#include <libGDML.hxx>

extern "C" void gdml_embed_repo(std::string link)
{
    // this function gets called whenever a git repository needs to be embedded
    // link is the full link (https://......) to the repository
}

extern "C" void gdml_embed_repofile(std::string link,std::string path)
{
    // this function gets called whenever a file from a git repository needs to be embedded
    // link is the full link (https://......) to the repository
    // path is file path starting from the root directory of the repository
}
#include "api.h"
#include "constitution.h"

int main(int argc, const char **argv)
{
    std::string lCommand(argv[1]);

    
    return altrupedia_constitution::S_commands::Execute(lCommand);
}
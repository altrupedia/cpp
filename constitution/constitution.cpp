#include "constitution.h"

namespace altrupedia_constitution 
{

// ==================== S_commands public methods ====================
int 
S_commands::Execute(std::string const &theCommand)
{
    if (altrupedia_constitution::S_DOOR::BOUNCES(theCommand))
    {
        printf("S_commands::Execute: WARNING: %s is NOT conform.\nReturning 1.\n", 
               theCommand.c_str());
        return 1;
    }
    printf("S_commands::Execute(): INFO: theCommand '%s' is constitutional. Continuing..\n", theCommand.c_str());

    switch (hashit(theCommand))
    {
        case kRegisterUser:
            return executeRegisterUser();
        case kDeleteUser:
            return executeDeleteUser();        
        default:
            printf("S_commands::Execute(): WARNING: Command not found.\n");
            return kUnknown;
    }
}

// ==================== S_commands private methods ====================
S_commands::E_cmd 
S_commands::hashit (std::string const& inString) 
{
    if (inString == "kRegisterUser") return kRegisterUser;
    if (inString == "kDeleteUser") return kDeleteUser;
    return kUnknown;
}

int 
S_commands::executeRegisterUser()
{
    printf("S_commands::executeRegisterUser(): INFO: Registering user.\n");
    return 0;
}

int 
S_commands::executeDeleteUser()
{
    printf("S_commands::executeDeleteUser(): INFO: Deleting user.\n");
    return 0;
}  

// ==================== S_DOOR public methods ====================
int 
S_DOOR::BOUNCES(std::string const &theRequest) 
{
    if (theRequest == "kRegisterUser") return 0;
    if (theRequest == "kDeleteUser") return 0;

    printf("S_Door::Bounce(): WARNING: theRequest '%s' is NOT conform.\nReturning non-zero.\n", 
               theRequest.c_str());
    return 1;
}


} // namespace altrupedia_constitution
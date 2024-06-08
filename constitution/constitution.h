/*
This file serves as main document for developing a altrupedia.space constitution  

Axioms:
-> AI shall only be used for easy, clearly scoped assistance tasks. We won't use AI to analyze any data
-> don’t want to overstrain the current human mind set. 
-> we struggle already
-> Crazy, unexpected correlations could endanger other, positive developments (emancipation, gender in language, etc)
-> discover connections and correlations in the data only at the level, to which human brains come up with on their own
-> any analysis of data will require special clearance from a comitee (some legislative parlament) 
-> with clearance criteria defined in altrupedia/code/backend/c++/constitution/
-> commit privileges to  altrupedia/code/backend/c++/constitution/ will be in hands somewhere in altrupedia/code/backend/c++/constitution/executive
-> needless to say executive decisions can be contested
-> judiciary instances are elected on large time scales

Privacy:
- all user data will be cleansed and encrypted ON frontend devices. 
- With publicly published state of the art encryption methods and code. 
- Once user data reaches the backend-frontend (google it!) all references, that could link any single bit in the database with your unique random id, will have been erased
- work with CCC on this

Altruist State:
- attests an extrodinary level of altruism. Not HOW that extrodinary level is defined
- at least not yet. I will construct some basic metric for the beginning that allows reduction of dimensionality where necessary
- no registry for Altruists. you will know, when you meet one

- conceptional studies will partly be carried out by the non-profit organisation altrEDUpedia eV: 
- could be an interesting Jugend forscht or bachelelor thesis multidimensional data analysis topic: 
  Come up a good approximative description of the underlying dimensionality reduction mechanism, without knowing it
*/
# pragma once
#include <set>
#include <string>

namespace altrupedia_constitution 
{

// defining all commands callable through the API
class S_commands {  
  private:
    enum E_cmd {
    kRegisterUser,
    kDeleteUser,
    kUnknown
  };

  public: 
    static int Execute(std::string const &theCommand);
  
  private:
    static E_cmd hashit (std::string const& inString);
    static int executeRegisterUser();
    static int executeDeleteUser();
};

class S_Door {
  public:
    static int Bounces(std::string const &theRequest); 
  private:
};


enum E_altruist {
  kRegisteredAnonymously,
  kGreenhorn,
  kRealnameRevelationVerificationProcessStarted,
  kRealnameVettedAndRevealed,
  // ...
  // ...
  kAltruist 
  /**/
};

/* the user representation within the c++ kernel*/
class T_altruist {
    public:
    
    private:
        //E_altruist fState;    
};


/*
base class for instances of Altruversums. 
They define the environments in which users live, can participate, kids will live in one adults on another
properties:
- they live forever until deleted, which will be exceptional

*/
class T_altruversum {
  public:

  private:
    std::string fID;
    std::string const fTimeOfCreation; // string for now
    std::set<T_altruist> fCitizens;

};  // T_altruversum

} // namespace altrupedia_constitution 



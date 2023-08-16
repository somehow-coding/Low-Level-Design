#include "AC.h"

class Command {
public:
    virtual void execute() = 0;
    
    virtual void undo() = 0;
};

/* Below concrete classes will going to have the logic of how to really implement the
command that user has given. Command Implementation might include doing multiple operations
to turnOn(eg:) the AC via performing operations on "Dummy object AC".
*/

class TurnOnACcommand : public Command {
    AC *ac;

public:
    TurnOnACcommand(AC *ac) : ac(ac) {}

    void execute() {
        ac->turnOnAC();
    }

    void undo() {
        ac->turnOffAC();
    }
};

class TurnOffACcommand : public Command {
    AC *ac;

public:
    TurnOffACcommand(AC *ac) : ac(ac) {}

    void execute() {
        ac->turnOffAC();
    }

    void undo() {
        ac->turnOnAC();
    }
};
#include "Remote.h"

int main() {
    RemoteControl remote;
    AC *ac = new AC();
    Command *command = new TurnOnACcommand(ac);

    remote.setCommand(command);
    remote.pressButton();

    remote.undoOperation();
}
#include "Command.h"

class RemoteControl {
    stack<Command *> commandHistory;
    Command *command;

public:
    void setCommand(Command *command) {
        this->command = command;
    }

    void pressButton() {
        command->execute();
        commandHistory.push(command);
    }

    void undoOperation() {
        if (commandHistory.size()) {
            auto command = commandHistory.top();
            commandHistory.pop();
            command->undo();
        }
    }
};
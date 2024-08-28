#include <iostream>
#include <string>

template <typename T1, typename T2>
class ControlCommand {
private:
    T1 primaryCommand;
    T2 secondaryCommand;

public:
    ControlCommand(T1 primary, T2 secondary) : primaryCommand(primary), secondaryCommand(secondary) {}

    void executeCommand() const {
        std::cout << "Executing command: " << primaryCommand << ", with parameter: " << secondaryCommand << std::endl;
    }

    T1 getPrimaryCommand() const {
        return primaryCommand;
    }

    T2 getSecondaryCommand() const {
        return secondaryCommand;
    }
};

int main() {
    ControlCommand<std::string, double> moveCommand("Move to altitude", 500.0);
    ControlCommand<std::string, int> rotateCommand("Rotate to angle", 90);

    moveCommand.executeCommand();
    rotateCommand.executeCommand();

    std::cout << "Move Command: " << moveCommand.getPrimaryCommand() << " - " << moveCommand.getSecondaryCommand() << std::endl;
    std::cout << "Rotate Command: " << rotateCommand.getPrimaryCommand() << " - " << rotateCommand.getSecondaryCommand() << std::endl;

    return 0;
}
/*
Executing command: Move to altitude, with parameter: 500
Executing command: Rotate to angle, with parameter: 90
Move Command: Move to altitude - 500
Rotate Command: Rotate to angle - 90
*/

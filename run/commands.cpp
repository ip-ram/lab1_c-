#include "commands.hpp"

Command::Command(std::function<void()> task_function, std::string description, double TaskNumber) {
    this->TaskFunction = task_function;
    this->Description = description;
    this->TaskNumber = TaskNumber;

}

void Command::use_Command() {
    this->TaskFunction();
}

std::string Command::get_description() {
    return this->Description;
}

double Command::get_task_number() {
    return this->TaskNumber;
}

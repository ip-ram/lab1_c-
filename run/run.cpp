#include "run.hpp"
#include <iostream>
#include <limits>

RunCommands::RunCommands(std::vector<Command*> Commands){
   this->Commands = Commands;
};

void RunCommands::print_description() {
        for (int i = Commands.size(), count = 0; i != 0; i -= 1, count += 1) {
            std::string description = Commands[count]->get_description();
            std::cout << count + 1 << ": Task " << Commands[count]->get_task_number() << " Description" << description << std::endl;
        }
};

void RunCommands::choose_function(int number_of_function) {
    Commands[number_of_function]->use_Command();
}

int RunCommands::run() {

    bool user_option = true;
    std::cout << "welcome to lab task manager" << std::endl;

    while (user_option) {
        std::cout << std::endl;
        std::cout << "0. close program" << std::endl;
        this->print_description();
        std::cout << "choose the task (0-" << this->Commands.size() << "): ";
        int choosen_task;
        std::cin >> choosen_task;

        if (choosen_task > 0 && choosen_task <= this->Commands.size()) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << std::endl << "[===- taks №" << Commands[choosen_task-1]->get_task_number() << " -===]"<< std::endl;
            this->choose_function(choosen_task - 1);
            std::cout << "[===- end of task -===]" << std::endl;
        } else {
            return 1;
        }
    }
    return 1;
}

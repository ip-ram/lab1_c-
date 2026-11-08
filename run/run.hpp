#include "commands.cpp"
#include <vector>

class RunCommands {
    private:
        //Set of commands
        std::vector<Command*> Commands;

    public:
        //Construction
        RunCommands(std::vector<Command*> Commands);

        //Beautiful view Command description
        void print_description();

        // Run function
        void choose_function(int number_of_function);

        //User-friendly output
        int run();
};

#include <functional>
#include <string>

class Command {
    private:
        //Function
        std::function<void()> TaskFunction;

        //Function descriprion
        std::string Description;

        //Task number
        double TaskNumber;
    public:
        //Function construction
        Command(std::function<void()> task_function, std::string description, double TaskNumber);

        //Use function
        void use_Command();

        //Get description
        std::string get_description();

        //Get Task number
        double get_task_number();
};

#include "run/run.cpp"

// Tasks
#include "tasks/tasks.cpp"

void run() {

    std::vector<Command*> commands_vec = {
        new Command(Task1_1, "Removing the integer part of a number", 1.1),
        new Command(Task1_3, "Converting a character to a number", 1.3),
        new Command(Task1_5, "Checking if a number is two-digit", 1.5),
        new Command(Task1_7, "Checking if a number is in range", 1.7),
        new Command(Task1_9, "Checking if three numbers are equal", 1.9),

        new Command(Task2_1, "Finding the absolute value of a number", 2.1),
        new Command(Task2_3, "Checking divisibility by 3 or 5", 2.3),
        new Command(Task2_5, "Finding the maximum of three numbers", 2.5),
        new Command(Task2_7, "Returning 20 if the sum is between 10 and 19", 2.7),
        new Command(Task2_9, "Converting a number to a day of the week", 2.9),

        new Command(Task3_1, "Generating a sequence of numbers", 3.1),
        new Command(Task3_3, "Generating a sequence of even numbers", 3.3),
        new Command(Task3_5, "Finding the length of a number", 3.5),
        new Command(Task3_7, "Drawing a square", 3.7),
        new Command(Task3_9, "Drawing a right triangle", 3.9),

        new Command(Task4_1, "Finding the first occurrence of a number in an array", 4.1),
        new Command(Task4_3, "Finding the maximum absolute value in an array", 4.3),
        new Command(Task4_5, "Inserting one array into another", 4.5),
        new Command(Task4_7, "Reversing an array", 4.7),
        new Command(Task4_9, "Finding all occurrences of a number in an array", 4.9)
    };

    RunCommands lab = RunCommands(commands_vec);
    lab.run();

}

int main() {
    run();
}

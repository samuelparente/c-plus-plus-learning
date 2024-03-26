/*
Author: Samuel Parente
Description: Console-based Todo List Application in C++
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Task class to represent individual tasks
class Task {
private:
    std::string description;
    bool completed;
public:
    Task(std::string desc) : description(desc), completed(false) {}

    std::string getDescription() const {
        return description;
    }

    bool isCompleted() const {
        return completed;
    }

    void markAsCompleted() {
        completed = true;
    }
};

// TodoList class to manage tasks
class TodoList {
private:
    std::vector<Task> tasks;
public:
    void addTask(const std::string& description) {
        tasks.push_back(Task(description));
        std::cout << "Task added successfully!" << std::endl;
    }

    void removeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            std::cout << "Task removed successfully!" << std::endl;
        } else {
            std::cout << "Invalid task index!" << std::endl;
        }
    }

    void markTaskAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].markAsCompleted();
            std::cout << "Task marked as completed!" << std::endl;
        } else {
            std::cout << "Invalid task index!" << std::endl;
        }
    }

    void displayTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks to display." << std::endl;
        } else {
            std::cout << "Tasks:" << std::endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". " << tasks[i].getDescription();
                if (tasks[i].isCompleted()) {
                    std::cout << " (Completed)";
                }
                std::cout << std::endl;
            }
        }
    }
};

int main() {
    TodoList todoList;
    std::string command;

    std::cout << "Todo List Application" << std::endl;
    std::cout << "Commands: add, remove <index>, complete <index>, list, exit" << std::endl;

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, command);

        if (command == "exit") {
            std::cout << "Exiting program." << std::endl;
            break;
        } else if (command == "list") {
            todoList.displayTasks();
        } else if (command.substr(0, 3) == "add") {
            std::string description = command.substr(4);
            todoList.addTask(description);
        } else if (command.substr(0, 6) == "remove") {
            int index = std::stoi(command.substr(7)) - 1;
            todoList.removeTask(index);
        } else if (command.substr(0, 8) == "complete") {
            int index = std::stoi(command.substr(9)) - 1;
            todoList.markTaskAsCompleted(index);
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}

/*
Author: Samuel Parente
Description: Console-based Library Management System in C++
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

// Book class to represent library books
class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
public:
    Book(std::string title, std::string author, std::string isbn) : title(title), author(author), isbn(isbn) {}

    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    std::string getIsbn() const {
        return isbn;
    }

    void display() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;
    }
};

// Library class to manage books
class Library {
private:
    std::vector<Book> books;
public:
    void addBook(const Book& book) {
        books.push_back(book);
        std::cout << "Book added successfully!" << std::endl;
    }

    void removeBook(const std::string& isbn) {
        auto it = std::find_if(books.begin(), books.end(), [&](const Book& b) { return b.getIsbn() == isbn; });
        if (it != books.end()) {
            books.erase(it);
            std::cout << "Book removed successfully!" << std::endl;
        } else {
            std::cout << "Book not found." << std::endl;
        }
    }

    void displayBooks() const {
        if (books.empty()) {
            std::cout << "No books in the library." << std::endl;
        } else {
            std::cout << "Books in the library:" << std::endl;
            for (const auto& book : books) {
                book.display();
                std::cout << std::endl;
            }
        }
    }
};

int main() {
    Library library;
    std::string command;

    std::cout << "Library Management System" << std::endl;
    std::cout << "Commands: add <title> <author> <isbn>, remove <isbn>, display, exit" << std::endl;

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, command);

        if (command == "exit") {
            std::cout << "Exiting program." << std::endl;
            break;
        } else if (command.substr(0, 3) == "add") {
            std::string title, author, isbn;
            std::istringstream iss(command.substr(4));
            iss >> title >> author >> isbn;
            library.addBook(Book(title, author, isbn));
        } else if (command.substr(0, 6) == "remove") {
            std::string isbn = command.substr(7);
            library.removeBook(isbn);
        } else if (command == "display") {
            library.displayBooks();
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}

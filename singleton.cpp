#include <iostream>

class Singleton {
private:
    static Singleton* instance;

    // Private constructor to prevent instantiation
    Singleton() {
        // Constructor code here
        std::cout << "Singleton instance created.\n";
    }

public:
    // Delete the copy constructor and assignment operator to prevent copying
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Public static method to get the singleton instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    // Example of a public member function
    void showMessage() {
        std::cout << "Hello from Singleton!\n";
    }
};

// Initialize the static member
Singleton* Singleton::instance = nullptr;

int main() {
    // Get the singleton instance and call a public member function
    Singleton* singleton = Singleton::getInstance();
    singleton->showMessage();

    // Trying to create another instance will return the same instance
    Singleton* anotherSingleton = Singleton::getInstance();
    anotherSingleton->showMessage();

    return 0;
}

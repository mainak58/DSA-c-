# Understanding C++ Constructors and Destructors

This document explains the basics of using constructors, destructors, and copy constructors in C++ with clear conventions and examples.

---

## Key Concepts:

1. **Constructor Basics:**

    - A constructor is a special member function with the same name as the class.
    - It is used to initialize objects and can accept parameters.

    Example:

    ```cpp
    class Student {
    public:
        string* studentName; // Dynamically allocated member
        int currentClass;

        // Constructor
        Student(string name, int cls) {
            studentName = new string(name);
            currentClass = cls;
        }
    };
    ```

2. **Allocating Memory Dynamically:**

    - Use the `new` keyword to allocate memory dynamically.
    - Example:
        ```cpp
        string* studentName; // Pointer to a string
        studentName = new string(name); // Allocating memory dynamically
        ```

3. **Destructor Basics:**

    - A destructor is used to free resources and clean up memory.
    - It is declared using a `~` followed by the class name.
    - It is called automatically when the object goes out of scope.

    Example:

    ```cpp
    ~Student() {
        delete studentName; // Free dynamically allocated memory
    }
    ```

4. **Copy Constructor:**

    - A copy constructor is used to create a deep copy of an object.
    - This is necessary because a shallow copy might lead to issues when the destructor is called, as it deletes shared memory.

    Example:

    ```cpp
    class Student {
    public:
        string* studentName;
        int currentClass;

        // Parameterized Constructor
        Student(string name, int cls) {
            studentName = new string(name);
            currentClass = cls;
        }

        // Copy Constructor
        Student(const Student& other) {
            studentName = new string(*other.studentName); // Deep copy of the name
            currentClass = other.currentClass;           // Copy the class
        }

        // Destructor
        ~Student() {
            delete studentName; // Clean up dynamically allocated memory
        }
    };
    ```

---

## Example Usage:

Here is how the `Student` class can be used:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Create a student object
    Student student1("Alice", 10);

    // Use the copy constructor
    Student student2 = student1;

    // Access values
    cout << "Student 1: " << *student1.studentName << ", Class: " << student1.currentClass << endl;
    cout << "Student 2: " << *student2.studentName << ", Class: " << student2.currentClass << endl;

    return 0;
}
```

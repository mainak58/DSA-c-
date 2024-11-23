# Understanding C++ Classes

This document explains the basics of defining and using classes in C++ with clear conventions and examples.

---

## Points to Remember:

1. **First Letter of the Class Name:**

    - Always start the class name with a **capital letter** as a convention.
        ```cpp
        class MyClass {
            // Class members
        };
        ```

2. **Class Declaration Syntax (Similar to TypeScript):**

    - Use the `class` keyword followed by the class name, just like in TypeScript.
        ```cpp
        class MyClass {
            // Members (variables and functions)
        };
        ```
    - Example in TypeScript for comparison:
        ```typescript
        class MyClass {
            // Members
        }
        ```

3. **Using a Class (Creating an Object):**
    - To use a class, create an **object** of that class.
        ```cpp
        MyClass class11;
        ```
    - Here:
        - `MyClass` is the class name.
        - `class11` is the object that represents an instance of the class.

---

## Example Code

```cpp
#include <iostream>
#include <string> // Include the string library
using namespace std;

// Class definition
class MyClass {
public:
    int students; // Public member variables
    string studentNames;

    // Public member function
    void printNames() {
        cout << "Number of Students: " << students << endl;
        cout << "Student Names: " << studentNames << endl;
    }
};

int main() {
    // Creating an object of the class
    MyClass class11;

    // Assigning values to the object
    class11.students = 8;
    class11.studentNames = "Mainak";

    // Calling the member function
    class11.printNames();

    return 0;
}
```
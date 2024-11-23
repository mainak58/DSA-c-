# Understanding C++ Classes

This document explains the basics of defining and using classes in C++ with clear conventions and examples.

---

## Points to Remember:

1. **To initialize a pointer:**

    - Use the `int*` keyword followed by the class name:
        ```cpp
        int* MyClass {
            // Members (variables and functions)
            return value;
        };
        ```
2. **To initialize a pointer:**
    - To catch the value we need to use again `*`:
        ```cpp
        int* ptr;
        ```

2. **At the end use delete statement to delete the dynamic menory value**
    - use delete:
        ```cpp
        delete[] ptr;
        ```

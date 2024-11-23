# How to Use Getter and Setter

## What are Getters and Setters?

When we use private variables in a class, they cannot be accessed directly from outside the class. To access or modify these private variables, we use **getter** and **setter** methods.

-   **Getter**: Used to retrieve the value of a private variable.
-   **Setter**: Used to set or modify the value of a private variable.

---

## Syntax of Getter and Setter

### Getter

A getter method retrieves the value of a private variable. The syntax is:

````cpp
<DataType> getVariableName() {
    return variableName;
}

### Setter
A getter method retrieves the value of a private variable. The syntax is:
```cpp
void setVariableName(<datatype> value) {
     variableName = value;
}

### in the int main function we use like this
```cpp
    {className}.setVariableName("string")
    cout << class.getVariableName() << endl
````

# OOPs_phodenge

## Classes and Objects -

<b>Objects :</b> Objects are `entities` in the real world.

<b>Classes :</b> Class is like a `blueprint` of these entities

<b>e.g. -</b> A car company makes blueprint (Class). And with those blueprints a lot of cars (Object) are made.

## Access Modifiers -

- <b>Private :</b>  data & methods accesible inside class (by default everything is private in C++)

- <b>Public :</b>  data & methods accesible to everyone

- <b>Protected :</b>  data & methods accesible inside & to its derived classes

## Encapsulation -

Encapsulation is `wrapping up` of data and member functions into a single unit called class.

(emphasysis on capsule word)

Basically humne data/properties ko member function ke sath wrap kar diya and usko class ke andar rakh diya and iss process ko encapsulation kehte hain.

Help in `data hiding` through access modifiers.

## Constructor -

Special method invoked automatically at the time of `object creation`. Used for Initialization.

- Same name as class.
- Constructor defined as public.
- Constructor doesn't have return type.
- Only called once (automatically) at the time of object creation.
- Memory allocation happens when constructor is called.

Automation means that by default if we haven't defined any constructor, then compiler will create a default constructor for us. Which looks like this -

```cpp
class ClassName {
    public:
    ClassName() {
        // default constructor
    }
};
```

Constructor are mainly of three types -
1. **Default Constructor** - No parameters, initializes data members to default values.
    ```cpp
    ClassName() {
        // default constructor
    }
    ```
2. **Parameterized Constructor** - Takes parameters to initialize data members with specific values.
    ```cpp
    ClassName(int a, int b) {
            // parameterized constructor
            this->a = a;
            this->b = b;
    }
    ```
3. **Copy Constructor** - Special constructor (default) used to copy properties of one object into another.
    ```cpp
    Teacher t2(t1); // Default Copy constructor is used like this

    // Copy constructor definition
    ClassName(const ClassName &obj) { // Passed by reference
        // copy constructor
        this->property = obj.property; // Copying properties from obj to this object
    }
    ```

### `this` Pointer -
The `this` pointer is a special pointer that points to the current object of the class. It is used to access members of the class from within its member functions.

- `this->property` is same as `*(this).property`.

### Constructor Overloading -
Constructor overloading is the process of defining multiple constructors with different parameters in the same class. This allows for different ways to initialize an object.

```cpp
class ClassName {
    public:
    // Default constructor
    ClassName() {
        // initialization code
    }

    // Parameterized constructor
    ClassName(int a, int b) {
        // initialization code with parameters
    }

    // Copy constructor
    ClassName(const ClassName &obj) {
        // copy initialization code
    }
};
```

<b>Note:</b> Constructor overloading is an example of `polymorphism`, which will be discussed later.

### Type of Copies -

1. **Shallow Copy** - A shallow copy of an object copies all of the member values from one object to another.
    ```cpp
    ClassName obj1;
    ClassName obj2 = obj1; // Shallow copy
    ```

2. **Deep Copy** - A deep copy, on the other hand, not only Copies the member values but also makes copies of any dynamically allocated memory that the members point to.
    ```cpp
    ClassName obj1;
    ClassName obj2 = obj1; // Deep copy
    // Custom copy constructor for deep copy
    ClassName(const ClassName &obj) {
        this->data = new int(*obj.data); // Assuming data is a pointer
    }
    ```

## Destructors -
A destructor is a special member function that is invoked automatically when an object goes out of scope or is explicitly deleted. It is used to perform cleanup operations, such as releasing resources or memory allocated by the object.
- Same name as class but with a tilde (~) prefix.
- Destructor defined as public.
- Destructor doesn't have return type.
- Only called once (automatically) at the time of object destruction.
- Memory deallocation happens when destructor is called.

```cpp
class ClassName {
    public:
    // Destructor
    ~ClassName() {
        // cleanup code
    }
};
```

<b>Note:</b> If some properties are dynamically allocated, then we need to deallocate them in the destructor to avoid memory leaks.

```cpp
class ClassName {
    private:
    int *data; // Dynamically allocated memory

    public:
    // Constructor
    ClassName() {
        data = new int[10]; // Allocating memory
    }

    // Destructor
    ~ClassName() {
        delete[] data; // Deallocating memory
    }
};
```

## Dynamic Memory Allocation -
Dynamic memory allocation is the process of allocating memory at runtime using pointers. It allows for flexible memory management and is essential for creating objects whose size may not be known at compile time.
- Use `new` operator to allocate memory.    
- Use `delete` operator to deallocate memory.

```cpp
int *ptr = new int; // Allocating memory for an integer
delete ptr; // Deallocating memory
int *arr = new int[10]; // Allocating memory for an array of integers
delete[] arr; // Deallocating memory for the array
```

## Inheritance -
When properies and member functions of `base` class are passed on to the `derived` class.

```cpp
class Base {
    public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
    public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};
```
---

<b>Note:</b> First constructor of base class is called then derived class constructor!

<b>Node:</b> First destructor of derived class is called then base class destructor!

---

### Mode of Inheritance -

| | Derived Class | Derived Class | Derived Class |
|----------------|----------------|----------------|----------------|
| Base Class     | Private         | Protected      | Public        |
| Private | Not inherited | Not inherited | Not inherited |
|Protected | Private | Protected | Protected |
| Public | Private | Protected | Public |

### Types of Inheritance -

1. **Single Inheritance** - A derived class inherits from a single base class.
    ```cpp
    class Base {};
    class Derived : public Base {};
    ```

2. **Multiple Inheritance** - A derived class inherits from multiple base classes.
    ```cpp
    class Teacher {};
    class Student {};
    class TeachingAssistant : public Teacher, public Student {};
    ```
    Here TeachingAssistant will have all the properties of Teacher class and Student class. Like salary from Teacher class, roll number from Student class, etc.

3. **Multilevel Inheritance** - A derived class inherits from another derived class.
    ```cpp
    class Grandparent {};
    class Parent : public Grandparent {};
    class Child : public Parent {};
    ```
    Here Child class will have all the properties of Parent class and Grandparent class.

4. **Hierarchical Inheritance** - Multiple derived classes inherit from a single base class.
    ```cpp
    class Person{} // name , age
    class Student : public Person {}; // roll number, marks
    class Teacher : public Person {}; // salary, subject
    ```
    Here both Student and Teacher classes will have properties of Person class.

5. **Hybrid Inheritance** - A combination of two or more types of inheritance.
    ```cpp
    class Base {};
    class Derived1 : public Base {};
    class Derived2 : public Base {};
    class Derived3 : public Derived1, public Derived2 {};
    ```

## Polymorphism -

Polymorphism is the abolify of objects to take on `different forms` or behave in different ways `depending on the context` in which they are used.

### Types of Polymorphism -

1. **Compile-time Polymorphism** - Resolved during compile time.
    
    - **Constructor Overloading** - Multiple constructors with different parameters in the same class.
    ```cpp
    class ClassName {
        public:
        ClassName() { /* default constructor */ }
        ClassName(int a) { /* parameterized constructor */ }
    };
    ```

    - **Function Overloading** - Multiple functions with the same name but different parameters or types in the same scope.
    ```cpp
    class Math {
        public:
        int add(int a, int b) { return a + b; }
        int add(int a, int b, int c) { return a + b + c; }
        double add(double a, double b) { return a + b; }
    };
    ```

    - **Operator Overloading** - Defining custom behavior for operators when applied to user-defined types.
    ```cpp
    class Complex {
        private:
        double real, imag;

        public:
        Complex(double r, double i) : real(r), imag(i) {}

        // Overloading the + operator
        Complex operator+(const Complex& other) {
            Complex res;
            res.real = this->real + other.real;
            res.imag = this->imag + other.imag;
            return res;
        }
    };

    int main() {
        Complex c1(1.0, 2.0);
        Complex c2(3.0, 4.0);
        Complex c3 = c1 + c2; // Uses overloaded + operator
    }
    ```

2. **Run-time Polymorphism** - Resolved during runtime. AKA Dynamic Polymorphism.

    - **Function Overriding** - Parent & Child both contain same function with different implementation.The parent class funcction is said to be overridden by the child class function.
    ```cpp
    class Base{
        public:
        void display() {
            cout << "Base class display function" << endl;
        }
    };
    class Derived : public Base {
        public:
        void display() { // Overriding the base class function
            cout << "Derived class display function" << endl;
        }
    };
    ```

    - **Virtual Functions** - A virtual function is a member function that you expect to be redefined in derived classes.
        
        - Virtual functions are Dynamic in nature.
        - Defined by the keyword `virtual` inside the base class and are always declared with a base class and overriden in the child class.
        - A virtual function is called during Runtime.

## Abstraction -
Hiding all unnecessary details and showing only the essential features of an object using access modifiers and abstract classes.

### Abstract Class -
- Abstract classes are used to provide a base class from which other classes can be derived.
- They cannot be instantiated and are meant to be inherited.
- Abstract classes are typically used to define an interface or a common base for derived classes.
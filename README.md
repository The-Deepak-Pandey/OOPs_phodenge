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
3. **Copy Constructor** - Initializes an object using another object of the same class.
    ```cpp
    ClassName(const ClassName &obj) {
            // copy constructor
            this->a = obj.a;
            this->b = obj.b;
    }
    ```

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
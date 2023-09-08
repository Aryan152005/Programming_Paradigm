(8/22/2023)

balaguruswamy, Behrouz A. Forouzan -- books

# A. PROGRAMMING LANGUAGES
 **Role Of Programming Languages:**

 P.L. is a tool for instructig machines. They are notations, used for specifying organizing and reasoning about computations. The Language should :
1. Making the computation convenient for people.
2. Making efficient use of computation machine 
3. Universal - ie should have relation with natural languages
4. Portable - i.e. machine indepedent
5. Verifiable and understandable  

**Evolution of Programming Languages:**
 * Machine Lang : It is the native language of a computer It is the notation to which the computer responds directly. It consists of series of 0's and 1's to represent an insturction so the programs in machine lang. are unintelligible 

 * Assembly Lang : It is written in a low-level programming lang. consist of symbolic instruction. Each symbolic instruction is called mnemonnics, which is corresponding to a

# Procedural Programming VS Object-Oriented Progrmming 

Below are some of the differences between procedural and object-oriented programming:

|Procedural Oriented Programming | Object-Oriented Programming|
|--------------------------------|----------------------------|
|In procedural programming, the program is divided into small parts called FUNCTIONS| In OOP, the program is divided into small parts called OBJECTS.|
| Procedural Programming follows a top-down approach| It follows bottom-up approach|
| There is no access specifier in Procedural programming.| OOP has access specifiers like private, public, protected, etc,|
| Less Secure | More secure   |
| There is no data hiding and inheritance | Concept of data hiding and inheritance is used|
| The function is more important than a data| Data is more important than function|
| It is based on the unreal world | It is based on the real world|
| It is used for designing medium-sized programs| It is used for designing large-sized programs|

# Constructor 
* Constructor is a special member function in a class whose name is exactly same with the name of the class.
* It does not have any written type not even void.
* Contructor get automatically envoked or called within main function when object of that class is created 
* The scope of constructor should always be public
* It is automatically called whne object is created

### Types of Constructor:
1. Default Constructor
2. Paramatrcized
3. Copy Constructor

```cpp
//Assignmnt_5_A
#include<iostream>
#include<conio.h>
using namespace std;
class A{
    public:
        A(){
            i = 10;
            cout<<"i = "<< i;
        }

    void display(){
        cout<<"This is another member function of the class";
    }
};
int main(){
    A a1[5];
    for(int i = 0; i<5; i++>){
        a1.display();
    }
    
    return 0;
}
```


(08/24/2023)

**2. Parametricized Constuctor :**
In C++, a parameterized constructor is a constructor that accepts one or more parameters when an object of a class is instantiated. This allows you to initialize the object with specific values during creation. Parameterized constructors are particularly useful when you want to ensure that objects of your class are created in a valid and initialized state
```cpp
#include<iostream>
#include<conio.h>
using namespace std;
class A{
    public:
        A(int i){
            a = i;
            cout<<"This is the constructor (default)";
            cout<<"a = "<< a;
        }
        display(){
            cout<<"i =">>i;
        }
};
int main(){
    A a1[10];
    a1.display()
    
    return 0;
}
```

(29/08/2023)
 
* Scope Resolution Operator ( :: )

**3. Copy Constructor :**
It is a member function that initiaizes an object using another object of the same class.
A constructor which creates an object by initializing it with an object of te same class, which has been created previously is known as copy Constructor.

Usage: 
1. It is used to initialize members of newly created object by copying the members of an already nexisting object. It take a reference to n object of same class as n argument
```cpp
class MyClass {
public:
    // Copy constructor declaration
    MyClass(const MyClass& other) {
        // Copy the contents of 'other' to the current object
        // You can perform deep or shallow copying here as needed
    }
    
    // Rest of the class definition
};
```

(1/9/2023)

# Polymorphism 

Plymorphism is another OOPS concept which means having many forms.

**Types:**
1. Compile Time Polymorphism 
* Code associated at the time of compilation.
* Compile time polymorphism is implemented through function overloading and run time polymorphism is implemented thorugh method overriding.
* Ex: Function / Method overloading.


2. Run Time Polymorphism 
* Code associated at the run time.
* Function overloading meas a single class may contain more than one function definiion witht the same name but they should differ in their parameters.
* Ex: Method Overriding

(5/9/2023)

```mermaid
graph LR
A[Polymorphism] -->  B[Compile Time] --> D[Method Overloading]
A[Polymorphism] -->  C[Run Time] --> E[Method Overriding]
```
**Constructor Overloading :**
We are defining the many constructor in a class which has same name but different parameter.
```cpp
class Add{
    public:
    Add(){  }
    Add(int i, int j){  }
    Add(float f1, f2){   }
};
int main(){
Add a1;
Add a2(10,20);
Add a3(1.2,2.4);
}

```
(7/9/2023)

**Operator Overloading:**
It is a phenomene in which we are giving extra task to the operator.
```cpp
public:
***********
 returnType operator symbol (arguments){
    *******
 }
***********
```
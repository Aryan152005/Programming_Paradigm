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

### Types of Constructor

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

(8/9/2023)

**Unary operator:** operates on a single operand only : preefix, post-fix, increment, decreement.

**Binary operator:** operatos on two operand,.

(12/9/2023)

Which are the operators in c++ that can never be overloaded and why?

=> In C++, there are a few operators that cannot be overloaded. These operators are:

1. **::** (Scope Resolution Operator): This operator is used to define the scope of a function or variable. It cannot be overloaded because overloading it would interfere with the basic language syntax.

2. **.** (Member Access Operator): This operator is used to access the members of a class or structure. It cannot be overloaded because it would lead to ambiguity and confusion.

3. *.** (Pointer to Member Operator): This operator is used to access a member through a pointer. Like the dot operator, it cannot be overloaded for similar reasons.

4. **?:** (Conditional Operator): This operator is used for conditional expressions. It cannot be overloaded because it has a specific, built-in behavior that would be difficult to replicate through overloading.

5. **sizeof**: This operator is used to determine the size of a data type or variable. It cannot be overloaded because it is a compile-time operator, and overloading it would require runtime behavior.

6. **typeid**: This operator is used for obtaining type information at runtime. It cannot be overloaded because it is a language feature that relies on specific compiler support.

7. **const_cast**: This operator is used for type casting away constness. Overloading it would lead to potential type safety issues.

8. **dynamic_cast**: This operator is used for performing safe downcasting in a class hierarchy. It relies on the runtime type information (RTTI) system, and overloading it could lead to unsafe behavior.

9. **reinterpret_cast**: This operator is used for low-level casting between pointer types. Overloading it could lead to unsafe type conversions.

10. **typeid**: This operator is used to get type information at runtime. It cannot be overloaded because it is a language feature and not a user-defined function.

These operators are either fundamental to the language's syntax and semantics or rely on specific compiler features, making them unsuitable for overloading. Attempting to overload these operators would likely lead to ambiguous behavior or conflicts with the language's built-in functionality.

## Inheritance

```mermaid
graph LR
A[A] -->  B[Base class / parent / super]
A[A] -->  C[B] --> E[Derived class / child class]
```

```cpp
class A {
    * * * * 
};
class B : public  A // Here we are inheriting the elements of class A to B
{
     * * * *
};
```

1. Private
2. Public
3. Protected = members are only accessible to the next derived class `only`.

**Types of Inheritance:**

1. Single Inheritance : Single  base class and single derived class

```mermaid
graph LR
    A[A] -->  B[B]
```

2. Multiple inheritance : more than one base class and single derived class

```mermaid
graph LR
    A[A] -->  B[B]
    A[A] --> C[C]
    B[B] --> C[C]
```

3. Multilevel inheritance : The levels are increased when one base class is derived from other derived class

```mermaid
graph LR
    A[A] -->  B[B] --> C[C]
```

4. Hybrid Inheritance : from one base class 2 derived clases and from these derived class on emore child class is made

```mermaid
classDiagram
    A --> B
    A --> C
    B --> D
    C --> D
```

5. Hierarchical Inheritance : one base class and 2-3 child class.

```mermaid
classDiagram
    A--> B
    A--> C
    A--> D
    class A{
        Base class
    }
    class B {
        Derived class
    }
    class C {
        Derived class
    }
    class D {
        Derived class
    }
```

example of inheritance =

```cpp
#include <iostream>
using namespace std;
class A
{
public:
    float bonus;
};
class B : public A
{
public:
    float salary;
};
int main()
{
    B b1;
    b1.bonus = 22.32;
    b1.salary = 10000;
    cout << "Bonus = " << b1.bonus << endl;
    cout << "Salary = " << b1.salary << endl;
    return 0;
}
```

(14/9/2023)

Q) why there is need to study programming langauge?

Q) What is programming paradigm: approach to solve a pronblem ?

Programming paradigm is majorly categorized into two:

```mermaid
classDiagram
    Programming Paradigm --> Declerative 
    Programming Paradigm --> Imperative
    class Declerative{
        Logical
        Functional
        Database
    }
    class Imperative{
        Procedural
        Parallel computing
        Object Oriented
    }
```

derived , structured, unstructured  datatype in C

Q) what is class and object?

(52/09/2023)

Define Inheritance and types of inheritance...

Acess Specifires are of three types:

1. Public
2. Private
3. Protected

```mermaid
classDiagram
    A --> B
    B --> C

    class A{
        Protected 
        a =10;
    }
    class B{
        Variables of A (protected) only availabe here on B
        a =10;
    }
    class C{
        No variables of A (protected) can be accesed here.
        a not defined
    }
```

```cpp
class A{
    public:
    int i;
    void displayA(){
        i =10;
        cout<<"i in A ="<<i;
    }
};

class B : public A{
    void displayB(){
        cout<<"This is derived class method";
    }
};

class C : public B{
    ////////
}

int main(){
    B b1;
    b1.displayA();
    b1.displayB();
}
```

WAP in C++ to implement multilevel inheritance make one class organization derive employee class. From organization class from employee class derive salary details class to display the salary of ten employee in the organization ABC Corp. Ltd. The details of employee must be name, department name, date of joining and saalary of employee.

```cpp
class Organization{
    public:
    char name[50], dept[50], doj[15];
    double sal;
}
class Employee : public Organization{
    public:
    void getDetails(int i){
        cout<<"Enter details of Employee"<<i<<" =>";
        cout<<"Employee Name: ";
        cin>>name;
        cout<<"Deaprtment Name: ";
        cin>>dept;
        cout<<"Date of Joining";
        cin>>doj;
        cout<<"Salary: ";
        cin>>sal;
    }
};
class SalaryDetails{
    public:
    void display(int i){
        cout<<"Enter details of Employee"<<i<<" =>";
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Deaprtment Name: "<<dept<<endl;
        cout<<"Date of Joining"<<doj<<endl;
        cout<<"Salary: "<<sal<<endl;
    }
}
```

(10/09/2023)

1. compare method overloading with overriding?
2. Do method overriding and implement this...

### Method Overriding

It allows compiler to declare same function name and type but they can differ in their block definition.
If derived class is derived from base class then after calling the function in main, function of derived class is called or overrided.

```cpp
class Base{
    public:
    void print(){
        cout<<"This is Base class Function";
    }
};

class Child : public Base{
    void print(){
        cout<<"This is Derived class Function";
    }
};
```

(11/10/2023)

**Static members in C++ :**

* Static members of a class are not associated with the objects of the class. Just like a static variable once declared is allocated with memory that can't be changed every object points to the same memory. 

* Static member function in C++ is declared with the keyword static .

* Static members are frequently used to store information that is shared by all objects in a class.

* It is independent of any object of the class.

* Static member function can be called even if no ojbect of the class exist. It can also ve accessed using the class name throught the scope resolution operator.

* Static member functions can access static data members and static data function inside or outside of the class.

(12/10/2023)

**Inline Funtion:**
* C++ provides inline function to reduce the function call overhead.
* An inline function is a function that is expanded inline when it is called.
* When the inline function is called whole code of the inline function gets inserted or substituted of at the point where inline function is called . This substitution is perfromed by c++ compiler at compile time. An inline funtion may icrease efficiency when it is small.
* The syntax for defining inline is =>  **inline return-type function-name(Parameters)** {}
* Loops Break and static - We cannot make it Inline.

When normal function call in code then the next line address in stored in Program Counter and then the execution control is transfered to the function declaration wherer it is executed in satckk operation and then again next lin efrom main is continued

(16/10/2023)

**Virtual Funtions in C++:**

A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.

* Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.
* They are mainly used to achieve Runtime polymorphism.
* Functions are declared with a virtual keyword in a base class.
* The resolving of a function call is done at runtime.
```cpp
#include <iostream>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "This is Base class funtion\n";
    }
    void display()
    {
        cout << "This is not a virtual funtion of base class\n";
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "This is derived class Funtion\n";
    }
    void display()
    {
        cout << "This is not a virtual funtion of derived class\n";
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print();
    bptr->display();

    return 0;
}
```

Que. What is virtual function. Explain with exapmle. Explain early binding ans late binding with example.

(18/10/2023)

**Friend Function:**

Friend function can acess private and protected data of a class. It is declared using ' friend ' keyword in C++. We can declare function as well as class as friend in C++

When a class is declared as friend class, all the member functions of of the friend class becomes friend functions.

A friend function can be:

1. A global function
2. A member function of another class

```cpp
class Test{
    private :
    int m;
    //friend function 
    friend int add(Test);
    public:
    Test():m(0){}
};
//freind function definition
int add(Test t){
    t.m += 5;
    return t.m;
}
int main(){
    Test t;
    cout<<"Result ="<<add(t);
    return 0;
}
```
(19/10/2023)

WAP to find the greator number between the twp numbers who are private members of two different classes using friend class implementation and display the result.

**Destructor:**
It is a member function which is envoked automatically whenever an object is goin to be destroyed. Destructor is the last function that is going to be called before an object is destroyed.

(25/10/2023)

# Prolog
Prolog or programming logic is a logical and declarative programming language. It is one of the majore example of 4th Generation language that supports the declarative programming paradigm. This is particularly suitable for programs that involves symbolic or non numeric computation.

Some of the logic programming Languages are:
1. ALF (Algebric Logic Functional Programming Language)
2. ASP (Answer Set Programming)
3. CycL
4. Datalog
5. Fuzzy CLIPS
6. Janus
7. Prolog
8. Prolog++/prolog
9. Roop

Some of the applications of prolog are:
1. Intelligent database retrival.
2. Natural Language Understanding (NLP)
3. Machine Learning.
4. Robot Planning.
5. Automation
6. Problem solving

(26/10/2023)

Component:
1. Knowledge Base.
2. Queries or questions & Answers.
3. Fact/Rules/predicate

Facts:
1. Tom is a Cat.
2. Shreya likes singing.
3. Jay likes to play cricket.

Syntax:
```prolog
Cat(Tom).
likes_to_sing(Shreya,Song).
of_color(hair,black).
likes_to_play(Jay,Cricket).

<!-- Predicates/Rules: -->

happy(Shreya):- dances(shreya).
hungary(Tom):- Search_for_food(Tom).
friends(a,b):- loves_cricket(a).loves_cricket(b)
```



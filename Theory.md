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
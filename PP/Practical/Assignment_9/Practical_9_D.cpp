// b).Make a class named fruit with a datamember to calculate the number of fruits in a basket.Create two other class named apple and mango to calculate the number of apple and mangos in the basket.Print the number of fruits of each type and the total number of fuits in the basket.

#include <iostream>
using namespace std;
class fruit
{
public:
    string fruits[5] = {"apple", "mango", "mango", "apple", "apple"};
    int count = sizeof(fruits) / sizeof(fruits[0]);
    void display()
    {
        cout << "Total number of Fruits in Basket are = " << count << endl
             << endl;
    }
};
class apple : public fruit
{
public:
    int app = 0;
    void calcApple()
    {
        for (int i = 0; i < count; i++)
        {
            if (fruits[i] == "apple")
            {
                app++;
            }
        }
    }
    void numApple()
    {
        cout << "Total number of Apples in Basket are = " << app << endl
             << endl;
    }
};
class mango : public fruit
{
public:
    int man = 0;
    void calcMango()
    {
        for (int i = 0; i < count; i++)
        {
            if (fruits[i] == "mango")
            {
                man++;
            }
        }
    }
    void numMango()
    {
        cout << "Total number of Mangoes in Basket are = " << man << endl
             << endl;
    }
};
int main()
{
    fruit f1;
    f1.display();

    apple a1;
    a1.calcApple();
    a1.numApple();

    mango m1;
    m1.calcMango();
    m1.numMango();
    return 0;
}
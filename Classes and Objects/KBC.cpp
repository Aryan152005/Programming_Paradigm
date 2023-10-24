#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int prize= 0;
    cout << "Welcome to Kaun Banega Crorepati!";

    string questions[] = {
        "Which planet is known as the \"Red Planet\"?",
        "What is the chemical symbol for the element gold?",
        "Who wrote the famous play \"Romeo and Juliet\"?",
        "What is the largest mammal on Earth?",
        "Which scientist developed the theory of general relativity?",
        "Which famous painting is known for its mysterious smile?",
        "Which country is known as the \"Land of the Rising Sun\"?",
        "What is the largest organ in the human body?",
        "In which year did the Titanic sink after hitting an iceberg?",
        "Which gas is responsible for the feeling of freshness after a rainstorm?"
    };

    string options[] = {
        {"A) Venus", "B) Jupiter", "C) Mars", "D) Saturn"},
        {"A) Go","B) Au","C) Gd","D) Ag"},
        {"A) Charles Dickens","B) Mark Twain","C) William Shakespeare","D) Jane Austen"},
        {"A) Elephant","B) Blue Whale","C) Giraffe","D) Polar Bear"},
        {"A) Go","B) Au","C) Gd","D) Ag"},

    };

    getch();
    return 0;
}
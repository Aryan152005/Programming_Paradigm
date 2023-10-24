#include <iostream>
#include <string>
using namespace std;

struct Question 
{
    string question;
    string options[4];
    int correctOption;
    int prizeAmount;
};

Question questions[10] = 
{
    {"Which one of the following river flows between Vindhyan and Satpura ranges?", {"(1)Narmada","(2)Son","(3)Netravati","(4)Mahanadi"}, 1, 1000},
    {" Patanjali is well known for the compilation of –","(1) Brahma Sutra","(2) Ayurveda","(3) Panchtantra","(4) YogaSutra",4,3000},
    {"In the game of ludo the discs or tokens are of how many colours?","(1) One","(2) Two","(3) Three","(4) Four",4,10000},
    {"Which of these are names of national parks located in Madhya Pradesh?","(1) Krishna and Kanhaiya","(2) Kanha and Madhav","(3) Ghanshyam and Murari","(4) Girdhar and Gopal",2,40000},
    {"The hottest planet in the solar system?","(1) Earth","(2) Mercury","(3) Venus","(4) Jupiter",3,70000},
    {"Who wrote the introduction to the English translation of Rabindranath Tagore’s Gitanjali?","(1) P.B. Shelley","(2) Alfred Tennyson","(3) W.B. Yeats","(4) T.S. Elliot",2,100000},
    {"Where was the electricity supply first introduced in India","(1) Mumbai","(2) Dehradun","(3) Darjeeling","(4) Chennai",3,250000},
    {"During World War II, when did Germany attack France?","(1) 1940","(2) 1941","(3) 1975","(4) 1888",1,500000},
    {"The International Literacy Day is observed on","(1) Sep 8","(2) Nov 28","(3) Mar 2","(4) April 14",1,1000000},
    {" Indus river originates in ","(1) Rajasthan","(2) Tibet","(3) Nepal","(4) Ladakh",2,2000000},
};

int main() {
    int totalPrize = 0;
    for (int i = 0; i < 10; ++i) 
	{
        cout << "Question " << i + 1 << ": " << questions[i].question << endl;
        for (int j = 0; j < 4; ++j) 
		{
            cout << questions[i].options[j] << endl;
        }
        int pAnswer;
        cout << "Your answer (1-4): ";
        cin >> pAnswer;
        if (pAnswer == questions[i].correctOption) 
		{
            totalPrize += questions[i].prizeAmount;
            cout << "Correct! You won $" << totalPrize << endl;
        } else 
		{
            cout << "Sorry, that's incorrect. Your total prize remains $" << totalPrize << endl;
            break;
        }
        cout << endl;
    }
    cout << "Congratulations! You won a total of $" << totalPrize << endl;
    return 0;
}

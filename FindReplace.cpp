//Name: Muhammad Omer Khan    ID: 23I-0650    Assignment # 3 
#include<iostream>
using namespace std;

int main() 
{
char textinput[500];

string wordtoreplace, replacement;
cout << "Enter a text (maximum characters 500): ";
cin.getline(textinput, 500);

while (true) 
{
    cout << "Please enter the word you wish to replace ('Enter' to exit): ";
    getline(cin, wordtoreplace);

    if (wordtoreplace.empty()) 
    {
    cout << "Goodbye!";
    break;
    }

    cout << "Enter the word you wish to replace it with: ";
    getline(cin, replacement);

    //outer loop that runs for all 500 elements
    for (int i = 0; i < 500; i++) 
    {
    //finding position of the word to replace in textinput
    if (textinput[i] == wordtoreplace[0]) 
    {
    bool match = true;
    for (int j = 0; j < wordtoreplace.size(); j++) 
    {
        if (textinput[i+j] != wordtoreplace[j]) 
        {
        match = false;
        break;
        }
    }
    //replace word if match found
    if (match) 
    {
        for (int j = 0; j < replacement.size(); j++) 
        {
        textinput[i+j] = replacement[j];
        }
    }
   
    }
   
    }
    }

    //final edited output
    cout<<"Here is the changed text: "<<endl;
    cout<<textinput<<endl;

    return 0;
}

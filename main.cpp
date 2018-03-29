/*
Author: Boubacar Diallo
Course: CSCI-136
Instructor: Zamansky
Assignment: Lab_08 - Main

Main program that shows output
*/


#include <iostream>
#include <cstdlib>
#include "funcs.h"

using std::cout;
using std::cin;

int main()
{
    string line;
    int numtabs;
    int opens = 0;
    int closes = 0;
    
    while(getline(cin,line)){
        string indented = "";

        opens += countChar(line,'{');
        closes += countChar(line,'}');
        string newline = removeLeadingSpaces(line);

        if(newline[0]== '}'){
            numtabs--;
        }
        for(int i = 0; i < numtabs; i++){
            indented += '\t';
        }

        indented += newline;
        cout << indented <<"\n";
        numtabs = opens - closes;
    }

    
}
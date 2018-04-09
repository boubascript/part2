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
    int numtabs = 0; //numtabs was not initialized, causing the for loop to go forever
    int opens = 0;
    int closes = 0;
    
    while(getline(cin,line)){
        string indented = "";

        opens += countChar(line,'{');
        closes += countChar(line,'}');
        string newline = removeLeadingSpaces(line);

        // Accounts for +1 tab case when line begins with closing bracket
        if(newline[0]== '}'){
            numtabs--;
        }

        // Adds correct number of tabs to beginning of line
        for(int i = 0; i < numtabs; i++){
            indented += "\t";
        }

        // Appends line content to line with tabs
        indented += newline;
        cout << indented <<"\n";
        numtabs = opens - closes;
    }
}
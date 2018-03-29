/*
Author: Boubacar Diallo
Course: CSCI-136
Instructor: Zamansky
Assignment: Lab_08 - Tasks  (All routines)

Function program that contains completed tasks in the functions.
*/

#include <iostream>
#include <cstdlib>

using std::cout;
using std::string;


string removeLeadingSpaces(string line){
    string stripped = "";
    int i = 0;
    while(line[i] == ' ' || line[i] == '\t'){
        i++;
    }

    for(int x = i; x <line.size(); x++){
        stripped += line[x];
    }

    return stripped;
}


int countChar(string line, char c){
    int counts = 0;

    for(int i = 0; i < line.size();i++){
        if(line[i] == c){
            counts ++;
        }
    }

    return counts;
}
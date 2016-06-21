//
//  main.cpp
//  CS Exam 2
// I affirm that all code given below was written solely by me, Ally McConnell, and that any help I received adhered to the rules stated for this exam.
//  Created by Ally McConnell on 6/21/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>
#include <fstream>

class Runner
{
private:
    string firstname;
    string lastname;
    int pace;
    
public:
    string get_firstname();
    string get_lastname();
    int get_pace();
};

Runner::get_firstname()
{
    return firstname;
}
Runner::get_lastname();
{
    return lastname;
}
Runner::get_pace();
{
    return pace;
}

int main()
{
    string line;
    ifstream myfile ("registrants.txt");
    if (myfile.is_open())
    {
        while (getLine (myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close()
    }
    else cout << "Unable to open file";
    return 0;
}



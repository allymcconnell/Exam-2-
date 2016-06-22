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
#include <vector>

class Runner
{
private:
    string firstname;
    string lastname;
    int pace;
    string runner;
    void vector <registrants>;
    vector <registrants>;
    vector <white>;
    vector <yellow>;
    vector <green>;
    vector <orange>;
    vector <blue>;
    vector <lilac>;
    vector <red>;
    
public:
    string get_firstname();
    string get_lastname();
    int get_pace();
};

Runner::get_firstname();
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
Runner::runner(firstname, lastname, pace)
{
    return runner;
}
cout << "Ascending order of pace: " << endl;
sort(pace.end(), pace.begin());
registrants(pace);

if (pace > 0 || pace <= 360)
{
    vector white(pace);
    cout << "White group: " << endl;
    cin >> white;
}
else if (pace > 360 || pace <= 420)
{
    vector yellow(pace);
    cout << "Yellow group: " << endl;
    cin >> yellow;
}
else if (pace >420 || pace <= 480)
{
    vector green(pace);
    cout << "Green group: " << endl;
    cin >> green;
}
else if(pace > 480 || pace <= 540)
{
    vector orange(pace);
    cout << "Orange group: " << endl;
    cin >> orange;
}
else if (pace > 540 || pace <= 600)
{
    vector blue(pace);
    cout << "Blue group: " << endl;
    cin >> blue;
}
else if (pace > 600 || pace <= 720)
{
    vector lilac(pace);
    cout << "Lilac group: " << endl;
    cin >> lilac;
}
else (pace > 720 || pace <= 1200)
{
    vector red(pace);
    cout << "Red group: " << endl;
    cin >> red;
}
return 0;

int main()
{
    string line;
    ifstream myfile ("registrants.txt");
    if (myfile.is_open())
    {
        while (getLine (myfile, registrants))
        {
            cout << registrants << '\n';
        }
        myfile.close()
    }
    else cout << "Unable to open file";
    return 0;
    if (myfile.is_open())
    {
        while getLine (myfile, white))
        {
            cout << white << '\n';
        }
        myfile.close()
    }
    if (myfile.is_open())
    {
        while getLine (myLine, yellow))
        {
            cout << yellow << '\n\;'
        }
        myfile.close()
    }
    if (myfile.is_open())
    {
        while getLine (myLine, green))
        {
            cout << green << '\n\;'
        }
        myfile.close()
    }
    if (myfile.is_open())
    {
        while getLine (myLine, orange))
        {
            cout << orange << '\n\;'
        }
        myfile.close()
    }
    if (myfile.is_open())
    {
        while getLine (myLine, blue))
        {
            cout << blue << '\n\;'
        }
        myfile.close()
    }
    if (myfile.is_open())
    {
        while getLine (myLine, lilac))
        {
            cout << lilac << '\n\;'
        }
        myfile.close()
    }
    if (myfile.is_open())
    {
        while getLine (myLine, red))
        {
            cout << red << '\n\;'
        }
        myfile.close()
    }

}



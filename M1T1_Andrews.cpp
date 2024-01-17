/*
CSC 134
M1T1 - Hello World
J Andrews
1/17/24
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    string pokemon = "Jigglypuff";
    cout << "My favorite pokemon is " << pokemon << "." << endl;
    cout << "\n" << endl; // same thing
    cout << "What's yours? ";
    string answer;
    cin >> answer;
    cout <<  answer << " is the worst pokemon, actually. " <<endl;


    return 0;
}

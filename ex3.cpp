#include <iostream>
using namespace std;

int main(){
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;  
    string name;

    cout << "What is your name?" << endl;
    cout << "> ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    cout << "Rolling dice..." << endl;
    cout << "Die 1: " << dice1 << endl;
    cout << "Die 2: " << dice2 << endl;
    cout << "Total value: " << dice1 + dice2 << endl; 
    if(dice1 >= dice2) cout << name << " won!" << endl;
    else cout << name << " lost!" << endl;
    
    return 0;
}

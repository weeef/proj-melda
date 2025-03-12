#include "State.h"
 
 
void State::update() {
    int y = 100;
    int l =3;
    int x;
    cout << "Enter 1 to attack and 2 to block."
    cin >> x;
 
 
    if(x ==1){
        cout << "You gained" << y++ <<" points" << endl;
        cout << "You have " << l <<" lives remaing" << endl;
    }
 
    else if(x==2){
        cout << "You lost "<< y-- << "points" << endl;
        cout << "You have" << l-- <<"lives remaining"<< endl;
    }
 
   
 
}


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string namez;
    int stuID;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" <<endl;
    cout << "?????: " ;
    getline(cin,namez);
    cout << "Fahsai: Wow!!! " << namez <<" is a really cool name." <<endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
    cout << namez << ": ";
    cin >> stuID;
    cin.ignore();
    
    int year;
    int GearCal;
    year = stuID/pow(10,7);
    GearCal= year-12;

    string movie, day, text;
    cout << "Fahsai: I think you may be GEAR " << GearCal << ". I have a free movie ticket for you."<<endl;
    cout << "Fahsai: Let's go to the cinema together!!!" <<endl;
    cout << "Fahsai: What movie do you want to watch?" <<endl;
    cout << namez << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << namez << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching ";
    cout << movie << " with you." << endl;
    cout << namez << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye " << "\\" << "(^ ^)/";

}
// yeahhhhhhhhhhhh

// conditions in cpp
#include <iostream>
using namespace std;
int main() {
    int x;
    string greeting;
    cout<<"What is your Age?" <<endl;
    cin >>x;
    cout<< "Your Name" <<endl;
    cin >> greeting;
    cout<< "Thansk ";
    cout<<greeting<<endl;
    if(x>17 || x==0){
        cout<< "You are Adult"<<endl;
    }
    else {
        cout<< "You are child" <<endl;
    }
}
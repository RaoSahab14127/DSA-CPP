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
// detect input is small letter capital or numerical
#include <iostream>
using namespace std;
int main() {
    char x;
    cout<<"Enter Your char...:" <<endl;
    cin >>x;
    int res = int(x);
    if(res>=48 && x<=57){
        cout<< "Enter char is numeric"<<endl;
    }
    else if (res>=97 && x<=122){
        cout<< "Enter char is small letter"<<endl;
    }
    else if(res>=65 && x<=90){
        cout<< "Enter char is capital letter"<<endl;
    }
    else{
        cout<< "others char"<<endl;
    }
}
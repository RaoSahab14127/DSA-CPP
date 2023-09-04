// switch and function code
#include <iostream>
using namespace std;
int age_days(int a){
    int res = a * 365;
    return res;
}
int main() {
    int age ;
    cin>>age;
    int day = age_days(age);
    switch(day){
        case (10): cout<<"10"<<endl;
        default: cout <<"your age is " << day <<endl;
    }
}
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


// swape alernate values
#include <iostream>
using namespace std;
void print(int arr[], int size){
    for(int i =0; i<size; i+=1){
        cout<<arr[i];
    }
        cout<<endl;
}
void swapi(int arr[], int size){
    for(int i =0; i<size; i+=2){
        if (i+1 < size){
        swap(arr[i],arr[i+1] );
            
        }
    }
}
int main(){
    cout<<"startingg..."<<endl;
    int even[10]= {1,2,3,4,5,6};
    int odd[10]= {1,2,3,4,5};
    
    swapi(even, 6);
    print(even, 6);
    swapi(odd, 5);
    print(odd, 5);
    
}
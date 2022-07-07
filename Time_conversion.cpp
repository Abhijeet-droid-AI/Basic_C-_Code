#include <iostream>
using namespace std;

int main(){
    int  input_time;
    int hours, minutes, seconds;
    cin>>input_time;
    hours=input_time/3600;//conversion into hours
    input_time=input_time%3600;
    minutes=input_time/60;
    seconds=input_time % 60;
    cout<<hours<<endl;
    cout<<minutes<<endl;
    cout<<seconds<<endl;
}
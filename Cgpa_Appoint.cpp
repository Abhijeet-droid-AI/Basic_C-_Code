#include <iostream>
using namespace std;
int main(){
    int cgpa;
    cin>>cgpa;
    if(cgpa>=9 && cgpa<=10){
        cout<<"Outstanding"<<endl;
    }
    else if(cgpa>=8 && cgpa<9){
        cout<<"Excellent"<<endl;
    }
    else if(cgpa>=5 && cgpa<7){
        cout<<"Very Good"<<endl;
    }
    else if(cgpa>=4 && cgpa<75){
        cout<<"Good"<<endl;
    }
    else if(cgpa<4){
        cout<<"Satisfaction"<<endl;
    }else{
        cout<<"Enter correct Value"<<endl;
    }
}
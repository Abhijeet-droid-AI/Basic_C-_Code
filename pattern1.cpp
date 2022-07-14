#include <iostream>
using namespace std;
int main(){
    int rows,cols;  //rows and columns
    cout<<"Enter no. of layers"<<endl;
    cin>>rows>>cols;                        //Rectangular pattern.
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=cols;j++){
        cout<<"*";
        }
        cout<<endl;;
    }

    return 0;
}
#include <iostream>                 //HOLLOW RECTANGLE PATTERN
using namespace std;
int main(){
    int rows, cols;
    cout<<"Enter the length and breadth: "<<endl;
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(i==1 || i==rows || j==1 || j==cols){     //IF -case for checking the case
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}
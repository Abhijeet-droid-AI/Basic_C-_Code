#include <iostream>
using namespace std;
int main(){
    int n;              // INVERTED PYRAMID
    cout<<"Enter the no. of rows to be printed: "<<endl;
    cin>>n; //No. of layers in the pyramid  

    /*for(int i=n;i>=1;i--){      //for loop for rows                 // INVERTED HALF PYRAMID
        for(int j=1;j<=i;j++){  //for loop for columns
            cout<<"*";
        }
        cout<<endl;
    }*/

    /*for(int i=1;i<=n;i++){         // // HALF PYRAMID AFTER 180 DEG ROTATION
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }*/

  /*  for(int i=1;i<=n;i++){  //HALF PYRAMID USING NUMBERS
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }*/

    int count=1;
    for(int i=1;i<=n;i++){     // FLOYD'S TRIANGLE
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    int i;
    int j;
    int arr[4][5];
    cout<<" enter your array : ";
    for( i=0; i<4; i++){

        for ( j=0; j<5; j++){

             cin>>arr[i][j];
        }

    }

    int sum=0;
    for( i=0; i<4; i++){
        for( j=0; j<5; j++){
            if(i==j){
                sum += arr[i][j];
            }
        }
    }
    cout<<endl<<" sum is : " <<sum<<endl;
return 0;
}

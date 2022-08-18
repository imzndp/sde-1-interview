#include<iostream>
using namespace std;

int main(){
  int a[10] = {0}; //Defines and initialize all array element with 0
  for (int i = 0 ; i < 5 ; i++){
    cin>>a[i];  //Initialize array elements
  }

  //Printing array elements
  for (int i = 0 ; i < 10 ; i++){
    cout<<a[i]<<" ";  //Printing array elements
  }
  return 0;
}

#include<iostream>
using namespace std;


int main(){

    int nm,first,last,sum;

       cout<<"Enter number: ";

 cin>>nm;

      last=nm%10;

      while(nm>=10){

        nm=nm/10;
    }
    first=nm;

    sum=first+last;

    cout<<"The sum is : "<<sum;

    
}
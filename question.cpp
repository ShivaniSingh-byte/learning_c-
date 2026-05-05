#include<iostream>
using namespace std;
int main(){
    //w.a.p to print the no. 20 to 1 but skip 20 and 5 :
    for(int i=20; i>=1; i--){
        if(i==15 || i==5){
            continue;
        }
    cout<<i<<" ";
    }

    /*w.a.p to take two integer from the user and check first input is even or odd if the no will be even then print the
    reverse table of second input if no is odd then print the cube of first input :
    int a;
    int b;
    cout<<"Enter a no:";
    cin>>a>>b;

    if(a%2==0){
    for(int i=10 ; i>=1; i--){
        cout<<b<<"*"<<i<<"="<<b*i<<endl;
    }
    }
    else{
       cout<<"Cube of first no :"<<a*a*a;
    }

    w.a.p to check the no. is odd or even :
    int num;
    cout<<"Enter a no:";
    cin>>num;

    if(num%2==0){
        cout<<"even";
    }
    else{
        cout<<"Odd";
    }

    w.a.p to take integer no. from the user and find area of circle :
    float r;
    cout<<"Enter a no:";
    cin>>r;
    cout<<"Area of Circle :"<<3.14*r*r;*/
}

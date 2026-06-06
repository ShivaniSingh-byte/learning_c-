#include<iostream>
using namespace std;
int main(){
    1. w.a.p to print positive , negative or zero :
    int num;
    cout<<"Enter a no:";
    cin>>num;

    if(num>0){
        cout<<"Positive";
    }
    else if(num<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }

    2. w.a.p to print Students grade :
    int marks;
    cout<<"Enter a no:";
    cin>>marks;

    if(marks<100 && marks>=80){
        cout<<"Grade A";
    }
    else if(marks<80 && marks>=60){
        cout<<"Grade B";
    }
    else if(marks<60 && marks>=40){
        cout<<"Grade C";
    }
    else if(marks<40 && marks>=0){
        cout<<"Grade D";
    }
    else{
        cout<<"Invalid Marks";
    }

    3. w.a.p to print even and odd no :
    int num;
    cout<<"Enter a no:";
    cin>>num;

    if(num%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }

}

/*# Switch case :-
Advantages :
    Jumping Statement
    Menu base programming
Diadvantages :
    int, char, support
    Arithmetic
    Case should not be same

Syntax :  switch(expression){
          case :
          break;
          case :
          break;
          case :
          break;
          default :
          }*/

#include<iostream>
using namespace std;
int main(){
    /*int day;
    cout<<"Enter a day :";
    cin>>day;

    switch(day){
       case 1: cout<<"Monday";
       break;
       case 2: cout<<"Tuesday";
       break;
       case 3: cout<<"Wednesday";
       break;
       case 4: cout<<"Thursday";
       break;
       case 5: cout<<"Friday";
       break;
       case 6: cout<<"Saturday";
       break;
       case 7: cout<<"Sunday";
       break;
       default :cout<<"Invalid";
    }*/

    int a,b;
    cout<<"Enter a no :";
    cin>>a>>b;
    char op;
    cout<<"Enter +-*/ :";
    cin>>op;

    switch(op){
       case '+' : cout<<a+b;
       break;
       case '-' :cout<<a-b;
       break;
       case '*' :cout<<a*b;
       break;
       case '/' : cout<<a/b;
       break;
       default : cout<<"Invalid";

    }


}


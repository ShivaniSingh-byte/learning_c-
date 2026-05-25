/*Function : block of code ko multiple time use krne ke liye function ka use krte hn.
             redability & reusability
    two types :
    1. predefine
    2. user-define

    1. predefine :
       cin,cout,sizeof,int_max.

    2. user-define :
     1. return type
     2. non-return type : void hamesha use krte hn kyuki yeh value store nhi krta.

     1. return types - with arguments & without arguments.
     1. non-return types - with arguments & without arguments.

     syntax :
         data-type function_name(int a, float b){parameter
         }*/

#include<iostream>
using namespace std;
int factorial(int num){
    int ans=1;

    for(int i=1; i<=num; i++){
        ans=ans*i;
    }
    return ans;
}

int main(){
    int a=factorial(5);
    int b=factorial(6);
    int c=factorial(7);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c;
}

/*
// return type without arguments
char hello(){
    return 'A';
}

// return type with arguments
int sum(int a, int b){
    return a+b;
}

int main(){
    cout<<sum(7,8);
    int ans=sum(7,9);
    cout<<ans;

    cout<<hello()<<endl;
    char a=hello();
    cout<<a;

}*/

/*
// non return type without arguments
void hello(){  //parameter
    cout<<"hello"<<endl;
}

// non return type with arguments
void sum(int a, int b){
    cout<<a+b;
}

int main(){
    hello();

    int num1,num2;
    cout<<"Enter 1st no:";
    cin>>num1;
    cout<<"Enter 2nd no:";
    cin>>num2;
    sum(num1,num2);
}*/

/*int sum(int a, int b){
    return a+b;
}

int main(){
    int ans=sum(5,7);
    cout<<ans;
}*/

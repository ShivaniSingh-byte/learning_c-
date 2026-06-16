#include<iostream>
using namespace std;
int main(){
    int num=40;
    int count=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<num<<" Is a prime no";
    }
    else{
        cout<<num<<" Is not a prime no";
    }
}

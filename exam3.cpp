#include<iostream>
using namespace std;
int main(){
    int a=12;
    int b=40;
    int hcf;
    int min=(a>b)?a:b;
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
}

#include<iostream>
using namespace std;
int main(){
    char a='A';
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col<=row){
                cout<<a++;
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

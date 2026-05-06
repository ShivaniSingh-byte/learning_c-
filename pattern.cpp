#include<iostream>
#include<climits>
using namespace std;
int main(){
    //cout<<CHAR_MAX<<endl;
    //cout<<CHAR_MIN<<endl;
    // typecasting is to convert the int to char or char to int.
    // sky ka mtlb hn ki char ki int value.
    //ASCII Values :
    /*for(int i=0; i<=127; i++){
        cout<<"The ASCII Value of "<<i<<" is "<<char(i)<<endl;
    }*/

     //pattern :
     //afghfjkhgfdjsh
     /*int a=1;
     for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col<=row){
                cout<<char(64+a);
                a++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

     //abcde
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col<=row){
                cout<<char(64+col);
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    dynamic :
    int num;
    cout<<"Enter a no:";
    cin>>num;

    for(int row=1; row<=num; row++){
        for(int col=1; col<=num; col++){
            if(col>=(num+1)-row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //right (no.): (c<=r)
    int a=1;
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col<=row){
                cout<<a++; //row , col
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //right (no.): (c<=r)
   /* int a=1;
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col<=row){
                cout<<a++; //row , col
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    // reverse pyramid :
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col>=row){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //inverted left pyramid :
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col>=6-row){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //inverted right : (c<=6-r)
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col<=6-row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //left : (c>=6-r)
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col>=6-row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //inverted left: (c>=r)
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col>=row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //right: (c<=r)
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col<=row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int i=2; i<=10; i++){
        for(int j=1; j<=10; j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }*/
}

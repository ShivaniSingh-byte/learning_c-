#include<iostream>
using namespace std;
int main(){
    int x = 5;
cout << x + ++x + x++;
    ///Sparse Matrix :more than half zero matrix and then convert into sparse matrix..
    ///agr zero ki value non-zero se zyada hn toh sparse matrix bana dete hn..
    ///it is used for space utilisation
    ///sparse matrix is represented by two ways : 1.either array 2.linked list
    /*int m[3][3]={1,2,0,0,5,0,5,0,3};
    int cnt=0;
    cout<<"original array : \n";
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            cout<<m[c][r]<<"\t";
        }
        cout<<"\n";
    }

    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            if(m[r][c]==0){
                cnt++;
            }
        }
    }

    int t=9-cnt;
    cout<<"\n total non zero="<<t;
    int s[t][3];
    int k=0;
    if(cnt>9/2){
        for(int r=0; r<3; r++){
            for(int c=0; c<3; c++){
                if(m[r][c]!=0){
                    s[k][0]=r;
                    s[k][1]=c;
                    s[k++][2]=m[r][c];
                }
            }
            cout<<"\nsparse values are :";
            for(int r=0; r<3; r++){
                for(int c=0; c<3; c++){
                    cout<<s[r][c]<<"\t";
                }
                cout<<"\n";
            }
        }
            else{
                cout<<"\nit is not sparse matrix";
            }
    }*/


    ///Full triangle :
    /*int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"Original Array : \n";
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }*/

    ///Lower Triangle :
    /*int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"Lower Triangle : \n";
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            if(c<r){
                cout<<"0"<<"\t";
            }
            else{
                cout<<arr[r][c]<<"\t";
            }
        }
        cout<<"\n";
    }*/

    ///Upper Triangle :
    /*int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"Upper Triangle : \n";
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            if(c>r){
                cout<<"0"<<"\t";
            }
            else{
                cout<<arr[r][c]<<"\t";
            }
        }
        cout<<"\n";
    }*/
}

///Recursion : A function calling itself is called recursion.
    ///There are 2 types of recursion :
    ///head and tail recursion..
    /*int dsa(int v){
        if(v==0){
            return 0;
        }
        dsa(v-1);
        cout<<v<<"\t";
    }
int main(){
    dsa(5);
}*/

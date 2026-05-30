#include<iostream>
using namespace std;

    /* Constructor :
    1. default constructor
    class demo{
    public :
        demo(){
            cout<<"default constructor";
        }
      };

    2. parameterized constructor
    class demo{
    public :
        int x;

        demo(int a){
            x=a;
        }
    };

    3. copy constructor
    class demo{
    public :
        int x;

        demo(int a){
            x=a;
        }

        demo(Bobj){
            x=obj.x;
        }
    };

    4. constructor overloading
    class demo{
    public :
        demo(){}
        demo(int a){}
        demo(int a , int b){}
    };*/


    /*encapsulation :
    class bankaccount{
    private :
        int balance;  //hidden data

    public :
        void setbalance(int amount){
            if(amount>=0)
               balance=amount;
            else
                cout<<"Invalid Amount";
        }

        int getbalance(){
            return balance;
        }
    };

int main(){
    bankaccount acc;
    acc.setbalance(5000);
    cout<<"current balance :"<<acc.getbalance();
}*/

/* example of class :
class student {
private :

    int marks;

public :
    void setmarks(int m) {marks=m;}
    int getmarks() {return marks;}
};*/

/* example of structure :
struct student{
    int marks;
};*/



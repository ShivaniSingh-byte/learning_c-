/* Polymorphism (greek word): More than one forms.
Poly - many
morphism - form
two types :
    1. compile-time & static binding : eg-operator overloading,function overloading,create normal object.
    2. run-time & dynamic binding : eg-function overriding,virtual keyword,pure virtual function,create pointer object. */
//virtual function ko jbb zero se initialize krte hn to pure virtual function
/*#include<iostream>
using namespace std;
//run-time polymorphism
class RBI{
public :
    virtual void SHOW(){
        cout<<"RBI"<<endl;
    }
};
class SBI:public RBI{
public :
    void SHOW(){
        cout<<"SBI"<<endl;
    }
};
class PNB:public RBI{
public :
    void SHOW(){
        cout<<"PNB"<<endl;
    }
};
int main(){
    RBI *R;
    SBI S;
    PNB P;
    R=&S;
    R->SHOW();
}*/


/* Operator Overloading : if a class having more than one operator functions of different types is called  Operator Overloading.
Operator Overloading function is defined by Operator Keyword along with mathematical operator symbol.
are two types :
    1. Unary Operator : ++ -- only one operand is used
    2. Binary Operator : + - * / % two operands are used  */

/*#include<iostream>
using namespace std;*/

/* 1. Unary Operator Overloading
class opp{
    int a=9;
public :
    void operator++(){
        a=a+1;
        cout<<a<<endl;
    }
    void operator--(){
        a=a-1;
        cout<<a;
    }
};

int main(){
    opp obj;
    ++obj;
    --obj;
}*/

/* Binary Operator Overloading : complex no ko add krne ke liye
class opp {
    int kg,gm;
public :
    opp(int k,int g) {
        kg=k;
        gm=g;
    }
public :
    void operator+(opp &obj) {
        kg=kg+obj.kg;
        gm=gm+obj.gm;
        cout<<"kg="<<kg<<endl;
        cout<<"gm="<<gm<<endl;
    }
};
int main(){
    opp obj1(2,300);
    opp obj2(3,400);
    obj1+obj2;
}*/

/*Function Overloading :
    A class having more than one function with similar name but having different
    parameter is called Function Overloading*/

   /*class joy {
    public :
        void sum(){
            cout<<"Sum Program"<<endl;
        }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int x){
        cout<<x+400;
    }
    };
    int main(){
        joy j;
        j.sum();
        j.sum(3,4);
        j.sum(5);
    }*/


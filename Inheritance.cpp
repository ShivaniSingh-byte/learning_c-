#include<iostream>
using namespace std;

// Inheritance:It inherits/acquires the property of parent class
/*
Single Inheritance:
    1. It is having only two classes i.e. Parent class & Child class
    2. Always create an object child class  */
//Syntax:
/* class parent
{
Declare data member;
Declare member functions;
};
class child:public parent
{
Declare data member;
Declare member functions;
}; */

/*single Inheritance :
class father
{
protected : int a,b;
public:void mul()
{
a=10;
b=20;
cout<<"multiply of father class="<<a*b<<"\n";
}
};
class child:public father
{
public:void subtract()
{
a=10;
b=20;
cout<<"subtraction of child class="<<a-b<<"\n";
}
};

int main()
{
child c;
c.mul();
c.subtract();
cout<<sizeof(c);
}*/

/*Mutilevel Inheritance :
class grandfather
{
protected:int a,b;
public:void sum()
{
a=10;
b=20;
cout<<"sum of grandfather class="<<a+b<<"\n";
}
};
class father:public grandfather
{
public:void mul()
{
a=10;
b=20;
cout<<"multiply of father class="<<a*b<<"\n";
}
};
class child:public father
{
public:void subtract()
{
a=10;
b=20;
cout<<"subtraction of child class="<<a-b<<"\n";
}
};

int main()
{
child c;
c.mul();
c.sum();
c.subtract();
cout<<sizeof(c);
}*/

/*Multiple Inheritance:
class A
{
 public:void show()
 {
  cout<<"Class A\n";
 }
};

class B
{
public:void show()
{
cout<<"Class B\n";
}
};

class C:public A,public B
{
public:void result()
{
 cout<<"Class C\n";
}
};

int main()
{
C obj;
obj.show();
}*/

/*Hierarchical Inheritance: Every child class inherits the property of root class/parent class.
class RBI
{
public:void bank()
{
cout<<"RBI\n";
}
};
class SBI:public RBI
{
public:void sbibank()
{
cout<<"SBI BANK\n";
}
};
class PNB:public RBI
{
public:void pnbbank()
{
cout<<"PNB BANK\n";
}
};
class AXIS:public RBI
{
public:void axisbank()
{
cout<<"AXIS BANK\n";
}
};
int main()
{
SBI s;
s.bank();
s.sbibank();
PNB p;
p.bank();
p.pnbbank();
AXIS a;
a.bank();
a.axisbank();
}*/

/*HYBRID INHERITANCE: it is the combination of multiple inheritance.
class A{
public :
    void f1(){
        cout<<"Class A"<<endl;
    }
};
class B : public A{
public :
    void f2(){
        cout<<"Class B"<<endl;
    }
};
class C{
public :
    void f3(){
        cout<<"Class C"<<endl;
    }
};
class D : public C{
public :
    void f4(){
        cout<<"Class D"<<endl;
    }
};
class E : public D{
public :
    void f5(){
        cout<<"Class E"<<endl;
    }
};
class F : public E,public B{
public :
    void f6(){
        cout<<"Class F";
    }
};
int main(){
    F ob;
    ob.f1();
    ob.f2();
    ob.f3();
    ob.f4();
    ob.f5();
    ob.f6();
}*/

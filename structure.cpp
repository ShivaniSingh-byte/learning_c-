/*Structure :
    Structure is a collection of data member & member function
    it is user defined - int float char string bool
    top to bottom approach ke liye int main ke uper likhte hn

    structure-public
    class-private

    syntax :
        struct struct_name{
            int a // data member
            void show(){
                  // member function/method
            }
        };

        struct name obj;

# access specifies :
1. public
2. private
3. protected

Four pillars of oops :
1. Encapsulation - WRAPING up of data in single unit
2. Inheritance
3. Polymorphysm - many forms
4. Abstraction - hiding the background info and only show the revelent data


constructor :
1.special function
2.which has no return type
3.function name is always same as class name
4.it will automatically call when the object is created

types :
1. default constructor
2. parameterized constructor
3. copy constructor

Inheritance :
1. Single Inheritance
2. Multilevel Inheritance
3. Multiple Inheritance
4. Hyrarical Inheritance
5. Hybrid Inheritance
*/

#include<iostream>
using namespace std;

/* 2. Multilevel Inheritance

class A{
    public:
    int a=10;
};

class B:public A{
    public:
    int b=20;
};

class C:public B{
    public:
    int c=30;
};

class D:public C{
    public:
    int d=40;
};

int main(){

    D obj;
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    cout<<obj.d;
}*/

/* 1. single Inheritance

class A{   // base/parent class
    public:
    int a=10;
};

class B:public A{   //child/derived class
    public:
    int b=20;
};

int main(){

    B obj; //always create object of child class
    cout<<obj.a<<endl;
    cout<<obj.b;
}*/

/*class student{
    string name;
    int rollno;

    public :

    student(){   //constructor
        cout<<"Hello";
    }

    student(string stname, int strollno){   // constructor
        name=stname;
        rollno=strollno;
    }

    void show(){
        cout<<"Hello "<<name<<" your roll no. is :"<<rollno<<endl;
    }
};

int main(){
    student obj3;
    student obj1("shivani", 277);
    student obj2("shivangi", 27);
    obj1.show();
    obj2.show();
}*/


/*class student{       OOPs
    string name="raj";
    int rollno=101;

    public:
    void show(){
        cout<<"Name is :"<<name<<" and roll no. is :"<<rollno;
    }
};

int main(){

    student obj;
    obj.show();   // .member operator
}*/

/*struct student{
    int a=10;   //data member

    void show(){                  // member function/method
        cout<<"Hello Student";
    }
};

int main(){
    // int a;
    student obj;
    cout<<obj.a<<endl;            // --> member operator
    obj.show();
}*/

/*struct student{
    int a=10;

    void show(){
        cout<<"Hello Student";
    }
}k;

int main(){
    cout<<k.a;
}*/

/*struct student{
    private:
    int a=10;
    public:
    void show(){
        cout<<"Hello Student"<<a;
    }
    int b=10;
};

int main(){
    student obj1;
    obj1.show();
    student obj2;
    obj2.show();
}*/

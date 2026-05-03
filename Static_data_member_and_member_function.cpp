/*Static data member and member function
static data member :
1.static data member is created by static keyword.
2.by default the static data member is initialised by 0.
3.the static data member of memory is created only by once and first object.
4.after that is shares it's memory.
5.the memory of static data member is not occupied by an object.
6.we can re-initiliased the value of static data member.*/

#include<iostream>
using namespace std;
//Static data member :
/*class bank{
    static int a;
public :
    void show(){
    cout<<"a="<<++a<<endl;
    }
};
int bank::a;
int main(){
    bank token1;
    token1.show();
    bank token2;
    token2.show();
    bank token3;
    token3.show();
}*/

//Static member function : static member function is used only static data member.
//static data member function called or invoked by scope resolution operator along with classname.
//NOTE : WE NEED NOT CREATE AN OBJECT TO CALL STATIC MEMBER FUNCTION.
/*class bank{
    static int a;
public :
    static void show(){
    cout<<"a="<<++a<<endl;
    }
};
int bank::a;
int main(){
    bank::show();
    bank::show();
}*/

/*FRIEND FUNCTION : IT IS USED TO ACCESS THE PRIVATE AND PROTECTED DATA MEMBER OUTSIDE OF CLASS.
FRIEND FUNCTION IS DECLARED BY FRIEND KEYWORD.
FRIEND FUNCTION IS USED AS A OBJECT INSIDE THE CLASS PARAMETER.
MEMORY IS CREATED OUTSIDE THE FUNCTION. */

class SUHANI;
class SHIVANI{
    int marks;
public :
    void get(int m){
        marks=m;
    }
    friend void student(SHIVANI,SUHANI);
};
class SUHANI{
    int marks;
public :
    void get(int m){
        marks=m;
    }
    friend void student(SHIVANI,SUHANI);
};
void student(SHIVANI obj1,SUHANI obj2){
    cout<<"Shivani got marks = "<<obj1.marks<<endl;
    cout<<"Suhani got marks = "<<obj2.marks;
}
int main(){
    SHIVANI obj1;
    obj1.get(91);
    SUHANI obj2;
    obj2.get(88);
    student(obj1,obj2);
}


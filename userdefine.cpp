#include<iostream>
using namespace std;
class udf
{
public:int acno;
char name[10];
float balance ;
};
int main()
{
udf obj;//non primitive
int k;//primitive
cout<<"enter ur acno\n";
cin>>obj.acno;
cout<<"enter ur name\n";
cin>>obj.name;
cout<<"enter ur balance\n";
cin>>obj.balance;

}

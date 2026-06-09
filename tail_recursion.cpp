#include<iostream>
using namespace std;
void count(int n)
{
if(n==0)
{
return ;
}
cout<<n<<"\n";
count(n-1);
}
int main()
{
int n;
cout<<"enter value\n";
cin>>n;//5
count(n);
}

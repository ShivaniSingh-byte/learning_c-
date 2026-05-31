#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
int array[20], n, c, d,t;
//clrscr();
cout<<"Enter size of array\n";
cin>>n;
cout<<"Enter values\n";
for (c = 0; c < n; c++)
{
cin>>array[c];
}
//Bubble Sort
for (c = 0 ; c < ( n - 1 ); c++)
{
for (d = 0 ; d < n - c - 1; d++)
{
if (array[d] > array[d+1])
{
t = array[d];
array[d] = array[d+1];
array[d+1] = t;
} } }
cout<<"Sorted list in ascending order:\n";
for ( c = 0 ; c < n ; c++ )
{
cout<<array[c]<<"\n";
}
getch();
}

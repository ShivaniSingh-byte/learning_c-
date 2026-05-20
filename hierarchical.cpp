#include<iostream>
using namespace std;
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
}


#include<iostream>
using namespace std;

union A
{
    int a;
    char c;
};
int main()
{
    A b;
    b.a = 10;
    int a= 20;
    char * p = &a;
    if(*p == 10)
        cout<<"small data"<<endl;
return;
    if(b.c == 10)
        cout<<"small data"<<endl;
    else 
        cout<<"big mode"<<endl;
    return 0;
}

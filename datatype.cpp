// Program to find size of each data-type
#include<iostream>
using namespace std;
int main()
{
    int a; //declaration
    cout<<"Size of int : "<<sizeof(a)<<endl;
    float b;
    cout<<"Size of float : "<<sizeof(b)<<endl;
    char c;
    cout<<"Size of character : "<<sizeof(c)<<endl;
    bool d;
    cout<<"Size of boolean : "<<sizeof(d)<<endl;

    short int si;
    long long int li;

    cout<<"Size of short int : "<<sizeof(si)<<endl;
    cout<<"Size of long int : "<<sizeof(li)<<endl;

    return 0;
}
// problem: find maximum of three numbers
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"nter any three numbers";
    cin>>a>>b>>c;
    if ((a>b)&&(a>c)){
        cout<<"max is a:"<<a;
    }
    else if ((b>a)&&(b>c)){
        cout<<"max is b:"<<b;
    }
    else{
        cout<<"max is c:"<<c;
    }
    return 0;
}
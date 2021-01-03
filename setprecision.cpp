//G4G set precision program 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//code
	int t ;
	while (t--){
	    float a;
	    int b;
	    cin>>a>>b;
	    cout<<setprecision(b)<<a<<endl;
	}
	return 0;
}
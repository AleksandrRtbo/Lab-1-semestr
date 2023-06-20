#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	float a,b, total;
	int c,d;
	
	cout<<"Enter a, b, c, d: \n" ;
	cin>>a>>b>>c>>d;
	if (a*a-1 != 0 ){	
		total = (atan(c/4) - d * 62) / (a*a-1);
		cout << "Result: " << total;
	} else {
		cout <<"ERROR";
	}
	return 0;
}

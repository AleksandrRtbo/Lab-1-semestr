#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	double x;
	cout<<"Enter x: ";
	cin>>x;
	if (-13 > x){
		cout<<"Result: "<<cbrt(x*x+12*x+1);
	}
	if (-13 <= x && x < -5){
		if((x*x+12*x+1)!=0){
			cout<<"Result: "<<1/(x*x+12*x+1);
		}
	  	else cout<<"ERROR: WRONG ARGUMENT"<< endl;
	}
	if (-5 <= x){
		if((x*x+12*x+1)>0){
			cout<<"Result: "<<log(x*x+12*x+1);
		}
	  	else cout<<"ERROR: WRONG ARGUMENT "<< endl;
	}
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int a, b;
	long int X;
	cout<<"Enter a, b: ";
	cin>>a>>b;
	
	if (a > b){
		if(b!=0){
			X = (a/b)+1;
			cout<<"Result: "<< X;
		}
		else cout<<"ERROR: "<< endl;
	}
	if ( a == b){
		X = -25;
		cout<<"Result: "<< X;
	}
	if (a < b){
		if(a!=0){
			X = (b-45)/(a);
			cout<<"Result: "<< X;
		}
		else cout<<"ERROR: "<< endl;
	}
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

long double fact(int N)
{
    if(N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1); 
}

int main(int argc, char** argv) {
	int n, x, m, k = 1;
	float total = 0;
	cout<<"Enter x, n, m: ";
	cin>>x>>n>>m;
	if(n<=0 || m<=0){
		cout<<"number n and m should be positive";
		return -1;
	}
	while (k <= n){
		total += (pow(-1, k) * pow(x, k + m)) /
		 (fact(k + 2) * (k + m) );
		k++;
	}
	
	cout<<"Result: "<<total;
	
	return 0;
}



#include <iostream>

using namespace std;

int main() {
	int A,n=0;
	double sum=0.0;
	cout<<"Enter your number A\n";
	cin>>A;
	if(A<=1){
		cout<<"ERROR";
		return -1;
	}
	while (sum<=A) { 
		n++;
		sum+=1.0/n;
	}
	cout << "N is equal "<< n<<"\n";
	cout << "Sum is equal "<< sum;
}

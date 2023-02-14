#include<iostream>
using namespace std;

void myString(char *&a,int n){
	a = new char[n+1];    
	for(int i = 0; i < n;i++) a[i] = 'A'+i;
	a[n+1] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}

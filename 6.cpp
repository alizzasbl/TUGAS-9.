#include<iostream>
using namespace std;

main() 
{
	int n;
	
	bool flip = false;
	
	cout<<"Masukkan nilai n : ";
	cin>>n;
	
	int nilai = n;
	
	for(int i = 0; i < (2*n-1); i++) {
		for(int j = 1; j <= (2*n-1); j++) {			
			cout<<nilai;
		}
		
		cout<<endl;
		
		if(nilai == 1)
			flip = !flip;
	
		if(!flip)
			nilai--;
		else
			nilai++; 
	}
}

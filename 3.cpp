#include<iostream>
#include<iomanip>
using namespace std;

main() 
{
	int nilai = 3;
	
	for(int i = 1; i <= 10; i++) {
		for(int j = 0; j < i; j++) {
		
			cout<<setw(2)<<nilai + j<<" ";
		}
		
		cout<<endl;
	
		nilai += 2;
	}
}

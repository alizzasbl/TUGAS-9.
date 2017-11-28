#include<iostream>
#include<iomanip>
using namespace std;

main()
{
	for(int i = 2; i <= 6; i++) {
		for(int j = 0; j < 5; j++) {
		
			cout<<setw(1)<<i + j<<" ";
		}
	
		cout<<endl;
	}
}

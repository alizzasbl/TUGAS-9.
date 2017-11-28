#include<iostream>
using namespace std;

main() 
{
	int n;
	
	bool flip = false;

	cout<<"Masukkan nilai n : ";
	cin>>n;
	
	int nilai = n;
	
	int z;

	for(int i = 0; i < (2*n-1); i++) {
		if((2*n-1-i) == n - 1) {
			flip = !flip;
			z = n - 2;
		}
		
		for(int j = 0; j < (2*n-1); j++) {
			if(!flip) {
				if(n - i <= n - j && j > 0) {
					nilai--;
				}
				else if(j >= (2*n-1) - i) {
					nilai++;
				}
			}
			else {
				if(n - z <= n - j && j > 0) {
					nilai--;
				}
				else if(j >= (2*n-1) - z) {
					nilai++;
				}
			}
			cout<<nilai;
		}
		
		cout<<endl;
		
		nilai = n;
		
		z--;
	}
}

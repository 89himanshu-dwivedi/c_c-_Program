#include<iostream>
using namespace std;
int main()
{
	int i,j,b, n[10];
	cout<<"enter the value of b"<<endl;
	cin>>b;
	 for ( i = 0; i<b; i++ ) 
	 {
	 	cout << "Enter value of n[" << i << "]"<< endl;
    	        cin >> n[i];
  	}
  	
  	/* printing the values of elements of array */
  	for (j = 0; j < b; j++ ) 
  	{
    	       cout << "n[" << j << "] = " << n[j] << endl;
  	}
					return 0;
					
}

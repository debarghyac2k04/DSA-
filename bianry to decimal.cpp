#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int last;
	int n ;
	cin>>n;
	
	int i =0;
	int ans=0;
	while(n!=0){
		last = n%10;
		ans= last* pow(2,i) + ans;
		i=i+1;
		n=n/10;
		
		
	}
	cout <<ans;
}

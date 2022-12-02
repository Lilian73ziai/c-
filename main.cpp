#include <iostream>

using namespace std;

int main() {
	int m, n, pow;
	cin>>m>>n;
	pow=1; 
	for  (int i=1 ; i<=n ; i++)
	pow*=m; 
	cout<<pow;

}
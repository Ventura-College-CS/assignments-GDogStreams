#include <iostream>
using namespace std;

int main()
{
	const int x = 10;
	int numbers[x] = { 5,7,2,4,6,7,10,1,3,9};
	
	for(int v: numbers)
		cout << v;
	cout << endl;

	for(int i=0; i<x/2; i++)
		swap( numbers[i], numbers[x-i-1] ) ;

	for(int v: numbers)
		cout << v;
	cout << endl;
}
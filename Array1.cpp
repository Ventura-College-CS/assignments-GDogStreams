#include <iostream>
using namespace std;

int main()
{
    const int [x] = 10;
    int numbers [x] = {5,7,2,4,6,7,10,1,3,9};

    for(int i=1; i i<x-1; i++)
    {
        if((numbers[i-1]<numbers[i]) && (numbers[i]<numbers[i+1]))
        cout << numbers[i] << "It's now in an increasing order";
        cout << "Test";
    }
}
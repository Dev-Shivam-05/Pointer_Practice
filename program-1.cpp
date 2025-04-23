#include<iostream>
using namespace std;

int main()
{
    int num_1;
    int *pointer;

    cout << "Enter A Number : ";
    cin >> num_1;

    pointer = &num_1;

    cout << "Address :- " << pointer;
    return 0;
}
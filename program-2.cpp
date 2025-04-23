#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter The Size Of Array : ";
    cin >> size;

    int array[size],i;

    for (i = 0; i < size; i++)
    {
        cout << "Enter The Value Of Array["<< i <<"] :- ";
        cin >> array[i];
    }

    int *pointer[size];    
    
    for (i = 0; i < size; i++)
    {
        pointer[i] = &array[i];
    }
    for (i = 0; i < size; i++)
    {
        cout << "The Address of Array["<< i <<"] :- " << pointer[i] << endl;
    }

    int *point_array = &array[0];
    for (i = 0; i < size; i++)
    {
        if (array[i] > *point_array)
        {
            point_array = &array[i];
        }
    }   
    
    cout << endl << "The Largest Value Of The Array Is :- " << *point_array << " And It's Adderess Is " << point_array;
    return 0;
}
// shift all the zeros in the array to the right of the array..

#include <iostream>
using namespace std;

void sort(int array[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (array[j] != 0)
        {
            swap(array[j], array[i]);
            i++;
        }
    }
}
void print(int arrd[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arrd[i] << " ";
    }
}

int main()
{
    int array[5] = {0, 1, 0, 5, 4};
    sort(array, 5);
    print(array, 5);
}
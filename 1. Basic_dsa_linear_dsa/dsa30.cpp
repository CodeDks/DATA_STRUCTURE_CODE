// Book allocation problem..

/*
Given an array 'arr' of integer numbers.Where arr[i] represents the no of pages in the i^th book. There are 'm' no of students
and the task is to allocate all the books to their students. Allocate books in such a way that..

1. Each students atleast gets one books.
2. Each book should be allocated to the students.
3. Books allocation should be in contiguous manner.
4. You have to allocate book to 'm' students such that maximum no of pages assigned to a student is minimum.

*/

#include <iostream>
using namespace std;

bool ispossiblesoln(int arrd[], int size, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pagesum + arrd[i] <= mid)
        {
            pagesum = pagesum + arrd[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arrd[i] > mid)
            {
                return false;
            }
            pagesum = arrd[i];
        }
    }
    return true;
}

int allocatebook(int arr[], int size, int m)
{
    int s = 0;
    int sum = 0;
    int ans = -1;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    int e = sum;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (ispossiblesoln(arr, size, m, mid)) // Agar mid possible solution hh to check karo ki mid se pehle wala element possible
                                               // ans ho skta hh ya nahi..
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1; // Agar mid possible soln nahi hh to uske piche wala possble soln nahi ho skta isiliye
                         // aage check karna hh..
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    int array[4] = {10, 20, 30, 40};
    int m = 2;
    cout << "the ans is " << allocatebook(array, 4, 2);
}
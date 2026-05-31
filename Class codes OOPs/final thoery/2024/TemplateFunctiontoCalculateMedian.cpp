// Q3 [Marks 10. CLO2]. Construct a template function that calculates and returns median of an array passed as a parameter to it. Median calculation formulae: For a sorted array: If the total number of terms (n) is an odd number, then the formula is given below: Median = n+1 2 th term
// If the total number of terms (n) is an even number, then the formula is given below: Median = 5th term + n+1 2 2 th term
// Note: The array must be sorted in ascending order first to apply the formula. Write a test program which calls the template function by passing first passing an int array and then a float array.

#include<iostream>
#include<algorithm>
using namespace std;

template <class T>
double median(T arr[], int n)
{
    sort(arr, arr + n);

    if(n % 2 != 0)
    {
        return arr[n/2];
    }
    else
    {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    }
}

int main()
{
    int a[] = {9,5,1,7,3};
    int n1 = sizeof(a) / sizeof(a[0]);

    cout << "Median of int array = "
         << median(a,n1) << endl;

    float b[] = {2.5,1.5,4.5,3.5,4};
    int n2 = sizeof(b)/sizeof(b[0]);

    cout << "Median of float array = "
         << median(b,n2) << endl;

    return 0;
}
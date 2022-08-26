//Name - Nishant Garg
//Roll No. - 2010990884
//Set No. - 04
//Question No. - 01

#include<iostream>
#include<unordered_set>

using namespace std;

//Creating a func to check the minimum index of a repeating element in the array

int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    //Creating an empty set to store the array elements
    unordered_set<int> set;

    //Traversing the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        //If the element is seen before, then update the minimum index
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        //If the element is seen for the first time, then insert it into the set
        else {
            set.insert(arr[i]);
        }
    }

    //If the input is invalid
    if (minIndex == n) {
        return -1;
    }

    //Return the minimum index
    return minIndex;
}

int main()
{

    //Giving the input as an array

    int arr[] = { 5, 6, 3, 4, 3, 6, 4 };
    //int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex = findMinIndex(arr, n);

    //Output

    if (minIndex != n and minIndex > 0) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
    return 0;
}
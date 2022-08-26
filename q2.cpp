//Name - Nishant Garg
//Roll No. - 2010990884
//Set No. - 04
//Question No. - 02

#include <iostream>
#include <unordered_set>

using namespace std;

//Function to check if consecutive integers form an array
bool isConsecutive(int arr[], int n)
{
    // base case
    if (n <= 1) {
        return true;
    }

    int min = arr[0], max = arr[0];
 
    //Computing the min and max element in an array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    if (max - min != n - 1) {
        return false;
    }
 
    //Create an empty set (we can also use a visited array)
    unordered_set<int> visited;
 
    for (int i = 0; i < n; i++)
    {
        //If an element is seen before, then return false
        if (visited.find(arr[i]) != visited.end()) {
            return false;
        }
 
        //Mark element as seen
        visited.insert(arr[i]);
    }
 
    //We will reach here only when all elements in the array are distinct
    return true;
}
 
int main()
{
    //int arr[] = { -1, 5, 4, 2, 0, 3, 1 };
    int arr[] = { 4, 2, 4, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    isConsecutive(arr, n)? cout << "The array contains consecutive integers from -1 to 5":
                        cout << "The array does not contain consecutive integers as element 4 is repeated";
 
    return 0;
}
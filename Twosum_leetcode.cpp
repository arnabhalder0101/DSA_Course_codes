
#include <iostream>
using namespace std;

void twoSum(int nums[], int size, int target)
{
    int arr[2];
    for (int i = 0; i < size; i++)
    {
        int num = nums[i];
        for (int j = i + 1; j < size; j++)
        {
            int num1 = nums[j];
            if (num + num1 == target)
            {
                cout << "[" << i << "," << j << "]";
                arr[0] = i;
                arr[1] = j;
                // return arr;
                // break;
                goto exitLoop; // breaking the loop -- multiple for loop breaking by goto & exitloop var:
            }
        }
    }
exitLoop:
}

int main(int argc, char const *argv[])
{
    // int arrr[] = {2, 7, 11, 15};
    // int t = 9;
    // int arrr[] = {3,2,4};
    // int t = 6;
    int arrr[] = {9, 4, 4, 7, 2,3, 3, 3};
    int t = 6;
    int size = sizeof(arrr) / sizeof(int); // Calculate the size of the array
    twoSum(arrr, size, t);
    return 0;
}

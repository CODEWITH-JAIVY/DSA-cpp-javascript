/*
// Given an array of n number find the two elements such that their sum  is equal to value '
//1,5,4,3,3,7,8,9,6

*/

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// Brute force approach to find all pairs whose sum equals a given value
vector<pair<int, int>> equalSum(vector<int> arr, int value)
{
    vector<pair<int, int>> result;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == value)
            {
                result.push_back(make_pair(arr[i], arr[j]));
            }
        }
    }

    return result;
}
// 2nd appraoch sort all  array
// take two pointer start  = 0 , end  = size  -1  ;
//  if ( sum of arr of start   and end is eueal to value  insert into pair   )
// if sum is greater than tha arr[end ]  than end  --  ;
// if sum is less than the arr [ start ]  than start ++  '
// return pair vector

int main()
{
    vector<int> arr = {1, 5, 4, 3, 3, 7, 8, 9, 6};
    int target = 9;

    vector<pair<int, int>> pairs = equalSum(arr, target);

    if (pairs.empty())
    {
        cout << "No pairs found.\n";
    }
    else
    {
        cout << "Pairs with sum " << target << ":\n";
        for (auto p : pairs)
        {
            cout << " { " << p.first << " , " << p.second << " }" << endl;
        }
    }

    return 0;
}

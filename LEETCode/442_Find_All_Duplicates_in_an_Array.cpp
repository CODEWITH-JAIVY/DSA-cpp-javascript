/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output
*/

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std ;

class Solution {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
            unordered_map<int  ,int > mapNumber ;
            // unorder_set<int > seen ;
            vector<int>result  ;
    
            for( int val : nums  ) {
                mapNumber[val] ++ ; 
            }
    
            for( auto & pair : mapNumber ) {
            if( pair.second != 1 ) {
                result.push_back(pair.first) ;
            }
            }
           return result  ; 
        }
    };


    int main() {
        Solution sol ;
        vector<int>arr = {4,3,2,7,8,2,3,1} ;
        vector<int>result   = sol.findDuplicates(arr) ;
        for( int val : result ) {
            cout<< val << " " ;
        }
        return  0  ; 
    }
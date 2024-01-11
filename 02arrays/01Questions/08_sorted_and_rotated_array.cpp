// Lecture 21
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Check is array is sorted and rotated
// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

#include<iostream>
#include<vector>

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                x++;
            }
        }
        if(nums[n-1]>nums[0]){
            x++;
        }
        if(x>1){
            return false;
        }
        return true;
    }
};
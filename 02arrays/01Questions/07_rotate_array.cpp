// Lecture 21

// https://leetcode.com/problems/rotate-array/
// Rotate Array
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative

// Solution 1
#include<iosteram>
#include<vector>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // creating a temporary vector
        vector<int> temp(nums.size());

        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }

        // copying temp into nums
        nums=temp;
    }
};
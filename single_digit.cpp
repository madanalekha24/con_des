#include <iostream>
#include <vector>
using namespace std;

class solution{
public:
    int singlenumber(vector<int>& nums){
        int result=0;
        for(int num : nums){
            result ^= num;

        }
        return result;
    }    
};
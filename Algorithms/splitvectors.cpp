#include <iostream>
#include <vector>
using namespace std;
// This snippet is just to split a vector into a bunch of sub-vectors of a given length.
vector<vector<int>> vectorSplit(vector<int> v, int spl){
    vector<vector<int>> sub;
    int num_arr = 0;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < spl; j++){
            sub[num_arr].push_back(v[i]);
        }
        num_arr++;
    }
    return sub;
}


int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8};
    vector<vector<int>> n = vectorSplit(nums, 2);
    return 0;
}
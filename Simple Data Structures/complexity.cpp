#include <iostream>
#include <vector>
/*
    
    Complexity, specifically Time Complexity is a term used to show the amount of time it takes for a computer to run a process.

    Complexity is denoted using Big-O notation:

    ex, O(n)

    This is mostly some random stuff I am jotting to remind myself how complexity works.

*/


// Any basic operations will have a numerical complexity, therefore this method has a CONSTANT complexity.
// Otherwise written as: O(1)
bool XOR(bool a, bool b) {
	if (a && b) {
		return false;
	}
	else if((a || !b) || (!a || b)) {
		return true;
	}
	else {
		return false;
	}
} // XOR() has a constant complexity (O(1))


// A SINGLE for loop has a complexity of O(n), n being whatever you are looping over, it also means it has a "linear" complexity
// A nested for loop has a complexity of O(n^2)
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
        }
    }
    return {};
} // twoSum() has a complexity of O(n^2)

// Where a nested loop will return O(n^exp), multiple chained for loops will have a complexity of O(N+M+...) where N and M are different elements you are looping over.
int uselessCount(int n, int m){
    int count = 0;
    for(int i = 0; i < n; i++){
        count += 1;
    }
    for(int i = 0; i < m; i++){
        count += 1;
    }
    return count;
} // uselessCount() has a complexity of O(n+m)


int main(){
    // Useless boilerplate but you can probably test the functions here if you want?

    return 0;
}
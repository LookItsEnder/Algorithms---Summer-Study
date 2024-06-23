#include <iostream>
#include <vector>
#include "quickSort.cpp"
/*
    Median of Medians is a Divide and Conquer implemented median finding algorithm

    MoM is designed to solve the following problem:
    Given array A = [1, ..., n] and an index i,
    find the ith smallest element of A.




*/

int medianOfMedians(std::vector<int> A, int i){
    std::vector<std::vector<int>> sublists;                             // A container for sublists of length 5 or less
    std::vector<int> M;                                                 // A sublist containing only the medians from each sublist
    // Divide the List into sublists of length 5 (it doesnt matter if it is too short...)
    int count = 0;
    for(int i = 0; i < A.size(); i+=5){
        for(int j = i; j < 5; j++){

        }
        count++;
    }



    // Sort each of these sublists and determine the median. Put these medians in vector M


}


int main(){
    std::vector<int> arr = {25, 21, 98, 100, 76, 22, 43, 60, 89, 87};


    return 0;
}
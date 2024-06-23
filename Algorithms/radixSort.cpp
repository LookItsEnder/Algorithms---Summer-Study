#include <iostream>
#include <vector>
#include "countingSort.cpp"
/*
    Radix Sort is another special sorting algorithm that uses Counting Sort as a subroutine.
    This subroutine is called for each individual digit in the data set:

    ex: 802 will be sorted 3 times, once for the ones digit, then the tens digit, then the hundreds digit.
        this sorting is applied to the ENTIRE input array.

    Radix sort is important because trying to use Counting sort with larger integers as data points (ie, 500) will take much longer
    Radix Sort can ONLY be used with NUMBERS (Integers)
*/

std::vector<int> radixSort(std::vector<int> inputArray){
    int len = inputArray.size();
    int m = 0; // Used as a maximum
    // Step 1: Find the maximum Element in the vector
    for(int i = 0; i < len; i++){
        m = std::max(m, inputArray[i]); // Finding the maximum helps us find the number of digits needed!
    }

    // Step 2: Apply countSort to the nth digit of elements
    for(int i = 1; m/i > 0; i *= 10){
        inputArray = countSort(inputArray, i);
    }
    return inputArray;
}

int main(){
    std::vector<int> input = {170, 45, 75, 90, 802, 24, 2, 66};
    input = radixSort(input);
    for(int i = 0; i < input.size(); i++){
        std::cout << input[i] << " ";
    }
    return 0;
}
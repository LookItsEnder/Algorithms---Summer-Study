#include <iostream>
#include <vector>
/*
    Counting Sort is a special sorting algorithm that is Non-Comparison based
    Works efficiently with small amounts of data values.

    Counting Sort counts the Frequency of each specific value, and uses that information to place them in their sorted positions

*/

std::vector<int> countSort(std::vector<int> inputArray, int dig = 1){
    //Side Note, the dig parameter is used for the digit, this will come in handy for radix sort.
    int len = inputArray.size();
    int m = 0;
    // Step 1: Find the maximum element in the given array / vector.
    for(int i = 0; i < len; i++){
        m = std::max(m, inputArray[i]);
    }
    // Step 2: Initialize a countArray[] of length max + 1, with all elements as 0.
    std::vector<int> countArray(m+1, 0); // This will be used to store the occurances of the elements of the input.
    // Step 3: In the countArray[], store the count of each unique element of the input into their respective indices.
    for(int i = 0; i < len; i++){
        countArray[(inputArray[i] / dig) % 10]++;
    }
    // Step 4: Store the cumulative sum (Prefix Sum) of the elements of the countArray
    for(int i = 1; i <= m; i++){
        countArray[i] += countArray[i-1];
    }
    // Step 5: iterate from the end of inputArray[]
    std::vector<int> outputArray(len);
    for(int i = len - 1; i >= 0; i--){ // Side note, the seg fault I got here was TERRIBLE
        outputArray[countArray[(inputArray[i] / dig) % 10] - 1] = inputArray[i];
        countArray[(inputArray[i] / dig) % 10]--;
    }
    // Step 6: Return the output
    return outputArray;
}

int main(){
    std::vector<int> input = {2, 5, 3, 0, 2, 3, 0, 3};
    input = countSort(input);
    for(int i = 0; i < input.size(); i++){
        std::cout << input[i] << " ";
    }
    return 0;
}
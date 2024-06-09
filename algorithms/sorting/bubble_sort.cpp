// Bubble sort in C++:

#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size()-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int> arr = {5, 2, 4, 6, 1, 3};

    bubble_sort(arr);

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
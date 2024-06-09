// Selection sort algorithm implementation.

#include <iostream>
#include <vector>

using namespace std;
// g++ -std=c++11 selection_sort.cpp -o selection_sort
void selection_sort(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++){
        int min_index = i;

        for (int j = i+1; j < arr.size(); j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        swap(arr[i], arr[min_index]);
    }
}

int main(){
    vector<int> arr = {15, 11, 43, 16, 71, 321};

    selection_sort(arr);

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
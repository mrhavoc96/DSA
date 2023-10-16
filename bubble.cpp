#include <iostream>
using namespace std;


void bubble_Sort(int arr[], int x){
    
//sorting algorithm:
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x-i-1; j++){
            // x-i-1 because, the i number of elements have been sorted and don't need to be compared again.
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            } 
        }
    }
}


int main(){

    
    cout << "..............SORT USING BUBBLE SORT.............." << endl;

    int x;
    cout << endl;
    cout << "Enter the size of array: " << endl;
    cin >> x;
    int arr1[x];


    for (int i = 0; i < x; i++){
        cin >> arr1[i];
    }     
    bubble_Sort(arr1, x);

    cout << "The sorted array is: " << endl;

    for (int i = 0; i < x; i++){
        cout << arr1[i] << " " ;
    }

    return 0; 
}
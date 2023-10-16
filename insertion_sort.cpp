#include <iostream>
using namespace std;


void insertionSort(int arr[], int size){
    //insertion sort algorithm:
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && temp < arr[j] ){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp;
    }

}

int main(){

    cout << "..............SORT USING INSERTION SORT.............." << endl;

    int x;
    cout << endl;
    cout << "Enter the size of array: " << endl;
    cin >> x;
    int arr1[x];


    for (int i = 0; i < x; i++){
        cin >> arr1[i];
    }     
    insertionSort(arr1, x);

    cout << "The sorted array is: " << endl;

    for (int i = 0; i < x; i++){
        cout << arr1[i] << " " ;
    }   
    
    return 0;
}
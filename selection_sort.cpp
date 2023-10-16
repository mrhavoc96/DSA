#include <iostream>
using namespace std;

void selectionSort(int arr[], int size);

int main(){
    cout << endl;
    cout << endl;
    cout << "..............SORT USING SELECTION SORT.............." << endl;

    int x;
    cout << endl;
    cout << "Enter the size of array: " << endl;
    cin >> x;
    
    int arr1[x];


    for (int i = 0; i < x; i++){
        cin >> arr1[i];
    }    

    selectionSort(arr1, x);

    cout << "The sorted array is: " << endl;

    for (int i = 0; i < x; i++){
        cout << arr1[i] << " " ;
    }

    return 0;
}

void selectionSort(int arr[], int size){
    
    //selection sort algorithm:
    for (int i = 0; i < size-1; i++ ){
        int min = i;
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[min]){
                min = j;
            }     
        }

    if (min != i){
        swap(arr[i], arr[min]);
    }

    }

}

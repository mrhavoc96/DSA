//Sorting using Quick Sort algorithm.

#include<iostream>
using namespace std;

int partition(int arr[], int, int);
void quickSort(int arr[], int, int);

int main(){
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr1[size];

    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < size; i++){
        cin >> arr1[i];
    }    

    quickSort(arr1, 0, size-1);

    for (int i = 0; i < size ; i++){
        cout << arr1[i] << " ";
    }
    return 0;
}

//function for setting the possition of pivot and dividing the problem.
int partition(int arr[], int low, int high ){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j)
    {
        
        while(arr[i] <= pivot ){
            i++;
        }
        
        while(arr[j] > pivot ){
            j--;
        }

        if (i < j){
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

//recursive function for sorting the array.
void quickSort(int arr[], int low, int high){
    if (low < high){
        int pos = partition(arr, low, high);

        quickSort(arr, low, pos - 1);
        quickSort(arr, pos + 1, high );
    }
}



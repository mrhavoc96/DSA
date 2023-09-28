#include <iostream>
using namespace std;

int searchBinary(int array[], int, int );

int searchBinary(int array[], int key, int n){
    int s = 0, e = n;
    int mid = (s+e)/2;
    while(s <= e){
        if (array[mid] == key){
            return mid;
        }
        else if (array[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}




int main(){
    int n, key, result, size;


    cout << "Enter the size of your array: " << endl;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the key you want to search in the array: " << endl;
    cin >> key ;

    result = searchBinary(arr, key, size );
    cout << "The key you wanted to search has been found at the index: " << result << endl;

    return 0;
    
}
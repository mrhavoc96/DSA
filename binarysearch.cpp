//binary search algorithm implementation.
#include<iostream>
int binarySearch(int arr[], int, int);

int binarySearch(int arr[], int n, int key){

    int mid, s = 0, e = n;
    while(s <= e){
        mid = (s+e)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            s = mid + 1 ;
        }
        else{
            e = mid - 1;
        }    
    }
    return -1;
}

int main(){
    int n, key, result;
    int *f = &n;
    std::cout << "Enter size of your array: \n" ;
    std::cin >>  *f;

    int arr[n];

    //Entering values in the array.
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];

    }

    std::cout << "Enter the key you find in the array: " ;
    std::cin >> key ;
        
    result = binarySearch(arr, n ,key);
    std::cout << "The number you wanted to find is: " << result << std::endl;
    return 0;
}

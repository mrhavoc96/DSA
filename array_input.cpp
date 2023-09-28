#include <iostream>
using namespace std;

class array_op{
    private:
        int arr[0];    
    public:
        
        void array_input(int size);
        void array_display();
        array_op(int size){
            int arr[size];
            array_input(size);
            array_display();
        }

};

void array_op::array_input(int size){

    for (int i = 0; i < size; i++){
        cout << "Enter the array element" << endl;
        cin >> arr[i];
    }

}


int main(){

    return 0;
}
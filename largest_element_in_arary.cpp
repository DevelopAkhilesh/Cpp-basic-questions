#include <iostream>
using namespace std;

int main()
{
    int size; 
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"enter "<<size<<"element";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"the largest element in the array is :"<<largest;
    
    return 0;
}
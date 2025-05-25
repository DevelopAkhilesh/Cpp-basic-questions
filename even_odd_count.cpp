#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the "<<size<<"number:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int Even_no=0;
    int Odd_no=0;

    for(int i=0;i<size;i++){
        if(arr[i]%2){
            Even_no++;
        }else{
            Odd_no++;
        }
    }
    cout<<"Even Number are:"<<Even_no<<endl;
    cout<<"Odd Number are: "<<Odd_no<<endl;
    return 0;
}
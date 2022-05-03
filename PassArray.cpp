
#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return;
}
int main(){
    int arr1[5]={10,12,14,37,23};
    printArray(arr1,5);
    
}

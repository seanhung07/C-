#include<iostream>
using namespace std;

void merge(int arr1[], int arr2[],int arr1size ,int arr2size,int arr3[]){
    int i,j,k;
    i=j=k=0;
    while(i<arr1size && j < arr2size){
        if(arr1[i]<arr2[j]){
             arr3[k++] = arr1[i++]; 
             cout << k;
        }
        else
         arr3[k++] = arr2[j++]; 
    }
    while(i<arr1size){
        arr3[k++] = arr1[i++];
    }
     while (j < arr2size) {
        arr3[k++] = arr2[j++]; 
     }
}



int main(){
    int arr1[] ={8,4,6,8,10};
    int arr2[] ={2,3,5,7,9};
    int arr1size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2size = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[arr1size+arr2size];
    merge(arr1,arr2,arr1size,arr2size,arr3);
    for(int i=0;i<arr1size+arr2size;i++){
        cout<<"\t"<<arr3[i];
    }    
}
#include<iostream>
using namespace std;
struct Array{
    int a[10];
    int size;
    int length;
};
int Linearsearch(struct Array arr,int key){
    for(int i=0; i<arr.length;i++){
        if(key == arr.a[i]){
            return i;
        }
    }
      return -1;
}
int Display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<"\t";
    }
}
int Binarysearch(struct Array arr, int key){
    int l =0;
    int h = arr.length-1;
    int mid;
    while( l<=h){
        mid = (l+h)/2;
        if(key == arr.a[mid]){
            return mid;
        }
        else if(key<arr.a[mid]){
            h=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    return -1;
}
int Rbsearch(struct Array arr, int l,int h,int key){
    int mid;
    if(l<=h){
        mid =(l+h)/2;
        if(key == arr.a[mid]){
            return mid;
        }
        else if(key<arr.a[mid]){
            return Rbsearch(arr,l,mid-1,key);
        }
        else{
           return  Rbsearch(arr,mid+1,h,key);
        }
    }
    return -1;

}
int main(){
    struct Array arr ={{2,3,4,5,6},10,5};
    cout<< Linearsearch(arr,3);
    cout<< Binarysearch(arr,3);
    cout<< Rbsearch(arr,0,arr.length,5);
}
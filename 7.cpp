#include<iostream>
using namespace std;

struct Array{
    int a[11];
    int length;
};
int get(struct Array arr, int x ){
    for(int i=0; i<= arr.length; i++ ){
        if(arr.a[i]==x){
            return i;
        }
       
    }
}
int max(struct Array arr){
    int max=arr.a[0];
    for(int i=0; i<=arr.length;i++){
        if(arr.a[i]>max){
             max=arr.a[i];
        }
    }
     return max;
}
int insert(struct Array *arr, int x){
    int i=arr->length-1;
    while(i>=0 && arr->a[i]>x){
        arr->a[i+1] =arr->a[i];
        i--;
    }
    arr->a[i+1]=x;
    arr->length++;
}

void display(struct Array *arr){
    for(int i=0;i< arr->length;i++){
        cout<< arr->a[i] << "\t";
    }
}
int issorted(struct Array *arr){
    for(int i=0;i<arr->length-1;i++){
        if(arr->a[i+1]<arr->a[i]){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    struct Array arr= {{2,3,4,5,6,7,8,10,11,12},10};
    insert(&arr, 9);
    display(&arr);
    cout << "\n"<< issorted(&arr);


}
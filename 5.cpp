#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array check){
    for(int i =0 ; i<check.length;i++){
        cout<<check.A[i]<<"\t";
    }
};
void Append(struct Array *check,int x){
    if(check->length < check->size){
        check->A[check->length++]=x;

    }
}
void Insert(struct Array *check, int index, int x){
    if(index >=0 && index<=check->length){
        for(int i=check->length; i>index; i--){
            check->A[i]=check->A[i-1];
        }
         check->A[index]=x;
         check->length++;
    }
}
int Delete(struct Array *check, int index){
    if (index >=0 && index <check->length){
       int x= check->A[index];
       for(int i=index; i< check->length-1;i++){
           check->A[i] = check->A[i+1];
       }
       check->length--;
    return x;
}
}

int main(){
    struct Array check{{2,3,4,5,6},20,5};
    Append(&check,10);
    Delete(&check,3);
    Display(check);
    return 0;
}
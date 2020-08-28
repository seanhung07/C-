#include<iostream>
using namespace std;


struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array check){
    for(int i =0; i< check.length;i++){
        cout<<check.A[i];
    }
}

int main(){
    struct Array check;
    int n;
    cout<< "Enter the array size" ;
    cin >> check.size;
    check.A = new int[check.size];
    check.length = 0;
    cout << "Enter number of numbeers";
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> check.A[i];
    }
    check.length = n;
    Display(check);
    return 0;

}
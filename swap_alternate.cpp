#include<iostream>
using namespace std;
void swapalterante(int array[],int size){
    for(int i=0;i<size-1;i+=2){
        swap(array[i],array[i+1]);
    }
}
void printarray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    swapalterante(even,6);
    printarray(even,6);
    cout<<endl;
    swapalterante(odd,5);
    printarray(odd,5);
}

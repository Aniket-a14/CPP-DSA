#include<bits/stdc++.h>
using namespace std;

//maths part
//to compare child with parent
//formula is: 
//(i-1)/2

//to compare parent with child
//left child
//2*i+1

//right child
//2*i+2


class MaxHeap{
    int *arr;
    int size;
    int total_size;

    public:
        MaxHeap(int value){
            arr = new int[value];
            size=0;
            total_size=value;
        }

        void insert(int value){
            if(size==total_size){
                cout<<"Heap Overflow\n";
            }

            arr[size] = value;
            int index=size;
            size++;

            while(index>0 && arr[(index-1)/2]<arr[index]){
                swap(arr[index],arr[(index-1)/2]);
                index=(index-1)/2;
            }

            cout<<arr[index]<<" is inserted"<<endl;
        }

        void deleteNode(int value){

        }

        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
};

int main(){
    MaxHeap h1(5);
    h1.insert(4);
    h1.insert(75);
    h1.insert(33);
    h1.print();
}
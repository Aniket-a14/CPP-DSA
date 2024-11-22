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
                return;
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

        void heapify(int index){
            int largest=index;
            int left=2*index+1;
            int right=2*index+2;

            if(left<size&&arr[left]>arr[largest])
            largest=left;

            if(right<size&&arr[right]>arr[largest])
            largest=right;

            if(largest!=index){
                swap(arr[index],arr[largest]);
                heapify(largest);
            }
        }

        void deleteNode(){
            if(size==0){
                cout<<"Heap Underflow\n";
                return;
            }
            cout<<"Element deleted from heap: "<<arr[0]<<endl;
            arr[0]=arr[size-1];
            size--;

            if(size==0){
                return;
            }
            heapify(0);
        }

        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    MaxHeap h1(5);
    h1.insert(4);
    h1.insert(75);
    h1.insert(33);
    h1.print();
    h1.deleteNode();
    h1.print();
}
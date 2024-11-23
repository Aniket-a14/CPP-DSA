#include<bits/stdc++.h>
using namespace std;

class MinHeap {
    int *arr;
    int size;
    int total_size;

    public:
        MinHeap(int value) {
            arr = new int[value];
            size = 0;
            total_size = value;
        }

        void insert(int value) {
            if (size == total_size) {
                cout << "Heap Overflow\n";
                return;
            }

            arr[size] = value;
            int index = size;
            size++;

            while (index > 0 && arr[(index - 1) / 2] > arr[index]) {
                swap(arr[index], arr[(index - 1) / 2]);
                index = (index - 1) / 2;
            }

            cout << arr[index] << " is inserted" << endl;
        }

        void heapify(int index) {
            int smallest = index;
            int left = 2 * index + 1;
            int right = 2 * index + 2;

            if (left < size && arr[left] < arr[smallest])
                smallest = left;

            if (right < size && arr[right] < arr[smallest])
                smallest = right;

            if (smallest != index) {
                swap(arr[index], arr[smallest]);
                heapify(smallest);
            }
        }

        void deleteNode() {
            if (size == 0) {
                cout << "Heap Underflow\n";
                return;
            }

            cout << "Element deleted from heap: " << arr[0] << endl;
            arr[0] = arr[size - 1];
            size--;

            if (size > 0)
                heapify(0);
        }

        void print() {
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    MinHeap h1(5);
    h1.insert(4);
    h1.insert(75);
    h1.insert(33);
    h1.print();
    h1.deleteNode();
    h1.print();
    return 0;
}

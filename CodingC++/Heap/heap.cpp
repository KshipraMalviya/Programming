#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class MinHeap
{
public:
    int *harr;
    int capacity;
    int heap_size;

    MinHeap(int capacity)
    {
        heap_size = 0;
        this->capacity = capacity;
        harr = new int[capacity];
    }

    void linearSearch(int val)
    {
        for (int x = 0; x < heap_size; x++)
        {
            if (harr[x] == val)
            {
                cout << "Value found!" << endl;
                return;
            }
        }
        cout << "Value not found" << endl;
    }

    void printArray()
    {
        for (int x = 0; x < heap_size; x++)
        {
            cout << harr[x] << " ";
        }
        cout << endl;
    }

    int height()
    {
        return ceil(log2(heap_size + 1)) - 1;
    }

    int left(int i)
    {
        return (2 * i + 1);
    }

    int right(int i)
    {
        return (2 * i + 2);
    }

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    void insertKey(int k)
    {
        if (heap_size == capacity)
        {
            cout << "Overflow" << endl;
            return;
        }
        heap_size++;
        int i = heap_size - 1;
        harr[i] = k;
        while (i != 0 && harr[parent(i)] > harr[i])
        {
            swap(harr[i], harr[parent(i)]);
            i = parent(i);
        }
        cout << "Inserted" << endl;
    }

    void decreaseKey(int i, int new_val)
    {
        harr[i] = new_val;
        while (i != 0 && harr[parent(i)])
        {
            swap(harr[i], harr[parent(i)]);
            i = parent(i);
        }
    }

    int getMin()
    {
        return harr[0];
    }

    void MinHeapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if (l < heap_size && harr[l] < harr[i])
        {
            smallest = l;
        }
        if (r < heap_size && harr[r] < harr[smallest])
        {
            smallest = r;
        }
        if (smallest != i)
        {
            swap(harr[i], harr[smallest]);
            MinHeapify(smallest);
        }
    }

    int extractMin()
    {
        if (heap_size <= 0)
        {
            return INT_MAX;
        }
        if (heap_size == 1)
        {
            heap_size--;
            return harr[0];
        }
        int root = harr[0];
        harr[0] = harr[heap_size - 1];
        heap_size--;
        MinHeapify(0);

        return root;
    }

    void deleteKey(int i)
    {
        decreaseKey(i, INT_MIN);
        int n = extractMin();
        cout << "Deleted" << endl;
    }

    void getUnsortedArray()
    {
        cout << "Enter elements" << endl;
        for (int x = 0; x < capacity; x++)
        {
            cin >> harr[x];
        }
    }

    void heapSort()
    {
        int temp[capacity];
        for (int x = 0; x < capacity; x++)
        {
            temp[x] = extractMin();
            cout << temp[x] << " ";
        }
    }
};

int main()
{
    int s;
    cout << "Enter size of Min Heap" << endl;
    cin >> s;
    MinHeap obj(s);
    cout << "Min Heap created" << endl;

    int option, val;

    do
    {
        cout << "Menu" << endl
             << endl;
        cout << "1 - Insert" << endl;
        cout << "2 - Search" << endl;
        cout << "3 - Delete" << endl;
        cout << "4 - Get Min" << endl;
        cout << "5 - Extract Min" << endl;
        cout << "6 - Height Of Heap" << endl;
        cout << "7 - Sort Heap" << endl;
        cout << "8 - Print/Traversal Heap values" << endl;
        cout << "9 - Clear Screen" << endl;
        cout << "0 - Exit" << endl;
        cout << endl
             << "Enter your choice" << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Insert" << endl
                 << endl;
            cout << "Enter value to insert in heap" << endl
                 << endl;
            cin >> val;
            obj.insertKey(val);
            cout << endl;
            break;

        case 2:
            cout << "Search Operation" << endl
                 << endl;
            cout << "Enter value to search in heap" << endl;
            cin >> val;
            obj.linearSearch(val);
            cout << endl;
            break;

        case 3:
            cout << "Delete Operation" << endl
                 << endl;
            cout << "Enter index of heap array to delete" << endl;
            cin >> val;
            obj.deleteKey(val);
            break;

        case 4:
            cout << "Get Min Operation" << endl
                 << endl;
            cout << obj.getMin() << endl;
            cout << endl;
            break;

        case 5:
            cout << "Extract Min Operation" << endl
                 << endl;
            cout << obj.extractMin() << endl;
            cout << endl;
            break;

        case 6:
            cout << "Height Of Heap Operation" << endl
                 << endl;
            cout<<obj.height()<<endl;
            break;

        case 7:
            cout << "Sort Heap Operation" << endl;
            cout << "Unsorted Array" << endl;
            obj.printArray();
            for (int x = s / 2 - 1; x >= 0; x--)
            {
                obj.MinHeapify(x);
            }
            cout << "Heap Sorted Array" << endl;
            obj.heapSort();
            break;

        case 8:
            cout << "Print/Traversal Heap values Operation" << endl
                 << endl;
            obj.printArray();
            cout << endl;
            break;

        case 9:
            system("cls");
            break;

        default:
            cout << "Enter valid option" << endl
                 << endl;
        }

    } while (option != 0);

    return 0;
}
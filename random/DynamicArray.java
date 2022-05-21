import java.io.*;
import java.util.*;


public class DynamicArray {
    private int arr[];
    private int size; // CURR size
    private int capacity; // TOTAL capacity

    // constructor
    public DynamicArray() {
        arr = new int[2];
        size = 0;
        capacity = 2;
    }

    public void append(int data) {
        if (size == capacity) {
            int buffer[] = new int[2 * capacity];

            // copy
            for (int i = 0; i < capacity; i++) {
                buffer[i] = arr[i];
            }

            capacity *= 2;
            arr = buffer;
        }

        // insert
        arr[size] = data;
        size++;
    }

    public void appendAtIndex(int data, int indx) {
        // if insert at indx last, just use append()
        if (indx == capacity) {
            append(data);
        }

        else {
            arr[indx] = data;
        }
    }

    int get(int indx) {
        if (indx < size) {
            return arr[indx];
        }


        // outside of range
        return -1;
    }

    void remove() {
        size--;
    }

    int size() {
        return size;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            System.out.println(arr[i] + ' ');
        }
        System.out.println();
    }


    // TEST CODE
    public static void main(String[] args) {
        DynamicArray v = new DynamicArray();
        v.append(20);
        v.append(30);
        v.append(40);
        System.out.println(v.size());
        v.print();
    }
}

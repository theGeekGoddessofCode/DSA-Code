package Searching_and_Sorting;

import java.util.*;

class Quicksort {

    // method to find the partition position
    static int partition(int [] arr, int low, int high) {

        // choose the rightmost element as pivot
        int pivot = arr[high];

        // pointer for greater element
        int i = (low - 1);

        // traverse through all elements
        // compare each element with pivot
        for (int j = low; j < high; j++) {

            if (arr[j] <= pivot) {

                // if element smaller than pivot is found
                // swap it with the greater element pointed by i
                i++;

                // swapping element at i with element at j
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // swapt the pivot element with the greater element specified by i
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        // return the position from where partition is done
        return (i + 1);


    }

    static void quickSort(int arr[], int low, int high) {
        // code here

        if (low < high) {

            // find pivot element such that
            // elements smaller than pivot are on the left
            // elements greater than pivot are on the right

            int pi = partition(arr, low, high);



            // recursive call on the left of pivot
            quickSort(arr, low, pi - 1);
            // recursive call on the right of pivot
            quickSort(arr, pi + 1, high);

        }
    }
}

// Main class
class Quick_Sort {
    public static void main(String [] args) {

        int[] data = { 8, 7, 2, 1, 0, 9, 6 };
        System.out.println("Unsorted Array");
        System.out.println(Arrays.toString(data));

        int size = data.length;

        // call quicksort() on array data
        Quicksort.quickSort(data, 0, size - 1);

        System.out.println("Sorted Array in Ascending Order ");
        System.out.println(Arrays.toString(data));
    }
}

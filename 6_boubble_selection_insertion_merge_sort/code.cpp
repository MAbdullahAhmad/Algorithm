#include<iostream>
// #include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int min = i;
        
        for (int j=i+1; j<n; j++)
            if (arr[min]>arr[j])
                min = j;
                
        swap(arr[i], arr[min]);
    }
}

void insertionSort(int arr[], int n) {
    for (int i=1; i<n; i++)
        for (int j=i; j>0; j--)
            if (arr[j]<arr[j-1])
                swap(arr[j], arr[j-1]);
}

void merge(int arr[], int start, int mid, int end) {
    int s1=(mid-start)+1, s2=end-mid;
    int arr1[s1], arr2[s2];
    for (int i=0; i<s1; i++) {
        arr1[i] = arr[i+start];
    }
    for (int i=0; i<s1; i++) {
        arr2[i] = arr[i+mid+1];
    }
    
    int x, y, z=start;
    x = y = 0;
    while (x<s1 && y<s2) {
        if (arr1[x]<arr2[y]) {
            arr[z] = arr1[x];
            z++;
            x++;
        } else {
            arr[z] = arr2[y];
            z++;
            y++;
        }
    }
    
    while (x<s1) {
        arr[z] = arr1[x];
        z++; x++;
    }
    while (y<s2) {
        arr[z] = arr2[y];
        z++; y++;
    }
}
void mergeSort(int arr[], int start, int end) {
    if (start==end)
        return;
        
    int mid = (start+end)/2;
    mergeSort(arr, 0, mid);
    mergeSort(arr, mid+1, end);
    
    merge(arr, start, mid, end);
}

int main() {
    const int n=7;
    int arr[n] = {15, 28, 17, 12, 18, 9, 6};
    
    // bubbleSort(arr, n);
    // selectionSort(arr, n);
    // insertionSort(arr, n);
    mergeSort(arr, 0, n-1);
    
    // printing
    for (int i:arr)
        cout<<i<<" ";
    cout<<endl;
}
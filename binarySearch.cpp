#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size - 1, mid = start + (end - start)/2; //optimizing the mid value

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    int index = binarySearch(even,6,10);
    cout<<"The index of 10 is "<<index;

    return 0;
}
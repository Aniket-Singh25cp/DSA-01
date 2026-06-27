#include<bits/stdc++.h>
using namespace std;
int ans[2] = {-1,-1};

int firstOccurence(int arr[], int size, int key){
    int start = 0, end = size - 1, mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans[0] = mid;
            end = mid - 1;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
}

int lastOccurence(int arr[], int size, int key){
    int start = 0, end = size - 1, mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans[1] = mid;
            start = mid + 1;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[6] = {1,2,3,3,3,4};
    int b[7] = {1,3,5,5,7,9,10};

    firstOccurence(a,6,10);//gets the left-most occurence of element
    lastOccurence(a,6,10);//gets the right-most occurence of element
    
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
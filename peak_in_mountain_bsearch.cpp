#include<bits/stdc++.h>
using namespace std;

int peakOccurence(int arr[], int size){
    int s = 0, e = size - 1, mid = s + (e-s)/2;

    while(s < e){ //only less than as it doesn't creates repeated iterations if s==e
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[5] = {1,3,4,5,0};
    int index = peakOccurence(a,5);

    cout<<"The index of peak occurence is: "<<index;
    return 0;
}
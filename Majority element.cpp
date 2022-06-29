#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int candidate = 0,count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate = arr[i];
        }
        if(candidate == arr[i])
            count +=1;
        else
            count -=1;
    }
    count=0;
    for(int i=0;i<n;i++){
        if(candidate==arr[i])
            count++;
    }
    if(count > floor(n/2))
        return candidate;
    else
        return -1;
}

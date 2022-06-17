vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    if(n==0) return arr1;
        int c=m+n;
        while(n>0){
            arr1[--c]= ((m>0) && (arr2[n-1] <= arr1[m-1]) ? arr1[--m] : arr2[--n]);
        }
    return arr1;
}

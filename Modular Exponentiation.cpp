#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    long long flag=1;
    long long ans=x;
	while(n>0){
        if(n%2==0){
            ans=((ans%m)*(ans%m))%m;
            n=n/2;
        }
        else{
            n--;
            flag=((flag%m)*(ans%m))%m;
        }
    }
    ans=(int)(flag%m);
    return ans;
}

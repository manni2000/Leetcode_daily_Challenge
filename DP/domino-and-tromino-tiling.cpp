   #include<bits/stdc++.h>
   using namespace std;
   
   int numTilings(int n) {
        int a=0, b=1, c=1, d;
        int mod = 1e9+7;
        while(--n){
            d=(c*2%mod+a)%mod;
          a=b;
          b=c;
          c=d;
        }
        return c;
    }
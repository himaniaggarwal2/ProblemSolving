// https://www.lintcode.com/problem/514/

int numWays(int n, int k) {
        int samecolour=k;
        int diffcolour=k*(k-1);

        if(n==1) 
            return k;
        else if(n==2){
            return samecolour+diffcolour;
        }
        else
            for(int i=3;i<=n;i++){
                int temp=diffcolour;
                diffcolour=(diffcolour+samecolour)*(k-1);
                samecolour=temp;
            }
        return samecolour+diffcolour;
    }
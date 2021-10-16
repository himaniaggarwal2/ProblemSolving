// https://practice.geeksforgeeks.org/problems/unique-bsts-1587115621/1

long catalan_number(int n){
    long catalan[n+1];
    catalan[0] = catalan[1] = 1;
    
    for(int i=2; i<=n; ++i){
        catalan[i] = 0;
        for(int j=0; j<i; ++j)
            catalan[i] = ((catalan[i]%1000000007) + (catalan[j]%1000000007)*(catalan[i-j-1]%1000000007))%1000000007;
        
    }
    return catalan[n];
}
    
int numTrees(int N)
{
    return (int)catalan_number(N);
}

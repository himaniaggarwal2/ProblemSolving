// https://practice.geeksforgeeks.org/problems/count-possible-ways-to-construct-buildings5007/1#
// with O(1) space and O(N) time complexity
int m=1e9+7;
	int TotalWays(int N)
	{
	   long long emp1;
	   long long emp2;
	   long long bul1;
	   long long bul2;
	   emp1=1;
	   bul1=1;
	   for(int i=2;i<=N;i++){
	       emp2=(emp1+bul1)%m;
	       bul2=emp1%m;
	       
	       emp1=emp2;
	       bul1=bul2;
	   }
	   long long result=(emp1+bul1)%m;
	   result=(result*result)%m;
	   return (int)result;
	}
// with O(N) space and time complexity
       int m=1e9+7;
	int TotalWays(int N)
	{
	   long long empty[N];
	   long long building[N];
	   empty[1]=1;
	   building[1]=1;
	   for(int i=2;i<=N;i++){
	       empty[i]=(building[i-1]+empty[i-1])%m;
	       building[i]=empty[i-1]%m;
	   }
	   long long result=(empty[N]+building[N])%m;
	   result=(result*result)%m;
	   return (int)result;
	}
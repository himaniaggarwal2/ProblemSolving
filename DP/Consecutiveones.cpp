// https://practice.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1#
// O(n) Approaches

ll countStrings(int n) {
	   O(n) Complexity
	   ll l0[n+1];
	   ll l1[n+1];
	   l0[1]=1;
	   l1[1]=1;
	   for(int i=2;i<=n+1;i++){
	       l0[i]=l0[i-1]+l1[i-1];
	       l1[i]=l0[i-1];
	   }
	   return l0[n+1];
	}
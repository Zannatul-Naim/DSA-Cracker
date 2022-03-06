#include <stdio.h>

int main() {
	//code
	
	int t;
	scanf("%d", &t);
	while(t--) 
	{
	    int n;
	    scanf("%d", &n);
	    int a[n];
        //	int i = 0; 
	    for(int i = 0; i < n; i++)
	    {
	        scanf("%d", &a[i]);   // input the array using for loop
	    }
	    for(int i = n - 1; i >= 0; i--)
	    {
	        printf("%d ", a[i]);  // printing the array
	    }
	    printf("\n");
	   }
	return 0;
}

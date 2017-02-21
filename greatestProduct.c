#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int i,j;

	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }

	    int max = 0;
	    int x[n][n];
	    int k;

	    for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++){
	            x[i][j] = a[i] * a[j];

	            for(k=0;k<n;k++){
	                if(x[i][j] == a[k] && max < a[k]){
	                    max = a[k];
	                }
	            }
	        }
	    }
	    if(max == 0)
            printf("-1");
        else
            printf("%d",max);
	}
	return 0;
}

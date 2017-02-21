#include <stdio.h>
#include<string.h>

int subsequence(char a[],char b[]){
    int la = strlen(a);
    int lb = strlen(b);

    int arr[la+1][lb+1];
    int i,j;
    for(i=0;i<=la;i++){
        arr[i][0] = 0;
    }
    for(i=0;i<=lb;i++){
        arr[0][i] = 0;
    }

    int ans = 0;

    for(i=1;i<=la;i++){
        for(j=1;j<=lb;j++){
            if(a[i-1] == b[j-1]){
                arr[i][j] = arr[i-1][j-1]  + 1;
            }
            else{
                arr[i][j] = arr[i-1][j];
            }

            if(ans < arr[i][j]){
                ans = arr[i][j];
            }
        }
    }
    return ans;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
        char a[100],b[100];
        scanf("%s",a);
        scanf("%s",b);

        int x = subsequence(a,b);
        printf("%d\n",x);
	}
return 0;
}

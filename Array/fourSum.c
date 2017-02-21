#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, z;
        scanf("%d%d",&n,&z);
        int a[n];
        int i,j;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        int sum[n][n];

        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                sum[i][j] = a[i] + a[j];
            }
        }
        int k,l,s;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                for(k=i+2;k<n-1;k++)
                    for(l=0;l<n;l++){
                        if(k!=i && k!=i-1 &&k!=i+1 && k!=j && k!=j-1 && k!=j+1 && l!=i && l!=i-1 &&l!=i+1 && l!=j && l!=j-1 && l!=j+1){
                            s = 0;
                            s = sum[i][j] + sum[k][l];
                            if(s==z){
                                printf("%d %d %d %d $ ",a[i],a[j],a[k],a[l]);
                            }
                        }
                }
            }
        }


    }

    return 0;
}

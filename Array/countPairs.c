#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        int a[n],b[n];

        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++){
            b[i]  = i*a[i];
        }
        int j,count=0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(b[i] > b[j]){
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

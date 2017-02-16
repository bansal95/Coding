#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];

        int i;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++){
            a[i] += (a[a[i]]%n)*n;
        }
        for(i=0;i<n;i++){
            a[i] /= n;
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}

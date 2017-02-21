#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    int n;

    while(t--){
        scanf("%d",&n);
        int a[n];

        int k;
        scanf("%d",&k);

        int i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        int limit = k;
        int ans = 0;

        for(i=0;i<n;i++){
            if(limit<a[i]){
                ans = a[i] - limit + ans;
                limit = a[i];
            }
        }
        if(ans == 0){
            printf("-1\n");
        }
        else
            printf("%d",ans);
    }
    return 0;
}

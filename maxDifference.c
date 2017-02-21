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
        int sum = 0;
        int count = 0;
        int min = 999999;
        for(i=0;i<n;i++){
            if(a[i] > 0){
                count++;
                sum = sum + a[i];
                if(min > a[i]){
                    min = a[i];
                }
            }
            if(a[i] < 0){
                sum = sum - a[i];
            }
        }
        printf("%d",count);
        if(count == n)
            sum = sum - 2*min;
        printf("%d",sum);
    }
    return 0;
}

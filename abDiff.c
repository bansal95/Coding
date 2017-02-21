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
        int psum = 0;
        int max = 0;

        for(i=0;i<n;i++){
            //printf("%d",psum);
            if(psum < 0 && a[i] > 0)
                psum = a[i];
            else if(psum < 0 && a[i] < 0){
                psum = 0;
            }
            else{
                psum = psum + a[i];

            }
            if(max < psum){
                max = psum;
            }
        }

        int nsum = 0;
        int nmax = 0;

        for(i=0;i<n;i++){
            //printf("%d",psum);
            if(nsum < 0 && a[i] > 0)
                nsum = a[i];
            else if(nsum < 0 && a[i] < 0){
                nsum = 0;
            }
            else{
                nsum = nsum + a[i];

            }
            if(nmax < nsum){
                nmax = nsum;
            }
        }
        printf("%d",max + nmax);

    }
return 0;
}

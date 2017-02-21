#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[50];

        char symbol[] = {'I','V','X','L','C','D','M'};
        int value[] = {1,5,10,50,100,500,1000};

        scanf("%s",a);
        int l = strlen(a);
        int i,j,k=0;
        int sum=0;
        for(i=l;i>0;i--){
            j=0;
            while(a[i-1]!=symbol[j]){
                j++;
            }
            //printf("%d\n",j);
            if(k<=j)
                sum = sum + value[j];
            else
                sum = sum - value[j];
            k = j;
        }
        printf("%d\n",sum);

    }
    return 0;
}


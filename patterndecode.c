#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
        int n;
        scanf("%d",&n);
        if(n==1)
          {
             printf("1\n");
             continue;
          }
        n = n-1;
        int i,j,m;
        int *a;
        a = (int*)malloc(sizeof(int)*1);
        a[0] = 1;

        int *b;
        int count;
        int k,l=1;
        b = (int *)malloc(500 * sizeof(int));
        for(i=0;i<n;i++){
            k = 0;
            count = 1;
            for(j=0;j<l;j++){
                if(a[j] == a[j+1]){
                    count++;
                }
                else{

                    b[k] = count;
                    k++;
                    b[k] = a[j];
                    k++;
                    count = 1;
                    printf("....%d....\n",k);
                }
            }
            for(m=0;m<k;m++){
                a[m]=b[m];
            }
            l = k;

        }
        for(m=0;m<l;m++)
            printf("%d",a[m]);
            printf("\n");

	}
	return 0;
}

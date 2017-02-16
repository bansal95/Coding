#include<stdio.h>


void quickSort( int a[], int l, int r)
{
   int j;
    if( l < r )
   {
        j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
   }

}

int partition( int a[], int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;

   while( 1)
   {
   	do ++i; while( a[i] <= pivot && i <= r );
   	do --j; while( a[j] > pivot );
   	if( i >= j ) break;
   	t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int i;

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        quickSort(a,0,n-1);

        int x=0,y=0;

        for(i=0;i<n/2;i++){
            x = (x * 10) + a[2*i];
            y = (y * 10) + a[(2*i)+1];
        }
        if(n%2 != 0){
            x = (x * 10) + a[n-1];
        }

        printf("%d\n",x+y);
    }

    return 0;
}

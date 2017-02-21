#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long int z[100000];

void c(){
    long long int i;
    for(i=3;i<10000;i++)
        z[i] =-1;
}
/*
long long int hackonacci(long long int x){
        long long int q,w,e;

         if(x<1){
            return;
        }
        if(x==1){
            z[x] = 1;
            return z[x];
        }
        if(x==2){
            z[x] = 0;
            return z[x];
        }
        if(x==3){
            z[x] = 1;
            return z[x];
        }

        if(z[x] != -1){
           // z[x] = z[x];
            return z[x];
        }

        else{
            z[x-1] = hackonacci(x-1);
            z[x-1] = z[x-1]*1;
            z[x-2] = hackonacci(x-2);
            z[x-2] = z[x-2]*2;
            z[x-3] = hackonacci(x-3);
            z[x-3] = z[x-3]*3;
            z[x] = ((z[x-1]%2)+(z[x-2]%2)+(z[x-3]%2)%2);
           // printf("z[x] = %d\n",z[x]);
            return z[x];
        }

}
*/
int hackonacci1(int n){
  int f[n+1];
  int i;


  f[1] = 1;
  f[2] = 0;
  f[3] = 1;

  for (i = 4; i <= n; i++){
      f[i] = (((1*f[i-1])%2) + ((2*f[i-2])%2) + ((3*f[i-3])%2)%2);
  }

  return f[n];
}

int main(){
    int n;
    int q;
    scanf("%d %d",&n,&q);
    int a0;
    for(a0 = 0; a0 < q; a0++){
        c();
        int angle;
        scanf("%d",&angle);
        angle = angle % 360;
        long long int i,j,a,b,c,d;
        int count = 0;
        int t2,t1;
       // printf("%d",hackonacci1(16));

        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                a = (i*j);
                a = pow(a,2);
                b = hackonacci1(a);
                b = b%2;

                if(angle == 0){
                    d=b;
                }

                if(angle == 90){
                    t1 = n+1-j;
                    t2 = i;
                    c = t1*t2;
                    c = pow(c,2);
                    d = hackonacci1(c);
                   // printf("c = %d ",c);
                   // printf("d = %d \n",d);
                    d = d%2;
                }

                if(angle == 180){
                    t1 = n+1-i;
                    t2 = n+1-j;
                    c = t1*t2;
                    c = pow(c,2);
                    d = hackonacci1(c);

                    d = d%2;
                }
                if(angle == 270){
                    t1 = j;
                    t2 = n+1-i;
                    c = t1*t2;
                    c = pow(c,2);
                    d = hackonacci1(c);
                    d = d%2;
                }

                if(b!=d) count++;
            }
        }

     printf("%d\n",count);
        // your code goes here
    }

    return 0;
}

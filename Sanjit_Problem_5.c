#include<stdio.h> 

int sol(int a[],int n){ 
    int sum=0;
    int c=0;
    int i,j;

    for(i=0;i<n;i++)
    { 
        c=0;
        for(j=2;j<a[i];j++)
        { 
            if(a[i]%j==0)
            { 
                c++;
            }
        }

        if(c==0)
        { 
            sum = sum + a[i];
        }
    }

    return sum;
}

int main(){ 
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    printf("%d",sol(a,n));
}
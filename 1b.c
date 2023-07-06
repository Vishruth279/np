
#include<stdio.h>
void main(){
    int i,j,k,n,count,a[30],b[30];
    
    printf("enter the size:");
    scanf("%d",&n);
    
    printf("enter the frame:");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    i=0;
    j=0;
    count=1;
    while(i<n){
        if(a[i]==0)
        {
            b[j]=a[i];
            for(k=i+1;a[k]==1&&k<n&&count<5;k++)
            {
                j++;
                b[j]=a[k];
                count++;
                if(count==5){
                    j++;
                    b[j]=0;
                    
                }
                i=k;
            }
        }
        else{
            b[j]=a[i];
        }
        i++;
        j++;
    }
    printf("after bit stuffing:");
    for(i=0;i<j;i++)
    printf("%d ",b[i]);
}

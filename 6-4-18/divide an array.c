    #include <stdio.h>
    int main ()
    {
 
        int a[30],count,mid,sum1 =0,sum2=0;
        int n,i,j;
        scanf("%d", &n);
        for (i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            count++;
        } 
        
        mid=count/2;
       
        for (i = 0; i <mid; i++) 
        {
 
           sum1 = sum1+a[i];
           
        }
        printf("\nSum1=%d", sum1);
   
       for(i=mid;i<count;i++) 
            
            {
                sum2 = sum2+a[i];
           
            }
        printf("\nSum2=%d", sum2);
        
        
           
        if(sum1==sum2) 
        {
            printf("\nyes");
        }
        else
        {
            printf("\nno");
        }
 
        
        return 0; 
 
   }
    

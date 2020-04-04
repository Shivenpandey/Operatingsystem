/*Ques18. Ten students (a,b,c,d,e,f,g,h,i,j) are going to attend an event. 
There are lots of gift shops, they all are going to the gift shops and 
randomly picking the gifts. After picking the gifts they are randomly 
arriving in the billing counter. The accountant gives the preference to 
that student who has maximum number of gift. 
Create a C or Java program to define order of billed students?*/
#include <stdio.h> 

	int i,t,j,n;         
	int B_T[10],p_no[10],bill[10]; 
	float cost;
	
 void billfn()    
    {		  
      printf( "STUDENT_NO\t\tTOTAL GIFTS PURCHASED\t\tBILL\n\n"); 

	    for (i = 0; i < n; i++) 
		   { 
	           	printf("STUDENT NO. = %d \t\t" ,p_no[i]);
		        printf("%d \t\t\t",B_T[i]);
		        bill[i]= cost * B_T[i];           
	         	printf("%d \t\t\t",bill[i]); 
	            printf("\n");
	       }
    }

void get() 
   {

     printf("\n\n");
     printf("ENTERED DATA\n\n");
	 printf( "\nSTUDENT NO.\t\tNO.OF GIFTS PURCHASED \n"); 

	    for (i = 0; i < n; i++)  
	      { 
		      printf("STUDENT NO. = %d \t\t" ,p_no[i]);   
		      printf("%d \t\t\t",B_T[i]);                  
	          printf("\n\n");
	      } 
	}

void sorting()  
   { 
   
	printf("ORDER OF BILLED STUDENTS \n\n");
	    for(i=0;i<n;i++)
          {
    	      for(j=i+1;j<n;++j)
			     {
		            if(B_T[i]<B_T[j])     
					{
		                t=B_T[i];        
                   	    B_T[i]=B_T[j];
                        B_T[j]=t;
                        t=p_no[i];          
                        p_no[i]=p_no[j];            
                        p_no[j]=t;
                    }
                 }
}          }


int main() 
{ 

	 printf("ENTER THE NO OF STUDENTS WHO PURCHASE GIFT :- "); 
     scanf("%d",&n);
     printf("ENTER THE COST OF ONE GIFT :- ");
     scanf("%f",&cost);
     printf("ENTER THE NUMBER OF GIFTS CORRESPONDING TO EACH STUDENT ");
        for(i=0;i<n;i++)
          {
              printf("\nSTUDENT_NO[%d] \n",i+1);
              printf("ENTER THE NUMBER OF GIFTS PURCHASED :");
              scanf("%d",&B_T[i]);
              p_no[i]=i+1;           //it is process number 
          }

  
        get();
        sorting();
        billfn();
	return 0;
         
}

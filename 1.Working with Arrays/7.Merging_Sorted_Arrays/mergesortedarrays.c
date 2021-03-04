/*
Enter two sorted arrays and they are merged and sorted
*/

#include<stdio.h> 
#define max 100  //Define the maximum size of the arrays

void main()
{
	int p[max], q[max], r[max];  //Declare arrays to store the inputs and output
	int m,n;                     //Declare variables to store array size
	int i,j,k;                   //Declare index variables for the arrays    

    /*Ask the user to enter size and elements in the first array*/
	printf("Enter length of first array:"); 
	scanf("%d",&m); 
	printf("Enter %d elements of first array in sorted order \n",m); 
	for(i=0;i<m;i++ )
		scanf("%d",&p[i]); 
	printf("\nEnter length of second array:"); 
	scanf("%d",&n); 

    /*Ask the user to enter size and elements of the second array*/
	printf("Enter %d elements of second array in sorted order\n",n); 
	for(i=0;i<n;i++ )
		scanf("%d",&q[i]); 

	i=j=k=0;  //Initialize index variables to 0

    /*Compare elements from both the arrays till we run out of elements in either one of the  arrays*/
	while ((i<m) && (j <n))
	{
		if(p[i] < q[j]) //If element in the first array is less that element in second array, write that to the result array
		{
			r[k]=p[i];
			i++;        //increment index 
			k++;

		}
		else
		{
			if(q[j]< p[i]) //If element in the second array is less that element in first array, write that to the result array
			{
				r[k]=q[j];
				k++;    //increment index
				j++;
			}
			else
			{
				r[k]=p[i]; //If both elements are equal, write both to the result array.
				k++;
				i++;
				r[k]=q[j];
				k++;
				j++;
			}
		}
	}
	while(i<m) //If there are elements left in the first array write all of them to the result array
	{
		r[k]=p[i];
		k++;
		i++;
	}
	while(j<n) //If there are elements left in the second array, write all of them to the result array
	{
		r[k]=q[j];
		k++;
		j++;
	}

	printf("\nThe combined sorted array is:\n");  //Print the result Array
	for(i = 0;i<k;i++)
		printf("%d\n",r[i]); 
}

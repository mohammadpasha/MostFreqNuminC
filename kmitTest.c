#include<stdio.h>
int main()
{
	int a[15], i, j, k, n, key, count[15], min, index[15];

	printf("\nHow many numbers");
	scanf("%d",&n);
	
	printf("\nEnter numbers");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		count[i]=0;
	}

	for(i=0;i<n;i++)
	{key=a[i];
		for(j=0;j<n;j++)
		{
			if(key==a[j])
				count[j]++;

		}
	}


	for(i=0;i<n;i++)
	{
		if(count[i]>1)
			printf("\nElement %d at index %d is repeating %d times",a[i],i,count[i]);
		else
			printf("\nElement %d at index %d is not repeating",a[i],i);	
	}
min=1;
	for(i=0;i<n;i++)
	{
		if(count[i]>min)
		{
			min=count[i];
			key=a[i];
		}
		
	}
printf("key%d",key);
j=0;
for(i=0;i<n;i++)
	if(a[i]==key)
	{
		index[j]=i;
		printf("index %d",index[j]);
		j++;
	}

	for(i=0;i<min;i++)
		printf("\nMost occuring element is %d at index %d occuring %d times",key,index[i],min);
			
}
partition(a[],l,h)
{
	pivot=a[l];
	i=l,j=h;
	
	while(i<j)
	{
		while(a[i] <= pivot)
		{
			i++;
		}
	   
	   while(a[i]>pivot)
	   {
	   	j--;
	   }
	
	  if(i<j)
	  {
	  	swap(a[i],a[j])
	  }
	}
	swap(a[l],a[j])
	return j;
	
}

quicksort(a,l,h)
{
	if(l<h)
	
	{
		j=partition(a,l,h);
	}
}
quicksort(a,l,j-1);
quicksort(a,j+1,h);

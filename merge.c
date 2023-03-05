merge(a,l,mid,h)
{
	i=l;
	j=mid+1;
	r=l;
	
	while(i<=mid && j<=h)
	{
		if(a[i]<=a[j])
	  
	  {
	  	temp[k]=a[i];
	  	i++;
	  	k++;
	  }
	 else
	 {
	 	temp[k]=A[j];
	 	j++;
	 	k++;
	 }
	 if(i>mid)
	 {
	 	while(j<=h)
	 	{
	 		temp[k]=a[j];
	 		j++;
	 		k++;
		 }
		 
	 }
	 else{
	 	while(i<=mid)
	 	{
	 		temp[k]=a[i];
	 		i++;
	 		k++;
		 }
		 for(k=l ; k<=h ; k++)
		 {
		 	a[k]=temp[k];
		 }
	 }
	 
	 
	 
	 
	
	}
	
}

mergesort(a,l,h)
{
	if(l<h)
	{
		mid =(l+h)/2
		
	}
	mergesort(a,l,mid);
	mergesort(a,mid+1,h);

}

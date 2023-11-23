#include <stdio.h> 
#include <math.h>
main()
{    int n,i,choice,k,v,songuyento,sum ;
  	 printf ("nhap phan tu :");
  	 scanf ("%d",&n);
  	 sum=0;
  	 int arr[n];
do {
	 printf ("1.nhap gia tri phan tu n vao mang\n ") ;
	 printf ("2.in gia tri cac phan tu trong mang\n ");
	 printf ("3.tinh trung binh cac phan tu duong\n ");
	 printf ("4.in ra vi tri co gia tri bang k (nhap k) trong mang\n ") ;
	 printf ("5.su dung thuat toan xep giam dan\n");
	 printf ("6.tinh so luong cac phan tu la so nguyen to\n");
	 printf ("7.sap xep cac phan tu chan chia het cho 3 o dau va cac phan tu le chia het cho 3 o cuoi\n");
	 printf ("lua chon cua ban\n ") ;
	 scanf ("%d",&choice);
	 switch(choice)
	{ 
	case 1 : 
	 	for (i=0;i<n;i++)
		    {
		   	 printf ("nhap arr[%d]=",i);
		   	 scanf ("%d",&arr[i]) ;
		    }  
		    break;
	case 2 :
	 	for(i=0;i<n;i++)
		   {
		   	 printf ("arr[%d]= %d\n",i,arr[i]);
		   }
		   break;
	case 3:
		sum=0;
		int soduong;
		soduong=0;
	    for(i=0;i<n;i++)
		   {
		   	 if (arr[i]>0)
		   	 soduong++;
		   	 	  sum+=arr[i];
		   }
		   printf("trung binh cac so duong =%d\n",sum/soduong);
		   break;
	case 4 :
	     printf ("nhap so de tim vi tri:");
	     scanf ("%d",&k);
	     for(i=0;i<n;i++)
		   {
		   	 if (arr[i]==k)
		   	 {
		   	   printf("phan tu do la : arr[%d]=%d\n",i,arr[i]);
		   	   sum++;
		     }
			 else 
			 {
			  if(sum !=0){
			  printf ("khong co so nao ca\n");}
			 }	
		   }
		   break;
	case 5 :
		int temp ; 
	    for (i=0;i<n-1;i++)
		   {
		   	for (int j=0;j<n;j++)
			   {
			   	if(arr[i]<arr[j])
				   {
				   	arr[i]=temp;
				   	arr[j]=arr[i];
				   	arr[j]=temp;
				   }
			   } 
	      	
		   }
		   for (i=0;i<n-1;i++)
		     {
		     	printf ("arr[%d]=%d\n",i,arr[i]);
		     }
		   break;
	case 6 :
		int l ;
		int no;
		no=0;
		for (i=0;i<n;i++)
		{   
		    int l;
			l= arr[i]/2;
		 for(i=2;i<=l;i++)
		 {
		 
		 if(l % i ==0)
		   {
		 	 no++;
		   }
		 }
		}
		printf ("gom tat ca %d so nguyen to\n",n-no);
		
    }
    }while("ll");  
}  

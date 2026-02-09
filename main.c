#include<stdio.h>
int main(){
    int arr[10],n,i,target,loc=-1 ;
 printf("enter the  size in array:-");
 scanf("%d",&n);
 printf("enter the elements of the array:-");
for (i=0;i<n;i++){
 scanf("%d",&arr[i]);

}
printf("enter the element for linear search:-\n") ;
scanf("%d",&target);

printf("performing linear search...\n");
for (i=0;i<n;i++){
    if (arr[i]==target)
    {
     printf("element found at= %d \n",loc+i);
     loc++;
    }
}
 if(loc==-1) {
    printf("element not found in array\n");
  
}
    
return 0;

}
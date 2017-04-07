#include<stdio.h>
#include<stdlib.h>

int main()
{
 float arr[25000];
 float rankcor[20000];
 int num[25000];
 
 int i, j, k;
 FILE *fp1;
 FILE *fp2;

 fp1=fopen("corr.txt","r");
 fp2=fopen("corr_sel.txt","w");
 k=0;

 for(i=0;i<24188;i++){
  fscanf(fp1,"%f\n",&arr[i]);
  if( arr[i]>0.25 || arr[i]<-0.25 ){
    rankcor[k]=arr[i];
    num[k]=i+1;
    k++;
  } 
 }
 //for(i=0;i<20;i++)
  // printf("%f\n",arr[i]);
   
 for(j=0;j<k;j++)
   //fprintf(fp2,"%d : %f , %d\n",j,rankcor[j],num[j]);
   fprintf(fp2,"%d\n",num[j]);
 
 fclose(fp1);
 fclose(fp2);
 
 system("pause");

}

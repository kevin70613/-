#include<stdio.h>
#include<stdlib.h>

int main()
{
 float arr1[25000];
 int num[25000];

 int i, j, k;
 FILE *fp1;
 FILE *fp2;

 fp1=fopen("delete.txt","r");
 fp2=fopen("ans.txt","w");
 k=0;

 for(i=0;i<24481;i++){
  fscanf(fp1,"%f\n",&arr1[i]);
  if(arr1[i]== 100){
   num[k]=i+1;
   k++;
  } 
 }
 
 fprintf(fp2,"ans: \n");
 for(j=0;j<k;j++)
  fprintf(fp2,"%d\n",num[j]);
 fprintf(fp2,"\n");
 
 fclose(fp1);
 fclose(fp2);
 
 system("pause");
}

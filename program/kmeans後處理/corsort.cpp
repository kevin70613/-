//�o�ӵ{���@��������X���Ӹs���N���ܼ�
//�Y�@���Q������h�i�H�@���}��h�ɧ���(�{�����O�@�˼Ҳ� �ƻs�K�W�Y�i)
 
#include<stdio.h>
#include<stdlib.h>

int main()
{
 float arr1[135245];
 int num[25000];
 int num2[25000];
 int num3[25000];
 int num4[25000];
 int num5[25000];
 float arr[25000];
 
 int index1, index2, index3, index4, index5; 
 int i, j, k, l , m ,n ,o;
 float max1, max2, max3, max4, max5;
 int order1, order2, order3, order4, order5; 
  
 FILE *fp1;
 FILE *fp2;
 FILE *fp3;
  
 fp1=fopen("clustering.txt","r");   //��matlab�@kmeans����C���ܼ��ݩ���@�s����Ʃ�Jclustering��
                                    //���O��J kmeans k=50 , 100 , 300 �����G 
 fp2=fopen("corr.txt","r");         //Ū�J�o1242���ܼƪ������Y�� 
 fp3=fopen("corrank_v300_6_10.txt","w");  //�@���������� �ñN���G�g�J�Q�n���ɦW(�ۤv��) 
 
 for(i=0;i<1242;i++){
  fscanf(fp2,"%f\n",&arr[i]);
 }
 
 k=0;
 for(i=0;i<1242;i++){
  fscanf(fp1,"%f\n",&arr1[i]);
  
  if(arr1[i]== 6){
   num[k]=i;
   k++;
  } 
 }
 max1=0;
 fprintf(fp3,"6: \n");
 for(j=0;j<k;j++){
  index1=num[j];
  if(arr[index1]<0)  //������� 
    arr[index1]=-arr[index1];                
  if(arr[index1]>max1 ){
    max1=arr[index1];   //��X�̤j�������Y�� �H�� �O�ĴX�� 
    order1=index1;
  }  
 }
 //printf("%f\t %d\n",max1,order1+1);    
 fprintf(fp3,"cor : %f , order: %d ",max1,order1+1);
 fprintf(fp3,"\n");
 
 l=0;
 for(i=0;i<1242;i++){
  if(arr1[i]== 7){
   num2[l]=i;
   l++;
  } 
 }
 max2=0;
 fprintf(fp3,"7: \n");

 for(j=0;j<l;j++){
  index2=num2[j];
  if(arr[index2]<0)
    arr[index2]=-arr[index2];                
  if(arr[index2]>max2 ){
    max2=arr[index2];
    order2=index2;
  }  
 }    
 fprintf(fp3,"cor : %f , order : %d ",max2,order2+1);
 fprintf(fp3,"\n");
 
 m=0;
 for(i=0;i<1242;i++){
  if(arr1[i]== 8){
   num3[m]=i;
   m++;
  } 
 }
 max3=0;
 fprintf(fp3,"8: \n");

 for(j=0;j<m;j++){
  index3=num3[j];
  if(arr[index3]<0)
    arr[index3]=-arr[index3];                
  if(arr[index3]>max3 ){
    max3=arr[index3];
    order3=index3;
  }  
 } 
 fprintf(fp3,"cor : %f , order : %d ",max3,order3+1);
 fprintf(fp3,"\n");
 
 n=0;
 for(i=0;i<1242;i++){
  if(arr1[i]== 9){
   num4[n]=i;
   n++;
  } 
 }
 max4=0;
 fprintf(fp3,"9: \n");

 for(j=0;j<n;j++){
  index4=num4[j];
  if(arr[index4]<0)
    arr[index4]=-arr[index4];                
  if(arr[index4]>max4 ){
    max4=arr[index4];
    order4=index4;
  }  
 }
 fprintf(fp3,"cor : %f , order : %d ",max4,order4+1);
 fprintf(fp3,"\n");
 
 o=0;
 for(i=0;i<1242;i++){
  if(arr1[i]== 10){
   num5[o]=i;
   o++;
  } 
 }
 max5=0;
 fprintf(fp3,"10: \n");

 for(j=0;j<o;j++){
  index5=num5[j];
  if(arr[index5]<0)
    arr[index5]=-arr[index5];                
  if(arr[index5]>max5 ){
    max5=arr[index5];
    order5=index5;
  }  
 }  
 fprintf(fp3,"cor : %f , order : %d ",max5,order5+1);
 fprintf(fp3,"\n");
  
 system("pause");

}  

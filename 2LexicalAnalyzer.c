#include<conio.h>  
#include<stdio.h>  
#include<string.h>   
int main()    {      
char a[30], b[30],exp[30];   
int c[10];    
int i,j,k,l,x;   
printf("**** Lexical Analyzer ****");   
printf("\n\n enter the expression\n\t\t");   
scanf(" %s",&exp); l=strlen(exp);    
printf("\n \n alphabets are:==>\n\t\t");    
for(i=0;i<l;i++)    {     
if((exp[i]>64&&exp[i]<91)||(exp[i]>96&&exp[i]<123))     {      
k=0; a[k]=exp[i];      
printf("%c ",a[k]); k++;    
}    
}    
printf("\n\n arithmatic operator are:==>\n\t\t\t");    
for(i=0;i<l;i++)    {      
if((exp[i]>39&&exp[i]<48)||(exp[i]>57&&exp[i]<65))      {       
if(exp[i]==59)        
continue;       
j=0; b[j]=exp[i];        
printf("%c ",b[j]);     
j++;       }     }     
printf("\n\n numbers are:==>\n");     
printf("\t\t");    
for(i=0;i<l;i++)     {     
if(exp[i]>47&&exp[i]<58)      {     
x=0; 
c[x]=exp[i];     
printf("%c ",c[x]);     x++;    }     
}     } 
 
 

#include<iostream> 
#include<cstring> 
#include<cstdio> 
#include<windows.h>
using namespace std; 
char a1[6000000],b1[6000000]; 
char a[8000000],b[8000000],c[8000000];
long lena,lenb,lenc,i,j,x;
int fi,fi1=0;
int f=1;
int main(int argc,char *argv[]) { 
ShowWindow(FindWindow("ConsoleWindowClass",argv[0]),0); 
FILE*fout,*fin; 
memset(a,0,sizeof(a)); 
memset(b,0,sizeof(b)); 
memset(c,0,sizeof(c)); 
freopen("����1.txt","rb",stdin);
gets(a1);
freopen("����2.txt","rb",stdin);
gets(b1);
lena=strlen(a1);
lenb=strlen(b1); 
for (i=0;i<=lena-1;i++) 
a[lena-i]=a1[i]-48; 
for (i=0;i<=lenb-1;i++) 
b[lenb-i]=b1[i]-48; 

printf("λ��1:%dλ��2:%d\n",lena,lenb);




fin=fopen("f.txt","rb");
fscanf(fin,"%d",&f);


for (i=1;i<=lena*f/100;i++) { 


x=0;  
fi=100*i/lena;
if(fi!=fi1){
printf("�����%d%\n",fi);	
}
fi1=fi;



 
for (j=1;j<=lenb;j++)  { 

c[i+j-1]=a[i]*b[j]+x+c[i+j-1]; 
x=c[i+j-1]/10; c[i+j-1] %= 10;  



} 
c[i+lenb]=x; 

} 

lenc=lena+lenb; 

//performed


while (c[lenc]==0&&lenc>1) 
lenc--; 


fout=fopen("c.txt","wb");
for(int q=lenc;q>=1;q--) 
fprintf(fout,"%d",c[q]);


fout=fopen("i.txt","wb");
fprintf(fout,"%d",i);


fout=fopen("lenc.txt","wb");
fprintf(fout,"%d",lenc);


fout=fopen("�����ļ�.txt","wb");
fprintf(fout,"����ɹ���ɣ������%d%\n",fi);


return 0; 
}

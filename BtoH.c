#include<stdio.h>
#include<string.h>
 
char a[10005];
 
void transform(){			//����ת�� 
	int n,k,t,i,j,m;
	int b[10005]={0};
	n=strlen(a);			//ɨ������ 
	for(i=0;i<n;i++)
		b[i]=0;
	k=0;
	t=1;
	m=0;
	for(i=n-1;i>=0;i--){	//תʮ���� 
	    b[k]+=(a[i]-'0')*t;
		t*=2;
		m++;
		if(m%4==0){
			k++;
			t=1;
		}
	}
	for(i=0;i<n;i++){		//����10ת��ĸ 
		if(b[i]>=10){
			switch(b[i]){
			case 10 : b[i]='A'; break;
			case 11 : b[i]='B'; break;
			case 12 : b[i]='C'; break;
			case 13 : b[i]='D'; break;
			case 14 : b[i]='E'; break;
			case 15 : b[i]='F'; break;
			}
		}
	}
	for(i=k;i>=0;i--){
		if(b[i]!=0){
			for(j=i;j>=0;j--){
				if(b[j]>=65 && b[j]<=70 )
					printf("%c",b[j]);
				else printf("%d",b[j]);
			}
			break;
		}
	}
		if(i==-1) printf("0");
	printf("\n");	
} 
 
int main(){	
	printf("������һ������������");	
	while(1){
		scanf("%s",&a);
		transform();
		printf("���ٴ�����һ������������");	
	} 
	
}

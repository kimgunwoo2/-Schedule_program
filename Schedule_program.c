#include <stdio.h>
#include <string.h>
int enter(char(*)[100]);
int remove(char(*)[100]);
int list(char(*)[100]);
int sort(char(*)[100]);
int quit(char(*)[100]);
int main(void)
{
	char scr[10][100]={0};
	char arr[2];
	int i;
	for(i=0; 0<1; i++)
	{
			printf("�޴���(E)nter, (R)emove, (L)ist, (S)ort, (Q)uit: ��");
			gets(arr);
				if(*arr=='E'){
					enter(scr);
					}
				else if(*arr=='R'){
					remove(scr);
				}
				else if(*arr=='L'){
					list(scr);
				}
				else if(*arr=='S'){
					sort(scr);
				}
				else if(*arr=='Q'){
					printf("���α׷� ����\n");
					return 0;
				}

	}
	return ;

}
int enter(char ent[][100])
{
	int j;
	
	for(j=0; j<11; j++){
		
		if(ent[j][0]!='\0')
			++j;
		else if(ent[j][0]=='\0'){
		printf("������ �Է��ϼ���:(�׸� �Է½� E�� �ٽ� �����ּ���.)");
		gets(ent[j]);
		if(ent[j][0]=='E'&&ent[j][1]=='\0'){
			ent[j][0]='\0';
			return 0;
		}
		else if(j==10){
			printf("���� ������ �ʰ��Ǿ����ϴ�.\n");
			return 0;
		}
		}
	} printf("���� ������ �����մϴ�.\n");
	return 0;
}
int remove(char rem[][100])
{
	if(rem[0][0]!='\0'){
		printf("������� �� �� ó�� ���� �����Ͽ����ϴ١�\n");
		rem[0][0]='\0';
		return 0;
	}
	else
	{
		printf("�������� ���� �����ϴ١�\n");
		return 0;
	}

}
int list(char lis[][100])
{
	int k;
	for(k=0; k<10; k++){
		if(lis[k][0]!='\0')
			puts(lis[k]);
		else 
			printf("������� ���� �����ϴ١�\n");
	}
	return 0;
}
int sort(char sor[][100])
{
	int n,k;
	char temp[100];
	
		for (n=0; n < 9; n++)
		for (k=n+1; k < 10; k++)
		if (strcmp(sor[n],sor[k])<0) {
		strcpy(temp, sor[k]);
		strcpy(sor[k], sor[n]);	
		strcpy(sor[n], temp);
}




		for(n=0; n<10; n++){
		printf("%d.%s\n",n+1, sor[n]);
	}

}
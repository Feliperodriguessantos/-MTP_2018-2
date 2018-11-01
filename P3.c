// Felipe Rodrigues Santos
// 11721EEL002

#include <stdio.h>
int main(){
	char str[256];
	int i, cum=0;
	fflush(stdin);
	scanf("%s", str);
	for(i=0; str[i]!='\0'; i++)
		if(str[i]>='0' && str[i]<='9')
			cum = cum*10 + str[i] - 48;
	printf("\n%d\n", cum);
	return 0;
			
}

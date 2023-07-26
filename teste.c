#include<stdio.h>
#include <string.h>

void le_ref(){
	
	FILE *fp, *saida; 
	char c, u;			
	char txt[6] = ".txt";
	int i  = 0;
	char arq[20];
		
	fp = fopen ("teste.txt", "r"); 
	
	while (!feof(fp)){
			fscanf(fp,"%c", &c);

			if (c=='@')
			{	
				puts("abruu aq");	
				fscanf(fp,"%s", arq);
				strcat(arq, txt);
				printf("%s  ", arq);
				saida = fopen(arq, "w");
				while(c != '$')
				{
					fscanf(fp, "%c", &c);
					fprintf(saida, "%c", c);
				}
				fclose(saida);
			}
			

	}
	
	fclose(fp);
	
	
}

void ir();

int main(){

	puts("comecou");
	le_ref();
	puts("\ncabo");
	ir();
	printf("\n\n");
	
	
	printf("\n\n");
	return 0;
}

void ir()
{
	FILE *fp, *saida; 
	char c, u;			
	char txt[6] = ".txt";
	int i  = 0;
	char arq[20];
		
	int ref;
	fp = fopen ("teste.txt", "r"); 
	
	while (!feof(fp)){
			fscanf(fp,"%c", &c);

			if (c=='@')
			{	
				puts("abruu aq");	
				fscanf(fp,"%s", arq);
				strcat(arq, txt);
				printf("%s  ", arq);
				saida = fopen(arq, "a");

				while(c != '$')
				{
					fscanf(fp, "%c", &c);
					if(c == '&')
						{
						fscanf(fp, "%d", &ref);
						fprintf(saida, "\nDigite %d ", ref);
						}
				}
				fclose(saida);
			}
			

	}
	
	fclose(fp);
}

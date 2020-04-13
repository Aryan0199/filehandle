#include <stdio.h>
char ch,ch1;char str[100];int c,i=0;
int main(){
    FILE *fp,*fp1; //File fp contatins text aryan and fp1 is the file whose content is copied from fp. 
    fp=fopen("C:\\Users\\itsme\\CLionProjects\\cfile.txt","r");
    fseek(fp,0,SEEK_END);
    c=ftell(fp);
    while(i<c){
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    printf("\n");

    fseek(fp,-c,SEEK_END);
    fp1=fopen("cfilecopy.txt","w");
    while(ch1!=EOF){
        ch1=getc(fp);
        fprintf(fp1,"%c",ch1);
    }
    fclose(fp1);
    fp1=fopen("cfilecopy.txt","r");
    while(ch!=EOF){
        ch=getc(fp1);
        printf("%c",ch);
    }
    fclose(fp);
    fclose(fp1);
}

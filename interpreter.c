#include<stdio.h>
int main(int argc,char** argv){
  for(int i=1;i<argc;i++){
  printf("Now exec file %s\n",argv[i]);
  if(freopen(argv[i],"r",stdin)==-1) return printf("File not exist\n\n");
  char c;
  if((c=getchar())!=EOF) return printf("This code has error:unexpect token \'%c\'\n",c);
  printf("Code runned successfully and you can clearly see the result.Result:\n\nSee it?");
  }
  printf("No.")
  return 0;
}

#include <stdio.h>

static char input[2048];

int main(int argc, char** argv){
  puts("*Version 1.0.0*");
  puts("Press Ctrl+c to exit\n");


while(1){
  fputs("lispy>", stdout);
  fgets(input, 2048, stdin);
  printf("No you are a %s", input);
}

return 0;
}

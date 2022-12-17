//
# include <stdio.h>

void remove_char_from_string( char x, char *input)
{
  int i = 0;
  while(input[i] != '\0'){
    if(input[i] == x){
      for(int j = i; j < )
  }

  }
int main( void )
{
  char demo1[] = "Hello world, this is adorable";

  char demo2[] = "Some humans jumps of joy";

  remove_char_from_string('i', demo1);

  remove_char_from_string('m', demo2);

  printf("%s\n",demo1);
  printf("%s\n",demo2);

  return 0;
}

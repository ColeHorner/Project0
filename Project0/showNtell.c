#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(int argc, char** argv){

  int success;
  
  success = truncate("showNtell.txt", 25);
  if(!success){
    perror("truncate");
    return -1;
  }
    
  return 0;
}

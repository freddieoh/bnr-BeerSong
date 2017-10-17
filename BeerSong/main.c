//
//  main.c
//  BeerSong
//
//  Created by Fredrick Ohen on 10/11/17.
//  Copyright © 2017 geeoku. All rights reserved.
//

#include <stdio.h>

void singSongForInt(int numberOfBottles)
{
  
  if (numberOfBottles == 0) {
    printf("There are simply no more bottles of beer on the wall. \n\n");
  } else {
    printf("%d bottles of beer on the wall. %d bottles of beer. \n", numberOfBottles, numberOfBottles);
    int oneFewer = numberOfBottles - 1;
    printf("Take one down, pass it around, %d bottle of beer on the wall. \n\n", oneFewer);
    singSongForInt(oneFewer);
    printf("Put a bottle in the recyling, %d empty bottles in the bin. \n", numberOfBottles);
  }
}

int main(int argc, const char * argv[]) {

  singSongForInt(4);
  return 0;
  
}

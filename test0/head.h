void major(int *array, int num) {

  for(int i = 0 ; i < sizeof *array ; i++) {

    printf("for %d , \n %d , \n  %ld \n", array[i], num ,sizeof *array);

  }

}

void sqare(int num , int num2) {

  for(int i = 0; i < num; i++) {
    for(int j = 0 ; j < num2 ; j++) {
       printf("__");
    }

    printf("\n");

    for(int j = 0; j < num2 ; j++) {
      printf("| ");
    }

    printf("\n");
  }

}

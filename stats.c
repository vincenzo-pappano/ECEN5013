/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */

#include <stdio.h>

void print_array(unsigned int num[], int len) {

  int i;
  for(i=0; i<len; i++) {
    printf("%6d", num[i]);
    if( ((i+1)%10) == 0)
      printf("\n");
  }

}

unsigned int find_mean(unsigned int num[], int len) {
  unsigned int total = 0;
  int i;
  for(i=0; i<len; i++) {
    total += num[i];
  }

  return (total/len);
}

unsigned int find_maximum(unsigned int num[], int len) {
  unsigned int largest=num[0];
  int i;
  for(i=1; i<len; i++) {
    if(num[i] > largest) {
      largest = num[i];
    }
  }
  return largest;
}

unsigned int find_minimum(unsigned int num[], int len) {
    int smallest=num[0];
  int i;
  for(i=1; i<len; i++) {
    if(num[i] < smallest) {
      smallest = num[i];
    }
  }
    return smallest;
}

void sort_array(unsigned int num[], int len) {
  unsigned int i, j;
  unsigned int temp;
  for(i=0; i<len-1; i++) {
    for(j=0; j<len-1-i; j++) {
      if(num[j] < num[j+1]) {
         temp = num[j];
         num[j] = num[j+1];
         num[j+1] = temp;
      }
    }
  }
}

unsigned int find_median(unsigned int num[], int len) {
	unsigned int median;
  if((len%2)==1) {
    median = (num[len/2 +1]);
  }
  else {
    median = ( num[len/2-1] + num[len/2] ) / 2;
  }
	return median;
}

void print_statistics(unsigned int num[], int len) {
  printf("Array Statistics: \n\n");
  printf("\t\tMedian: %3d\n", find_median(num,len));
  printf("\t\tMean:   %3d\n", find_mean(num,len));
  printf("\t\tMin:    %3d\n", find_minimum(num,len));
  printf("\t\tMax:    %3d\n", find_maximum(num,len));
}

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("\n\n");
  printf("Array (before sorting)\n\n");
  print_array(test, SIZE);

  sort_array(test, SIZE);

  printf("\n\n");
  printf("Array (after sorting)\n\n");
  print_array(test, SIZE);

  printf("\n\n");
  print_statistics(test, SIZE);
  printf("\n\n");

}

/* Add other Implementation File Code Here */

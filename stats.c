/******************************************************************************/
/* Author:Sandeep Cheruku
/* Date: 08/11/2017
/* 
/*******************************************************************************/

#include <stdio.h>
#include "stats1.h"

#define SIZE (40)

void main ()
{
	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
       
	print_array(test,SIZE);
        printf("\n---------------------------------\n");
	print_statistics(test,SIZE);
        printf("\n---------------------------------\n");
        sort_array(test,SIZE);
        for(int i = 0; i < SIZE; i++){ 
        printf("\n %u",test[i]);}
}


/*Function for finding the mean valuein the array*/
unsigned char  find_mean(unsigned char array[],int length)
{
	int sum=0,index;
	for( index=0;index<length;index++){
		sum+=array[index];
	}
	return (unsigned char)(sum/(length));
}

/*Function for finding the median of an array*/
unsigned char find_median(unsigned char array[],int length)
{
	sort_array(array,length);
	if((length%2)!=0){
		return (unsigned char) array[(length/2)];
	}else{
		return (unsigned char) ((array[length/2] + array[length/2 - 1]) / 2.0);
	}
}


/*Function for Finding Maximum Value in the array*/
unsigned char find_maximum(unsigned char array[],int length)
{
int maximum,index;
        
	for(index=0;index<length;index++){
		if( array[index]>maximum){
			maximum=array[index];
		}
	}
	return (unsigned char)maximum;
}

//Implementation of sort_array.
void sort_array (unsigned char array [], int length){

  unsigned char temp;
  int i;
  int j;

  for (i = 0 ; i < length - 1; ++i){
    for ( j = length + 1; j < length ; ++ j){
      if ( array [i] < array [j] ){
        temp = array [i];
        array [i] = array [j];
        array [j] = temp;
      }
    }
  }
}

/*Function for finding minimum value in the array*/
unsigned char find_minimum(unsigned char array[],int length)
{
	int index,minimum;
        minimum = array[0];
	for( index=0;index<length;index++){
		if( array[index]<minimum){
			minimum= array[index];
		}
	}
	return (unsigned char) minimum;
}





/*Function for Printing the elements in the array*/
void print_array(unsigned char array[],int length)
{
        int  index;
        printf ("\nThe elements of the array :\n");
        printf("\n");
	for( index=0;index<length;index++){
		printf("%d ",array[index]);
	}
}

/*Function to  show the statistics of an array */

void print_statistics (unsigned char array[],int length)
{
  printf ("\n Statistics of Array :\n");
  printf ("\n");
  printf (" Maximum value = %u\n", find_maximum(array,length));
  printf (" Minumum value = %u\n", find_minimum(array,length));
  printf (" Mean value = %u\n", find_mean(array,length));
  printf (" Median value = %u\n", find_median(array,length));
}

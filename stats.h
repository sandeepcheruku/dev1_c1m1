
/**
 * @file stats.h
 * @brief Header file for for the statistics application.
 *
 * @Description:
 *     - This application is used to perform statistical analytics on a given dataset.
 *     - This application provides APIs to find max,min,mean,median and display the 
 *       statistical values computed.
 *
 * @author Sandeep Cheruku
 * @date 08-11-2017
 *
 */

#ifndef __STATS_H__
#define __STATS_H__


void print_statistics (unsigned char array[], int length);

/**
 * @bried Print the elements of the given array into the screen.
 * 
 * @This function takes input as the given array and an unsigned integer as length of the array. Function
 * will print the elements of the array to the screen.
 *
 * @param array An unsigned char points to the given array of data elements/
 * @param length  An unsigned integer points to the size of the array.
 *
 */
void print_array (unsigned char array [], int length);

/**
 * @brief This function used to find the median value.
 * 
 * @This function takes input as an unsigned char pointer to an n-element data array and an unsigned 
 * integer as the size of the array. Function computes the median value and return the result.
 * 
 * @param array An unsigned char points to the given array of data elements/
 * @param size  An unsigned integer points to the size of the array.
 *
 * @Return : An unsigned char result from the function.
 */
unsigned char find_median (unsigned char array [], int length);

/**
 * @brief This function used to find the mean value.
 * 
 * @This function takes input as an unsigned char pointer to an n-element data array and an unsigned 
 * integer as the length of the array. Function computes the mean value from the given data set and returned the value.
 * 
 * @param array An unsigned char points to the given array of data elements.
 * @param length An unsigned integer points to the size of the array.
 *
 * @Return : An unsigned char result from the function.
 */
unsigned char find_mean (unsigned char array [], int length);

/**
 * @brief This function used to find the maximum value.
 * 
 * @This function takes input as an unsigned char pointer to an n-element data array and an unsigned 
 * integer as the length of the array. Function computes the maximum value from the given data set and returned the value.
 * 
 * @param array An unsigned char points to the given array of data elements.
 * @param length  An unsigned integer points to the size of the array.
 *
 * @Return : An unsigned char result from the function.
 */
unsigned char find_maximum (unsigned char [], int);

/**
 * @brief This function used to find the minimum value.
 * 
 * @This function takes input as an unsigned char pointer to an n-element data array and an unsigned 
 * integer as the size of the array. Function computes the minimum value from the given data set and returned the value.
 * 
 * @param array An unsigned char points to the given array of data elements.
 * @param size  An unsigned integer points to the size of the array.
 *
 * @Return : An unsigned char result from the function.
 */
unsigned char find_minimum (unsigned char [], int);

/**
 * @brief This function used to sort the array.
 * 
 * @This function takes input as an unsigned char pointer to an n-element data array and unsigned integer as the length of the array.
 * Function will sort the array from smallest to largest.
 *
 * @param array An unsigned char points to the given array of data elements.
 * @param length An unsigned integer points to the size of the array.
 *
 *
 * @Return Nothing.
 */
void sort_array (unsigned char array[] , int length);

#endif /* __STATS_H__ */


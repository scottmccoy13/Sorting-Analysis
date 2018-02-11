#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

class myarray {
public:
	//constructors
	myarray();		//defult constructor
	myarray(int num); //copy constructor; creates an array of n rand ints
	~myarray();		//default destructor

	//data members
	int sizeOfArray;   //size of the array
	int *arr;		   //pointer to the array

	//array functions
	void printArray(); //prints the array
	void prepend(int); //adds element to the front 
	void append(int);  //adds element to the end
	void delFront();   //deletes element at front
	void delBack();    //deletes element at end
	void reverseArr(); //reverses the order of array
	//void writeToFile(char*); //copies the array to a file
	int  getSize();  //returns the size of the array
	int  sigma();    //sums all of the elements in the array
	//int* checkOdd(); //returns the odd elements of the array
	//overload of + operator to support concatenation of arrays
	//int* operator+(const array&) const; 
	//bool verifySorted();

	//Sorting functions
	void bubbleSort(); 		//bubblesort implementation
	void insertionSort();  	//insertionsort implementation
	void selectionSort();	//selectionsort implementation
	void merge(int left, int middle, int right); //merge step
	void mergeSort(int left, int right); //mergesort implementation
	int partition(int left, int right); //qsort partition
	void quickSort(int left, int right); //qsort implementation

	//utility functions
	void swap(int i, int j); //swaps two elements at the given indexes
protected:
private:
};

#endif
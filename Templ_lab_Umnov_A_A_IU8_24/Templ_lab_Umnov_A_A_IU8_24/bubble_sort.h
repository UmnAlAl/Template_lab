/*! \mainpage Template project
*
* \section intro_sec Introduction
*
* This is the project with the realisation of template sorting and it's usage.
* 
*(c) Umnov A A IU8-24
*/

/**
Here you can see bubble sort template
*/

/*! \fn bubble_sort
	\brief Function which makes the sorting process
*/
template <class T>
void bubble_sort (T* input/*!<Input array of elements.*/, 
				  int size/*!<Size of input arr.*/,
				  bool (*swap) (T& a, T&b) /*!<Swap func.*/)
{
	for (int i = 0; i < size - 1; ++i) /*!Cycle; i is the number of current element, the next ones are compared with it*/
	{
		for (int k = i + 1; k < size; ++k) /*!k runs throw all the elements after i*/
		{			
			swap (input[i], input[k]);
		}
	}
}

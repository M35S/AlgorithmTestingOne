#include <iostream>
#include <vector>

// Utility functions
void printVectArray(const std::vector<int> &arr_p);
void printArray(int A_p[], int size_p);

// Sorting Algorithms
void insertionSort(int array_p[], int arraySize_p);
void insertionSortVector(std::vector<int> &vectArray_p);

int main()
{
	// ** Insertion-Sort Algorithm ** //
	int arrayTest1[] = { 6, 1, 3, 5, 2, 4 };
	int arrayAmount1 = 6;
	insertionSort(arrayTest1, arrayAmount1);

	int arrayTest2[] = { 9, 7, 11, 15, 19, 21, 5, 8 };
	int arrayAmount2 = 8;
	insertionSort(arrayTest2, arrayAmount2);
	
	std::cout << "\n";
	
	// ** Insertion-Sort Algorithm ** //
	std::vector<int> vectArrayTest1 = { 6, 1, 3, 5, 2, 4 };
	insertionSortVector(vectArrayTest1);

	system("pause");

	return 0;
}

void printVectArray(const std::vector<int> &arr_p)
{
	std::cout << "\n";
	for (int i = 0; i < arr_p.size(); i++)
	{
		std::cout << "[" << i << "]\t";
	}
	std::cout << "\n";
	for (int i = 0; i < arr_p.size(); i++)
	{
		std::cout << arr_p[i] << "\t";
	}
	std::cout << "\n\n";
}

void printArray(int A_p[], int size_p)
{
	std::cout << "\n";
	for (int i = 0; i < size_p; i++)
		std::cout << A_p[i] << ", ";

	std::cout << "\n";
}

void insertionSort(int array_p[], int arraySize_p)
{
	std::cout << "********** Insertion-Sort Begin **********\n";
	std::cout << "The current array values are:\n";
	// ** Array Indices ** //
	for (int index = 0; index < arraySize_p; index++)
	{
		std::cout << "[" << index << "]\t";
	}
	std::cout << std::endl;

	// ** Array Values ** //
	for (int index = 0; index < arraySize_p; index++)
	{	
		std::cout << " " << array_p[index] << "\t";
	}
	std::cout << "\n\n";
	
	int interationCounter = 1;
	// Line 1 : Start of iteration.
	for (int j = 2 - 1; j < arraySize_p; j++)
	{
		std::cout << "---------- Iteration: " << interationCounter << " ----------" << std::endl;
		
		// Line 2 : Setup key value.
		int arrayKey = array_p[j];
		std::cout << "Array key value = " << arrayKey << "\n";

		// Line 3 : Setup an array position for comparison with key value.
		int i = j - 1;

		std::cout << "[" << i << "]\t" << "  \t" << "[" << j << "]" << "\n";
		std::cout << " " << array_p[i] << "\t > \t" << arrayKey << "?\n";
		if (array_p[i] > arrayKey)
			std::cout << "Answer = Yes, proceed.\n";
		else
			std::cout << "Answer = No, next iteration.\n";

		int comparisonCounter = 1;
		// Line 4 : Start comparison wave; compare key value with previous value.
		while (i > 0 - 1 && array_p[i] > arrayKey)
		{
			std::cout << "\n---------- Comparison " << comparisonCounter << " ----------\n";
			std::cout << "The array values:\n";

			std::cout << "[" << i << "]\t" << "  \t" << "[" << i + 1 << "]" << "\n";
			std::cout << " " << array_p[i] << "\t and \t" << array_p[i + 1] << "\n";

			std::cout << "Will be exchanged, thus...\n";

			// Line 5 : Swap neighbouring values.
			array_p[i + 1] = array_p[i];
			std::cout << "\nThe swapped array value:\n";

			std::cout << "\t[" << i + 1 << "]" << "\n";
			std::cout << "\t " << array_p[i + 1];

			// Line 6 : Move comparitive variable back one position.
			i = i - 1;

			comparisonCounter++;
		}

		std::cout << "\n";

		// Line 7 : Place the key value into its rightful place.
		array_p[i + 1] = arrayKey;
		
		std::cout << "-----------------------------\n";

		std::cout << "\nUpdated array values:\n";
		// ** Array Indices ** //
		for (int index = 0; index < arraySize_p; index++)
		{
			std::cout << "[" << index << "]\t";
		}
		std::cout << std::endl;

		// ** Array Values ** //
		for (int index = 0; index < arraySize_p; index++)
		{
			std::cout << " " << array_p[index] << "\t";
		}
		std::cout << "\n\n";

		interationCounter++;
	}

	std::cout << "\nSorted array values:\n";
	for (int index = 0; index < arraySize_p; index++)
	{
		std::cout << array_p[index] << ", ";
	}
	std::cout << "\n********** Insertion-Sort End **********\n";
	std::cout << std::endl << std::endl;
}

void insertionSortVector(std::vector<int> &vectArray_p)
{
	std::cout << "********** Insertion-Sort Begin **********\n";
	std::cout << "The current array values are:\n";
	// ** Array Indices ** //
	for (int index = 0; index < vectArray_p.size(); index++)
	{
		std::cout << "[" << index << "]\t";
	}
	std::cout << std::endl;

	// ** Array Values ** //
	for (int index = 0; index < vectArray_p.size(); index++)
	{
		std::cout << " " << vectArray_p[index] << "\t";
	}
	std::cout << "\n\n";
	
	// Line 1: Iteration start
	for (int j = 1; j < vectArray_p.size(); j++)
	{
		// Line 2: Setup key value
		int keyValue = vectArray_p[j];

		// Line 3: Setup comparison position
		int i = j - 1;

		// Line 4: Start comparison wave
		while (i > - 1 && vectArray_p[i] > keyValue)
		{
			// Line 5: Swap neighbouring values
			vectArray_p[i + 1] = vectArray_p[i];

			// Line 6: Move comparitive position one step
			i--;
		}

		// Line 7: Place key value into correct position
		vectArray_p[i + 1] = keyValue;
	}

	std::cout << "\nSorted array values:\n";
	// ** Array Indices ** //
	for (int index = 0; index < vectArray_p.size(); index++)
	{
		std::cout << "[" << index << "]\t";
	}
	std::cout << std::endl;

	// ** Array Values ** //
	for (int index = 0; index < vectArray_p.size(); index++)
	{
		std::cout << " " << vectArray_p[index] << "\t";
	}
	std::cout << "\n\n";
	std::cout << "\n********** Insertion-Sort End **********\n";
	std::cout << std::endl << std::endl;
}

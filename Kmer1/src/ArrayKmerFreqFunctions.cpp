/*
 * Metodología de la Programación: Kmer1
 * Curso 2023/2024
 */

/** 
 * @file ArrayKmerFreqFunctions.cpp
 * @author Paloma Ruiz Molina, <palomaruiz2005@correo.ugr.es>
 * @author Francisco Bravo Díez, <franbravodiez@correo.ugr.es>
 * 
 * Created on 27 October 2023, 12:00
 */


#include "ArrayKmerFreqFunctions.h"
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Reads the number of used elements and the elements of an array of
 * KmerFreq
 * If @p nElements is greater than @p dim, then only @p dim elements are read
 * If @p nElements is negative, then zero elements are read
 * @param array An array where the elements will be stored. Output parameter
 * @param dim The capacity of the array. Input parameter
 * @param nElements The number of elements used by the array. Note that this
 * integer could be modified in this function. Output parameter
*/
void ReadArrayKmerFreq(KmerFreq array[], int dim, int &nElements){  /// Está función creo que está perfecta 
    
    if(nElements > dim){
        for(int i=0; i<dim; i++){
            cin >> array[i];
        }
        nElements=dim;
    }
    if(nElements<0){
        
    }
    if(nElements < dim){
        for(int i=0; i<nElements; i++){
            cin >> array[i];
        }
    }
}

/**
 * @brief Prints in the standard output the number of used elements and the 
 * elements of an array of KmerFreq 
 * @param array The array of KmerFreq to be printed. Input parameter
 * @param nElements The number of elements used by the array. Input parameter
*/
void PrintArrayKmerFreq(const int KmerFreq array[], int &nElements){
    
    cout << nElements << endl;
    for(int i=0; i< nElements; i++){
            cout << array[i];
    }
        
}

/**
 * @brief Swaps the elements at positions @p first and @p second in the given
 * array of KmerFreq
 * @param array An array of KmerFreq. Input/output parameter
 * @param nElements The number of elements used by the array. Input parameter
 * @param first the position of the first element to be swaped. Input parameter
 * @param second the position of the second element to be swaped. Input parameter
 * @throw Throws a std::out_of_range exception if first or second are positions 
 * out of the range of the given array
*/
void SwapElementsArrayKmerFreq(KmerFreq &array[], int nElements, int first,
                int second){
    if(first >= nElements || second >= nElements){
        throw out_of_range(string("SwapElementsArray") +
                "Los indices se salen del rango" + to_string(first)+ " "+ to_string(second)); 
  }
    Kmer aux;
    array[first]=aux;
    array[first]=array[second];
    array[second]=array[aux];
    
    
    /*int aux=0;
    int* ptr1=NULL;
    int* ptr2=NULL;
    int* paux=NULL;
    
    ptr1=&array[first];
    ptr2=&array[second];
    paux=&aux;
    
    aux=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*paux;
    */
}
/*
 * @brief Searchs the given Kmer in the subarray of @p array that begins at 
 * position @p initialPos and ends at position @p finalPos (both included)
 * @param array An array of KmerFreq objects. Input parameter
 * @param kmer The Kmer to be found. Input parameter
 * @param initialPos The initial position of the subarray. Input parameter
 * @param finalPos The final position of the subarray. Input parameter
 * @return the position where the given Kmer is in the subarray of @p array 
 * that begins at position @p initialPos and ends at position @p finalPos 
 * (both included). If the given Kmer is not found, then -1 is returned.
 */
int FindKmerInArrayKmerFreq(const KmerFreq &array[], const Kmer &kmer,
        int initialPos, int finalPos){
    for(int i=initialPos; i<finalPos; i++){  /// Aquí creo que debiera un igual i<= finalPos; 
        if (array[i]== kmer)
    }                                        /// Habría que poner un return -1. 
    
}


void NormalizeArrayKmerFreq(KmerFreq array[], int &nElements, 
        string validNucleotides) {
    for(int i = 0; i < nElements; i++){
        
        array[i].kmer.normalize(validNucleotides); 
    }
    
    // Loop to traverse and normalize each one of the kmers in array
          // Normalize kmer i
    
    
    // Loop to traverse the kmers in array from position 1 to position nElements-1
          // index = Position of array[i].getKmer() in the subarray that begins
          //         at position 0 and ends at position i-1
          // If array[i].getKmer() was found in the the subarray from 0 to i-1 
               // Accumulate the frequencies of the kmers at positions 
               //    index and i in the kmer at position index
               // Delete from the array, the kmer at position i 


    void ZipArrayKmerFreq(KmerFreq array[], int &nElemnts){
        int j = 0; 
        for(int i = 0; i < nElements; i++){
            if(array[i].kmer.toString().find(MISSING_NUCLEOTIDE) == string :: npos && array[i].frequency > 1){
                array[j++] = array[i]; 
            }
        }
        
        nElements = j; 
    }
    
    void CompareArrayFreq( const KmerFreq &a, const KmerFreq &b){
        if(a.frequency == b.frequency){
            return a.kmer.toString() < b.kmer.toString()
        }else{
        
        retunr a.frenquency > b.frequency,  
    }
    
    void SortArrayKmerFreq(KmerFreq array[],int &nElements){
        sort(array, array + nElements, CompareArrayFreq); 
        
    }
    
    
    
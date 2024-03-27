/*
 * Metodología de la Programación: Kmer1
 * Curso 2023/2024
 */

/**
 * @file main.cpp
 * @author Francisco Bravo Díez  <franbravodiez@correo.ugr.es>
 * @author Paloma RUiz Molina <palomaruiz2005@correo.ugr.es>
 */

#include <iostream>
#include <string>

#include "KmerFreq.h"
#include "ArrayKmerFreqFunctions.h"

using namespace std;

/**
 * This program reads from the stardard input, an integer n (number of 
 * elements in the list of pairs kmer-frequency) and a list of n pairs 
 * kmer-frequency. The pairs should be stored in an array (local variable 
 * in main() ), and then each one of the Kmers in the array must be 
 * normalized (all its characters are converted to uppercase
 * and invalid characters are replaced by the MISSING_NUCLEOTIDE character)
 * and zipped (those pairs with a missing nucleotide or with a 
 * frequency less or equals to zero must be deleted from the array). Next, 
 * the array should be sorted in decreasing 
 * order of frequency (if two pairs have the same frequency, the pair with a 
 * minor Kmer should appear first in the array). Finally, the program shows the 
 * array in the standard output. 
 * 
 * Running example:
 * > kmer1 < data/6pairsDNA_missing.k1in
2
CC 3
GC 2
 */


bool comparar_frecuencias(const KmerFreq &a, const KmerFreq &b){            /// Compara las frecuencias
    return a.kmer < b.kmer; 
}
int main(int argc, char* argv[]) {
    // This string contains the list of nucleotides that are considered as
    // valid within a genetic sequence. The rest of characters are considered as
    // unknown nucleotides 
    const string VALID_NUCLEOTIDES = "ACGT";
    
    // This is a constant with the dimension of the array kmers
    const int DIM_ARRAY_KMERS=100;
    
    // This is the array where the kmers read from the standard input 
    // will be stored
    KmerFreq kmers[DIM_ARRAY_KMERS];
    
    int nKmers; // Number of elements in the array kmers
    int frecuencia; 
    // Read an integer n (number of pairs to read)
    
    cout << " Escriba los Kmers:"; 
    cin >> nKmers;  
    
    // Read the n pairs kmers-frequency from the standard input and put them 
    //      in the array kmers
    
    cout << "Escriba" << nKmers << " los frecuencia de las parejas:"; 
    for(int i = 0; i < nKmers; i ++){
        cin >> kmers[i].kmer >> kmers[i].frecuencia; 
        /// Aquí habría que normalizar el kmer, pero no se si se puede llamar a la funcion del kmer.cpp
    }
    
    // Normalizes each kmer in the array kmers
    
    // Zip the kmers in the array kmers
    
    // Sort the array kmers
    
    // Print the array kmers in the standard output
    
    cout << "Kmers ordenados "; 
    for(int i = 0; i <nKmers; i++){
        cout << kmers[i].kmer << " " << kmers[i].frecuencia
    }

    return 0;
}


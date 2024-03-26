/*
 * Metodología de la Programación: Kmer1
 * Curso 2023/2024
 */

/** 
 * @file KmerFreq.cpp
 * @author Paloma Ruiz Molina, <palomaruiz2005@correo.ugr.es>
 * @author Francisco Bravo Díez, <franbravodiez@correo.ugr.es>
 * Created on 27 de octubre de 2023, 11:03
 */

#include "KmerFreq.h"
#include <iostream>
#include <string>

using namespace std;

/**
     * @brief Base constructor. 
     * It builds a KmerFreq object containing a Kmer with one nucleotide, the
     * unknown nucleotide (Kmer::MISSING_NUCLEOTIDE) and 0 as its frequency
     */
KmerFreq::KmerFreq (Kmer &kmer, int k=0){ //Necesita un objeto kmer;
    Kmer vacio(1);//La clase kmer crea un objeto kmer con un nucleotido vacio
    _kmer = vacio; 
    _frequency = k; 
}

/**
     * @brief Gets a const reference to the Kmer of this KmerFreq object
     * Query method
     * @return A const reference to the Kmer of this KmerFreq object
     */
Kmer KmerFreq::getKmer() const{
    return _kmer;
}

/**
     * @brief Gets the frequency of this KmerFreq object
     * Query method
     * @return The frequency of this KmerFreq object
     */
int KmerFreq::getFrequency()const{
    return _frequency;
}

/**
     * @brief Sets the Kmer of this KmerFreq object.
     * Modifier method
     * @param kmer The new Kmer value for this object. Input parameter
     */
void KmerFreq:: setKmer(Kmer &kmer){
    _kmer=Kmer;
    
}

 /**
     * @brief Sets the frequency of this KmerFreq object
     * Modifier method
     * @throw std::out_of_range if @p frequency is negative
     * @param frequency the new frequency value for this KmerFreq object. 
     * Input parameter
     */
void KmerFreq:: setFrequency(int &frequency){
    if(frequency <0){
        throw out_of_range(string ("setFrequency(int &frequency)") +
                    "La frecuencia es negativa" + to_string(frequency));
    }
    _frequency=frequency;
    
}

/**
     * @brief Obtains a string with the string and frequency of the kmer
     * in this object (separated by a whitespace).
     * Query method.
     * @return A string with the nucleotide and frequency of the kmer
     * in this object
     */
string KmerFreq::toString(){
    return string(to_string(_kmer)+ " "+ to_string(_frequency));
}
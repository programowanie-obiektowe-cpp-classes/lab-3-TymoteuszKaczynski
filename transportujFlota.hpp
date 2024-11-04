#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar){
    if (towar==0)
    return 0;

 Stocznia stocznia{}; 
  
     unsigned int ilosc_zaglowcow = 0;
    while (stocznia.getTotalCap() < towar) {
        Statek* statek1 = stocznia();
        statek1->transportuj();
        if (dynamic_cast<Zaglowiec*> (statek1))
            ilosc_zaglowcow++;
        delete statek1;
    }
    return ilosc_zaglowcow;   
}
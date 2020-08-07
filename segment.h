#ifndef segment_h
#define segment_h

#include "Arduino.h"

class segment
{
    public:
        segment(int aa, int bb, int cc, int dd, int ee, int ff, int gg, int ddpp);
        void setoff();
        void printNum(int Num);
        void printWord(char word);
    private:
        int a,b,c,d,e,f,g,dp;
};

#endif

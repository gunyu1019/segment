#include "Arduino.h"
#include "segment.h"

segment::segment(int aa, int bb, int cc, int dd, int ee, int ff, int gg, int ddpp)
{
    pinMode(aa,OUTPUT);
    pinMode(bb,OUTPUT);
    pinMode(cc,OUTPUT);
    pinMode(dd,OUTPUT);
    pinMode(ee,OUTPUT);
    pinMode(ff,OUTPUT);
    pinMode(ddpp,OUTPUT);
    pinMode(gg,OUTPUT);
    a=aa;
    b=bb;
    c=cc;
    d=dd;
    e=ee;
    f=ff;
    g=gg;
    dp=ddpp;
}

void segment::setoff()
{
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    digitalWrite(dp,LOW);
}

void segment::printNum(int Num)
{
    if(Num==2)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,LOW);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
        digitalWrite(dp,LOW);
    }
    else if(Num==1)
    {
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        digitalWrite(dp,LOW);
    }
    else if(Num==3)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,HIGH);
        digitalWrite(dp,LOW);
    }
    else if(Num==4)
    {
        digitalWrite(a,LOW);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        digitalWrite(dp,LOW);
    }
    else if(Num==5)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        digitalWrite(dp,LOW);
    }
    else if(Num==6)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,LOW);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        digitalWrite(dp,LOW);
    }
    else if(Num==7)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        digitalWrite(dp,LOW);
    }
    else if(Num==8)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        digitalWrite(dp,LOW);
    }
    else if(Num==9)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
        digitalWrite(dp,LOW);
    }
    else if(Num==0)
    {
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,LOW);
        digitalWrite(dp,LOW);
    }
}

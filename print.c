#include<stdio.h>
{
  h=hour1-5;
  if(h<0)
  {
   h=h-24; 
  }
}else
{
h=hour1-5;
}
serial.print("hour:");
Serial.println(h);
if(minute1>0&& minute1<30)
{
  m=minute1-30;
  if(m<0)
  {
    m=m+60;
  }
}else
{
  m=minute1-30;
int hour1=6;
int minute1=5;
if(hour1>=0&&hour1<5)
{
  h=hour1-5;
  if(h<0)
  {
   h=h-24; 
  }
}else
{
   h=hour1-5;
}

Serial.print("hour:");
Serial.println(h);
if(minute1>0&& minute1<30)
{
m=minute1-30;
  if(m<0)
  {
m=m+60;
  }
}else
{
  m=minute1-30;
  }

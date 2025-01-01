#include<stdio.h>
#include<conio.h>
int main()
{
  int celcius, fahrenheit;
  printf("Enter the temperature in celcius:");
  scanf("%d",&celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in fahrenheit is %d",fahrenheit);
    return 0;
}
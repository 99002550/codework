
#include<base.h>
//#include<math.h>






   int convertbinarytodecimal(long long num) {
	//long long n;
    //printf("Enter a binary number: ");
    scanf("%lld", &num);
    //printf("%lld in binary = %d in decimal", n, convertbinarytodecimal(n));
    int dec = 0, i = 0, rem;
    while (num != 0) {
        rem = num % 10;
        num /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
       
   }




long long convertdecimaltobinary(int num) {
	//int n;
   // printf("Enter a decimal number: ");
    scanf("%d", &num);
   // printf("%d in decimal = %lld in binary", n, convertdecimaltobinary(n));
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (num!= 0) {
        rem = num % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, num, rem, num / 2);
        num /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}



long long convertOctalToDecimal(int octalNumber){
//int octalNumber;

    //printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

   // printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}



int convertDecimalToOctal(int decimalNumber)
{
//	int decimalNumber;

    //printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

   // printf("%d in decimal = %d in octal", decimalNumber, convertDecimalToOctal(decimalNumber));
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

int decimal_to_hexadecimal(int x)
{
      int hexadecimal_number, remainder, count = 0;
	  int decimal_number, result;
      //printf("Enter a Decimal Number:\t");
      scanf("%d", &decimal_number); 
      
      for(count = 0; x > 0; count++)
      {
            remainder = x % 16;
            hexadecimal_number = hexadecimal_number + remainder * pow(10, count);
            x = x / 16;
      }
      return hexadecimal_number;
}
 



int convertbitooctal(long long bin) {
//	long long bin;
   // printf("Enter a binary number: ");
    scanf("%lld", &bin);
    //printf("%lld in binary = %d in octal", bin, convertbitooctal(bin));
    int oct = 0, dec = 0, i = 0;

    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

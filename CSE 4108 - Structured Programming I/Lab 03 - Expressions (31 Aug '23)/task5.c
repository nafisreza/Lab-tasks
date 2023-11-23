/*
European countries use a 13-digit code, known as a European Article Number (EAN) instead of the 12-digit Universal Product Code (UPC) found in North America. Each EAN ends with a check digit, just as a UPC does. The technique for calculating the check digit is also similar:
(a) Add the 2nd,4th,6th,8th,10th,and 12th digits.
(b) Add the 1st,3rd,5th,7th,9th,and 11th digits.
(c) Multiply the first sum by 3 and add it to the second sum.
(d) Subtract 1 from the total.
(e) Compute the remainder when the adjusted total is divided by 10.
(f) Subtract the remainder from 9.

For example, consider Güllüoglu Turkish Delight Pistachio &amp; Coconut, which has an EAN of 8691484260008.
The first sum is 6+1+8+2+0+0 = 17, and the second sum is 8+9+4+4+6+0 = 31. Multiplying the first sum by 3 and adding the second yields 82. Subtracting 1 gives 81. The remainder on dividing by 10 is 1. When the remainder is subtracted from 9, the result is 8, which matches the last digit of the original code. Your job is to modify the upc.c program so that it calculates the check digit for an EAN. The user will enter the first 12 digits of the EAN as a single number.

Sample run:
Enter the first 12 digits of an EAN:869148426000
Check digit: 8
*/
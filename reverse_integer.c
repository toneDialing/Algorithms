/* LeetCode #7: Reverse Integer */
/* Given a signed 32-bit integer x, return x with its digits reversed. If
    reversing x causes the value to go outside the signed 32-bit integer
    range [-2^31, 2^31 - 1], then return 0. */

#include <limits.h>

int reverse(int x){
    int pop;
    int reverse = 0;
    int sign = 0;

    /* Check for sign and make x positive, thus avoiding any machine-dependent
        complications arising from taking the mod of a negative number */
    if(x<0)
    {
        if(x==INT_MIN) return 0; /* since absolute value of INT_MIN exceeds that of INT_MAX */
        x *= -1;
        sign = 1;
    }

    /* Reverse x */
    while(x)
    {
        pop = x%10;
        x /= 10;

        /* Ensure reverse doesn't over/underflow.
            (Note if reverse==INT_MAX/10 then we're safe, since x must have been
            within the min/max bounds of the data type in the first place.) */
        if(reverse > INT_MAX/10) return 0;

        reverse = reverse*10 + pop;
    }

    /* Revert integer to its original sign, if necessary */
    if(sign) reverse *= -1;

    return reverse;
}
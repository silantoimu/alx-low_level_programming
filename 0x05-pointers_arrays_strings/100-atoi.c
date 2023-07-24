/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The integer converted from the string. If no valid integer is found,
 *         the function returns 0.
 */

#include <limits.h>

int _atoi(char *s)
{
    int sign = 1; /* Variable to store the sign of the integer, initialized pos*/
    int num = 0; /* Variable to store the converted integer.*/

    /* Skip leading non-digit characters and handle optional sign characters. */
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;

    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
        s++;

    /* Convert the remaining digits into an integer. */
    while (*s >= '0' && *s <= '9')
    {
        /* Check for integer overflow before adding the next digit. */
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
        {
            /*
             * Handle integer overflow by returning INT_MAX for pos no.
             * and INT_MIN for neg no.
             */
            return ((sign == 1) ? INT_MAX : INT_MIN);
        }

        num = num * 10 + (*s - '0');
        s++;
    }

    return (num * sign);
}


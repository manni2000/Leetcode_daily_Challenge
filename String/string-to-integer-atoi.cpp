class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0;
        while (i < s.length() && s[i] == ' ')
            i++;

        int sign = 1;
        if (i < s.length() && (s[i] == '-' || s[i] == '+'))
        {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        if (i == s.length())
            return 0;

        int limit = INT_MAX / 10;

        int num = 0;
        while (i < s.length() && s[i] >= '0' && s[i] <= '9')
        {
            if (num > limit || (num == limit && (s[i] - '0') >= 7))
                return INT_MAX;
            if (num < -limit || (num == -limit && (s[i] - '0') >= 8))
                return INT_MIN;
            num = num * 10 + sign * (s[i] - '0');
            i++;
        }

        return num;
    }
};

// A class called Solution is declared.
// The class has a public method called myAtoi which takes in a string as a parameter.
// A variable called i is initialized to 0.
// A while loop is started which will continue as long as i is less than the length of the string and the character at index i is a space.
// Inside the while loop, i is incremented by 1.
// A variable called sign is initialized to 1.
// An if statement checks if i is less than the length of the string and the character at index i is either a plus or a minus sign.
// If the if statement is true, sign is set to -1 if the character is a minus sign and 1 if it is a plus sign. i is also incremented by 1.
// Another if statement checks if i is equal to the length of the string. If it is, the method returns 0.
// A variable called limit is initialized to the maximum value of an int divided by 10.
// A variable called num is initialized to 0.
// A while loop starts which continues as long as i is less than the length of the string and the character at index i is a number between 0 and 9.
// Inside the while loop, an if statement checks if num is greater than limit, or if num is equal to limit and the character at index i is greater than or equal to 7. If either of these conditions are true, the method returns the maximum value of an int.
// Another if statement checks if num is less than the negative of limit, or if num is equal to the negative of limit and the character at index i is greater than or equal to 8. If either of these conditions are true, the method returns the minimum value of an int.
// num is updated to be equal to itself multiplied by 10 and the value of sign multiplied by the value of the character at index i converted to an int and subtracted by the value of the character '0' converted to an int.
// i is incremented by 1.
// After the while loop, the method returns the value of num.




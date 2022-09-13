Approach:
​
We will initially take a count variable initialized to 0;
Then we will iterate over the given array and will store the value from data array in ele = data[i]
If count is still 0 then below are the things that we need to take care of:
If x/32 = 110, then set count as 1. (x/32 is same as doing x >> 5 as 2^5 = 32)
Else if x/16 = 1110, then count = 2 (x/16 is same as doing x >> 4 as 2^4 = 16)
Else If x/8 = 11110, then count = 3. (x/8 is same as doing x >> 3 as 2^3 = 8)
Else if x/128 is 0, then return false. (x/128 is same as doing x >> 7 as 2^7 = 128)
Else if x/64 is not 10, then decrease the count and return false.
Finally if count is 0 return true;
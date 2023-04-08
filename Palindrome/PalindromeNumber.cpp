//Question Link:https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int rem;
        long rev=0;
        if(n<0)
        {
            return false;
        }
        else
        {
        while(n!=0)
        {
            rem=n%10;

            rev=rev*10+rem;
            n=n/10;
        }
        if(x==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
        }
    }
};
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        elif x%10==0 and x!=0:
            return False
        rev=int((str(x))[::-1])
        if rev==x:
            return True
        elif rev!=x:
            return False
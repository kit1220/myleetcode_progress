class Solution:
    def romanToInt(self, s: str) -> int:
        D = {"I" : 1 , "V" : 5 ,"X" : 10 ,"L" : 50 ,"C" : 100 ,"D" : 500 ,"M" : 1000}
        sum = D[s[0]]
        for i in range(1,len(s)) :
            if D[s[i]] > D[s[i-1]] :
                sum = sum - D[s[i-1]] - D[s[i-1]] 
            sum += D[s[i]]
        return sum
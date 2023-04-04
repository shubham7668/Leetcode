class Solution:
    def partitionString(self, s: str) -> int:
        seen = set()
        nehal = 0
        
        for i in s:
            if i in seen:
                nehal += 1
                seen = set()
                seen.add(i)
            else:
                seen.add(i)
        
        return nehal + 1
        
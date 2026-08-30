class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        new=[]
        a=len(nums)
        for i in nums:
            if i not in new:
                new.append(i)
        nums[:]=new
        print(a)
class Solution(object):
    count=0
    def countBadPairs(self, nums):
        for i,ele in enumerate(nums):
            for j in range(i+1,len(nums)):
                if j-i != nums[j]-ele:
                    continue
                else:
                    self.count+=1
        """
        :type nums: List[int]
        :rtype: int
        """
        

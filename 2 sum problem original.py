import numpy as np

class Solution:
	def twoSum(self,nums, target):
		ans = np.empty((2),dtype='int32')
		dic1 = {}
		for i in range(len(nums)):
			if (target - nums[i]) in dic1:
				ans[0] = dic1[target - nums[i]]
				ans[1] = i
				return ans
			dic1[nums[i]] = i
		return ans

if __name__ == '__main__':
	nums = np.array([2,6,5,8,11])
	target = 14
	obj = Solution()
	ans = obj.twoSum(nums,target)
	print(ans)
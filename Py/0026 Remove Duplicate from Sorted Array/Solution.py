def binary_search(nums, low, high, val):
	n = len(nums)
	res = -1
	while low <= high:
		mid = low + (high - low) // 2
		if nums[mid] <= val:
			low = mid + 1
		else:
			res = mid
			high = mid - 1
	if res == -1:
		return n
	return res

def remove_duplicates(nums):
	n = len(nums)
	idx = 0 

	while idx != n:
		i = binary_search(nums, idx + 1, n - 1, nums[idx]) 

		if i == n: 
			return idx + 1
		idx += 1
		nums[idx] = nums[i]
	
	return idx + 1

# Driver code
if __name__ == "__main__":
	arr = [1, 2, 2, 3, 4, 4, 4, 5, 5]
	n = remove_duplicates(arr)
	for i in range(n):
		print(arr[i], end=" ")
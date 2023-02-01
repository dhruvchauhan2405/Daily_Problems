# Day 1 - 2nd February

| Question        | Difficulty           | Status  |
| ------------- |:-------------:| -----:|
| [27. Remove Element](https://leetcode.com/problems/remove-element/ "27. Remove Element")     | Easy | Yes/No |
| [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/ "27. Remove Element")    | Easy     |   Yes/No |


## [27. Remove Element](https://leetcode.com/problems/remove-element/ "27. Remove Element")

Given an integer array nums and an integer val, remove all occurrences of ```val``` in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the **first part** of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do **not** allocate extra space for another array. You must do this by **modifying the input array in-place** with O(1) extra memory.

###### Custom Judge:

The judge will test your solution with the following code:

```
int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
```

###### Example 1:
```
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

###### Example 2:
```
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

###### Constrains:

* 0 <= nums.length <= 100
* 0 <= nums[i] <= 50
* 0 <= val <= 100


If all assertions pass, then your solution will be **accepted**.


## [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/ "27. Remove Element")

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

###### Example 1:
```
Input: nums = [1,3,5,6], target = 5
Output: 2
```

###### Example 2:
```
Input: nums = [1,3,5,6], target = 2
Output: 1
```

###### Example 3:
```
Input: nums = [1,3,5,6], target = 7
Output: 4
```

###### Constrains:

* 1 <= nums.length <= 104
* -104 <= nums[i] <= 104
* nums contains distinct values sorted in ascending order.
* -104 <= target <= 104


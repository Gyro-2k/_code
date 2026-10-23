class Solution:
    # to remove those distincts
    def remove_duplicates(self, og, dupes):
        for loop in dupes:
            if loop in og:
                og.remove(loop)
        return og

    # to calculate all distincts
    def all_distinct(self,take):
        my_set = set()
        for loop in take:
            if loop in my_set:
                continue
            else:
                my_set.add(loop)
        return my_set

    def rearrangeArray(self, nums: list[int]) -> list[int]:
        answer = []
        while nums:
            duplicates = self.all_distinct(nums)
            sorted_to_add = sorted(duplicates)
            answer.extend(sorted_to_add)
            nums = self.remove_duplicates(nums, duplicates)
        return answer

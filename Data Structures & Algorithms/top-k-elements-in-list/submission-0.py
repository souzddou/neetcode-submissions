class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = defaultdict(list)
        for num in nums:
            d[num] = 1 + d.get(num, 0)
        array = []
        for num, key in d.items():
            array.append([key, num])
        array.sort()

        res = []
        while len(res) < k:
            res.append(array.pop()[1])
        return res

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = defaultdict(list)
        for str in strs:
            sorteds = "".join(sorted(str))
            d[sorteds].append(str)
        return list(d.values())

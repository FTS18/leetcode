# Last updated: 28/01/2026, 00:29:40
class Solution:
    def generateTag(self, caption: str) -> str:
        c = caption.split()
        if len(c) == 0:
            return "#"
        l = ""
        for i in range(len(c)):
            if i == 0:
                l = "#" + c[0].lower()
            else:
                l += c[i].capitalize()
        return l[:100]

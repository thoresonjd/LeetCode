class RandomizedSet:

    def __init__(self):
       self.ranSet = []

    def insert(self, val: int) -> bool:
        if val not in self.ranSet:
            self.ranSet.append(val)
            return True
        return False

    def remove(self, val: int) -> bool:
        if val in self.ranSet:
            self.ranSet.remove(val)
            return True
        return False

    def getRandom(self) -> int:
        return self.ranSet[random.randint(0, len(self.ranSet)-1)]


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom() 

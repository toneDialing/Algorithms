# LeetCode #1206: Design Skiplist
# Design a Skiplist without using any built-in libraries

# Implement the Skiplist class:
# Skiplist() Initializes the object of the skiplist.
# bool search(int target) Returns true if the integer target exists in the Skiplist or false otherwise.
# void add(int num) Inserts the value num into the SkipList.
# bool erase(int num) Removes the value num from the Skiplist and returns true. If num does not exist in the Skiplist, do nothing and return false. If there exist multiple num values, removing any one of them is fine.
# Note that duplicates may exist in the Skiplist, your code needs to handle this situation.

class Skiplist:

    def __init__(self):
        probability = 0.5
        height = 0

        

    def search(self, target: int) -> bool:
        dummy = 0
        

    def add(self, num: int) -> None:
        dummy = 0
        

    def erase(self, num: int) -> bool:
        dummy = 0
        


# Your Skiplist object will be instantiated and called as such:
# obj = Skiplist()
# param_1 = obj.search(target)
# obj.add(num)
# param_3 = obj.erase(num)
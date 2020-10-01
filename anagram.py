#print("anagram" if sorted(input())==sorted(input()) else "No") 
x = "abc"
y = "abcd"
for i in set(x) & set(y):
     print(i, min((x.count(i), y.count(i))))

# Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

# c = 0
# s = input()
# t = input()
# print(len(s)+len(t)-2*(sum(min(s.count(i), t.count(i)) for i in set(s) & set(t))))

# c1 = Counter(s1)
# c2 = Counter(s2)
# t = 0
# all_keys = set(c1) | set(c2)
# for key in all_keys:
#     diff = c1[key] - c2[key]
#     t += abs(diff)

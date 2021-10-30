def removeVowels(s):
    vow=['a', 'e', 'i', 'o', 'u']
    ans=[]
    for i in range(len(s)):
        if not (s[i].lower()=='a' or s[i].lower()=='e' or s[i].lower()=='i' or s[i].lower()=='o' or s[i].lower()=='u'):
            ans.append(s[i])
    
    return ''.join(ans)
    
print(removeVowels('my name is sAket KUMAR'))

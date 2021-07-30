# Ayush Garg - 18ESKCS034
# Write a function to count vowels
def countVowel(st):
    ans={}
    v=['A','E','I','O','U','a','e','i','o','u']
    for i in st:
        if i in v:
            temp=i.upper()
            if temp in ans:
                ans[temp]+=1
            else:
                ans[temp]=1
    for k,v in ans.items():
        print(k,"->",v)

if __name__ == '__main__':
    s1='AyushGarg'
    countVowel(s1)
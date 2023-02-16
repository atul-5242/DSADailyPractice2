def trailing_zero_offact(num):
    fact=1
    for x in range(2,num+1):
        fact=fact*x
        z=trailing_zero(fact)
    return z;


def trailing_zero(num):
    r=0
    cnt=0;
    while(num%10==0):
        r=r%10;
        num=num/10;
        if (r==0):
            cnt+=1
        
        else:
            return -1;
        
    
    return cnt

print(trailing_zero(100020))
print("This:");
print(trailing_zero_offact(20));


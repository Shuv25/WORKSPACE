a=[1,2,3,3,5]  
b=[4,9,3,15,2]  
l=[]  
i=0  
y=0

if(len(a)==len(b)):  
    while(i<len(a)):  
        m = a[i]+b[i]+y  
        y=0  
        if(m<10):  
            l.append(m)  
        else:  
            n=m%10  
            y=(m-n)//10  
            l.append(n)    
        i+=1  
    print(l)
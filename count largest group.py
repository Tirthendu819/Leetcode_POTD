class Solution:
    def finddigitsum(self,num):
        sum=0
        while(num):
            sum+=num%10
            num//=10
        return sum

    def countLargestGroup(self, n: int) -> int:
        mpp={}
        maxsize=0
        count=0
        for num in range(1,n+1):
            digitsum=self.finddigitsum(num)
            if digitsum in mpp:
                mpp[digitsum] += 1
            else:
                mpp[digitsum] = 1
            if(mpp[digitsum]==maxsize):
                count+=1
            elif(mpp[digitsum]>maxsize):
                maxsize=mpp[digitsum]
                count=1    
        return count
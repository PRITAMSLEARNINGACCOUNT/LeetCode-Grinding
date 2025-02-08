class NumberContainers(object):
    MainArray=[]
    TempArray=[]
    def __init__(self):
        self.MainArray.append([])    
        return None
    def FindMin(self):
        # print(self.TempArray)
        Temp=self.TempArray[0]
        for i in self.TempArray[1:]:
            if i<Temp:
                Temp=i
        self.TempArray=[]
        return Temp

    def change(self, index, number):
        for i in self.MainArray:
            if len(i)>1 and i[0]==index:
                i[1]=number
                return None
        self.MainArray.append([index,number])
        return None
        
    def find(self, number):
        flag = 0
        for i in self.MainArray:
            if len(i)>1 and i[1]==number:
                flag=1
                self.TempArray.append(i[0])
        if flag==0:
            return -1
        elif len(self.TempArray)==1:
            TempArray_2=self.TempArray[0]
            self.TempArray=[]
            return TempArray_2 
        else:
            return self.FindMin()

nc = NumberContainers()
print(nc.find(10))

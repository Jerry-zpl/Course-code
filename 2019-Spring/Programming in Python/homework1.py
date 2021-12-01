import os
import numpy as np

#定义学生类
class Student:
    
    def __init__(self,id,name,score1,score2,score3,score4,score5,score6,score7,score8,score9,score10,aver):
        self.id=id
        self.name=name
        self.score1=score1
        self.score2=score2
        self.score3=score3
        self.score4=score4
        self.score5=score5
        self.score6=score6
        self.score7=score7
        self.score8=score8
        self.score9=score9
        self.score10=score10
        self.aver=aver

    
    def __str__(self):
       
        msg="学生信息：id="+self.id+",name="+self.name+",score1="+str(self.score1)+",score2="+str(self.score2)+",score3="+str(self.score3)+",score4="+str(self.score4)+",score5="+str(self.score5)+",score6="+str(self.score6)+",score7="+str(self.score7)+",score8="+str(self.score8)+",score9="+str(self.score9)+",score10="+str(self.score10)+",average="+str(self.aver)
        return msg

    
    def getId(self):
        return self.id
    def getName(self):
        return self.name
    def getScore1(self):
        return self.score1
    def getScore2(self):
        return self.score2
    def getScore3(self):
        return self.score3
    def getScore4(self):
        return self.score4
    def getScore5(self):
        return self.score5
    def getScore6(self):
        return self.score6
    def getScore7(self):
        return self.score7
    def getScore8(self):
        return self.score8
    def getScore9(self):
        return self.score9
    def getScore10(self):
        return self.score10
    def getAver(self):
        return self.aver

#添加学生的信息
def addStu(array):
    id=input("请输入学生学号：")
    for i in range(len(array)):
        stu2=array[i]
        if id==stu2.getId():
            print("该学号已存在，不能重复添加")
            return
    name=input("请输入学生姓名：")
    score1=float(input("请输入学生第一个科目的成绩："))
    score2=float(input("请输入学生第二个科目的成绩："))
    score3=float(input("请输入学生第三个科目的成绩："))
    score4=float(input("请输入学生第四个科目的成绩："))
    score5=float(input("请输入学生第五个科目的成绩："))
    score6=float(input("请输入学生第六个科目的成绩："))
    score7=float(input("请输入学生第七个科目的成绩："))
    score8=float(input("请输入学生第八个科目的成绩："))
    score9=float(input("请输入学生第九个科目的成绩："))
    score10=float(input("请输入学生第十个科目的成绩："))
    aver=float((score1+score2+score3+score4+score5+score6+score7+score8+score9+score10)/10)
    stu=Student(id,name,score1,score2,score3,score4,score5,score6,score7,score8,score9,score10,aver)
    array.append(stu)  
    print("添加成功:",stu)

#按照学生的学号查询学生信息
def selectStuID(array):
    id=input("请输入要查询的学生学号：")
    for i in range(len(array)):
        stu2=array[i]
        if id==stu2.getId():
            print("查询到的学生信息：",stu2)
            return
    print("查询失败，查不到该学生信息")
    return

#按照学生的姓名查询学生信息
def selectStuName(array):
    name=input("请输入要查询的学生姓名：")
    for i in range(len(array)):
        stu2=array[i]
        if name==stu2.getName():
            print("查询到的学生信息：",stu2)
            return
    print("查询失败，查不到该学生信息")
    return

#查询每一个科目的成绩及平均成绩
def selectClass(array):
    Class=input("请输入要查询的科目名称（可选：class1、class2、class3、class4、class5、class6、class7、class8、class9、class10）：")
    SCORE1=0
    Sum=0
    if Class == 'class1':    
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore1())
            SCORE1+=float(stu2.getScore1())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class2':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore2())
            SCORE1+=float(stu2.getScore2())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class3':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore3())            
            SCORE1+=float(stu2.getScore3())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class4':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore4())            
            SCORE1+=float(stu2.getScore4())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class5':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore5())            
            SCORE1+=float(stu2.getScore5())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class6':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore6())            
            SCORE1+=float(stu2.getScore6())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class7':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore7())            
            SCORE1+=float(stu2.getScore7())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class8':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore8())            
            SCORE1+=float(stu2.getScore8())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class9':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore9())            
            SCORE1+=float(stu2.getScore9())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    elif Class == 'class10':
        for i in range(len(array)):
            stu2=array[i]
            print(stu2.getName(),stu2.getId(),stu2.getScore10())            
            SCORE1+=float(stu2.getScore10())
            i=i+1
            Sum=Sum+1
            
        aver1=(SCORE1)/(Sum)
        print("该课程的平均成绩为：",aver1)
        return
    print("查询失败，查不到该课程信息")
    return

#显示全部学生信息
def printStuInfo(array):  
    for i in range(len(array)):
        stu=array[i]
        print(stu)

#学生成绩管理系统主函数
print("--"*30)
print("欢迎使用学生管理系统")
print("1.添加学生信息")
print("2.显示所有人成绩")
print("3.按学号查询学生信息")
print("4.按姓名查询学生信息")
print("5.查询单科成绩信息")
print("6.退出系统")
print("--"*30)

flag=0
array=[]
filename='students.txt' 
if not os.path.exists(filename): 
    file=open(filename, 'w')
    file.close()
f=open(filename, "r")
content=f.readlines()
print("文件内容：",content)
array.extend(content)
array_temp = [] # 临时变量
for i in range(len(array)): # 遍历转成学生对象
    print(str(i+1), array[i])
    if isinstance(array[i], str):  # 判断是否为字符串
        strArray=str(array[i]).split(" ")
        id=strArray[0]
        name=strArray[1]
        score1=strArray[2]
        score2=strArray[3]
        score3=strArray[4]
        score4=strArray[5]
        score5=strArray[6]
        score6=strArray[7]
        score7=strArray[8]
        score8=strArray[9]
        score9=strArray[10]
        score10=strArray[11]
        aver=strArray[12].replace("\n","")
        student=Student(id,name,score1,score2,score3,score4,score5,score6,score7,score8,score9,score10,aver)#创建学生对象
        array_temp.append(student)
del array
array = array_temp
while flag != 1:
    step = input("请输入你的操作：")
    step = float(step)
    if step==1:
        addStu(array)
    elif step==2:
        printStuInfo(array)
    elif step==3:
        selectStuID(array)
    elif step==4:
        selectStuName(array)
    elif step==5:
        selectClass(array)
    elif step==6:
        flag = 1
        with open(filename,'w') as f:  # 如果filename不存在会自动创建， 'w'表示写数据，写之前会清空文件中的原有数据！
            for i in range(len(array)):
                if i==len(array)-1 :
                    stu=array[i]
                    f.write(stu.getId() + " "+stu.getName()+" "+str(stu.getScore1())+" "+str(stu.getScore2())+" "+str(stu.getScore3())+" "+str(stu.getScore4())+" "+str(stu.getScore5())+" "+str(stu.getScore6())+" "+str(stu.getScore7())+" "+str(stu.getScore8())+" "+str(stu.getScore9())+" "+str(stu.getScore10())+" "+str(stu.getAver()))
                else:
                    stu=array[i]
                    f.write(stu.getId() + " "+stu.getName()+" "+str(stu.getScore1())+" "+str(stu.getScore2())+" "+str(stu.getScore3())+" "+" "+str(stu.getScore4())+" "+str(stu.getScore5())+" "+str(stu.getScore6())+" "+str(stu.getScore7())+" "+str(stu.getScore8())+" "+str(stu.getScore9())+" "+str(stu.getScore10())+" "+str(stu.getAver())+"\n")
            f.close()
    else:
        print("输入指令错误，请重新输入！！")
print("退出系统成功")


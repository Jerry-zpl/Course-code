ORG 0000H

; 将7段数码管的段码存储在相应的地址空间中
MOV 11H, #90H
MOV 12H, #80H
MOV 13H, #0F8H
MOV 14H, #82H
MOV 15H, #92H
MOV 16H, #99H
MOV 17H, #0B0H
MOV 18H, #0A4H
MOV 19H, #0F9H
MOV 1AH, #0C0H
MOV 1BH, #90H

; 主程序1：东西红灯亮38s、南北绿灯亮38s，同时在东、南、西、北四个方向的2位7段数码管上面倒计时显示37s(37s至0s)
MAIN1: 

; 设置交通灯状态
SETB P1.0
SETB P1.3
CLR P1.1
CLR P1.2
CLR P1.4
CLR P1.5

; 设置倒计时
MOV R0, #13H
MOV R1, #17H               ; 赋予初值37
MOV P0, @R0                ; 将字节地址13H的数据赋给P0，也就是将F8H赋给P0，使得个位数数码管显示7
LOOP1:
MOV P2, @R1                ; 将字节地址17H的数据赋给P2，也就是将B0H赋给P2，使得十位数数码管显示3
LOOP2:
INC R0                     ; R0加1
LCALL DEL0                 ; 0.5s延时程序
LCALL DEL0
MOV P0, @R0                ; 将R0中数据对应的字节地址中的数据赋给P0，达到更改个位数字的目的
CJNE R0, #1AH, LOOP3       ; 判断十位数字是否需要改变，也就是个位数字是否到0
INC R1                     ; R1加1
LOOP3:CJNE R0, #1BH, LOOP2 ; 判断个位数字是否到9，如果到9需要重新开始循环
MOV R0,#11H  
CJNE R1, #1BH, LOOP1       ; 判断十位数字是否到0，如果到0则需要进行下一个主程序MAIN2

; 主程序2：东西红灯亮5s、南北绿灯闪5s（500ms亮灭），同时在东、南、西、北四个方向的2位7段数码管上面倒计时显示4s(4s至0s)
MAIN2:
MOV R0,#16H                ; 将个位数字4，和十位数字0分别赋给R0及R1，方便其进行简介寻址
MOV R1,#1AH
LOOP4:
MOV P2, @R1                ; 将R1及R0中的数据对应的字节地址中的数据赋给P2、P0，使数码管显示对应的数字
MOV P0, @R0
LCALL DEL0                 ; 0.5s延时程序
CLR P1.3                   ; 改变交通灯状态
LCALL DEL0                 ; 0.5s延时程序
SETB P1.3                  ; 改变交通灯状态
INC R0                     ; R0加1
CJNE R0, #1BH, LOOP4       ; 判断个位数字是否到0，如果到0，则开始下一个主程序

; 主程序3：东西红灯亮4s、南北黄灯闪4s（500ms亮灭），同时在东、南、西、北四个方向的2位7段数码管上面倒计时显示4s(3s至0s)
; 算法结构及流程与主程序2相似，只需要更改红绿灯的状态即可
MAIN3:
MOV R0,#17H
MOV R1,#1AH
CLR P1.3
SETB P1.4
LOOP5:
MOV P2, @R1
MOV P0, @R0
LCALL DEL0
CLR P1.4
LCALL DEL0
SETB P1.4
INC R0
CJNE R0, #1BH, LOOP5

; 主程序4：南北红灯亮38s、东西绿灯亮38s，同时在东、南、西、北四个方向的2位7段数码管上面倒计时显示37s(37s至0s)
; 算法结构及流程与主程序1相似，只需要更改红绿灯的状态即可
MAIN4:

SETB P1.5
SETB P1.2
CLR P1.0
CLR P1.1
CLR P1.3
CLR P1.4

MOV R0, #13H
MOV R1, #17H
MOV P0, @R0
LOOP6:
MOV P2, @R1
LOOP7:
INC R0
LCALL DEL0
LCALL DEL0
MOV P0, @R0
CJNE R0, #1AH, LOOP8
INC R1
LOOP8:CJNE R0, #1BH, LOOP7
MOV R0,#11H  
CJNE R1, #1BH, LOOP6

; 主程序5：南北红灯亮4s、东西绿灯闪4s（500ms亮灭），同时在东、南、西、北四个方向的2位7段数码管上面倒计时显示3s(3s至0s)
; 算法结构及流程与主程序2相似，只需要更改红绿灯的状态即可
MAIN5:
MOV R0,#17H
MOV R1,#1AH
LOOP9:
MOV P2, @R1
MOV P0, @R0
LCALL DEL0
CLR P1.2
LCALL DEL0
SETB P1.2
INC R0
CJNE R0, #1BH, LOOP9

; 主程序6：南北红灯亮3s、东西黄灯闪3s（500ms亮灭），同时在东、南、西、北四个方向的2位7段数码管上面倒计时显示2s(2s至0s)
; 算法结构及流程与主程序2相似，只需要更改红绿灯的状态即可
MAIN6:
MOV R0,#18H
MOV R1,#1AH
CLR P1.2
SETB P1.1
LOOP10:
MOV P2, @R1
MOV P0, @R0
LCALL DEL0
CLR P1.1
LCALL DEL0
SETB P1.1
INC R0
CJNE R0, #1BH, LOOP10

LJMP MAIN1

DEL0: MOV R7,#15
DEL1: MOV R6, #202
DEL2: MOV R5, #81
DEL3: DJNZ R5, DEL3
DJNZ R6, DEL2
DJNZ R7, DEL1
RET

END
ORG 0100H

MOV 40H, #12H

MOV R2, #34H

MOV A, #56H

MOV R0, 40H

MOV 50H, R2

MOV @R0, A

MOV 34H, #0FEH

MOV R1, #34H

MOV R7, #78H

MOV R3, #3CH

MOV A, R1

MOV A, @R1

MOV A, 40H

MOV A, #50H

MOV PSW, #08H

MOV R0, A

MOV R5, A

MOV R4, A

MOV R1, 40H

MOV R2, 50H

MOV R3, 34H

MOV R6, #5DH

MOV R7, #79H

MOV 30H, A

MOV 80H, A

MOV 36H, R6

MOV 37H, R7

MOV 70H, 50H

MOV 71H, 40H

MOV 73H, @R0

MOV 74H, @R1

MOV 75H, #057H

MOV @R0, A

MOV @R1, A

MOV @R0, 70H

MOV @R1, #77H

MOV DPTR, #1234H

MOV 60H, #65H

MOV R0, #60H

MOV A, #24H

XCH A, @R0

XCH A, R0

MOV 65H, #17H

SWAP A

XCH A, 65H

END

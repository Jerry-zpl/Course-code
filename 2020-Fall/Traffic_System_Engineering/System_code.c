#include<stdio.h>
int main()
{
    printf("欢迎来到河南省新郑市任意两交叉口的最短路及最短路线查询系统：\n");
    int i,j,k,m,n;
//定义距离矩阵基本结构：
    float a[260][260];
    //赋予初值
    //假设每一个i和j都不相连
    for (i=0; i<=259; i++)
    {

        for (j=0; j<=259; j++)
        {

            a[i][j]=99999;
        }
    }
    //当i=j时，赋0
    for (i=0; i<=259; i++)
    {

        a[i][i]=0;
    }
    //矩阵更新：输入距离矩阵，替换掉初始∞值
    a[1]	[2]	     = 944.276500;	a[1]	[3]	     = 998.441500;	a[1]	[69]	= 4952.486500;
    a[2]	[3]	     = 191.383000;	a[2]	[11]	 = 668.035000;	a[3]	[4]	    = 651.785500;
    a[3]	[8]	     = 698.728500;	a[4]	[5]	     = 765.532000;	a[5]	[6]	    = 426.098000;
    a[5]	[8]	     = 622.897500;	a[6]	[7]	     = 366.516500;	a[6]	[9]	    = 613.870000;
    a[7]	[10]	 = 601.231500;	a[8]	[9]	     = 467.624500;	a[8]	[12]	= 866.640000;
    a[9]	[10]	 = 326.795500;	a[10]	[13]	 = 868.445500;	a[10]	[15]	= 364.711000;
    a[11]	[12]	 = 635.536000;	a[11]	[18]	 = 512.762000;	a[12]	[13]	= 774.559500;
    a[12]	[19]	 = 514.567500;	a[13]	[14]	 = 393.599000;	a[13]	[20]	= 530.817000;
    a[14]	[15]	 = 872.056500;	a[14]	[17]	 = 906.361000;	a[14]	[24]	= 920.805000;
    a[15]	[16]	 = 993.025000;	a[16]	[17]	 = 875.667500;	a[16]	[137]	= 1126.632000;
    a[17]	[25]	 = 962.331500;	a[18]	[19]	 = 612.064500;	a[18]	[21]	= 364.711000;
    a[19]	[20]	 = 749.282500;	a[19]	[22]	 = 366.516500;	a[20]	[23]	= 375.544000;
    a[21]	[22]	 = 595.815000;	a[21]	[26]	 = 341.239500;	a[22]	[23]	= 733.033000;
    a[22]	[27]	 = 343.045000;	a[23]	[24]	 = 397.210000;	a[23]	[29]	= 373.738500;
    a[24]	[25]	 = 839.557500;	a[24]	[30]	 = 341.239500;	a[25]	[31]	= 328.601000;
    a[25]	[236]	 = 749.282500;	a[26]	[27]	 = 642.758000;	a[26]	[38]	= 2103.407500;
    a[27]	[28]	 = 740.255000;	a[28]	[29]	 = 99.302500;	a[28]	[32]	= 973.164500;
    a[29]	[30]	 = 278.047000;	a[30]	[31]	 = 816.086000;	a[31]	[34]	= 854.001500;
    a[32]	[33]	 = 601.231500;	a[32]	[39]	 = 873.862000;	a[33]	[34]	= 545.261000;
    a[33]	[36]	 = 380.960500;	a[34]	[35]	 = 102.913500;	a[35]	[37]	= 310.546000;
    a[35]	[128]	 = 962.331500;	a[36]	[37]	 = 503.734500;	a[37]	[40]	= 563.316000;
    a[38]	[39]	 = 1722.447000;	a[38]	[41]	 = 848.585000;	a[39]	[40]	= 1077.883500;
    a[39]	[44]	 = 1050.801000;	a[40]	[127]	 = 599.426000;	a[41]	[42]	= 482.068500;
    a[41]	[47]	 = 476.652000;	a[41]	[69]	 = 1720.641500;	a[42]	[43]	= 462.208000;
    a[43]	[44]	 = 843.168500;	a[43]	[73]	 = 464.013500;	a[44]	[45]	= 296.102000;
    a[44]	[72]	 = 382.766000;	a[45]	[46]	 = 604.842500;	a[45]	[77]	= 371.933000;
    a[46]	[81]	 = 1014.691000;	a[46]	[117]	 = 1005.663500;	a[46]	[127]	= 429.709000;
    a[47]	[48]	 = 550.677500;	a[48]	[49]	 = 928.027000;	a[48]	[50]	= 559.705000;
    a[49]	[71]	 = 474.846500;	a[49]	[74]	 = 456.791500;	a[50]	[51]	= 1009.274500;
    a[50]	[52]	 = 442.347500;	a[50]	[53]	 = 864.834500;	a[51]	[62]	= 946.082000;
    a[51]	[248]	 = 539.844500;	a[52]	[53]	 = 556.094000;	a[52]	[54]	= 655.396500;
    a[52]	[249]	 = 223.882000;	a[53]	[54]	 = 1126.632000;	a[53]	[84]	= 1117.604500;
    a[54]	[55]	 = 278.047000;	a[54]	[58]	 = 814.280500;	a[55]	[56]	= 947.887500;
    a[55]	[249]	 = 615.675500;	a[56]	[57]	 = 640.952500;	a[56]	[248]	= 680.673500;
    a[57]	[58]	 = 1121.215500;	a[57]	[59]	 = 557.899500;	a[58]	[90]	= 668.035000;
    a[59]	[60]	 = 384.571500;	a[59]	[61]	 = 1424.539500;	a[60]	[64]	= 2204.515500;
    a[60]	[91]	 = 1935.496000;	a[61]	[64]	 = 505.540000;	a[61]	[248]	= 480.263000;
    a[62]	[63]	 = 211.243500;	a[62]	[64]	 = 415.265000;	a[62]	[67]	= 1531.064000;
    a[63]	[65]	 = 386.377000;	a[63]	[66]	 = 926.221500;	a[64]	[65]	= 184.161000;
    a[66]	[68]	 = 651.785500;	a[67]	[68]	 = 204.021500;	a[67]	[69]	= 144.440000;
    a[70]	[75]	 = 303.324000;	a[70]	[84]	 = 471.235500;	a[71]	[75]	= 384.571500;
    a[72]	[75]	 = 612.064500;	a[72]	[77]	 = 256.381000;	a[73]	[74]	= 146.245500;
    a[75]	[76]	 = 258.186500;	a[76]	[78]	 = 259.992000;	a[78]	[79]	= 265.408500;
    a[78]	[83]	 = 487.485000;	a[79]	[80]	 = 350.267000;	a[79]	[82]	= 519.984000;
    a[80]	[81]	 = 137.218000;	a[80]	[250]	 = 501.929000;	a[81]	[116]	= 532.622500;
    a[82]	[83]	 = 187.772000;	a[82]	[85]	 = 807.058500;	a[82]	[250]	= 399.015500;
    a[83]	[84]	 = 389.988000;	a[84]	[85]	 = 946.082000;	a[85]	[86]	= 651.785500;
    a[86]	[87]	 = 211.243500;	a[86]	[101]	 = 691.506500;	a[86]	[111]	= 588.593000;
    a[87]	[88]	 = 928.027000;	a[87]	[89]	 = 523.595000;	a[88]	[99]	= 299.713000;
    a[88]	[101]	 = 538.039000;	a[89]	[93]	 = 1549.119000;	a[89]	[94]	= 2117.851500;
    a[90]	[91]	 = 234.715000;	a[90]	[93]	 = 1160.936500;	a[91]	[92]	= 911.777500;
    a[92]	[93]	 = 899.139000;	a[92]	[94]	 = 1565.368500;	a[94]	[95]	= 1762.168000;
    a[95]	[96]	 = 734.838500;	a[95]	[97]	 = 1410.095500;	a[96]	[208]	= 492.901500;
    a[96]	[209]	 = 1186.213500;	a[97]	[98]	 = 756.504500;	a[97]	[100]	= 738.449500;
    a[97]	[205]	 = 743.866000;	a[99]	[100]	 = 489.290500;	a[100]	[103]	= 579.565500;
    a[100]	[202]	 = 821.502500;	a[101]	[102]	 = 272.630500;	a[101]	[103]	= 783.587000;
    a[102]	[104]	 = 781.781500;	a[102]	[251]	 = 319.573500;	a[103]	[104]	= 315.962500;
    a[103]	[105]	 = 854.001500;	a[104]	[109]	 = 352.072500;	a[105]	[107]	= 792.614500;
    a[105]	[108]	 = 579.565500;	a[105]	[202]	 = 631.925000;	a[106]	[108]	= 243.742500;
    a[106]	[254]	 = 453.180500;	a[106]	[255]	 = 279.852500;	a[107]	[203]	= 518.178500;
    a[107]	[255]	 = 684.284500;	a[108]	[109]	 = 969.553500;	a[109]	[110]	= 543.455500;
    a[109]	[253]	 = 395.404500;	a[110]	[251]	 = 236.520500;	a[110]	[252]	= 429.709000;
    a[111]	[112]	 = 92.080500;	a[111]	[251]	 = 454.986000;	a[112]	[113]	= 359.294500;
    a[112]	[115]	 = 263.603000;	a[113]	[114]	 = 263.603000;	a[113]	[251]	= 182.355500;
    a[114]	[115]	 = 350.267000;	a[114]	[252]	 = 245.548000;	a[114]	[256]	= 669.840500;
    a[115]	[116]	 = 659.007500;	a[115]	[250]	 = 539.844500;	a[116]	[117]	= 350.267000;
    a[116]	[256]	 = 433.320000;	a[117]	[118]	 = 476.652000;	a[118]	[256]	= 386.377000;
    a[118]	[257]	 = 182.355500;	a[119]	[120]	 = 267.214000;	a[119]	[122]	= 453.180500;
    a[119]	[256]	 = 321.379000;	a[120]	[121]	 = 453.180500;	a[121]	[122]	= 240.131500;
    a[121]	[253]	 = 417.070500;	a[122]	[123]	 = 588.593000;	a[122]	[191]	= 937.054500;
    a[123]	[124]	 = 911.777500;	a[123]	[125]	 = 462.208000;	a[123]	[257]	= 774.559500;
    a[124]	[131]	 = 922.610500;	a[124]	[191]	 = 454.986000;	a[125]	[131]	= 538.039000;
    a[126]	[127]	 = 875.667500;	a[126]	[128]	 = 1251.211500;	a[126]	[257]	= 857.612500;
    a[128]	[129]	 = 1996.883000;	a[128]	[135]	 = 852.196000;	a[129]	[130]	= 828.724500;
    a[129]	[133]	 = 998.441500;	a[129]	[233]	 = 397.210000;	a[130]	[131]	= 229.298500;
    a[130]	[132]	 = 1186.213500;	a[132]	[133]	 = 458.597000;	a[132]	[193]	= 879.278500;
    a[133]	[134]	 = 1225.934500;	a[134]	[184]	 = 761.921000;	a[134]	[190]	= 774.559500;
    a[135]	[136]	 = 1065.245000;	a[135]	[143]	 = 734.838500;	a[135]	[145]	= 983.997500;
    a[136]	[138]	 = 1411.901000;	a[136]	[143]	 = 431.514500;	a[137]	[138]	= 639.147000;
    a[137]	[139]	 = 478.457500;	a[138]	[140]	 = 489.290500;	a[138]	[143]	= 1220.518000;
    a[139]	[140]	 = 642.758000;	a[139]	[142]	 = 503.734500;	a[140]	[141]	= 492.901500;
    a[141]	[142]	 = 640.952500;	a[141]	[144]	 = 1238.573000;	a[142]	[173]	= 1715.225000;
    a[143]	[144]	 = 982.192000;	a[144]	[145]	 = 714.978000;	a[144]	[152]	= 835.946500;
    a[145]	[146]	 = 556.094000;	a[146]	[147]	 = 276.241500;	a[146]	[148]	= 259.992000;
    a[146]	[168]	 = 220.271000;	a[147]	[149]	 = 252.770000;	a[147]	[167]	= 223.882000;
    a[147]	[258]	 = 408.043000;	a[148]	[149]	 = 254.575500;	a[148]	[150]	= 288.880000;
    a[149]	[151]	 = 135.412500;	a[150]	[151]	 = 229.298500;	a[150]	[152]	= 225.687500;
    a[151]	[154]	 = 384.571500;	a[152]	[153]	 = 399.015500;	a[153]	[154]	= 234.715000;
    a[153]	[156]	 = 471.235500;	a[154]	[155]	 = 429.709000;	a[154]	[258]	= 435.125500;
    a[155]	[156]	 = 231.104000;	a[155]	[165]	 = 453.180500;	a[156]	[157]	= 572.343500;
    a[156]	[173]	 = 1975.217000;	a[157]	[158]	 = 339.434000;	a[157]	[160]	= 326.795500;
    a[158]	[159]	 = 202.216000;	a[158]	[161]	 = 474.846500;	a[159]	[162]	= 566.927000;
    a[159]	[176]	 = 548.872000;	a[159]	[178]	 = 2125.073500;	a[160]	[161]	= 263.603000;
    a[160]	[163]	 = 496.512500;	a[161]	[162]	 = 315.962500;	a[161]	[164]	= 722.200000;
    a[162]	[172]	 = 612.064500;	a[162]	[175]	 = 660.813000;	a[163]	[164]	= 261.797500;
    a[163]	[165]	 = 290.685500;	a[164]	[166]	 = 501.929000;	a[165]	[166]	= 310.546000;
    a[165]	[258]	 = 290.685500;	a[166]	[171]	 = 344.850500;	a[167]	[168]	= 241.937000;
    a[167]	[169]	 = 287.074500;	a[168]	[170]	 = 299.713000;	a[169]	[170]	= 175.133500;
    a[169]	[171]	 = 335.823000;	a[170]	[233]	 = 554.288500;	a[171]	[172]	= 1413.706500;
    a[171]	[233]	 = 644.563500;	a[172]	[174]	 = 779.976000;	a[172]	[184]	= 778.170500;
    a[173]	[178]	 = 1095.938500;	a[174]	[175]	 = 597.620500;	a[174]	[183]	= 538.039000;
    a[174]	[185]	 = 756.504500;	a[175]	[176]	 = 554.288500;	a[176]	[177]	= 608.453500;
    a[176]	[179]	 = 2182.849500;	a[177]	[181]	 = 707.756000;	a[177]	[183]	= 1130.243000;
    a[178]	[179]	 = 563.316000;	a[179]	[180]	 = 1350.514000;	a[180]	[181]	= 2264.097000;
    a[180]	[222]	 = 1648.421500;	a[181]	[182]	 = 1137.465000;	a[181]	[223]	= 1272.877500;
    a[182]	[183]	 = 604.842500;	a[182]	[187]	 = 751.088000;	a[183]	[186]	= 751.088000;
    a[184]	[185]	 = 778.170500;	a[185]	[186]	 = 482.068500;	a[185]	[190]	= 760.115500;
    a[186]	[187]	 = 545.261000;	a[186]	[189]	 = 761.921000;	a[187]	[188]	= 769.143000;
    a[188]	[189]	 = 469.430000;	a[188]	[259]	 = 1921.052000;	a[189]	[190]	= 440.542000;
    a[191]	[192]	 = 583.176500;	a[191]	[254]	 = 810.669500;	a[192]	[193]	= 214.854500;
    a[192]	[194]	 = 724.005500;	a[193]	[195]	 = 673.451500;	a[194]	[195]	= 151.662000;
    a[194]	[254]	 = 619.286500;	a[195]	[196]	 = 458.597000;	a[195]	[197]	= 680.673500;
    a[196]	[198]	 = 622.897500;	a[196]	[199]	 = 1442.594500;	a[197]	[198]	= 442.347500;
    a[197]	[255]	 = 335.823000;	a[199]	[200]	 = 458.597000;	a[199]	[259]	= 891.917000;
    a[200]	[201]	 = 467.624500;	a[200]	[218]	 = 839.557500;	a[201]	[217]	= 837.752000;
    a[201]	[219]	 = 965.942500;	a[202]	[204]	 = 1269.266500;	a[202]	[205]	= 794.420000;
    a[203]	[204]	 = 471.235500;	a[203]	[219]	 = 1229.545500;	a[204]	[207]	= 890.111500;
    a[205]	[206]	 = 456.791500;	a[205]	[207]	 = 1222.323500;	a[206]	[208]	= 258.186500;
    a[207]	[209]	 = 594.009500;	a[209]	[210]	 = 2135.906500;	a[210]	[211]	= 252.770000;
    a[210]	[213]	 = 570.538000;	a[211]	[212]	 = 213.049000;	a[211]	[213]	= 727.616500;
    a[212]	[214]	 = 1083.300000;	a[212]	[231]	 = 1904.802500;	a[213]	[215]	= 597.620500;
    a[213]	[220]	 = 1428.150500;	a[214]	[215]	 = 530.817000;	a[214]	[216]	= 1171.769500;
    a[215]	[217]	 = 1067.050500;	a[215]	[220]	 = 781.781500;	a[216]	[217]	= 489.290500;
    a[216]	[221]	 = 1449.816500;	a[217]	[218]	 = 485.679500;	a[218]	[259]	= 714.978000;
    a[219]	[220]	 = 57.776000;	a[221]	[225]	 = 659.007500;	a[221]	[259]	= 774.559500;
    a[222]	[223]	 = 2258.680500;	a[222]	[246]	 = 1657.449000;	a[223]	[224]	= 1491.343000;
    a[223]	[245]	 = 1830.777000;	a[224]	[225]	 = 3114.487500;	a[224]	[244]	= 2018.549000;
    a[225]	[226]	 = 904.555500;	a[225]	[242]	 = 1166.353000;	a[226]	[227]	= 720.394500;
    a[226]	[229]	 = 1643.005000;	a[227]	[228]	 = 485.679500;	a[227]	[241]	= 572.343500;
    a[228]	[229]	 = 350.267000;	a[228]	[241]	 = 1041.773500;	a[229]	[230]	= 870.251000;
    a[230]	[231]	 = 875.667500;	a[230]	[232]	 = 1202.463000;	a[231]	[234]	= 1178.991500;
    a[232]	[234]	 = 859.418000;	a[232]	[236]	 = 606.648000;	a[234]	[235]	= 958.720500;
    a[235]	[237]	 = 1464.260500;	a[236]	[237]	 = 808.864000;	a[236]	[239]	= 1099.549500;
    a[237]	[238]	 = 1039.968000;	a[238]	[239]	 = 783.587000;	a[238]	[247]	= 751.088000;
    a[239]	[240]	 = 987.608500;	a[239]	[241]	 = 682.479000;	a[240]	[242]	= 696.923000;
    a[240]	[243]	 = 319.573500;	a[240]	[247]	 = 908.166500;	a[241]	[242]	= 958.720500;
    a[243]	[244]	 = 2311.040000;	a[244]	[245]	 = 2042.020500;	a[245]	[246]	= 2146.739500;
    a[248]	[249]	 = 835.946500;	a[252]	[253]	 = 530.817000;	a[253]	[254]	= 897.333500;
    //对称赋值
    for (i=0; i<=259; i++)
    {

        for (j=0; j<=259; j++)
        {
            if (a[i][j]==99999)
            {
                a[i][j]=a[j][i];
            }
        }
    }

//计算任意两点之间的距离矩阵
    for(n=1;n<=259;n++)
    {
        for(i=0;i<=259;i++)
        {
            for(j=0;j<259;j++)
            {
                for(k=0;k<=j;k++)
                {
                    if(a[j][i]>a[i][k]+a[k][j])
                    {
                        a[j][i]=a[i][k]+a[k][j];
                    }
                }
            }
        }
        //对称赋值
        for (i=0; i<=259; i++)
        {
            for (j=i; j<=259; j++)
            {
                if (a[i][j]==99999)
                {
                    a[i][j]=a[j][i];
                }
            }
        }
    }

//定义起点O和终点D
    int O=0;
    int D=0;
//用户输入起终点并判断是否输入正确
    do
    {
        //输入起点并判断是否正确输入
        printf("请输入起点编码（1~259）：");
        scanf("%d",&O);
        for(m=1;;m++)
        {
            if(O>=1&&O<=259)
            {
                break;
            }
            else
            {
                printf("输入有误，请重新输入!\n");
                scanf("%d",&O);
            }
        }
        //输入终点并判断是否正确输入
        printf("请输入终点编码（1~259）：");
        scanf("%d",&D);
        for(m=1;;m++)
        {
            if(D>=1&&D<=259)
            {
                break;
            }
            else
            {
                printf("输入有误，请重新输入!\n");
                scanf("%d",&D);
            }
        }
//输出结果
        if (a[O][D]<99999)
        {
            //输出最短距离
            printf("从起点%d到终点%d的最短距离为%.2fm。\n",O,D,a[O][D]);
            int d[200];
            float l[200];
            //反向追踪法求相应最短路线
            n=0;
            for(k=0; k<=259; k++)
            {
                //对最短路径上的点标号
                if(a[O][k]+a[k][D]-a[O][D]<=0.00000001)
                {
                    d[n]=k;
                    l[n]=a[O][k];
                    n++;
                }
            }
            //点的排序
            int t;
            double tt;
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(l[i]>l[j])
                    {
                        t=d[j];d[j]=d[i];d[i]=t;
                        tt=l[j];l[j]=l[i];l[i]=tt;
                    }
                }
            }
            //输出最短路线
            printf("最短路径为：");
            for(i=0; i<n; i++)
            {
                printf("%d",d[i]);
                if(d[i]==D)
                {
                    printf("\n");
                    break;
                }
                printf(" --> ");
            }
        }
        else
        {
            printf("无法寻找到最短路径。\n");
        }
        printf("是否继续查询？“是”请输入0，“否”请输入其他任意数字。\n");
        scanf("%d",&m);
    }while (m==0);
    printf("谢谢\n");
    return 0;
}

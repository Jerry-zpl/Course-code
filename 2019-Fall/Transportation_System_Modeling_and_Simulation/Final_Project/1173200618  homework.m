clear all;
vt=zeros(601,10);
xt=zeros(601,10);
vt(:,:)=15;
t=0:0.1:60;


for i=1:10
    xt(:,i)= -10*(i-1);
end

for j=1:601
    if j<6 
        vt(j,1)=15-4*j/10;
        xt(j,1)=15*j/10-1/2*4*(j/10)*(j/10);
        for i=2:10
            xt(j,i)= (15*j/10)-10*(i-1);
        end
    end
    if j<16 && j>5
        for i=1:2
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=3:10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>15 && j<21
       for i=1:3
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=4:10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>20 && j<31
        for i=1:4
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=5:10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>30 && j<36
        for i=2:5
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=1
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=6:10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>35 && j<46
        for i=3:6
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=1:2
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=7:10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>45 && j<51
        for i=4:7
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=1:3
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=8:10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>50 && j<61
        for i=5:8
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=1:4
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=9:10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>60 && j<66
        for i=6:9
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=1:5
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
     if j>65 && j<71
        for i=7:9
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=1:6
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
     end
    if j>70 && j<76
        for i=7:10
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=1:6
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>75 && j<81
        for i=8:10
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i= 1:7
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>80 && j<91
        for i=9:10
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=1:8
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i=10
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    if j>90 && j<101
        for i= 10
            vt(j,i)=vt(j-1,i)-0.4;
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
        for i= 1:9
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
    
    if j>100
        for i= 1:10
            vt(j,i)=vt(j-1,i);
            xt(j,i)=xt(j-1,i)+vt(j-1,i)*0.1;
        end
    end
end
for i=1:10
    figure(1);
    subplot(1,2,1)
    plot(t,vt(:,i));
    title('v-t');
    xlabel('Time (s)');
    ylabel('v(m/s)');
    hold on;
    subplot(1,2,2)
    plot(t,xt(:,i));
    title('x-t');
    xlabel('Time (s)');
    ylabel('x(m)');
    hold on;
end
        

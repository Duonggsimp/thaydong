var
n,s,kq,luui,luuj,i,j:longint;
x1,x2,y1,y2: array[1..1000000] of longint;
function giaodoan(a1,b1,a2,b2:longint):longint;
var min,max:longint;
begin
min:=0;
max:=0;
    if (b1<=a2) or (a1>=b2) then
giaodoan:=0
    else
    begin
if b1>b2 then
min:=b2 else min:=b1;
if a1>a2 then
max:=a1 else max:=a2;
giaodoan:=min-max;
end;
end;
function giaohcn(i,j: longint): longint;
begin
    giaohcn:=giaodoan(x1[i],x2[i],x1[j],x2[j])*giaodoan(y1[i],y2[i],y1[j],y2[j]);
end;
begin
readln(n);
for i:=1 to n do
readln(x1[i],y1[i],x2[i],y2[i]);
for i:=1 to n-1 do
    for j:=i+1 to n do
    begin
              s:=giaohcn(i,j);
              if s>kq then
              begin
                   kq:=s;
                   luui:=i;
                   luuj:=j;
              end;
              end;
writeln(kq);
writeln(luui,' ',luuj);
readln;
end.

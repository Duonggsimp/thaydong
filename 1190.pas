var
n,i,j,m,x,y,t,k,dem,res:integer;
s,s1,s2:ansistring;
a:array[0..25,0..25] of integer;
f:array[0..1025,0..1025] of integer;

function max(a,b:longint):longint;
    begin
      if a>b then
      exit(a) else
      exit(b);
    end;
    
procedure solve(); begin
    readln(s);
    s1:='';
       for i:=length(s) downto 1 do
       s1:=s1+s[i];
    s2:=s;
    n:=length(s);
    fillchar(f,sizeof(f),0);
       for i:=1 to n do
         for j:=1 to n do begin
         if s1[i]=s2[j]  then
           f[i][j]:=f[i-1][j-1]+1 else
           f[i][j]:=max(f[i-1][j],f[i][j-1]);
        end;
    writeln('Case ',k,': ',n-f[n][n]);
  end;
  
begin
  readln(t);
   for k:=1 to t do begin
       solve();
     end;
end.

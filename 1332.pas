const max=1000000;
  var
     a : array[0..max] of boolean;
     n,i,j,z,dem:longint;
  procedure eratos;

    var
       i,j : longint;

    begin
       a[1]:=false;
       for i:=2 to max do
         a[i]:=true;
       for i:=2 to max div 2 do
         if a[i] then
           for j:=2 to max div i do
             a[i*j]:=false;
             end;
    begin
    eratos;
      readln(n);
          for i:=1 to n div 2 do
          for j:=1 to i do begin
         z:=n-j-i;
        if (z>i) then
           if (a[i]=true) and (a[j]=true) and (a[z]=true) then
               dem:=dem+1;
       end;
       write(dem);
    end.

var n,m,i,j,x,tong:longint;
s1,s2:string;
   function KC(n,m:longint):longint;
      begin
      if n>m then begin
         if n-m>5 then exit(m+10-n);
         if n-m<=5 then exit(n-m);
       end;
     if m>n then begin
        if m-n>5 then exit(n+10-m);
        if m-n<=5 then exit(m-n);
      end;
     if n=m then exit(0);
   end;
   
begin
     readln(s1);
     readln(s2);
  for i:=1 to length(s1) do begin
         val(s1[i],n);
         val(s2[i],m);
         tong:=tong+KC(n,m);
       end;
   writeln(tong);
end.

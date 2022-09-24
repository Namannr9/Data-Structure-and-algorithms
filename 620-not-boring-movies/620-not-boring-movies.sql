select * from Cinema where Mod(id,2)=1 AND description<>'boring' order by rating desc;

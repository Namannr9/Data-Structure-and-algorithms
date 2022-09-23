# Write your MySQL query statement below
select name from Customer where IFNULL(referee_id,0) <>2;

/*
ifNULL(refree_id,0) means if refree_id is NULL then take it zero 
*/
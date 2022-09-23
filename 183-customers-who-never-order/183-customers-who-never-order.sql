Select Customers.name as Customers From Customers where id Not in (select CustomerId from Orders);

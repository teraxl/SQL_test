use [catridge_accounting]
go

insert into [dbo].[catridge]
           ([id_client]
           ,[rtl_id]
           ,[model]
           ,[sn]
           ,[work_performed]
           ,[complaints]
           ,[comments]
           ,[returns]
           ,[doc_is_ready]
           ,[number_of_repairs])
     values
           (023
           ,'RTL000321'
           ,'3454545345'
           ,<sn, nvarchar(100),>
           ,<work_performed, nvarchar(200),>
           ,<complaints, nvarchar(200),>
           ,<comments, nvarchar(200),>
           ,<returns, bit,>
           ,<doc_is_ready, bit,>
           ,<number_of_repairs, int,>)
go



use [catridge_accounting]
go

insert into [dbo].[client]
([name_client])
values
('�����')
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
           ((select client.id
           from client 
           where client.name_client = '�����') 
           ,'RTL000001'
           ,'001220020'
           ,'CL1232232'
           ,N'������ � ��������'
           ,'�������� ��������'
           ,'��� ������� �����������'
           ,(0)
           ,(1)
           ,(1))
go



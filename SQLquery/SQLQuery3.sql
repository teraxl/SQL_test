use [catridge_accounting]
go

declare @@decl nvarchar(10)
set @@decl = 'TITAN'

if (@@decl = 'TITAN')
	insert into client (name_client)
	values ('ATOL')
else
	insert into client (name_client)
	values ('ATOLS')
select name_client from client

/*
insert into [dbo].[client] (name_client)
values ('value')

insert into [dbo].[client] (name_client)
values ('value')

declare @@sdfsdfd int
set @@sdfsdfd = error_message()

select @@sdfsdfd
go

insert into [dbo].[client]
([name_client])
values
('�����'),
('�������')
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
	((select client.id from client where client.name_client = '�����') 
    ,'RTL000001'
    ,'001220020'
    ,'CL1232232'
    ,N'������ � ��������'
    ,'�������� ��������'
    ,'��� ������� �����������'
    ,(0)
    ,(1)
    ,(1))
	
	,((select client.id from client where client.name_client = '�������') 
    ,'RTL000002'
    ,'001243454'
    ,'CL3332232'
    ,N'������'
    ,'�� ��������'
    ,'��� ������� �������'
    ,(0)
    ,(1)
    ,(4))
go
*/


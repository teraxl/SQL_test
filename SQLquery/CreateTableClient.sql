use [catridge_accounting]
go

SET ansi_nulls on
go

set quoted_identifier on
go

create table [dbo].[client]
(
	[id] [int] identity(1,1) not null,
	[name_client] [nvarchar](100) not null,
)
go

alter table [dbo].[client]
add constraint [PK_client] primary key clustered ([id] asc)
go

alter table [dbo].[client]
add constraint DF_client_name_client_Unique unique (name_client)
go
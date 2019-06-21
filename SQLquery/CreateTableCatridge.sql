use [catridge_accounting]
go

SET ansi_nulls on
go

set quoted_identifier on
go

create table [dbo].[catridge]
(
	[CatridgeId] [int] identity(1,1),
	[id_client] [int] not null,
	[rtl_id] [nvarchar](30) not null,
	[model] [nvarchar](30) not null,
	[sn] [nvarchar](100)
)
go

alter table [dbo].[catridge]
add constraint [DF_catridge_sn] default ('Серийный номер отсутствует') for [sn]
go

alter table [dbo].[catridge]
add constraint [PK_catridge_CatridgeId] primary key clustered ([CatridgeId])
go

alter table [dbo].[catridge]
add constraint [DF_catridge_rtl_id_Unique] unique([rtl_id])
go

alter table [dbo].[catridge]
with check add constraint FK_client_catridge foreign key (id_client)
references client (id)
on update cascade
on delete cascade
go
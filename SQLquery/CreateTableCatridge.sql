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
	[sn] [nvarchar](100) null,
	/*[data_priema] [data] not null,*/
	[work_performed] [nvarchar](200) not null,
	[complaints] [nvarchar](200) not null,
	[comments] [nvarchar](200),
	[returns] [bit] not null,
	[doc_is_ready] [bit] not null,
	[number_of_repairs] [int] not null
)
go

alter table [dbo].[catridge]
add constraint [DF_catridge_sn] default ('Отсутствует') for [sn]
go

alter table [dbo].[catridge]
add constraint [DF_catridge_[complaints] default ('Нет') for [complaints]
go

alter table [dbo].[catridge]
add constraint [DF_catridge_returns] default ((0)) for [returns]
go

alter table [dbo].[catridge]
add constraint [DF_catridge_doc_is_ready] default ((0)) for [doc_is_ready]
go

alter table [dbo].[catridge]
add constraint [DF_catridge_number_of_repairs] default ((1)) for [number_of_repairs]
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
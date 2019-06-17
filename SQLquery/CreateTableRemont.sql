use [catridge_accounting]
go

SET ansi_nulls on
go

set quoted_identifier on
go

create table [dbo].[remont]
(
	[id] [int] identity(1,1) not null,
	[id_catridge][int] not null,
	[remont] [nvarchar](200) not null,
	[data_remonta] [date] not null
)
go

alter table [dbo].[remont]
add constraint [PK_remont] primary key clustered ([id] asc)
go

alter table [dbo].[remont]
with check add constraint FK_catridge_remont foreign key ([id_catridge])
references catridge (CatridgeId)
on update cascade
on delete cascade
go
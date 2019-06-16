use catridge_accounting

SELECT
dbo.client.id as [ID Client],
dbo.client.name_client as [Client Name],  
dbo.catridge.CatridgeId, 
dbo.catridge.id_client, 
dbo.catridge.rtl_id, 
dbo.catridge.model, 
dbo.catridge.sn, 
dbo.catridge.work_performed, 
dbo.catridge.complaints, 
dbo.catridge.comments, 
dbo.catridge.[returns], 
dbo.catridge.doc_is_ready, 
dbo.catridge.number_of_repairs
FROM dbo.catridge 
INNER JOIN dbo.client 
ON dbo.catridge.id_client = dbo.client.id
where client.name_client = 'Титан'
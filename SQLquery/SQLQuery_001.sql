use catridge_accounting

SELECT
dbo.client.id as [ID Client],
dbo.client.name_client as [Client Name],  
dbo.catridge.CatridgeId, 
dbo.catridge.id_client, 
dbo.catridge.rtl_id, 
dbo.catridge.model, 
dbo.catridge.sn
FROM dbo.catridge 
INNER JOIN dbo.client 
ON dbo.catridge.id_client = dbo.client.id
/*where client.name_client = 'Титан'*/
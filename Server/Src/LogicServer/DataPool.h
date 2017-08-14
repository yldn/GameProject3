﻿#ifndef __DATA_MODULE_POOL_H__
#define __DATA_MODULE_POOL_H__
#include "..\ServerEngine\SharedMemory.h"
#include "..\ServerData\ServerStruct.h"
#include "..\ServerData\RoleData.h"
#include "..\ServerData\GlobalData.h"
#include "..\ServerData\BagData.h"
#include "..\ServerData\CopyData.h"
#include "..\ServerData\EquipData.h"
#include "..\ServerData\PetData.h"
#include "..\ServerData\PartnerData.h"
#include "..\ServerData\GuildData.h"
#include "..\ServerData\TaskData.h"

extern	SharedMemory<RoleDataObject>*	g_pRoleDataObjectPool;
extern	SharedMemory<GlobalDataObject>*	g_pGlobalDataObjectPool;
extern	SharedMemory<BagDataObject>*		g_pBagDataObjectPool;
extern	SharedMemory<CopyDataObject>*	g_pCopyDataObjectPool;
extern	SharedMemory<EquipDataObject>*	g_pEquipDataObjectPool;
extern	SharedMemory<PetDataObject>*		g_pPetDataObjectPool;
extern	SharedMemory<PartnerDataObject>*	g_pPartnerDataObjectPool;
extern	SharedMemory<GuildDataObject>*	g_pGuildDataObjectPool;
extern	SharedMemory<MemberDataObject>*	g_pMemberDataObjectPool;
extern	SharedMemory<TaskDataObject>*	g_pTaskDataObjectPool;

BOOL CreateDataPool();

#endif //__DATA_MODULE_POOL_H__

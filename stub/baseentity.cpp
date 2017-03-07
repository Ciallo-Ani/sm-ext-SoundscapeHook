#include "stub/baseentity.h"
#include "stub/baseplayer.h"
#include "stub/objects.h"


IMPL_DATAMAP(int,                    CBaseEntity, m_debugOverlays);
IMPL_DATAMAP(CServerNetworkProperty, CBaseEntity, m_Network);
IMPL_DATAMAP(string_t,               CBaseEntity, m_iClassname);
IMPL_DATAMAP(string_t,               CBaseEntity, m_iName);
IMPL_DATAMAP(int,                    CBaseEntity, m_iEFlags);
IMPL_DATAMAP(Vector,                 CBaseEntity, m_vecAbsOrigin);
IMPL_DATAMAP(QAngle,                 CBaseEntity, m_angAbsRotation);
IMPL_DATAMAP(Vector,                 CBaseEntity, m_vecAbsVelocity);
IMPL_DATAMAP(IPhysicsObject*,        CBaseEntity, m_pPhysicsObject);
IMPL_DATAMAP(matrix3x4_t,            CBaseEntity, m_rgflCoordinateFrame);
IMPL_DATAMAP(int,                    CBaseEntity, m_nNextThinkTick);
IMPL_DATAMAP(CHandle<CBaseEntity>,   CBaseEntity, m_hMoveChild);
IMPL_DATAMAP(CHandle<CBaseEntity>,   CBaseEntity, m_hMovePeer);
IMPL_DATAMAP(CHandle<CBaseEntity>,   CBaseEntity, m_hMoveParent);

IMPL_SENDPROP(CCollisionProperty,   CBaseEntity, m_Collision,            CBaseEntity);
IMPL_SENDPROP(int,                  CBaseEntity, m_iTeamNum,             CBaseEntity);
IMPL_SENDPROP(int,                  CBaseEntity, m_iMaxHealth,           CBaseObject);
IMPL_SENDPROP(int,                  CBaseEntity, m_iHealth,              CBasePlayer);
IMPL_SENDPROP(char,                 CBaseEntity, m_lifeState,            CBasePlayer);
IMPL_SENDPROP(CHandle<CBaseEntity>, CBaseEntity, m_hGroundEntity,        CBasePlayer);
IMPL_SENDPROP(CHandle<CBaseEntity>, CBaseEntity, m_hOwnerEntity,         CBaseEntity);
IMPL_SENDPROP(int,                  CBaseEntity, m_fFlags,               CBasePlayer);
IMPL_SENDPROP(int,                  CBaseEntity, m_CollisionGroup,       CBaseEntity);
IMPL_SENDPROP(unsigned char,        CBaseEntity, m_nRenderMode,          CBaseEntity);
IMPL_SENDPROP(unsigned char,        CBaseEntity, m_MoveType,             CBaseEntity, "movetype");
IMPL_SENDPROP(unsigned char,        CBaseEntity, m_MoveCollide,          CBaseEntity, "movecollide");
IMPL_SENDPROP(int[4],               CBaseEntity, m_nModelIndexOverrides, CBaseEntity);
IMPL_SENDPROP(color32,              CBaseEntity, m_clrRender,            CBaseEntity);

MemberFuncThunk<      CBaseEntity *, void                                              > CBaseEntity::ft_Remove              ("CBaseEntity::Remove");
MemberFuncThunk<      CBaseEntity *, void                                              > CBaseEntity::ft_CalcAbsolutePosition("CBaseEntity::CalcAbsolutePosition");
MemberFuncThunk<      CBaseEntity *, void                                              > CBaseEntity::ft_CalcAbsoluteVelocity("CBaseEntity::CalcAbsoluteVelocity");
MemberFuncThunk<      CBaseEntity *, bool, const char *                                > CBaseEntity::ft_NameMatchesComplex  ("CBaseEntity::NameMatchesComplex");
MemberFuncThunk<      CBaseEntity *, bool, const char *                                > CBaseEntity::ft_ClassMatches        ("CBaseEntity::ClassMatches");
MemberFuncThunk<      CBaseEntity *, void, const Vector&                               > CBaseEntity::ft_SetAbsOrigin        ("CBaseEntity::SetAbsOrigin");
MemberFuncThunk<      CBaseEntity *, void, const QAngle&                               > CBaseEntity::ft_SetAbsAngles        ("CBaseEntity::SetAbsAngles");
MemberFuncThunk<      CBaseEntity *, void, const char *, float, float *                > CBaseEntity::ft_EmitSound           ("CBaseEntity::EmitSound [const char *, float, float *]");
MemberFuncThunk<      CBaseEntity *, float, const char *                               > CBaseEntity::ft_GetNextThink        ("CBaseEntity::GetNextThink");
MemberFuncThunk<      CBaseEntity *, void, const Vector&, Vector *                     > CBaseEntity::ft_EntityToWorldSpace  ("CBaseEntity::EntityToWorldSpace");
MemberFuncThunk<const CBaseEntity *, bool                                              > CBaseEntity::ft_IsBSPModel          ("CBaseEntity::IsBSPModel");
MemberFuncThunk<      CBaseEntity *, void, int, const char *, float, int, int, int, int> CBaseEntity::ft_EntityText          ("CBaseEntity::EntityText");
MemberFuncThunk<      CBaseEntity *, int, const CTakeDamageInfo&                       > CBaseEntity::ft_TakeDamage          ("CBaseEntity::TakeDamage");
MemberFuncThunk<      CBaseEntity *, void, MoveType_t, MoveCollide_t                   > CBaseEntity::ft_SetMoveType         ("CBaseEntity::SetMoveType");
MemberFuncThunk<      CBaseEntity *, model_t *                                         > CBaseEntity::ft_GetModel            ("CBaseEntity::GetModel");

MemberVFuncThunk<      CBaseEntity *, Vector                                                          > CBaseEntity::vt_EyePosition              (TypeName<CBaseEntity>(), "CBaseEntity::EyePosition");
MemberVFuncThunk<      CBaseEntity *, const QAngle&                                                   > CBaseEntity::vt_EyeAngles                (TypeName<CBaseEntity>(), "CBaseEntity::EyeAngles");
MemberVFuncThunk<      CBaseEntity *, void, CBaseEntity *                                             > CBaseEntity::vt_SetOwnerEntity           (TypeName<CBaseEntity>(), "CBaseEntity::SetOwnerEntity");
MemberVFuncThunk<      CBaseEntity *, void                                                            > CBaseEntity::vt_Spawn                    (TypeName<CBaseEntity>(), "CBaseEntity::Spawn");
MemberVFuncThunk<      CBaseEntity *, void, Vector *, AngularImpulse *                                > CBaseEntity::vt_GetVelocity              (TypeName<CBaseEntity>(), "CBaseEntity::GetVelocity");
MemberVFuncThunk<const CBaseEntity *, const Vector&                                                   > CBaseEntity::vt_WorldSpaceCenter         (TypeName<CBaseEntity>(), "CBaseEntity::WorldSpaceCenter");
MemberVFuncThunk<const CBaseEntity *, bool                                                            > CBaseEntity::vt_IsCombatItem             (TypeName<CBaseEntity>(), "CBaseEntity::IsCombatItem");
MemberVFuncThunk<      CBaseEntity *, void, int                                                       > CBaseEntity::vt_SetModelIndex            (TypeName<CBaseEntity>(), "CBaseEntity::SetModelIndex");
MemberVFuncThunk<const CBaseEntity *, int                                                             > CBaseEntity::vt_GetModelIndex            (TypeName<CBaseEntity>(), "CBaseEntity::GetModelIndex");
MemberVFuncThunk<const CBaseEntity *, string_t                                                        > CBaseEntity::vt_GetModelName             (TypeName<CBaseEntity>(), "CBaseEntity::GetModelName");
MemberVFuncThunk<      CBaseEntity *, CBaseCombatCharacter *                                          > CBaseEntity::vt_MyCombatCharacterPointer (TypeName<CBaseEntity>(), "CBaseEntity::MyCombatCharacterPointer");
MemberVFuncThunk<const CBaseEntity *, bool, int, int                                                  > CBaseEntity::vt_ShouldCollide            (TypeName<CBaseEntity>(), "CBaseEntity::ShouldCollide");
MemberVFuncThunk<      CBaseEntity *, void                                                            > CBaseEntity::vt_DrawDebugGeometryOverlays(TypeName<CBaseEntity>(), "CBaseEntity::DrawDebugGeometryOverlays");
MemberVFuncThunk<      CBaseEntity *, void, int                                                       > CBaseEntity::vt_ChangeTeam               (TypeName<CBaseEntity>(), "CBaseEntity::ChangeTeam");
MemberVFuncThunk<      CBaseEntity *, void, int, int                                                  > CBaseEntity::vt_SetModelIndexOverride    (TypeName<CBaseEntity>(), "CBaseEntity::SetModelIndexOverride");
MemberVFuncThunk<      CBaseEntity *, datamap_t *                                                     > CBaseEntity::vt_GetDataDescMap           (TypeName<CBaseEntity>(), "CBaseEntity::GetDataDescMap");
MemberVFuncThunk<      CBaseEntity *, bool, const char *, CBaseEntity *, CBaseEntity *, variant_t, int> CBaseEntity::vt_AcceptInput              (TypeName<CBaseEntity>(), "CBaseEntity::AcceptInput");
MemberVFuncThunk<      CBaseEntity *, void, const char *                                              > CBaseEntity::vt_SetModel                 (TypeName<CBaseEntity>(), "CBaseEntity::SetModel");

StaticFuncThunk<int, const char *, bool>          CBaseEntity::ft_PrecacheModel      ("CBaseEntity::PrecacheModel");
StaticFuncThunk<bool, const char *>               CBaseEntity::ft_PrecacheSound      ("CBaseEntity::PrecacheSound");
StaticFuncThunk<HSOUNDSCRIPTHANDLE, const char *> CBaseEntity::ft_PrecacheScriptSound("CBaseEntity::PrecacheScriptSound");


bool CBaseEntity::IsPlayer() const
{
	return (rtti_cast<const CBasePlayer *>(this) != nullptr);
}

bool CBaseEntity::IsBaseObject() const
{
	return (rtti_cast<const CBaseObject *>(this) != nullptr);
}


void CCollisionProperty::CalcNearestPoint(const Vector& vecWorldPt, Vector *pVecNearestWorldPt) const
{
	Vector localPt, localClosestPt;
	WorldToCollisionSpace(vecWorldPt, &localPt);
	CalcClosestPointOnAABB(this->m_vecMins.Get(), this->m_vecMaxs.Get(), localPt, localClosestPt);
	CollisionToWorldSpace(localClosestPt, pVecNearestWorldPt);
}

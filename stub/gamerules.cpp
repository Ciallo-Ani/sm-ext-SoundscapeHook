#include "stub/gamerules.h"


GlobalThunk<CGameRulesProxy *> CGameRulesProxy::s_pGameRulesProxy("CGameRulesProxy::s_pGameRulesProxy");


MemberVFuncThunk<const CGameRules *, const CViewVectors *> CGameRules::vt_GetViewVectors(TypeName<CGameRules>(), "CGameRules::GetViewVectors");
MemberVFuncThunk<      CGameRules *, bool, int, int>       CGameRules::vt_ShouldCollide (TypeName<CGameRules>(), "CGameRules::ShouldCollide");


MemberVFuncThunk<CMultiplayRules *, VoiceCommandMenuItem_t *, CBaseMultiplayerPlayer *, int, int> CMultiplayRules::vt_VoiceCommand(TypeName<CMultiplayRules>(), "CMultiplayRules::VoiceCommand");


IMPL_SENDPROP(gamerules_roundstate_t, CTeamplayRoundBasedRules, m_iRoundState,  CTeamplayRoundBasedRulesProxy);
IMPL_SENDPROP(int,                    CTeamplayRoundBasedRules, m_iWinningTeam, CTeamplayRoundBasedRulesProxy);
IMPL_SENDPROP(bool[33],               CTeamplayRoundBasedRules, m_bPlayerReady, CTeamplayRoundBasedRulesProxy);

MemberFuncThunk<CTeamplayRoundBasedRules *, void, int, const char *, int> CTeamplayRoundBasedRules::ft_BroadcastSound              ("CTeamplayRoundBasedRules::BroadcastSound");
MemberFuncThunk<CTeamplayRoundBasedRules *, float, CBasePlayer *>         CTeamplayRoundBasedRules::ft_GetMinTimeWhenPlayerMaySpawn("CTeamplayRoundBasedRules::GetMinTimeWhenPlayerMaySpawn");

MemberVFuncThunk<CTeamplayRoundBasedRules *, float, int, CBasePlayer *> CTeamplayRoundBasedRules::vt_GetNextRespawnWave(TypeName<CTeamplayRoundBasedRules>(), "CTeamplayRoundBasedRules::GetNextRespawnWave");


IMPL_SENDPROP(bool, CTFGameRules, m_bPlayingMedieval,      CTFGameRulesProxy);
IMPL_SENDPROP(bool, CTFGameRules, m_bPlayingMannVsMachine, CTFGameRulesProxy);

MemberFuncThunk<CTFGameRules *, bool, CTFPlayer *, int, unsigned short, CMannVsMachineUpgrades *> CTFGameRules::ft_CanUpgradeWithAttrib               ("CTFGameRules::CanUpgradeWithAttrib");
MemberFuncThunk<CTFGameRules *, int, CMannVsMachineUpgrades *, int, int, CTFPlayer *>             CTFGameRules::ft_GetCostForUpgrade                  ("CTFGameRules::GetCostForUpgrade");
MemberFuncThunk<CTFGameRules *, int, int>                                                         CTFGameRules::ft_GetUpgradeTier                     ("CTFGameRules::GetUpgradeTier");
MemberFuncThunk<CTFGameRules *, bool, CTFPlayer *, int, int>                                      CTFGameRules::ft_IsUpgradeTierEnabled               ("CTFGameRules::IsUpgradeTierEnabled");
MemberFuncThunk<CTFGameRules *, void, CTFPlayer *, bool>                                          CTFGameRules::ft_PlayerReadyStatus_UpdatePlayerState("CTFGameRules::PlayerReadyStatus_UpdatePlayerState");
MemberFuncThunk<CTFGameRules *, void, int, CTFPlayer *, bool, bool, bool>                         CTFGameRules::ft_DistributeCurrencyAmount           ("CTFGameRules::DistributeCurrencyAmount");


GlobalThunk<CGameRules *> g_pGameRules("g_pGameRules");

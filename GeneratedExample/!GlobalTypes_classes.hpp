#pragma once
#include <vadefs.h>
#include <stdint.h>
#include "SchemaBase.hpp"
#include "SchemaSystem.hpp"
#include "UnknownType.hpp"
#include "!GlobalTypes_enums.hpp"
/* CLASS DECLARATIONS FROM OTHER HEADERS */
namespace schema { class CSchemaClassBinding; }
class CBaseAnimating;
class CBaseEntity;
class CBaseFlex;
class CBasePlayer;
class CDOTA_BaseNPC;
class CEntityInstance;
class C_BaseAnimating;
class C_BasePlayer;
class C_FireSmoke;
/* END CLASS DECLARATIONS FROM OTHER HEADERS */
template < class... Args >
class CCompressor;
template < class... Args >
class CCopyableUtlVector;
template < class... Args >
class CHandle;
template < class... Args >
class CResourceArray;
template < class... Args >
class CResourceExtReference;
template < class... Args >
class CResourcePointer;
template < class... Args >
class CStrongHandle;
template < class... Args >
class CStrongHandleCopyable;
template < class... Args >
class CUtlVector;
template < class... Args >
class CUtlVectorFixedGrowable;
template < class... Args >
class CVariantBase;
template < class... Args >
class CWeakHandle;
template < class... Args >
class SchemaArray_t;
class fogparams_t;
class AnimationRetargetData_t;
class CDOTA_BuffParticle;
class CDOTA_PlayerChallengeInfo;
class SimpleConstraintSoundProfile;
class CEntityIOOutput;
class CVPhysXSurfaceAudioParams;
class SceneViewId_t;
class CVPhysXSurfaceGameProperties;
class RenderSkeletonData_t;
class PhysFeModelDesc_t;
class RnCapsule_t;
class PostProcessParameters_t;
class ControlPointReference_t;
class CNetworkedSequenceOperation;
class PostProcessingBloomParameters_t;
class LightDesc_t;
class EngineLoopState_t;
class RnFace_t;
class InfoForResourceTypeCNameListStacks;
class ChangeAccessorFieldPathIndex_t;
class CEconItemAttribute;
class EventSimulate_t;
class SlideKeywordList_t;
class SeqResourceIKLock_t;
class AnimResourceAnimDesc_t_Flag_t;
class EventModInitialized_t;
class PermModelInfo_t;
class PostProcessingVignetteParameters_t;
class MaterialGroup_t;
class IContextualQuery;
class CAI_Expresser;
class CParticleVisibilityInputs;
class EventServerPollNetworking_t;
class VPhysXConstraintParams_t;
class audioparams_t;
class SeqResourceMultiFetch_t_Flag_t;
class SeqResourceTransition_t;
class ModelSkeletonData_t;
class SchemaMetadataSetData_t;
class constraint_axislimit_t;
class AnimResourceSequenceParams_t;
class CParticleOperatorInstance;
class ResourceDefRefList_t;
class CParticlePerFrameOperatorInstance;
class C_OP_InheritFromParentParticles;
class CGeneralSpin;
class SchemaMetadataEntryData_t;
class CGlowSprite;
class CNavVolume;
class CNetworkVarChainer;
class C_OP_MoveToHitbox;
class CBaseNugget;
class EventProfileStorageAvailable_t;
class CUserCommandContext;
class C_OP_RemapCPVelocityToVector;
class CGameSceneNodeHandle;
class CountdownTimer;
class CParticleRenderOperatorInstance;
class C_OP_SetControlPointPositionToTimeOfDayValue;
class C_OP_SetChildControlPoints;
class CParticleInitializerOperatorInstance;
class TestStruct_1;
class CSequenceTransitioner;
class CObstructionObject;
class CRMSG_Entity_Event;
class CNetworkOriginCellCoordQuantizedVector;
class C_INIT_CreateFromParentParticles;
class FeSimdRodConstraint_t;
class CSSDSMsg_EndFrame;
class C_INIT_RandomColor;
class C_INIT_InitFromCPSnapshot;
class C_INIT_PositionOffsetToCP;
class InfoForResourceTypeCVirtualVolumeTexture;
class CConstantForceController;
class INextBotEventResponder;
class EventAdvanceTick_t;
class C_OP_Cull;
class C_INIT_AgeNoise;
class MorphData_t;
class SeqResourceSeqDesc_t_Flag_t;
class CVPhysXSurfacePropertiesList;
class CParticleEmitterOperatorInstance;
class CParticleConstraintOperatorInstance;
class MorphSetData_t;
class C_OP_BasicMovement;
class FlexDesc_t;
class C_VerticalMotionController;
class DOTA_AssassinMinigameNetworkState;
class thinkfunc_t;
class FileWeaponInfo_t;
class CBaseRendererSource2;
class C_OP_OscillateScalarSimple;
class C_INIT_InitSkinnedPositionFromCPSnapshot;
class C_OP_SpringConstraint;
class RnShapeDesc_t;
class CVPhysXMesh;
class VPhysXAggregateData_t;
class CEntityClassInfo;
class C_INIT_ModelCull;
class InfoForResourceTypeCMorphSet;
class SchemaEnumInfoData_t;
class fogplayerparams_t;
class C_OP_DistanceBetweenCPsToCP;
class C_OP_ContinuousEmitter;
class C_INIT_RandomAlpha;
class ResourceEditIntData_t;
class CEffectData;
class CDOTA_AbilityDraftAbilityState;
class HitBoxSet_t;
class InfoForResourceTypeCPhysAggregateData;
class sky3dparams_t;
class JiggleData;
class INextBotComponent;
class RnSphere_t;
class PhysSoftbodyDesc_t;
class CDOTA_Buff;
class VMapResourceData_t;
class IBotController;
class vehicle_controlparams_t;
class VSoundEventScript_t;
class MorphRectData_t;
class InfoForResourceTypeProcessingGraph_t;
class SchemaEnumeratorInfoData_t;
class DamageShareEvent_t;
class C_INIT_RandomYawFlip;
class C_OP_RenderCables;
class C_INIT_Orient2DRelToCP;
class InfoForResourceTypeCLightTree;
class C_GameRules;
class CWorldVisNode;
class EventClientPostSimulate_t;
class InfoForResourceTypeCTextureBase;
class FlexController_t;
class PostProcessingTonemapParameters_t;
class ModelBoneFlexDriverControl_t;
class FeNodeBase_t;
class C_DOTA_AbilityDraftAbilityState;
class IRagdoll;
class C_OP_SetCPOrientationToGroundNormal;
class C_OP_SequenceFromModel;
class IParticleEffect;
class CResponseCriteriaSet;
class C_OP_RemapCPVisibilityToVector;
class ResourceEditFloatData_t;
class C_OP_RemapCPOrientationToYaw;
class C_DOTA_Modifier_Lua;
class sAcquireHistory;
class sBounceInfo;
class VBitmapFontDiskData_t;
class FeAxialEdgeBend_t;
class CProjectedTextureBase;
class C_OP_RemapCPtoCP;
class C_OP_LerpScalar;
class FlexRule_t;
class AnimResourceAnimEvent_t;
class FourQuaternions;
class VSoundStackScript_t;
class SkeletonBoneBbox_t;
class RenderInputLayoutField_t;
class CAttributeManager;
class Extent;
class sControlGroupElem;
class InfoForResourceTypeCParticleSnapshot;
class AABB_t;
class C_INIT_GlobalScale;
class ResourceEditInfoBlock_t;
class CDOTA_ItemStockInfo;
class EntComponentInterface_t;
class C_INIT_RandomVector;
class AnimationDecodeDebugDumpElement_t;
class CSSDSMsg_LayerBase;
class C_OP_MovementPlaceOnGround;
class MaterialResourceData_t;
class TransitioningLayer_t;
class C_OP_ConstrainDistance;
class TextureDesc_t;
class CDOTAGameManager;
class C_OP_Noise;
class C_INIT_NormalOffset;
class C_INIT_CreateInHierarchy;
class InfoForResourceTypeCVPhysXLevelData;
class SchemaMetaModifyAdd_t;
class LightTreeResourceData_t;
class C_OP_MovementRigidAttachToCP;
class RnTriangle_t;
class DataTeamPlayer_t;
class BaseSceneObjectOverride_t;
class C_OP_RemapScalarOnceTimed;
class C_OP_InstantaneousEmitter;
class C_OP_RadiusDecay;
class CRMSG_Manifest_Event;
class ResourceAdditionalRelatedFile_t;
class C_MultiplayRules;
class ModelReference_t;
class RnCapsuleDesc_t;
class InfoForResourceTypeWorldEnvironmentMaps_t;
class C_fogplayerparams_t;
class CreatureStateData_t;
class C_OP_SetRandomControlPointPosition;
class C_OP_RenderSound;
class C_OP_RemapCPtoVector;
class C_OP_RemapScalarEndCap;
class C_INIT_RtEnvCull;
class FeWorldCollisionParams_t;
class CMultiInputVar;
class EventClientAdvanceTick_t;
class FeBandBendLimit_t;
class CResourceDiskStruct;
class MaterialOverride_t;
class C_OP_SpinYaw;
class SheetFrameImage_t;
class MaterialParam_t;
class OnDiskBufferData_t;
class WorldEnvironmentMaps_t;
class C_OP_ClothMovement;
class C_OP_RemapVectortoCP;
class C_OP_RemapVisibilityScalar;
class C_INIT_VelocityFromCP;
class CTestNugget_1;
class Sheet_t;
class PlayerResourcePlayerTeamData_t;
class C_OP_OscillateVector;
class CViewAngleKeyFrame;
class CDOTA_Modifier_Lua;
class C_OP_EndCapTimedDecay;
class C_TeamplayRules;
class CWorldVisCluster;
class C_OP_RenderScreenShake;
class C_DOTASpectatorGraphManager;
class magnetted_objects_t;
class CHorizontalMotionController;
class SeqResourceBoneMaskList_t;
class C_OP_SetControlPointToCenter;
class CDOTAMusicProbabilityEntry;
class CNetworkVelocityVector;
class C_OP_DifferencePreviousParticle;
class BaseConstraint_t;
class CNavVolumeVector;
class ResourceSpecialDependency_t;
class DOTAAbilityData_t;
class CSpeechBubbleInfo;
class C_OP_ModelCull;
class CPathParameters;
class CAttachment;
class CVPhysXSurfacePhysicsParams;
class CNavVolumeSphere;
class ResponseParams;
class C_OP_SetControlPointFieldToWater;
class C_INIT_PositionOffset;
class CVPhysXSurfaceAudioSounds;
class SchemaBaseClassInfoData_t;
class NianDamageTaken_t;
class C_INIT_CreateSpiralSphere;
class RnMesh_t;
class FeNodeIntegrator_t;
class sGlaiveInfo;
class C_OP_RenderProjected;
class CParticleForceOperatorInstance;
class C_INIT_InitialVelocityNoise;
class FlexOp_t;
class C_OP_RestartAfterDuration;
class CSpinUpdateBase;
class CovMatrix3;
class FeFollowNode_t;
class CLocomotionBase;
class IPlayerInfo;
class CreatureAbilityData_t;
class AnimResourceIKRule_t;
class RnSoftbodyCapsule_t;
class IEconItemInterface;
class CAttributeList;
class C_INIT_RandomSecondSequence;
class C_INIT_RandomSequence;
class CGeneralRandomRotation;
class RnPlane_t;
class InfoForResourceTypeCWorldNode;
class CSkeletonAnimationController;
class C_INIT_RandomScalar;
class InfoForResourceTypeResourceManifest_t;
class C_OP_RampScalarSpline;
class C_OP_ReinitializeScalarEndCap;
class VpropBreakablePartData_t;
class CResourceIntrospectionManifest;
class CGameRules;
class C_OP_CalculateNormalsForGrid;
class CDOTA_Modifier_Lua_Horizontal_Motion;
class cache_ragdoll_t;
class dynpitchvol_t;
class C_OP_FadeOut;
class C_PlayerState;
class C_INIT_RemapScalarToVector;
class VPhysXDiskShapeHeader_t;
class InfoForResourceTypeCSequenceGroupResource;
class FourCovMatrices3;
class FeFitMatrix_t;
class C_OP_RenderDeferredLight;
class CDeferredLightBase;
class C_OP_LerpEndCapScalar;
class C_OP_SpringForce;
class C_OP_ForceBasedOnDistanceToPlane;
class CPassengerSeat;
class EntClassComponentOverride_t;
class C_INIT_RandomLifeTime;
class C_INIT_SetHitboxToModel;
class HeroDeathRecord_t;
class C_INIT_OffsetVectorToVector;
class C_INIT_PositionWarp;
class ResourceReferenceInfo_t;
class IRecipientFilter;
class PermEntityLumpData_t;
class C_INIT_CreateSequentialPath;
class EntOutput_t;
class C_OP_StopAfterCPDuration;
class CGlowOverlay;
class ClientQuickBuyItemState;
class C_OP_RampScalarLinearSimple;
class C_OP_LerpEndCapVector;
class CSoundEnvelope;
class CNetworkOriginQuantizedVector;
class CVariantDefaultAllocator;
class C_INIT_InitialVelocityFromHitbox;
class RnNode_t;
class TextureHeader_t;
class InfoForResourceTypeWorldLighting_t;
class FeEdgeDesc_t;
class C_INIT_RemapScalar;
class MaterialParamInt_t;
class C_OP_DecayMaintainCount;
class C_OP_RemapDistanceToLineSegmentBase;
class C_OP_RotateVector;
class C_OP_Orient2DRelToCP;
class C_INIT_InitFromParentKilled;
class AnimResourceUser_t;
class AnimResourceMovement_t;
class FeCtrlOffset_t;
class FeTri_t;
class CAnimationLayer;
class CSSDSMsg_ViewRender;
class C_OP_RenderTrails;
class C_OP_UpdateLightSource;
class C_INIT_LifespanFromVelocity;
class CDOTA_ReconnectInfo;
class CLocalNPCObstructionsCache;
class IDamageHandler;
class TestRawStruct_1;
class C_OP_MovementLoopInsideSphere;
class FeFitWeight_t;
class C_DOTAGamerules;
class C_OP_PlaneCull;
class CPlayerInfo;
class ViewLockData_t;
class C_INIT_CreateWithinSphere;
class CBaseConstraint;
class PlayerResourceBroadcasterData_t;
class C_INIT_SequenceFromCP;
class AnimResourceIKRuleStallFrame_t;
class EventServerAdvanceTick_t;
class EventSimpleLoopFrameUpdate_t;
class CResourceDiskEnum;
class TimedEvent;
class FeSimdNodeBase_t;
class VelocitySampler;
class AnimationResourceData_t;
class PermModelExtPart_t;
class CRMSG_System_Event;
class C_OP_VectorNoise;
class SheetSequence_t;
class SequenceFloatParam_t;
class C_DOTA_ItemStockInfo;
class CHeadLookParams;
class ResourceRemapTable_t;
class CFlashlightEffect;
class EventSetTime_t;
class InfoForResourceTypeCVPhysXSurfacePropertiesList;
class FeSphereRigid_t;
class SeqResourceSynthAnimDesc_t;
class OldFeEdge_t;
class constraint_breakableparams_t;
class IBody;
class CWorldVisibility;
class C_OP_MaxVelocity;
class C_OP_OscillateVectorSimple;
class EventSplitScreenStateChanged_t;
class C_OP_RemapCPVisibilityToScalar;
class InfoForResourceTypeVGameSoundScript_t;
class MaterialParamBuffer_t;
class EventPostDataUpdate_t;
class BuilderModelBoneFlexDriver_t;
class ResourceCustomDependency_t;
class CModelState;
class CTakeDamageInfo;
class CSSDSMsg_ViewTargetList;
class C_OP_VelocityMatchingForce;
class C_OP_RenderBlobs;
class AnimationDecodeDebugDump_t;
class RenderSkeletonBone_t;
class FeSpringIntegrator_t;
class ResponseFollowup;
class CDotaEntityFilterFlags;
class CEntityComponentHelper;
class C_OP_ControlpointLight;
class FeCollisionPlane_t;
class C_TeamplayRoundBasedRules;
class CEconItemView;
class CVerticalMotionController;
class CMultiplayRules;
class AnimationRetargetElementData_t;
class CFourWheelVehiclePhysics;
class C_OP_SetControlPointToPlayer;
class C_OP_RampScalarLinear;
class C_OP_FadeAndKillForTracers;
class C_OP_CodeDrivenEmitter;
class C_INIT_RemapQAnglesToRotation;
class C_INIT_ChaoticAttractor;
class EventClientPreSimulate_t;
class CJiggleBones;
class SchemaFieldMetadataOverrideData_t;
class ViewSmoothingData_t;
class AnimationKeyResourceData_t;
class IClientAlphaProperty;
class CEntityComponent;
class C_OP_RemapVelocityToVector;
class MaterialParamFloat_t;
class EventServerSimulate_t;
class PermModelData_t;
class SchemaClassInfoData_t;
class C_EconItemView;
class VSoundStack_t;
class InfoForResourceTypeCPanoramaStyle;
class C_OP_OrientTo2dDirection;
class C_OP_DistanceToCP;
class C_OP_PercentageBetweenCPLerpCPs;
class AnimResourceLocalHierarchy_t;
class SceneObjectData_t;
class C_OP_MovementMaintainOffset;
class C_OP_SnapshotRigidSkinToBones;
class C_OP_BoxConstraint;
class C_INIT_InheritFromParentParticles;
class AnimResourceDecoder_t;
class InfoForResourceTypeCPanoramaDynamicImages;
class C_INIT_InitialSequenceFromModel;
class C_OP_SetControlPointFromObjectScale;
class AnimResourceFrameSegment_t;
class WorldBuilderParams_t;
class VPhysXDiskMesh2_t;
class C_OP_FadeIn;
class AnimResourceBoneDifference_t;
class FourVectors2D;
class RnDummy_t;
class FeRodConstraint_t;
class C_OP_RemapAverageScalarValuetoCP;
class C_INIT_AddVectorToVector;
class C_OP_RemapSpeed;
class SchemaClassFieldData_t;
class IVehicle;
class CRR_Response;
class AnimationSnapshotBase_t;
class MaterialParamTexture_t;
class InfoForResourceTypeCPanoramaScript;
class CGlobalLightBase;
class CPassengerInfo;
class CSchemaMetadataEntry;
class AIHullFlags_t;
class CShowcaseData;
class C_INIT_RemapSpeedToScalar;
class CSchemaEnumInfo;
class CSceneObjectExtraData_t;
class ParticleChildrenInfo_t;
class C_OP_SetCPOrientationToDirection;
class CClientAlphaProperty;
class C_DOTAGameManager;
class CSceneObject;
class C_OP_SetControlPointsToModelParticles;
class C_OP_GlobalLight;
class ResponseContext_t;
class IntervalTimer;
class C_OP_RemapScalar;
class C_INIT_RemapParticleCountToScalar;
class TonemapParameters_t;
class C_OP_SetParentControlPointsToChildCP;
class C_INIT_DistanceToCPInit;
class EventClientPollNetworking_t;
class C_DOTA_PlayerChallengeInfo;
class C_OP_LagCompensation;
class C_OP_SetToCP;
class WeaponSoundData_t;
class C_OP_NormalizeVector;
class C_OP_SetControlPointOrientation;
class AnimResourceDataChannel_t;
class C_INIT_InitialRepulsionVelocity;
class SeqResourceMultiFetch_t;
class EventClientPauseSimulate_t;
class CFireOverlay;
class C_OP_NoiseEmitter;
class CThrustController;
class C_OP_RemapControlPointDirectionToVector;
class C_INIT_RemapInitialDirectionToCPToVector;
class FeTaperedCapsuleRigid_t;
class CResourceDiskStructField;
class CDOTA_Modifier_Lua_Vertical_Motion;
class PermRenderMeshData_t;
class ConstraintSlave_t;
class C_OP_MovementRotateParticleAroundAxis;
class C_INIT_CreateOnModel;
class AnimationRetargetChainData_t;
class CRecipientFilter;
class CHitBox;
class ClusteredDistributionParams_t;
class CShowcaseSlot;
class C_OP_RampScalarSplineSimple;
class BuilderModelBoneFlexDriverList_t;
class C_EconItemAttribute;
class C_CHintMessageQueue;
class CTeamplayRules;
class AnimResourceFrameBlockAnim_t;
class CRenderSkeleton;
class FeQuad_t;
class vehicle_gear_t;
class C_INIT_VelocityFromNormal;
class C_OP_SetControlPointsToParticle;
class CSound;
class CSoundParameters;
class CSSDSEndFrameViewInfo;
class C_OP_NormalLock;
class CSchemaFieldMetadataOverride;
class C_INIT_SetRigidAttachment;
class IVision;
class C_OP_TurbulenceForce;
class InfoForResourceTypeVSound_t;
class CLightInfoBase;
class HeroPickRecord_t;
class IParticleSystemDefinition;
class C_OP_RenderPoints;
class EventClientFrameSimulate_t;
class RnHull_t;
class C_CommandContext;
class CModifierParams;
class C_INIT_MoveBetweenPoints;
class AnimResourceAnimDesc_t;
class ConstraintTarget_t;
class CSimpleSimTimer;
class VPhysicsCollisionAttribute_t;
class PlayerBody;
class CSequenceTransitioner2;
class C_OP_RemapDistanceToLineSegmentToVector;
class CCompressorGroup;
class RenderBufferBinding_t;
class InfoForResourceTypeCAnimationResource;
class CBasePortraitData;
class C_OP_AlphaDecay;
class C_OP_ExternalWindForce;
class CCopyRecipientFilter;
class CTestNugget_2;
class CDOTA_Orb;
class sSharedCooldownInfo;
class C_INIT_InheritVelocity;
class BundleData_t;
class C_OP_ClampScalar;
class C_OP_TwistAroundAxis;
class VSoundEvent_t;
class RnHalfEdge_t;
class CPlayerLocalData;
class CSceneEventInfo;
class C_OP_ClampVector;
class EventClientProcessNetworking_t;
class PlayerSeatAssignment_t;
class InfoForResourceTypeCPanoramaLayout;
class C_OP_LockToSavedSequentialPath;
class C_INIT_RemapInitialVisibilityScalar;
class InfoForResourceTypeCAnimationGroupResource;
class ResourceRemapRule_t;
class TimedKillEvent_t;
class CPhysicsShake;
class C_OP_RenderLights;
class EventClientProcessGameInput_t;
class VsInputSignatureElement_t;
class CDOTA_Modifier_Lua_Motion_Both;
class C_OP_EnableChildrenFromParentParticleCount;
class C_INIT_RandomRotationSpeed;
class VertexPositionColor_t;
class SceneObject_t;
class CSSDSMsg_ViewTarget;
class C_INIT_CreateWithinHexahedron;
class C_OP_SetCPOrientationToPointAtCP;
class C_OP_AttractToControlPoint;
class C_INIT_RemapInitialCPDirectionToRotation;
class HitBox_t;
class VirtualVolumeTexData_t;
class C_OP_EndCapDecay;
class RnSphereDesc_t;
class CSSDSMsg_PreLayer;
class C_INIT_RemapCPtoScalar;
class IServerVehicle;
class RnSoftbodyParticle_t;
class CPassengerSeatTransition;
class CEffectScriptElement;
class EventFrameBoundary_t;
class InfoForResourceTypeCRenderMesh;
class vehiclesounds_t;
class CSimTimer;
class BoneOverride_t;
class WorldNode_t;
class CAI_ExpresserWithFollowup;
class EventPostAdvanceTick_t;
class IPhysicsPlayerController;
class C_OP_RemapSpeedtoCP;
class C_OP_WindForce;
class AnimationGroupResourceData_t;
class EventServerPostAdvanceTick_t;
class EventClientPreOutput_t;
class CSchemaEnumeratorInfo;
class C_OP_DampenToCP;
class C_OP_PositionLock;
class SeqResourceAutoLayerFlag_t;
class RnSoftbodySpring_t;
class RnHullDesc_t;
class FeNodeReverseOffset_t;
class C_OP_RemapCPtoScalar;
class C_OP_Spin;
class EventClientSendInput_t;
class C_SpeechBubbleInfo;
class C_INIT_CreateFromCPs;
class FeCollisionSphere_t;
class CBaseAnimatingController;
class ExtraVertexStreamOverride_t;
class EntityIOConnectionData_t;
class C_HorizontalMotionController;
class CNetworkViewOffsetVector;
class CGlowProperty;
class C_OP_RemapDistanceToLineSegmentToScalar;
class CSchemaMetaModifyAdd;
class hudtextparms_t;
class C_INIT_CreationNoise;
class CSchemaClassField;
class C_DotaTree;
class GameFileWeaponInfo_t;
class C_OP_SetControlPointPositions;
class C_OP_PercentageBetweenCPsVector;
class CRMSG_Entity_Info;
class CDOTASpectatorGraphManager;
class C_OP_DistanceCull;
class C_INIT_VelocityRadialRandom;
class FeCtrlOsOffset_t;
class C_CSequenceTransitioner2;
class EventAppShutdown_t;
class ModelBoneFlexDriver_t;
class FeSimdSpringIntegrator_t;
class C_ViewSmoothingData_t;
class CHintMessage;
class WeaponTextureData_t;
class C_OP_LocalAccelerationForce;
class SeqResourceS1SeqDesc_t;
class CRCMD_SetProfileMode;
class InfoForResourceTypeVMapResourceData_t;
class C_OP_RampCPLinearRandom;
class CPassengerRole;
class CNavVolumeAll;
class ragdollelement_t;
class SeqResourceAutoLayer_t;
class AnimationSnapshot_t;
class CVPhysXLevelData;
class VPhysXCollisionAttributes_t;
class C_OP_OscillateScalar;
class CMultiplayer_Expresser;
class VPhysXShapeCompoundHeader2_t;
class SheetSequenceFrame_t;
class InfoForResourceTypeIParticleSystemDefinition;
class C_SunGlowOverlay;
class ragdoll_t;
class C_INIT_CreateInEpitrochoid;
class EventServerPostSimulate_t;
class ResourceInputDependency_t;
class InfoForResourceTypeResourceRemapTable_t;
class C_OP_FadeAndKill;
class CSceneObjectData;
class FeTreeChildren_t;
class CNavVolumeSphericalShell;
class CSceneObjectReference_t;
class C_INIT_RandomRadius;
class C_INIT_RandomVectorComponent;
class AnimResourceIKChain_t;
class SlideMaterialList_t;
class C_INIT_RandomAlphaWindowThreshold;
class C_INIT_VelocityRandom;
class AnimResourceIKTargetInfo_t;
class CCollisionProperty;
class CHintMessageQueue;
class C_BaseAnimatingController;
class CSoundPatch;
class WorldLighting_t;
class C_INIT_NormalAlignToCP;
class EventClientOutput_t;
class CRMSG_Manifest_New;
class CSchemaClassInfo;
class C_OP_SnapshotSkinToBones;
class C_OP_RemapBoundingVolumetoCP;
class EventClientProcessInput_t;
class InfoForResourceTypePRTMatrixData_t;
class PlayerResourcePlayerData_t;
class CEnvWindShared;
class C_OP_RenderRopes;
class C_INIT_RadiusFromCPObject;
class C_INIT_SequenceLifeTime;
class CRMSG_Resource_Event;
class ResourceArgumentDependency_t;
class IHandleEntity;
class C_OP_RenderAsModels;
class C_OP_InterpolateRadius;
class C_INIT_PositionPlaceOnGround;
class AnimResourceIKLink_t;
class AnimResourceActivity_t;
class AnimResourceUserDifference_t;
class C_PlayerLocalData;
class C_OP_RenderClothForce;
class C_OP_RenderSprites;
class C_OP_TimeVaryingForce;
class CEnvCubemapBase;
class ConceptHistory_t;
class C_OP_RemapDirectionToCPToVector;
class C_OP_RemapModelVolumetoCP;
class VPhysics2ShapeDef_t;
class CResponseQueue;
class CBaseAnimatingOverlayController;
class C_OP_WorldCollideConstraint;
class C_OP_ColorInterpolate;
class ItemDropData_t;
class IParticleCollection;
class C_INIT_CodeDriven;
class InfoForResourceTypeWorld_t;
class InfoForResourceTypeCEntityLump;
class CParticleProperty;
class MaterialParamVector_t;
class VertexPositionNormal_t;
class C_OP_SetSingleControlPointPosition;
class C_CEnvWindShared;
class CSchemaBaseClassInfo;
class CPlayerState;
class CEntityClass;
class C_OP_VelocityDecay;
class C_OP_LerpVector;
class C_INIT_RemapCPOrientationToRotations;
class VPhysXRange_t;
class CSchemaSystemInternalRegistration;
class sPendingTreeRemoval;
class CollisionGroupContext_t;
class AnimResourceEncodeDifference_t;
class CStopwatchBase;
class C_OP_RenderModels;
class SosEditItemInfo_t;
class EventClientPollInput_t;
class CBuilderModelInfo;
class FeFitInfluence_t;
class CGameSceneNode;
class C_OP_ConstantForce;
class C_INIT_RandomYaw;
class FeSimdQuad_t;
class ResourceEditStringData_t;
class EventClientPostAdvanceTick_t;
class GameChatLogEntry_t;
class CBaseServerVehicle;
class CRandStopwatch;
class C_OP_WorldTraceConstraint;
class VPhysXBodyPart_t;
class CPortraitData;
class INextBotReply;
class C_INIT_CreateFromPlaneCache;
class SequenceGroupResourceData_t;
class SeqResourcePoseParamDesc_t;
class InfoForResourceTypeCModel;
class CRMSG_Resource_ExtReference;
class EntInput_t;
class BuilderModelBoneFlexDriverControl_t;
class CRenderablePortraitData;
class CSchemaMetadataSet;
class ConstraintSoundInfo;
class IHasAttributes;
class RemnantData_t;
class CParticleSystemDefinition;
class C_OP_LockToBone;
class C_OP_SpinUpdate;
class EventClientSimulate_t;
class CEntityIdentity;
class WorldEnvironmentMap_t;
class CResourceDiskEnumValue;
class CDOTA_AttackRecord;
class CNewParticleEffect;
class DOTASpecialAbility_t;
class sSpiritDef;
class C_INIT_RandomRotation;
class FeKelagerBend_t;
class SeqResourceCmdSeqDesc_t;
class MaterialParamString_t;
class CHitBoxSetList;
class RnBlendVertex_t;
class VsInputSignature_t;
class InfoForResourceTypeCPostProcessingResource;
class SchemaStaticFieldData_t;
class InfoOverlayData_t;
class C_OP_FadeInSimple;
class C_INIT_CreateWithinBox;
class C_OP_RenderScreenVelocityRotate;
class PlayerLocomotion;
class C_INIT_RemapCPtoVector;
class C_INIT_RandomModelSequence;
class SelectedEditItemInfo_t;
class CPhysSurfaceProperties;
class C_LightGlowOverlay;
class CSSDSMsg_PostLayer;
class IControlPointEditorData;
class VPhysXConstraint2_t;
class ResourceManifest_t;
class CAttributeContainer;
class IrradVolume_t;
class C_OP_LockPoints;
class C_OP_RemapCPtoVelocity;
class EventPreDataUpdate_t;
class Relationship_t;
class World_t;
class C_OP_RenderFogSprites;
class InfoForResourceTypeVBitmapFontRuntimeData_t;
class TimedBalanceRecord_t;
class C_OP_DistanceBetweenCPs;
class C_OP_RenderStatusEffect;
class AnimResourceBone_t;
class CHitBoxSet;
class PostProcessingResource_t;
class FeSimdTri_t;
class CHeadlightEffect;
class sSpiritInfo;
class C_OP_SetControlPointRotation;
class AttachmentData_t;
class CRMSG_Resource_NewId;
class PRTMatrixData_t;
class CPVSData;
class C_OP_PlanarConstraint;
class NodeData_t;
class C_OP_PercentageBetweenCPs;
class EventServerProcessNetworking_t;
class CMaterialDrawDescriptor;
class CInterpolatedValue;
class CMotorController;
class NextBotGroundLocomotion;
class C_OP_RemapParticleCountOnScalarEndCap;
class IIntention;
class CNavVolumeMarkupVolume;
class EntityKeyValueData_t;
class C_OP_RandomForce;
class C_OP_SetControlPointToImpactPoint;
class VPhysXDiskCapsule_t;
class FeTaperedCapsuleStretch_t;
class CDOTAGamerules;
class EntComponentInfo_t;
class C_OP_RenderGrid;
class C_INIT_RandomTrailLength;
class C_OP_ConstrainDistanceToPath;
class sLoadoutItem;
class CRagdoll;
class C_INIT_CreateAlongPath;
class CRenderMesh;
class CSchemaStaticField;
class constraint_hingeparams_t;
class MaterialDrawDescriptor_t;
class C_BaseAnimatingOverlayController;
class C_OP_CPOffsetToPercentageBetweenCPs;
class C_OP_ParentVortices;
class C_OP_MaintainEmitter;
class SeqResourceCmdLayer_t;
class CSkeletonInstance;
class CFourWheelServerVehicle;
class C_OP_RemapCPOrientationToRotations;
class SeqResourcePoseSetting_t;
class InfoForResourceTypeCNameListEvents;
class InfoForResourceTypeIMaterial2;
class ResourceExtRefList_t;
class c_vehicleview_t;
class C_INIT_CreateGrid;
class AnimResourceMorphDifference_t;
class FeSimdFitMatrices_t;
class CNavVolumeBreadthFirstSearch;
class C_OP_RemapDotProductToScalar;
class C_OP_SetPerChildControlPoint;
class CDOTA_ActionRunner;
class C_OP_MaintainSequentialPath;
class InfoForResourceTypeProcessingGraphInstance_t;
class C_CSequenceTransitioner;
class C_OP_Decay;
class InfoForResourceTypeCWorldVisibility;
class CSpotlightTraceCacheEntry;
class vehicle_crashsound_t;
class locksound_t;
class C_INIT_ColorLitPerParticle;
class C_INIT_CreatePhyllotaxis;
class AnimResourceEncodedFrames_t;
class C_OP_FadeOutSimple;
class C_INIT_SetHitboxToClosest;
class C_INIT_CreateOnModelAtHeight;
class C_INIT_RingWave;
class VPhysXJoint_t;
class CDOTA_Tree;
class RnMeshDesc_t;
#pragma pack(push, 4)
class fogparams_t : public SchemaBase
{
// fogparams_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> dirPrimary;// 0x4, size 12 (0xc)
	// dirPrimary metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	 // MKeyfieldname
	__declspec(align(1)) UnknownType <0x4, class Color> colorPrimary;// 0x10, size 4 (0x4)
	// colorPrimary metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(1)) UnknownType <0x4, class Color> colorSecondary;// 0x14, size 4 (0x4)
	// colorSecondary metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(1)) UnknownType <0x4, class Color> colorPrimaryLerpTo;// 0x18, size 4 (0x4)
	// colorPrimaryLerpTo metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(1)) UnknownType <0x4, class Color> colorSecondaryLerpTo;// 0x1c, size 4 (0x4)
	// colorSecondaryLerpTo metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float start;// 0x20, size 4 (0x4)
	// start metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float end;// 0x24, size 4 (0x4)
	// end metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float farz;// 0x28, size 4 (0x4)
	// farz metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	 // MKeyfieldname
	__declspec(align(4)) float maxdensity;// 0x2c, size 4 (0x4)
	// maxdensity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float exponent;// 0x30, size 4 (0x4)
	// exponent metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float HDRColorScale;// 0x34, size 4 (0x4)
	// HDRColorScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float skyboxFogFactor;// 0x38, size 4 (0x4)
	// skyboxFogFactor metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float skyboxFogFactorLerpTo;// 0x3c, size 4 (0x4)
	// skyboxFogFactorLerpTo metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float startLerpTo;// 0x40, size 4 (0x4)
	// startLerpTo metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float endLerpTo;// 0x44, size 4 (0x4)
	// endLerpTo metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float maxdensityLerpTo;// 0x48, size 4 (0x4)
	// maxdensityLerpTo metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float lerptime;// 0x4c, size 4 (0x4)
	// lerptime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float duration;// 0x50, size 4 (0x4)
	// duration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	 // MKeyfieldname
	__declspec(align(1)) bool enable;// 0x54, size 1 (0x1)
	// enable metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(1)) bool blend;// 0x55, size 1 (0x1)
	// blend metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(1)) bool m_bNoReflectionFog;// 0x56, size 1 (0x1)
	// m_bNoReflectionFog metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(1)) bool m_bPadding;// 0x57, size 1 (0x1)
}; // size: 88 (0x58)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimationRetargetData_t
{
// AnimationRetargetData_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_bEnableRetarget;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRetargetStyle;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimationRetargetElementData_t > m_element;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimationRetargetChainData_t > m_chain;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_replicated;// 0x18, size 8 (0x8)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_BuffParticle
{
// CDOTA_BuffParticle additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_iIndex;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_iPriority;// 0x4, size 4 (0x4)
	__declspec(align(1)) bool m_bDestroyImmediatly;// 0x8, size 1 (0x1)
	__declspec(align(1)) bool m_bStatusEffect;// 0x9, size 1 (0x1)
	__declspec(align(1)) bool m_bHeroEffect;// 0xa, size 1 (0x1)
	__declspec(align(1)) bool m_bOverheadEffectOffset;// 0xb, size 1 (0x1)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_PlayerChallengeInfo
{
// CDOTA_PlayerChallengeInfo additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char CDOTA_PlayerChallengeInfo_08[0x8];
	__declspec(align(4)) int32_t nType;// 0x8, size 4 (0x4)
	// nType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t nTier;// 0xc, size 4 (0x4)
	// nTier metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t nParam0;// 0x10, size 4 (0x4)
	// nParam0 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t nParam1;// 0x14, size 4 (0x4)
	// nParam1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t nSlotID;// 0x18, size 4 (0x4)
	// nSlotID metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class SimpleConstraintSoundProfile
{
// SimpleConstraintSoundProfile additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class SimpleConstraintsSoundProfileKeypoints_t : unsigned long
	{
		kMIN_THRESHOLD = 0,
		kMIN_FULL = 1,
		kHIGHWATER = 2,
	};

public:
	__declspec(align(4)) SimpleConstraintSoundProfile::SimpleConstraintsSoundProfileKeypoints_t eKeypoints;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_keyPoints[2];// 0x4, size 8 (0x8)
	__declspec(align(4)) float m_reversalSoundThresholds[3];// 0xc, size 12 (0xc)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class CEntityIOOutput
{
// CEntityIOOutput additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char CEntityIOOutput_08[0x8];
public:
	static int32_t Get_sm_nOutputId() {return *(int32_t *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CEntityIOOutput")->m_staticMembers.data[0].m_pInstance; }
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class CVPhysXSurfaceAudioParams
{
// CVPhysXSurfaceAudioParams additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_reflectivity;// 0x0, size 4 (0x4)
	// m_reflectivity metadata
	 // MAttributeName
	__declspec(align(4)) float m_hardnessFactor;// 0x4, size 4 (0x4)
	// m_hardnessFactor metadata
	 // MAttributeName
	__declspec(align(4)) float m_roughnessFactor;// 0x8, size 4 (0x4)
	// m_roughnessFactor metadata
	 // MAttributeName
	__declspec(align(4)) float m_roughThreshold;// 0xc, size 4 (0x4)
	// m_roughThreshold metadata
	 // MAttributeName
	__declspec(align(4)) float m_hardThreshold;// 0x10, size 4 (0x4)
	// m_hardThreshold metadata
	 // MAttributeName
	__declspec(align(4)) float m_hardVelocityThreshold;// 0x14, size 4 (0x4)
	// m_hardVelocityThreshold metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 8)
class SceneViewId_t
{
// SceneViewId_t additional information
// scenesystem.dll, project scenesystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) uint64_t m_nViewId;// 0x0, size 8 (0x8)
	__declspec(align(8)) uint64_t m_nFrameCount;// 0x8, size 8 (0x8)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class CVPhysXSurfaceGameProperties
{
// CVPhysXSurfaceGameProperties additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flMaxSpeedFactor;// 0x0, size 4 (0x4)
	// m_flMaxSpeedFactor metadata
	 // MAttributeName
	__declspec(align(4)) float m_flJumpFactor;// 0x4, size 4 (0x4)
	// m_flJumpFactor metadata
	 // MAttributeName
	__declspec(align(2)) uint16_t m_nMaterial;// 0x8, size 2 (0x2)
	// m_nMaterial metadata
	 // MAttributeName
	__declspec(align(1)) bool m_bClimbable;// 0xa, size 1 (0x1)
	// m_bClimbable metadata
	 // MAttributeName
char CVPhysXSurfaceGameProperties_0C[0x1];
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class RenderSkeletonData_t
{
// RenderSkeletonData_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class FlagEnum_t : unsigned long
	{
		FLAG_BLEND_WEIGHT_COUNT_SHIFT = 0,
		FLAG_BLEND_WEIGHT_COUNT_MASK = 15,
	};

public:
	__declspec(align(2)) uint16_t m_nBoneCount;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nBoneWeightCount;// 0x2, size 2 (0x2)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_bonesHash;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_indexNames;// 0xc, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_indexHash;// 0x14, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x30, class matrix3x4a_t> > m_invBindPose;// 0x1c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SkeletonBoneBbox_t > m_bboxes;// 0x24, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_spheres;// 0x2c, size 8 (0x8)
	__declspec(align(4)) uint32_t m_nFlags;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_boneNames;// 0x38, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_boneParents;// 0x40, size 8 (0x8)
}; // size: 72 (0x48)
#pragma pack(pop)

#pragma pack(push, 4)
class PhysFeModelDesc_t
{
// PhysFeModelDesc_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_CtrlHash;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_CtrlName;// 0x8, size 8 (0x8)
	__declspec(align(4)) uint32_t m_nStaticNodeFlags;// 0x10, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nDynamicNodeFlags;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flLocalForce;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flLocalRotation;// 0x1c, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nNodeCount;// 0x20, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nStaticNodes;// 0x22, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nRotLockStaticNodes;// 0x24, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nSimdTriCount1;// 0x26, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nSimdTriCount2;// 0x28, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nSimdQuadCount1;// 0x2a, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nSimdQuadCount2;// 0x2c, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nQuadCount1;// 0x2e, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nQuadCount2;// 0x30, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nCollisionSphereInclusiveCount;// 0x32, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nTreeDepth;// 0x34, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nFitMatrixCount1;// 0x36, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nFitMatrixCount2;// 0x38, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nSimdFitMatrixCount1;// 0x3a, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nSimdFitMatrixCount2;// 0x3c, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nRopeCount;// 0x3e, size 2 (0x2)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_Ropes;// 0x40, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeNodeBase_t > m_NodeBases;// 0x48, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeSimdNodeBase_t > m_SimdNodeBases;// 0x50, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeQuad_t > m_Quads;// 0x58, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeSimdQuad_t > m_SimdQuads;// 0x60, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeSimdTri_t > m_SimdTris;// 0x68, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeSimdRodConstraint_t > m_SimdRods;// 0x70, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x20, class CTransform> > m_InitPose;// 0x78, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeRodConstraint_t > m_Rods;// 0x80, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeAxialEdgeBend_t > m_AxialEdges;// 0x88, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_NodeInvMasses;// 0x90, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeCtrlOffset_t > m_CtrlOffsets;// 0x98, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeCtrlOsOffset_t > m_CtrlOsOffsets;// 0xa0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeFollowNode_t > m_FollowNodes;// 0xa8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeCollisionSphere_t > m_CollisionSpheres;// 0xb0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeCollisionPlane_t > m_CollisionPlanes;// 0xb8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeNodeIntegrator_t > m_NodeIntegrator;// 0xc0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeSpringIntegrator_t > m_SpringIntegrator;// 0xc8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeSimdSpringIntegrator_t > m_SimdSpringIntegrator;// 0xd0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeWorldCollisionParams_t > m_WorldCollisionParams;// 0xd8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_LegacyStretchForce;// 0xe0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_NodeCollisionRadii;// 0xe8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_LocalRotation;// 0xf0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_LocalForce;// 0xf8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeTaperedCapsuleStretch_t > m_TaperedCapsuleStretches;// 0x100, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeTaperedCapsuleRigid_t > m_TaperedCapsuleRigids;// 0x108, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeSphereRigid_t > m_SphereRigids;// 0x110, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_WorldCollisionNodes;// 0x118, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_TreeParents;// 0x120, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_TreeCollisionMasks;// 0x128, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeTreeChildren_t > m_TreeChildren;// 0x130, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_FreeNodes;// 0x138, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeFitMatrix_t > m_FitMatrices;// 0x140, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeSimdFitMatrices_t > m_SimdFitMatrices;// 0x148, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeFitWeight_t > m_FitWeights;// 0x150, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FeNodeReverseOffset_t > m_ReverseOffsets;// 0x158, size 8 (0x8)
	__declspec(align(4)) uint32_t m_nReserved[30];// 0x160, size 120 (0x78)
	__declspec(align(4)) float m_flWindage;// 0x1d8, size 4 (0x4)
	__declspec(align(4)) float m_flWindDrag;// 0x1dc, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultSurfaceStretch;// 0x1e0, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultThreadStretch;// 0x1e4, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultGravityScale;// 0x1e8, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultVelAirDrag;// 0x1ec, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultExpAirDrag;// 0x1f0, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultVelQuadAirDrag;// 0x1f4, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultExpQuadAirDrag;// 0x1f8, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultVelRodAirDrag;// 0x1fc, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultExpRodAirDrag;// 0x200, size 4 (0x4)
	__declspec(align(4)) float m_flRodVelocitySmoothRate;// 0x204, size 4 (0x4)
	__declspec(align(4)) float m_flQuadVelocitySmoothRate;// 0x208, size 4 (0x4)
	__declspec(align(4)) float m_flAddWorldCollisionRadius;// 0x20c, size 4 (0x4)
	__declspec(align(4)) float m_flDefaultVolumetricSolveAmount;// 0x210, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nRodVelocitySmoothIterations;// 0x214, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nQuadVelocitySmoothIterations;// 0x216, size 2 (0x2)
}; // size: 536 (0x218)
#pragma pack(pop)

#pragma pack(push, 4)
class RnCapsule_t
{
// RnCapsule_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCenter[2];// 0x0, size 24 (0x18)
	__declspec(align(4)) float m_flRadius;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class PostProcessParameters_t : public SchemaBase
{
// PostProcessParameters_t additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flParameters[12];// 0x4, size 48 (0x30)
	// m_flParameters metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 52 (0x34)
#pragma pack(pop)

#pragma pack(push, 4)
class ControlPointReference_t
{
// ControlPointReference_t additional information
// particles.dll, project particles
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) char m_controlPointNameString[64];// 0x0, size 64 (0x40)
	// m_controlPointNameString metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOffsetFromControlPoint;// 0x40, size 12 (0xc)
	// m_vOffsetFromControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOffsetInLocalSpace;// 0x4c, size 1 (0x1)
	// m_bOffsetInLocalSpace metadata
	 // MAttributeName
	 // MDefaultString
char ControlPointReference_t_054[0x7];
}; // size: 84 (0x54)
#pragma pack(pop)

#pragma pack(push, 4)
class CNetworkedSequenceOperation : public SchemaBase
{
// CNetworkedSequenceOperation additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class HSequence> m_hSequence;// 0x4, size 4 (0x4)
	// m_hSequence metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkSerializer
	 // MNetworkChangeCallback
	 // MNetworkPriority
	__declspec(align(4)) float m_flPrevCycle;// 0x8, size 4 (0x4)
	// m_flPrevCycle metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkPriority
	 // MNetworkSendProxyRecipientsFilter
	 // MNetworkUserGroup
	__declspec(align(4)) float m_flCycle;// 0xc, size 4 (0x4)
	// m_flCycle metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkPriority
	 // MNetworkSendProxyRecipientsFilter
	 // MNetworkUserGroup
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_flWeight;// 0x10, size 8 (0x8)
	// m_flWeight metadata
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	__declspec(align(1)) bool m_bSequenceChangeNetworked;// 0x18, size 1 (0x1)
	// m_bSequenceChangeNetworked metadata
	 // MNetworkDisable
	__declspec(align(1)) bool m_bDiscontinuity;// 0x19, size 1 (0x1)
	// m_bDiscontinuity metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flPrevCycleFromDiscontinuity;// 0x1c, size 4 (0x4)
	// m_flPrevCycleFromDiscontinuity metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flPrevCycleForAnimEventDetection;// 0x20, size 4 (0x4)
	// m_flPrevCycleForAnimEventDetection metadata
	 // MNetworkDisable
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 4)
class PostProcessingBloomParameters_t
{
// PostProcessingBloomParameters_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) BloomBlendMode_t m_blendMode;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flBloomStrength;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flScreenBloomStrength;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flBlurBloomStrength;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flBloomThreshold;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flBloomThresholdWidth;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flSkyboxBloomStrength;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flBlurWeight[5];// 0x1c, size 20 (0x14)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vBlurTint[5];// 0x30, size 60 (0x3c)
}; // size: 108 (0x6c)
#pragma pack(pop)

#pragma pack(push, 4)
class LightDesc_t
{
// LightDesc_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) LightType_t m_Type;// 0x0, size 4 (0x4)
	// m_Type metadata
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Color;// 0x4, size 12 (0xc)
	// m_Color metadata
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0xc, class Vector> m_BounceColor;// 0x10, size 12 (0xc)
	// m_BounceColor metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_Range;// 0x1c, size 4 (0x4)
	// m_Range metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_Falloff;// 0x20, size 4 (0x4)
	// m_Falloff metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_Attenuation0;// 0x24, size 4 (0x4)
	// m_Attenuation0 metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_Attenuation1;// 0x28, size 4 (0x4)
	// m_Attenuation1 metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_Attenuation2;// 0x2c, size 4 (0x4)
	// m_Attenuation2 metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_Theta;// 0x30, size 4 (0x4)
	// m_Theta metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_Phi;// 0x34, size 4 (0x4)
	// m_Phi metadata
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_lightCookie;// 0x38, size 4 (0x4)
	// m_lightCookie metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bCastShadows;// 0x3c, size 1 (0x1)
	// m_bCastShadows metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t m_nShadowWidth;// 0x40, size 4 (0x4)
	// m_nShadowWidth metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t m_nShadowHeight;// 0x44, size 4 (0x4)
	// m_nShadowHeight metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bRenderDiffuse;// 0x48, size 1 (0x1)
	// m_bRenderDiffuse metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bRenderSpecular;// 0x49, size 1 (0x1)
	// m_bRenderSpecular metadata
	 // MKeyfieldname
	__declspec(align(4)) LightSourceShape_t m_Shape;// 0x4c, size 4 (0x4)
	// m_Shape metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flLightSourceDim0;// 0x50, size 4 (0x4)
	// m_flLightSourceDim0 metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flLightSourceDim1;// 0x54, size 4 (0x4)
	// m_flLightSourceDim1 metadata
	 // MKeyfieldname
char LightDesc_t_070[0x18];
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecUp;// 0x70, size 12 (0xc)
char LightDesc_t_094[0x18];
}; // size: 148 (0x94)
#pragma pack(pop)

#pragma pack(push, 4)
class EngineLoopState_t
{
// EngineLoopState_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char EngineLoopState_t_0C[0xC];
	__declspec(align(4)) int32_t m_nPlatWindowWidth;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPlatWindowHeight;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRenderWidth;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRenderHeight;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 1)
class RnFace_t
{
// RnFace_t additional information
// engine2.dll, project modellib
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) uint8_t m_nEdge;// 0x0, size 1 (0x1)
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCNameListStacks
{
// InfoForResourceTypeCNameListStacks additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCNameListStacks_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 2)
class ChangeAccessorFieldPathIndex_t
{
// ChangeAccessorFieldPathIndex_t additional information
// server.dll, project server
// Alignment: 2
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) int16_t m_Value;// 0x0, size 2 (0x2)
}; // size: 2 (0x2)
#pragma pack(pop)

#pragma pack(push, 4)
class CEconItemAttribute : public SchemaBase
{
// CEconItemAttribute additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char CEconItemAttribute_0A[0x6];
	__declspec(align(2)) uint16_t m_iAttributeDefinitionIndex;// 0xa, size 2 (0x2)
	// m_iAttributeDefinitionIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flValue;// 0xc, size 4 (0x4)
	// m_flValue metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkAlias
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class EventSimulate_t
{
// EventSimulate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(1)) bool m_bFirstTick;// 0x1c, size 1 (0x1)
	__declspec(align(1)) bool m_bLastTick;// 0x1d, size 1 (0x1)
char EventSimulate_t_020[0x2];
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 1)
class SlideKeywordList_t
{
// SlideKeywordList_t additional information
// server.dll, project server
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) char szSlideKeyword[64];// 0x0, size 64 (0x40)
}; // size: 64 (0x40)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourceIKLock_t
{
// SeqResourceIKLock_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) int16_t m_nLocalBone;// 0x0, size 2 (0x2)
	__declspec(align(4)) float m_flPosWeight;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flAngleWeight;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 1)
class AnimResourceAnimDesc_t_Flag_t
{
// AnimResourceAnimDesc_t_Flag_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) bool m_bLooping;// 0x0, size 1 (0x1)
	__declspec(align(1)) bool m_bAllZeros;// 0x1, size 1 (0x1)
	__declspec(align(1)) bool m_bHidden;// 0x2, size 1 (0x1)
	__declspec(align(1)) bool m_bDelta;// 0x3, size 1 (0x1)
	__declspec(align(1)) bool m_bLegacyWorldspace;// 0x4, size 1 (0x1)
}; // size: 5 (0x5)
#pragma pack(pop)

#pragma pack(push, 1)
class EventModInitialized_t
{
// EventModInitialized_t additional information
// engine2.dll, project engine2
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char EventModInitialized_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class PermModelInfo_t
{
// PermModelInfo_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class FlagEnum : unsigned long
	{
		FLAG_TRANSLUCENT = 1,
		FLAG_TRANSLUCENT_TWO_PASS = 2,
		FLAG_MODEL_IS_RUNTIME_COMBINED = 4,
		FLAG_SOURCE1_IMPORT = 8,
		FLAG_MODEL_PART_CHILD = 16,
		FLAG_NAV_GEN_NONE = 32,
		FLAG_NAV_GEN_HULL = 64,
		FLAG_NO_FORCED_FADE = 2048,
		FLAG_HAS_SKINNED_MESHES = 1024,
		FLAG_DO_NOT_CAST_SHADOWS = 131072,
		FLAG_FORCE_PHONEME_CROSSFADE = 4096,
		FLAG_NO_ANIM_EVENTS = 1048576,
		FLAG_ANIMATION_DRIVEN_FLEXES = 2097152,
		FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 4194304,
		FLAG_USE_ORIGIN_AS_UNKNOWN_ATTACHMENT_POINT = 1048576,
	};

public:
	__declspec(align(4)) uint32_t m_nFlags;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vHullMin;// 0x4, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vHullMax;// 0x10, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vViewMin;// 0x1c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vViewMax;// 0x28, size 12 (0xc)
	__declspec(align(4)) float m_flMass;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vEyePosition;// 0x38, size 12 (0xc)
	__declspec(align(4)) float m_flMaxEyeDeflection;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sSurfaceProperty;// 0x48, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_keyValueText;// 0x4c, size 4 (0x4)
}; // size: 80 (0x50)
#pragma pack(pop)

#pragma pack(push, 4)
class PostProcessingVignetteParameters_t
{
// PostProcessingVignetteParameters_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flVignetteStrength;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x8, class Vector2D> m_vCenter;// 0x4, size 8 (0x8)
	__declspec(align(4)) float m_flRadius;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flRoundness;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flFeather;// 0x14, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vColorTint;// 0x18, size 12 (0xc)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 4)
class MaterialGroup_t
{
// MaterialGroup_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > > m_materials;// 0x4, size 8 (0x8)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class IContextualQuery : public SchemaBase
{
// IContextualQuery additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
}; // size: 4 (0x4)
#pragma pack(pop)

class CAI_Expresser : public SchemaBase
{
// CAI_Expresser additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CAI_Expresser_02C[0x28];
	__declspec(align(4)) float m_flStopTalkTime;// 0x2c, size 4 (0x4)
	__declspec(align(4)) float m_flStopTalkTimeWithoutDelay;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flBlockedTalkTime;// 0x34, size 4 (0x4)
	__declspec(align(4)) int32_t m_voicePitch;// 0x38, size 4 (0x4)
	__declspec(align(4)) float m_flLastTimeAcceptedSpeak;// 0x3c, size 4 (0x4)
	__declspec(align(4)) CBaseFlex *m_pOuter;// 0x40, size 4 (0x4)
}; // size: 68 (0x44)

#pragma pack(push, 4)
class CParticleVisibilityInputs
{
// CParticleVisibilityInputs additional information
// particles.dll, project particles
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flCameraBias;// 0x0, size 4 (0x4)
	// m_flCameraBias metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flInputMin;// 0x4, size 4 (0x4)
	// m_flInputMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flInputMax;// 0x8, size 4 (0x4)
	// m_flInputMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flAlphaScaleMin;// 0xc, size 4 (0x4)
	// m_flAlphaScaleMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flAlphaScaleMax;// 0x10, size 4 (0x4)
	// m_flAlphaScaleMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flRadiusScaleMin;// 0x14, size 4 (0x4)
	// m_flRadiusScaleMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flRadiusScaleMax;// 0x18, size 4 (0x4)
	// m_flRadiusScaleMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flRadiusScaleFOVBase;// 0x1c, size 4 (0x4)
	// m_flRadiusScaleFOVBase metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flProxyRadius;// 0x20, size 4 (0x4)
	// m_flProxyRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flDistanceInputMin;// 0x24, size 4 (0x4)
	// m_flDistanceInputMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flDistanceInputMax;// 0x28, size 4 (0x4)
	// m_flDistanceInputMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flDotInputMin;// 0x2c, size 4 (0x4)
	// m_flDotInputMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flDotInputMax;// 0x30, size 4 (0x4)
	// m_flDotInputMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flNoPixelVisibilityFallback;// 0x34, size 4 (0x4)
	// m_flNoPixelVisibilityFallback metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nCPin;// 0x38, size 4 (0x4)
	// m_nCPin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
}; // size: 60 (0x3c)
#pragma pack(pop)

#pragma pack(push, 4)
class EventServerPollNetworking_t : public EventSimulate_t
{
// EventServerPollNetworking_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class VPhysXConstraintParams_t
{
// VPhysXConstraintParams_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class EnumFlags0_t : unsigned long
	{
		FLAG0_SHIFT_INTERPENETRATE = 0,
		FLAG0_SHIFT_CONSTRAIN = 1,
		FLAG0_SHIFT_BREAKABLE_FORCE = 2,
		FLAG0_SHIFT_BREAKABLE_TORQUE = 3,
	};

public:
	__declspec(align(1)) int8_t m_nType;// 0x0, size 1 (0x1)
	__declspec(align(1)) int8_t m_nTranslateMotion;// 0x1, size 1 (0x1)
	__declspec(align(1)) int8_t m_nRotateMotion;// 0x2, size 1 (0x1)
	__declspec(align(1)) int8_t m_nFlags;// 0x3, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_anchor[2];// 0x4, size 24 (0x18)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_axes[2];// 0x1c, size 32 (0x20)
	__declspec(align(4)) float m_maxForce;// 0x3c, size 4 (0x4)
	__declspec(align(4)) float m_maxTorque;// 0x40, size 4 (0x4)
	__declspec(align(4)) float m_linearLimitValue;// 0x44, size 4 (0x4)
	__declspec(align(4)) float m_linearLimitRestitution;// 0x48, size 4 (0x4)
	__declspec(align(4)) float m_linearLimitSpring;// 0x4c, size 4 (0x4)
	__declspec(align(4)) float m_linearLimitDamping;// 0x50, size 4 (0x4)
	__declspec(align(4)) float m_twistLowLimitValue;// 0x54, size 4 (0x4)
	__declspec(align(4)) float m_twistLowLimitRestitution;// 0x58, size 4 (0x4)
	__declspec(align(4)) float m_twistLowLimitSpring;// 0x5c, size 4 (0x4)
	__declspec(align(4)) float m_twistLowLimitDamping;// 0x60, size 4 (0x4)
	__declspec(align(4)) float m_twistHighLimitValue;// 0x64, size 4 (0x4)
	__declspec(align(4)) float m_twistHighLimitRestitution;// 0x68, size 4 (0x4)
	__declspec(align(4)) float m_twistHighLimitSpring;// 0x6c, size 4 (0x4)
	__declspec(align(4)) float m_twistHighLimitDamping;// 0x70, size 4 (0x4)
	__declspec(align(4)) float m_swing1LimitValue;// 0x74, size 4 (0x4)
	__declspec(align(4)) float m_swing1LimitRestitution;// 0x78, size 4 (0x4)
	__declspec(align(4)) float m_swing1LimitSpring;// 0x7c, size 4 (0x4)
	__declspec(align(4)) float m_swing1LimitDamping;// 0x80, size 4 (0x4)
	__declspec(align(4)) float m_swing2LimitValue;// 0x84, size 4 (0x4)
	__declspec(align(4)) float m_swing2LimitRestitution;// 0x88, size 4 (0x4)
	__declspec(align(4)) float m_swing2LimitSpring;// 0x8c, size 4 (0x4)
	__declspec(align(4)) float m_swing2LimitDamping;// 0x90, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_goalPosition;// 0x94, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_goalOrientation;// 0xa0, size 16 (0x10)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_goalAngularVelocity;// 0xb0, size 12 (0xc)
	__declspec(align(4)) float m_driveSpringX;// 0xbc, size 4 (0x4)
	__declspec(align(4)) float m_driveSpringY;// 0xc0, size 4 (0x4)
	__declspec(align(4)) float m_driveSpringZ;// 0xc4, size 4 (0x4)
	__declspec(align(4)) float m_driveDampingX;// 0xc8, size 4 (0x4)
	__declspec(align(4)) float m_driveDampingY;// 0xcc, size 4 (0x4)
	__declspec(align(4)) float m_driveDampingZ;// 0xd0, size 4 (0x4)
	__declspec(align(4)) float m_driveSpringTwist;// 0xd4, size 4 (0x4)
	__declspec(align(4)) float m_driveSpringSwing;// 0xd8, size 4 (0x4)
	__declspec(align(4)) float m_driveSpringSlerp;// 0xdc, size 4 (0x4)
	__declspec(align(4)) float m_driveDampingTwist;// 0xe0, size 4 (0x4)
	__declspec(align(4)) float m_driveDampingSwing;// 0xe4, size 4 (0x4)
	__declspec(align(4)) float m_driveDampingSlerp;// 0xe8, size 4 (0x4)
	__declspec(align(4)) int32_t m_solverIterationCount;// 0xec, size 4 (0x4)
	__declspec(align(4)) float m_projectionLinearTolerance;// 0xf0, size 4 (0x4)
	__declspec(align(4)) float m_projectionAngularTolerance;// 0xf4, size 4 (0x4)
}; // size: 248 (0xf8)
#pragma pack(pop)

#pragma pack(push, 4)
class audioparams_t : public SchemaBase
{
// audioparams_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> localSound[8];// 0x4, size 96 (0x60)
	// localSound metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) int32_t soundscapeIndex;// 0x64, size 4 (0x4)
	// soundscapeIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) uint8_t localBits;// 0x68, size 1 (0x1)
	// localBits metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
char audioparams_t_06C[0x3];
	__declspec(align(4)) int32_t soundscapeEntityListIndex;// 0x6c, size 4 (0x4)
	// soundscapeEntityListIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 1)
class SeqResourceMultiFetch_t_Flag_t
{
// SeqResourceMultiFetch_t_Flag_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool m_bRealtime;// 0x0, size 1 (0x1)
	__declspec(align(1)) bool m_bCylepose;// 0x1, size 1 (0x1)
	__declspec(align(1)) bool m_b0D;// 0x2, size 1 (0x1)
	__declspec(align(1)) bool m_b1D;// 0x3, size 1 (0x1)
	__declspec(align(1)) bool m_b2D;// 0x4, size 1 (0x1)
	__declspec(align(1)) bool m_b2D_TRI;// 0x5, size 1 (0x1)
}; // size: 6 (0x6)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourceTransition_t
{
// SeqResourceTransition_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flFadeInTime;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flFadeOutTime;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class ModelSkeletonData_t
{
// ModelSkeletonData_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class BoneFlags_t : unsigned long
	{
		FLAG_NO_BONE_FLAGS = 0,
		FLAG_BONEFLEXDRIVER = 4,
		FLAG_CLOTH = 8,
		FLAG_PHYSICS = 16,
		FLAG_ATTACHMENT = 32,
		FLAG_ANIMATION = 64,
		FLAG_MESH = 128,
		FLAG_HITBOX = 256,
		FLAG_RETARGET_SRC = 512,
		FLAG_BONE_USED_BY_VERTEX_LOD0 = 1024,
		FLAG_BONE_USED_BY_VERTEX_LOD1 = 2048,
		FLAG_BONE_USED_BY_VERTEX_LOD2 = 4096,
		FLAG_BONE_USED_BY_VERTEX_LOD3 = 8192,
		FLAG_BONE_USED_BY_VERTEX_LOD4 = 16384,
		FLAG_BONE_USED_BY_VERTEX_LOD5 = 32768,
		FLAG_BONE_USED_BY_VERTEX_LOD6 = 65536,
		FLAG_BONE_USED_BY_VERTEX_LOD7 = 131072,
		FLAG_BONE_MERGE_READ = 262144,
		FLAG_BONE_MERGE_WRITE = 524288,
		FLAG_ALL_BONE_FLAGS = 1048575,
		BLEND_PREALIGNED = 1048576,
		FLAG_RIGIDLENGTH = 2097152,
		FLAG_PROCEDURAL = 4194304,
	};

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_boneName;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int16_t > m_nParent;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_boneSphere;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_nFlag;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0xc, class Vector> > m_bonePosParent;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x10, class Quaternion> > m_boneRotParent;// 0x28, size 8 (0x8)
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 4)
class SchemaMetadataSetData_t
{
// SchemaMetadataSetData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, class SchemaMetadataEntryData_t > m_StaticEntries;// 0x0, size 8 (0x8)
char SchemaMetadataSetData_t_010[0x8];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class constraint_axislimit_t
{
// constraint_axislimit_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flMinRotation;// 0x0, size 4 (0x4)
	__declspec(align(4)) float flMaxRotation;// 0x4, size 4 (0x4)
	__declspec(align(4)) float flMotorTargetAngSpeed;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flMotorMaxTorque;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceSequenceParams_t
{
// AnimResourceSequenceParams_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flFadeInTime;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flFadeOutTime;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

class CParticleOperatorInstance : public SchemaBase
{
// CParticleOperatorInstance additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) float m_flOpStartFadeInTime;// 0x4, size 4 (0x4)
	// m_flOpStartFadeInTime metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpEndFadeInTime;// 0x8, size 4 (0x4)
	// m_flOpEndFadeInTime metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpStartFadeOutTime;// 0xc, size 4 (0x4)
	// m_flOpStartFadeOutTime metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpEndFadeOutTime;// 0x10, size 4 (0x4)
	// m_flOpEndFadeOutTime metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpFadeOscillatePeriod;// 0x14, size 4 (0x4)
	// m_flOpFadeOscillatePeriod metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpTimeOffsetMin;// 0x18, size 4 (0x4)
	// m_flOpTimeOffsetMin metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpTimeOffsetMax;// 0x1c, size 4 (0x4)
	// m_flOpTimeOffsetMax metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nOpTimeOffsetSeed;// 0x20, size 4 (0x4)
	// m_nOpTimeOffsetSeed metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nOpStrengthScaleSeed;// 0x24, size 4 (0x4)
	// m_nOpStrengthScaleSeed metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpStrengthMinScale;// 0x28, size 4 (0x4)
	// m_flOpStrengthMinScale metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpStrengthMaxScale;// 0x2c, size 4 (0x4)
	// m_flOpStrengthMaxScale metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nOpTimeScaleSeed;// 0x30, size 4 (0x4)
	// m_nOpTimeScaleSeed metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpTimeScaleMin;// 0x34, size 4 (0x4)
	// m_flOpTimeScaleMin metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flOpTimeScaleMax;// 0x38, size 4 (0x4)
	// m_flOpTimeScaleMax metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
char CParticleOperatorInstance_03D[0x1];
	__declspec(align(1)) bool m_bDisableOperator;// 0x3d, size 1 (0x1)
	// m_bDisableOperator metadata
	 // MPropertySortPriority
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOpEndCapState;// 0x40, size 4 (0x4)
	// m_nOpEndCapState metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOpScaleCP;// 0x44, size 4 (0x4)
	// m_nOpScaleCP metadata
	 // MPropertyGroupName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Notes;// 0x48, size 4 (0x4)
	// m_Notes metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleHelpField
char CParticleOperatorInstance_060[0x14];
}; // size: 96 (0x60)

#pragma pack(push, 4)
class ResourceDefRefList_t
{
// ResourceDefRefList_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceReferenceInfo_t > m_resourceRefInfoList;// 0x0, size 8 (0x8)
}; // size: 8 (0x8)
#pragma pack(pop)

class CParticlePerFrameOperatorInstance : public CParticleOperatorInstance
{
// CParticlePerFrameOperatorInstance additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
}; // size: 96 (0x60)

#pragma pack(push, 16)
class C_OP_InheritFromParentParticles : public CParticlePerFrameOperatorInstance
{
// C_OP_InheritFromParentParticles additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flScale;// 0x60, size 4 (0x4)
	// m_flScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nIncrement;// 0x68, size 4 (0x4)
	// m_nIncrement metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRandomDistribution;// 0x6c, size 1 (0x1)
	// m_bRandomDistribution metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_InheritFromParentParticles_070[0x3];
}; // size: 112 (0x70)
#pragma pack(pop)

class CGeneralSpin : public CParticlePerFrameOperatorInstance
{
// CGeneralSpin additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// Abstract Class

public:
	__declspec(align(4)) int32_t m_nSpinRateDegrees;// 0x60, size 4 (0x4)
	// m_nSpinRateDegrees metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nSpinRateMinDegrees;// 0x64, size 4 (0x4)
	// m_nSpinRateMinDegrees metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
char CGeneralSpin_06C[0x4];
	__declspec(align(4)) float m_fSpinRateStopTime;// 0x6c, size 4 (0x4)
	// m_fSpinRateStopTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
char CGeneralSpin_080[0x10];
}; // size: 128 (0x80)

#pragma pack(push, 4)
class SchemaMetadataEntryData_t
{
// SchemaMetadataEntryData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownType <0x8, class SchemaString_t> m_Name;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class CSchemaType> *m_pDataType;// 0x8, size 4 (0x4)
char SchemaMetadataEntryData_t_010[0x4];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class CGlowSprite
{
// CGlowSprite additional information
// client.dll, project client
// Alignment: 4

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vColor;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_flHorzSize;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flVertSize;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeIMaterial2 > m_hMaterial;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)
#pragma pack(pop)

class CNavVolume : public SchemaBase
{
// CNavVolume additional information
// server.dll, project navlib
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CNavVolume_048[0x44];
}; // size: 72 (0x48)

#pragma pack(push, 4)
class CNetworkVarChainer
{
// CNetworkVarChainer additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char CNetworkVarChainer_04[0x4];
	__declspec(align(2)) ChangeAccessorFieldPathIndex_t m_PathIndex;// 0x4, size 2 (0x2)
	// m_PathIndex metadata
	 // MNetworkDisable
char CNetworkVarChainer_0C[0x6];
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_MoveToHitbox : public CParticlePerFrameOperatorInstance
{
// C_OP_MoveToHitbox additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
char C_OP_MoveToHitbox_068[0x4];
	__declspec(align(4)) float m_flLifeTimeLerpStart;// 0x68, size 4 (0x4)
	// m_flLifeTimeLerpStart metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLifeTimeLerpEnd;// 0x6c, size 4 (0x4)
	// m_flLifeTimeLerpEnd metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flPrevPosScale;// 0x70, size 4 (0x4)
	// m_flPrevPosScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_HitboxSetName[128];// 0x74, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseBones;// 0xf4, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_MoveToHitbox_0100[0xB];
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 4)
class CBaseNugget : public SchemaBase
{
// CBaseNugget additional information
// vscript.dll, project vscript
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
char CBaseNugget_010[0xC];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class EventProfileStorageAvailable_t
{
// EventProfileStorageAvailable_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nSplitScreenSlot;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class CUserCommandContext
{
// CUserCommandContext additional information
// server.dll, project server
// Alignment: 4

public:
char CUserCommandContext_010[0x10];
	__declspec(align(4)) int32_t numcmds;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t totalcmds;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t dropped_packets;// 0x18, size 4 (0x4)
	__declspec(align(1)) bool paused;// 0x1c, size 1 (0x1)
char CUserCommandContext_020[0x3];
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapCPVelocityToVector : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPVelocityToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPoint;// 0x60, size 4 (0x4)
	// m_nControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flScale;// 0x68, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bNormalize;// 0x6c, size 1 (0x1)
	// m_bNormalize metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapCPVelocityToVector_070[0x3];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class CGameSceneNodeHandle : public SchemaBase
{
// CGameSceneNodeHandle additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CEntityHandle> m_hOwner;// 0x4, size 4 (0x4)
	// m_hOwner metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_name;// 0x8, size 4 (0x4)
	// m_name metadata
	 // MNetworkEnable
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class CountdownTimer : public SchemaBase
{
// CountdownTimer additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_duration;// 0x4, size 4 (0x4)
	// m_duration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_timestamp;// 0x8, size 4 (0x4)
	// m_timestamp metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bUseGlobalsTime;// 0xc, size 1 (0x1)
char CountdownTimer_010[0x3];
}; // size: 16 (0x10)
#pragma pack(pop)

class CParticleRenderOperatorInstance : public CParticleOperatorInstance
{
// CParticleRenderOperatorInstance additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
	__declspec(align(4)) CParticleVisibilityInputs VisibilityInputs;// 0x60, size 60 (0x3c)
	// VisibilityInputs metadata
	 // MParticleAdvancedField
char CParticleRenderOperatorInstance_0A0[0x4];
}; // size: 160 (0xa0)

#pragma pack(push, 16)
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointPositionToTimeOfDayValue additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_pszTimeOfDayParameter[128];// 0x64, size 128 (0x80)
	// m_pszTimeOfDayParameter metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDefaultValue;// 0xe4, size 12 (0xc)
	// m_vecDefaultValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointPositionToTimeOfDayValue_0100[0x10];
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetChildControlPoints : public CParticlePerFrameOperatorInstance
{
// C_OP_SetChildControlPoints additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nChildGroupID;// 0x60, size 4 (0x4)
	// m_nChildGroupID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstControlPoint;// 0x64, size 4 (0x4)
	// m_nFirstControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nNumControlPoints;// 0x68, size 4 (0x4)
	// m_nNumControlPoints metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstSourcePoint;// 0x6c, size 4 (0x4)
	// m_nFirstSourcePoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetOrientation;// 0x70, size 1 (0x1)
	// m_bSetOrientation metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetChildControlPoints_080[0xF];
}; // size: 128 (0x80)
#pragma pack(pop)

class CParticleInitializerOperatorInstance : public CParticleOperatorInstance
{
// CParticleInitializerOperatorInstance additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
	__declspec(align(1)) bool m_bRunForParentApplyKillList;// 0x60, size 1 (0x1)
	// m_bRunForParentApplyKillList metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
char CParticleInitializerOperatorInstance_070[0xF];
}; // size: 112 (0x70)

#pragma pack(push, 4)
class TestStruct_1
{
// TestStruct_1 additional information
// vscript.dll, project vscript
// Alignment: 4

public: 
	enum class Enum_e : unsigned long
	{
		ENUM_ZERO = 0,
	};

public: 
	#pragma pack(push, 4)
	class Ints_t
	{
	// TestStruct_1::Ints_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(1)) char m_cVal;// 0x0, size 1 (0x1)
		__declspec(align(1)) int8_t m_int8Val;// 0x1, size 1 (0x1)
		__declspec(align(1)) uint8_t m_uint8Val;// 0x2, size 1 (0x1)
		__declspec(align(2)) int16_t m_int16Val;// 0x4, size 2 (0x2)
		__declspec(align(2)) uint16_t m_uint16Val;// 0x6, size 2 (0x2)
		__declspec(align(4)) int32_t m_int32Val;// 0x8, size 4 (0x4)
		__declspec(align(4)) uint32_t m_uint32Val;// 0xc, size 4 (0x4)
	}; // size: 16 (0x10)
	#pragma pack(pop)

	#pragma pack(push, 4)
	class Range_t
	{
	// TestStruct_1::Range_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(4)) float low;// 0x0, size 4 (0x4)
		__declspec(align(4)) float high;// 0x4, size 4 (0x4)
	}; // size: 8 (0x8)
	#pragma pack(pop)

public:
	__declspec(align(4)) float m_floatVal;// 0x0, size 4 (0x4)
	__declspec(align(1)) bool m_boolVal;// 0x4, size 1 (0x1)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_stringVal;// 0x8, size 4 (0x4)
	__declspec(align(4)) TestStruct_1::Enum_e m_enumVal;// 0xc, size 4 (0x4)
	__declspec(align(4)) TestStruct_1::Ints_t m_ints;// 0x10, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x10, CUtlVector, class TestStruct_1::Range_t > > m_RangeArrays;// 0x20, size 16 (0x10)
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 4)
class CSequenceTransitioner
{
// CSequenceTransitioner additional information
// server.dll, project server
// Alignment: 4

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CAnimationLayer > m_animationQueue;// 0x0, size 16 (0x10)
	__declspec(align(1)) bool m_bIsInSimulation;// 0x10, size 1 (0x1)
	__declspec(align(4)) float m_flSimOrRenderTime;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flInterpolatedTime;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)
#pragma pack(pop)

class CObstructionObject : public SchemaBase
{
// CObstructionObject additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CObstructionObject_08[0x4];
	__declspec(align(4)) int32_t m_nObstructionProperties;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)

#pragma pack(push, 8)
class CRMSG_Entity_Event
{
// CRMSG_Entity_Event additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nEHandle;// 0x0, size 4 (0x4)
	__declspec(align(4)) RMSG_EventType_t m_nEvent;// 0x4, size 4 (0x4)
	__declspec(align(4)) RMSG_SubEventType_t m_nSubEvent;// 0x8, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFrameNumber;// 0xc, size 4 (0x4)
	__declspec(align(8)) int64_t m_nTimeUS;// 0x10, size 8 (0x8)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class CNetworkOriginCellCoordQuantizedVector
{
// CNetworkOriginCellCoordQuantizedVector additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Value;// 0x0, size 12 (0xc)
	// m_Value metadata
	 // MNetworkDisable
	__declspec(align(2)) uint16_t m_cellX;// 0xc, size 2 (0x2)
	// m_cellX metadata
	 // MNetworkBitCount
	 // MNetworkChangeCallback
	 // MNetworkPriority
	 // MNetworkSerializer
	__declspec(align(2)) uint16_t m_cellY;// 0xe, size 2 (0x2)
	// m_cellY metadata
	 // MNetworkBitCount
	 // MNetworkChangeCallback
	 // MNetworkPriority
	 // MNetworkSerializer
	__declspec(align(2)) uint16_t m_cellZ;// 0x10, size 2 (0x2)
	// m_cellZ metadata
	 // MNetworkBitCount
	 // MNetworkChangeCallback
	 // MNetworkPriority
	 // MNetworkSerializer
	__declspec(align(2)) uint16_t m_nOutsideWorld;// 0x12, size 2 (0x2)
	// m_nOutsideWorld metadata
	 // MNetworkBitCount
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecX;// 0x14, size 8 (0x8)
	// m_vecX metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	 // MNetworkPriority
	 // MNetworkSerializer
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecY;// 0x1c, size 8 (0x8)
	// m_vecY metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	 // MNetworkPriority
	 // MNetworkSerializer
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecZ;// 0x24, size 8 (0x8)
	// m_vecZ metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	 // MNetworkPriority
	 // MNetworkSerializer
char CNetworkOriginCellCoordQuantizedVector_030[0x4];
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateFromParentParticles : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateFromParentParticles additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flVelocityScale;// 0x70, size 4 (0x4)
	// m_flVelocityScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flIncrement;// 0x74, size 4 (0x4)
	// m_flIncrement metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRandomDistribution;// 0x78, size 1 (0x1)
	// m_bRandomDistribution metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSubFrame;// 0x79, size 1 (0x1)
	// m_bSubFrame metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateFromParentParticles_080[0x6];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class FeSimdRodConstraint_t
{
// FeSimdRodConstraint_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[4][2];// 0x0, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> f4MaxDist;// 0x10, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> f4MinDist;// 0x20, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> f4Weight0;// 0x30, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> f4RelaxationFactor;// 0x40, size 16 (0x10)
}; // size: 80 (0x50)
#pragma pack(pop)

#pragma pack(push, 4)
class CSSDSMsg_EndFrame
{
// CSSDSMsg_EndFrame additional information
// scenesystem.dll, project scenesystem
// Alignment: 4

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CSSDSEndFrameViewInfo > m_Views;// 0x0, size 16 (0x10)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomColor : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomColor additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char C_INIT_RandomColor_088[0x18];
	__declspec(align(1)) UnknownType <0x4, class Color> m_ColorMin;// 0x88, size 4 (0x4)
	// m_ColorMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_ColorMax;// 0x8c, size 4 (0x4)
	// m_ColorMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_TintMin;// 0x90, size 4 (0x4)
	// m_TintMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_TintMax;// 0x94, size 4 (0x4)
	// m_TintMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTintPerc;// 0x98, size 4 (0x4)
	// m_flTintPerc metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flUpdateThreshold;// 0x9c, size 4 (0x4)
	// m_flUpdateThreshold metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nTintCP;// 0xa0, size 4 (0x4)
	// m_nTintCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0xa4, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) ParticleColorBlendMode_t m_nTintBlendMode;// 0xa8, size 4 (0x4)
	// m_nTintBlendMode metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLightAmplification;// 0xac, size 4 (0x4)
	// m_flLightAmplification metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_InitFromCPSnapshot : public CParticleInitializerOperatorInstance
{
// C_INIT_InitFromCPSnapshot additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nAttributeToRead;// 0x74, size 4 (0x4)
	// m_nAttributeToRead metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nAttributeToWrite;// 0x78, size 4 (0x4)
	// m_nAttributeToWrite metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nLocalSpaceCP;// 0x7c, size 4 (0x4)
	// m_nLocalSpaceCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRandom;// 0x80, size 1 (0x1)
	// m_bRandom metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_InitFromCPSnapshot_090[0xF];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_PositionOffsetToCP : public CParticleInitializerOperatorInstance
{
// C_INIT_PositionOffsetToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumberStart;// 0x70, size 4 (0x4)
	// m_nControlPointNumberStart metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumberEnd;// 0x74, size 4 (0x4)
	// m_nControlPointNumberEnd metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalCoords;// 0x78, size 1 (0x1)
	// m_bLocalCoords metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_PositionOffsetToCP_080[0x7];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCVirtualVolumeTexture
{
// InfoForResourceTypeCVirtualVolumeTexture additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCVirtualVolumeTexture_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class CConstantForceController : public SchemaBase
{
// CConstantForceController additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char CConstantForceController_08[0x4];
	__declspec(align(4)) UnknownType <0xc, class Vector> m_linear;// 0x8, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_angular;// 0x14, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_linearSave;// 0x20, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_angularSave;// 0x2c, size 12 (0xc)
}; // size: 56 (0x38)
#pragma pack(pop)

class INextBotEventResponder : public SchemaBase
{
// INextBotEventResponder additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class EventAdvanceTick_t : public EventSimulate_t
{
// EventAdvanceTick_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nCurrentTick;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTotalTicksThisFrame;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTotalTicks;// 0x28, size 4 (0x4)
}; // size: 44 (0x2c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_Cull : public CParticlePerFrameOperatorInstance
{
// C_OP_Cull additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flCullPerc;// 0x60, size 4 (0x4)
	// m_flCullPerc metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flCullStart;// 0x64, size 4 (0x4)
	// m_flCullStart metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flCullEnd;// 0x68, size 4 (0x4)
	// m_flCullEnd metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flCullExp;// 0x6c, size 4 (0x4)
	// m_flCullExp metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_AgeNoise : public CParticleInitializerOperatorInstance
{
// C_INIT_AgeNoise additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bAbsVal;// 0x70, size 1 (0x1)
	// m_bAbsVal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAbsValInv;// 0x71, size 1 (0x1)
	// m_bAbsValInv metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffset;// 0x74, size 4 (0x4)
	// m_flOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAgeMin;// 0x78, size 4 (0x4)
	// m_flAgeMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAgeMax;// 0x7c, size 4 (0x4)
	// m_flAgeMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseScale;// 0x80, size 4 (0x4)
	// m_flNoiseScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseScaleLoc;// 0x84, size 4 (0x4)
	// m_flNoiseScaleLoc metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffsetLoc;// 0x88, size 12 (0xc)
	// m_vecOffsetLoc metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
char C_INIT_AgeNoise_0A0[0xC];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class MorphData_t
{
// MorphData_t additional information
// meshsystem.dll, project meshsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MorphRectData_t > m_morphRectDatas;// 0x4, size 8 (0x8)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 1)
class SeqResourceSeqDesc_t_Flag_t
{
// SeqResourceSeqDesc_t_Flag_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool m_bLooping;// 0x0, size 1 (0x1)
	__declspec(align(1)) bool m_bSnap;// 0x1, size 1 (0x1)
	__declspec(align(1)) bool m_bAutoplay;// 0x2, size 1 (0x1)
	__declspec(align(1)) bool m_bPost;// 0x3, size 1 (0x1)
	__declspec(align(1)) bool m_bHidden;// 0x4, size 1 (0x1)
	__declspec(align(1)) bool m_bMulti;// 0x5, size 1 (0x1)
	__declspec(align(1)) bool m_bLegacyDelta;// 0x6, size 1 (0x1)
	__declspec(align(1)) bool m_bLegacyWorldspace;// 0x7, size 1 (0x1)
	__declspec(align(1)) bool m_bLegacyCyclepose;// 0x8, size 1 (0x1)
	__declspec(align(1)) bool m_bLegacyRealtime;// 0x9, size 1 (0x1)
}; // size: 10 (0xa)
#pragma pack(pop)

#pragma pack(push, 4)
class CVPhysXSurfacePropertiesList
{
// CVPhysXSurfacePropertiesList additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class CPhysSurfaceProperties > m_surfacePropertiesList;// 0x0, size 8 (0x8)
	// m_surfacePropertiesList metadata
	 // MAttributeName
}; // size: 8 (0x8)
#pragma pack(pop)

class CParticleEmitterOperatorInstance : public CParticleOperatorInstance
{
// CParticleEmitterOperatorInstance additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
}; // size: 96 (0x60)

class CParticleConstraintOperatorInstance : public CParticleOperatorInstance
{
// CParticleConstraintOperatorInstance additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
}; // size: 96 (0x60)

#pragma pack(push, 8)
class MorphSetData_t
{
// MorphSetData_t additional information
// meshsystem.dll, project meshsystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class LookupType_t : unsigned long
	{
		LOOKUP_TYPE_TEXCOORD = 0,
		LOOKUP_TYPE_VERTEX_ID = 1,
		LOOKUP_TYPE_COUNT = 2,
	};

	enum class EncodingType_t : unsigned long
	{
		ENCODING_TYPE_OBJECT_SPACE = 0,
		ENCODING_TYPE_TANGENT_SPACE = 1,
		ENCODING_TYPE_COUNT = 2,
	};

public:
	__declspec(align(4)) int32_t m_nWidth;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nHeight;// 0x4, size 4 (0x4)
	__declspec(align(4)) MorphSetData_t::LookupType_t m_nLookupType;// 0x8, size 4 (0x4)
	__declspec(align(4)) MorphSetData_t::EncodingType_t m_nEncodingType;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, BundleType_t > m_bundleTypes;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MorphData_t > m_morphDatas;// 0x18, size 8 (0x8)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pTextureAtlas;// 0x20, size 8 (0x8)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCMorphSet > > m_pMorphSetBase;// 0x28, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FlexDesc_t > m_FlexDesc;// 0x30, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FlexController_t > m_FlexControllers;// 0x38, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FlexRule_t > m_FlexRules;// 0x40, size 8 (0x8)
}; // size: 72 (0x48)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_BasicMovement : public CParticlePerFrameOperatorInstance
{
// C_OP_BasicMovement additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Gravity;// 0x60, size 12 (0xc)
	// m_Gravity metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_fDrag;// 0x6c, size 4 (0x4)
	// m_fDrag metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) int32_t m_nMaxConstraintPasses;// 0x70, size 4 (0x4)
	// m_nMaxConstraintPasses metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockULCorner;// 0x74, size 1 (0x1)
	// m_bLockULCorner metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockURCorner;// 0x75, size 1 (0x1)
	// m_bLockURCorner metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockLLCorner;// 0x76, size 1 (0x1)
	// m_bLockLLCorner metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockLRCorner;// 0x77, size 1 (0x1)
	// m_bLockLRCorner metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_BasicMovement_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class FlexDesc_t
{
// FlexDesc_t additional information
// meshsystem.dll, project meshsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szFacs;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

class C_VerticalMotionController : public SchemaBase
{
// C_VerticalMotionController additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char C_VerticalMotionController_08[0x4];
}; // size: 8 (0x8)

#pragma pack(push, 4)
class DOTA_AssassinMinigameNetworkState : public SchemaBase
{
// DOTA_AssassinMinigameNetworkState additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) uint16_t nAssassinState;// 0x4, size 2 (0x2)
	// nAssassinState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(2)) uint16_t nVictimHeroID;// 0x6, size 2 (0x2)
	// nVictimHeroID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class thinkfunc_t
{
// thinkfunc_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char thinkfunc_t_04[0x4];
	__declspec(align(4)) UnknownType <0x4, class HSCRIPT> m_hFn;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_nContext;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nNextThinkTick;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nLastThinkTick;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class FileWeaponInfo_t
{
// FileWeaponInfo_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char FileWeaponInfo_t_054[0x54];
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szPrintName;// 0x54, size 4 (0x4)
	// m_szPrintName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szViewModel;// 0x58, size 4 (0x4)
	// m_szViewModel metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szWorldModel;// 0x5c, size 4 (0x4)
	// m_szWorldModel metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szAnimationPrefix;// 0x60, size 4 (0x4)
	// m_szAnimationPrefix metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_iSlot;// 0x64, size 4 (0x4)
	// m_iSlot metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_iPosition;// 0x68, size 4 (0x4)
	// m_iPosition metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_iMaxClip1;// 0x6c, size 4 (0x4)
	// m_iMaxClip1 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_iMaxClip2;// 0x70, size 4 (0x4)
	// m_iMaxClip2 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_iDefaultClip1;// 0x74, size 4 (0x4)
	// m_iDefaultClip1 metadata
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_iDefaultClip2;// 0x78, size 4 (0x4)
	// m_iDefaultClip2 metadata
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_iWeight;// 0x7c, size 4 (0x4)
	// m_iWeight metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_iRumbleEffect;// 0x80, size 4 (0x4)
	// m_iRumbleEffect metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAutoSwitchTo;// 0x84, size 1 (0x1)
	// m_bAutoSwitchTo metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAutoSwitchFrom;// 0x85, size 1 (0x1)
	// m_bAutoSwitchFrom metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_ItemFlagsString;// 0x88, size 4 (0x4)
	// m_ItemFlagsString metadata
	 // MAttributeName
	 // MDefaultString
char FileWeaponInfo_t_090[0x4];
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szAmmo1;// 0x90, size 4 (0x4)
	// m_szAmmo1 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szAmmo2;// 0x94, size 4 (0x4)
	// m_szAmmo2 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szAIAddOn;// 0x98, size 4 (0x4)
	// m_szAIAddOn metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bMeleeWeapon;// 0x9c, size 1 (0x1)
	// m_bMeleeWeapon metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bBuiltRightHanded;// 0x9d, size 1 (0x1)
	// m_bBuiltRightHanded metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAllowFlipping;// 0x9e, size 1 (0x1)
	// m_bAllowFlipping metadata
	 // MAttributeName
	 // MDefaultString
char FileWeaponInfo_t_0A8[0x8];
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class WeaponTextureData_t > m_aTextureData;// 0xa8, size 8 (0x8)
	// m_aTextureData metadata
	 // MAttributeName
char FileWeaponInfo_t_0D4[0x24];
	__declspec(align(1)) bool m_bShowUsageHint;// 0xd4, size 1 (0x1)
	// m_bShowUsageHint metadata
	 // MAttributeName
	 // MDefaultString
char FileWeaponInfo_t_0D8[0x3];
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class WeaponSoundData_t > m_aShootSounds;// 0xd8, size 8 (0x8)
	// m_aShootSounds metadata
	 // MAttributeName
}; // size: 224 (0xe0)
#pragma pack(pop)

class CBaseRendererSource2 : public CParticleRenderOperatorInstance
{
// CBaseRendererSource2 additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) float m_flAnimationRate;// 0xa0, size 4 (0x4)
	// m_flAnimationRate metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(1)) bool m_bFitCycleToLifetime;// 0xa4, size 1 (0x1)
	// m_bFitCycleToLifetime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAnimateInFPS;// 0xa5, size 1 (0x1)
	// m_bAnimateInFPS metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bPerVertexLighting;// 0xa6, size 1 (0x1)
	// m_bPerVertexLighting metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSelfIllumAmount;// 0xa8, size 4 (0x4)
	// m_flSelfIllumAmount metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) float m_flDiffuseAmount;// 0xac, size 4 (0x4)
	// m_flDiffuseAmount metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) float m_flSourceAlphaValueToMapToZero;// 0xb0, size 4 (0x4)
	// m_flSourceAlphaValueToMapToZero metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(4)) float m_flSourceAlphaValueToMapToOne;// 0xb4, size 4 (0x4)
	// m_flSourceAlphaValueToMapToOne metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bGammaCorrectVertexColors;// 0xb8, size 1 (0x1)
	// m_bGammaCorrectVertexColors metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bSaturateColorPreAlphaBlend;// 0xb9, size 1 (0x1)
	// m_bSaturateColorPreAlphaBlend metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) SequenceCombineMode_t m_nSequenceCombineMode;// 0xbc, size 4 (0x4)
	// m_nSequenceCombineMode metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flAnimationRate2;// 0xc0, size 4 (0x4)
	// m_flAnimationRate2 metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(4)) float m_flSequence0RGBWeight;// 0xc4, size 4 (0x4)
	// m_flSequence0RGBWeight metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(4)) float m_flSequence0AlphaWeight;// 0xc8, size 4 (0x4)
	// m_flSequence0AlphaWeight metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(4)) float m_flSequence1RGBWeight;// 0xcc, size 4 (0x4)
	// m_flSequence1RGBWeight metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(4)) float m_flSequence1AlphaWeight;// 0xd0, size 4 (0x4)
	// m_flSequence1AlphaWeight metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(4)) float m_flAddSelfAmount;// 0xd4, size 4 (0x4)
	// m_flAddSelfAmount metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bAdditive;// 0xd8, size 1 (0x1)
	// m_bAdditive metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bMod2X;// 0xd9, size 1 (0x1)
	// m_bMod2X metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bMaxLuminanceBlendingSequence0;// 0xda, size 1 (0x1)
	// m_bMaxLuminanceBlendingSequence0 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bMaxLuminanceBlendingSequence1;// 0xdb, size 1 (0x1)
	// m_bMaxLuminanceBlendingSequence1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRefract;// 0xdc, size 1 (0x1)
	// m_bRefract metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flRefractAmount;// 0xe0, size 4 (0x4)
	// m_flRefractAmount metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(4)) int32_t m_nRefractBlurRadius;// 0xe4, size 4 (0x4)
	// m_nRefractBlurRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) BlurFilterType_t m_nRefractBlurType;// 0xe8, size 4 (0x4)
	// m_nRefractBlurType metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) char m_stencilTestID[128];// 0xec, size 128 (0x80)
	// m_stencilTestID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) char m_stencilWriteID[128];// 0x16c, size 128 (0x80)
	// m_stencilWriteID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bWriteStencilOnDepthPass;// 0x1ec, size 1 (0x1)
	// m_bWriteStencilOnDepthPass metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bWriteStencilOnDepthFail;// 0x1ed, size 1 (0x1)
	// m_bWriteStencilOnDepthFail metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bReverseZBuffering;// 0x1ee, size 1 (0x1)
	// m_bReverseZBuffering metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bDisableZBuffering;// 0x1ef, size 1 (0x1)
	// m_bDisableZBuffering metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bParticleFeathering;// 0x1f0, size 1 (0x1)
	// m_bParticleFeathering metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flFeatheringMinDist;// 0x1f4, size 4 (0x4)
	// m_flFeatheringMinDist metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flFeatheringMaxDist;// 0x1f8, size 4 (0x4)
	// m_flFeatheringMaxDist metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flOverbrightFactor;// 0x1fc, size 4 (0x4)
	// m_flOverbrightFactor metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_hTexture;// 0x200, size 8 (0x8)
	// m_hTexture metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
char CBaseRendererSource2_0210[0x8];
}; // size: 528 (0x210)

#pragma pack(push, 16)
class C_OP_OscillateScalarSimple : public CParticlePerFrameOperatorInstance
{
// C_OP_OscillateScalarSimple additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_Rate;// 0x60, size 4 (0x4)
	// m_Rate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_Frequency;// 0x64, size 4 (0x4)
	// m_Frequency metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nField;// 0x68, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flOscMult;// 0x6c, size 4 (0x4)
	// m_flOscMult metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOscAdd;// 0x70, size 4 (0x4)
	// m_flOscAdd metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_OscillateScalarSimple_0A0[0x2C];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleInitializerOperatorInstance
{
// C_INIT_InitSkinnedPositionFromCPSnapshot additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nSnapshotControlPointNumber;// 0x70, size 4 (0x4)
	// m_nSnapshotControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x74, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRandom;// 0x78, size 1 (0x1)
	// m_bRandom metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRigid;// 0x79, size 1 (0x1)
	// m_bRigid metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetNormal;// 0x7a, size 1 (0x1)
	// m_bSetNormal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bIgnoreDt;// 0x7b, size 1 (0x1)
	// m_bIgnoreDt metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinNormalVelocity;// 0x7c, size 4 (0x4)
	// m_flMinNormalVelocity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxNormalVelocity;// 0x80, size 4 (0x4)
	// m_flMaxNormalVelocity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flIncrement;// 0x84, size 4 (0x4)
	// m_flIncrement metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBoneVelocity;// 0x88, size 4 (0x4)
	// m_flBoneVelocity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBoneVelocityMax;// 0x8c, size 4 (0x4)
	// m_flBoneVelocityMax metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SpringConstraint : public CParticleConstraintOperatorInstance
{
// C_OP_SpringConstraint additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flRestLengthU;// 0x60, size 4 (0x4)
	// m_flRestLengthU metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRestLengthV;// 0x64, size 4 (0x4)
	// m_flRestLengthV metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinDistance;// 0x68, size 4 (0x4)
	// m_flMinDistance metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxDistance;// 0x6c, size 4 (0x4)
	// m_flMaxDistance metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAdjustmentScale;// 0x70, size 4 (0x4)
	// m_flAdjustmentScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SpringConstraint_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class RnShapeDesc_t
{
// RnShapeDesc_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nCollisionAttributeIndex;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nSurfacePropertyIndex;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class CVPhysXMesh
{
// CVPhysXMesh additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_shape;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_pCollisionResourceName;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_pRenderResourceName;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class VPhysXAggregateData_t
{
// VPhysXAggregateData_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class VPhysXFlagEnum_t : unsigned long
	{
		FLAG_IS_POLYSOUP_GEOMETRY = 1,
		FLAG_LEVEL_COLLISION = 16,
		FLAG_IGNORE_SCALE = 32,
	};

public:
	__declspec(align(2)) uint16_t m_nFlags;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nRefCounter;// 0x2, size 2 (0x2)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_bonesHash;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_boneNames;// 0xc, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_indexNames;// 0x14, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_indexHash;// 0x1c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x30, class matrix3x4a_t> > m_bindPose;// 0x24, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class VPhysXBodyPart_t > m_parts;// 0x2c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class VPhysXConstraint2_t > m_constraints2;// 0x34, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class VPhysXJoint_t > m_joints;// 0x3c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x4, CResourcePointer, class PhysFeModelDesc_t > m_pFeModel;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_boneParents;// 0x48, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_surfacePropertyHashes;// 0x50, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class VPhysXCollisionAttributes_t > m_collisionAttributes;// 0x58, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_debugPartNames;// 0x60, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_embeddedKeyvalues;// 0x68, size 4 (0x4)
}; // size: 108 (0x6c)
#pragma pack(pop)

#pragma pack(push, 4)
class CEntityClassInfo
{
// CEntityClassInfo additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x10, class V_uuid_t> m_uuid;// 0x0, size 16 (0x10)
	__declspec(align(4)) char* m_pszClassname;// 0x10, size 4 (0x4)
	__declspec(align(4)) char* m_pszCPPClassname;// 0x14, size 4 (0x4)
	__declspec(align(4)) char* m_pszDescription;// 0x18, size 4 (0x4)
	__declspec(align(4)) CEntityClass *m_pClass;// 0x1c, size 4 (0x4)
	__declspec(align(4)) CEntityClassInfo *m_pBaseClassInfo;// 0x20, size 4 (0x4)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_ModelCull : public CParticleInitializerOperatorInstance
{
// C_INIT_ModelCull additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bBoundBox;// 0x74, size 1 (0x1)
	// m_bBoundBox metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bCullOutside;// 0x75, size 1 (0x1)
	// m_bCullOutside metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseBones;// 0x76, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_HitboxSetName[128];// 0x77, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_ModelCull_0100[0x9];
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCMorphSet
{
// InfoForResourceTypeCMorphSet additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCMorphSet_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 8)
class SchemaEnumInfoData_t
{
// SchemaEnumInfoData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownType <0x8, class SchemaString_t> m_Name;// 0x0, size 8 (0x8)
char SchemaEnumInfoData_t_0C[0x4];
	__declspec(align(4)) uint32_t m_nSizeOf;// 0xc, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nAlignOf;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, class SchemaEnumeratorInfoData_t > m_Enumerators;// 0x14, size 8 (0x8)
	__declspec(align(4)) SchemaMetadataSetData_t m_Metadata;// 0x1c, size 16 (0x10)
char SchemaEnumInfoData_t_050[0x24];
}; // size: 80 (0x50)
#pragma pack(pop)

#pragma pack(push, 4)
class fogplayerparams_t : public SchemaBase
{
// fogplayerparams_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CFogController > m_hCtrl;// 0x4, size 4 (0x4)
	// m_hCtrl metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float m_flTransitionTime;// 0x8, size 4 (0x4)
	__declspec(align(1)) UnknownType <0x4, class Color> m_OldColor;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flOldStart;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flOldEnd;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flOldMaxDensity;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flOldHDRColorScale;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flOldFarZ;// 0x20, size 4 (0x4)
	__declspec(align(1)) UnknownType <0x4, class Color> m_NewColor;// 0x24, size 4 (0x4)
	__declspec(align(4)) float m_flNewStart;// 0x28, size 4 (0x4)
	__declspec(align(4)) float m_flNewEnd;// 0x2c, size 4 (0x4)
	__declspec(align(4)) float m_flNewMaxDensity;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flNewHDRColorScale;// 0x34, size 4 (0x4)
	__declspec(align(4)) float m_flNewFarZ;// 0x38, size 4 (0x4)
}; // size: 60 (0x3c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_DistanceBetweenCPsToCP : public CParticlePerFrameOperatorInstance
{
// C_OP_DistanceBetweenCPsToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nStartCP;// 0x60, size 4 (0x4)
	// m_nStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nEndCP;// 0x64, size 4 (0x4)
	// m_nEndCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputCP;// 0x68, size 4 (0x4)
	// m_nOutputCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputCPField;// 0x6c, size 4 (0x4)
	// m_nOutputCPField metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMin;// 0x70, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x74, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x78, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x7c, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxTraceLength;// 0x80, size 4 (0x4)
	// m_flMaxTraceLength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLOSScale;// 0x84, size 4 (0x4)
	// m_flLOSScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLOS;// 0x88, size 1 (0x1)
	// m_bLOS metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x89, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_DistanceBetweenCPsToCP_0110[0x7];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ContinuousEmitter : public CParticleEmitterOperatorInstance
{
// C_OP_ContinuousEmitter additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flEmissionDuration;// 0x60, size 4 (0x4)
	// m_flEmissionDuration metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x64, size 4 (0x4)
	// m_flStartTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEmitRate;// 0x68, size 4 (0x4)
	// m_flEmitRate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) float m_flEmissionScale;// 0x6c, size 4 (0x4)
	// m_flEmissionScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPoint;// 0x70, size 4 (0x4)
	// m_nScaleControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPointField;// 0x74, size 4 (0x4)
	// m_nScaleControlPointField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bScalePerParticle;// 0x78, size 1 (0x1)
	// m_bScalePerParticle metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bInitFromKilledParentParticles;// 0x79, size 1 (0x1)
	// m_bInitFromKilledParentParticles metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_ContinuousEmitter_080[0x6];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomAlpha : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomAlpha additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x70, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nAlphaMin;// 0x74, size 4 (0x4)
	// m_nAlphaMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) int32_t m_nAlphaMax;// 0x78, size 4 (0x4)
	// m_nAlphaMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
char C_INIT_RandomAlpha_084[0x8];
	__declspec(align(4)) float m_flAlphaRandExponent;// 0x84, size 4 (0x4)
	// m_flAlphaRandExponent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_RandomAlpha_090[0x8];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceEditIntData_t
{
// ResourceEditIntData_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nInt;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class CEffectData : public SchemaBase
{
// CEffectData additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOrigin;// 0x4, size 12 (0xc)
	// m_vOrigin metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vStart;// 0x10, size 12 (0xc)
	// m_vStart metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vNormal;// 0x1c, size 12 (0xc)
	// m_vNormal metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_vAngles;// 0x28, size 12 (0xc)
	// m_vAngles metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) UnknownType <0x4, class CEntityHandle> m_hEntity;// 0x34, size 4 (0x4)
	// m_hEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0x4, class CEntityHandle> m_hOtherEntity;// 0x38, size 4 (0x4)
	// m_hOtherEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flScale;// 0x3c, size 4 (0x4)
	// m_flScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flMagnitude;// 0x40, size 4 (0x4)
	// m_flMagnitude metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	__declspec(align(4)) float m_flRadius;// 0x44, size 4 (0x4)
	// m_flRadius metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_nSurfaceProp;// 0x48, size 4 (0x4)
	// m_nSurfaceProp metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIParticleSystemDefinition > m_nEffectIndex;// 0x4c, size 4 (0x4)
	// m_nEffectIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_nDamageType;// 0x50, size 4 (0x4)
	// m_nDamageType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_nMaterial;// 0x54, size 2 (0x2)
	// m_nMaterial metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_nHitBox;// 0x56, size 2 (0x2)
	// m_nHitBox metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_nColor;// 0x58, size 1 (0x1)
	// m_nColor metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_fFlags;// 0x59, size 1 (0x1)
	// m_fFlags metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) int8_t m_nAttachmentIndex;// 0x5a, size 1 (0x1)
	// m_nAttachmentIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_nAttachmentName;// 0x5c, size 4 (0x4)
	// m_nAttachmentName metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_iEffectName;// 0x60, size 2 (0x2)
	// m_iEffectName metadata
	 // MNetworkEnable
	 // MNetworkEnable
char CEffectData_064[0x2];
}; // size: 100 (0x64)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_AbilityDraftAbilityState : public SchemaBase
{
// CDOTA_AbilityDraftAbilityState additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char CDOTA_AbilityDraftAbilityState_0C[0x8];
	__declspec(align(4)) int32_t m_unAbilityIndex;// 0xc, size 4 (0x4)
	// m_unAbilityIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_unPlayerID;// 0x10, size 4 (0x4)
	// m_unPlayerID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_unAbilityPlayerSlot;// 0x14, size 4 (0x4)
	// m_unAbilityPlayerSlot metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class HitBoxSet_t
{
// HitBoxSet_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_SourceFilename;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class HitBox_t > m_hitboxes;// 0x8, size 8 (0x8)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCPhysAggregateData
{
// InfoForResourceTypeCPhysAggregateData additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCPhysAggregateData_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class sky3dparams_t : public SchemaBase
{
// sky3dparams_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) int16_t scale;// 0x4, size 2 (0x2)
	// scale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0xc, class Vector> origin;// 0x8, size 12 (0xc)
	// origin metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(1)) uint8_t area;// 0x14, size 1 (0x1)
	// area metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool bClip3DSkyBoxNearToWorldFar;// 0x15, size 1 (0x1)
	// bClip3DSkyBoxNearToWorldFar metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float flClip3DSkyBoxNearToWorldFarOffset;// 0x18, size 4 (0x4)
	// flClip3DSkyBoxNearToWorldFarOffset metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) fogparams_t fog;// 0x1c, size 88 (0x58)
	// fog metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MHasSubKeyfields
}; // size: 116 (0x74)
#pragma pack(pop)

#pragma pack(push, 4)
class JiggleData
{
// JiggleData additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t bone;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t id;// 0x4, size 4 (0x4)
	__declspec(align(4)) float lastUpdate;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> basePos;// 0xc, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> baseLastPos;// 0x18, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> baseVel;// 0x24, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> baseAccel;// 0x30, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> tipPos;// 0x3c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> tipVel;// 0x48, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> tipAccel;// 0x54, size 12 (0xc)
}; // size: 96 (0x60)
#pragma pack(pop)

class INextBotComponent : public INextBotEventResponder
{
// INextBotComponent additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) float m_lastUpdateTime;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_curInterval;// 0x8, size 4 (0x4)
char INextBotComponent_014[0x8];
}; // size: 20 (0x14)

#pragma pack(push, 4)
class RnSphere_t
{
// RnSphere_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCenter;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_flRadius;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class PhysSoftbodyDesc_t
{
// PhysSoftbodyDesc_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_ParticleBoneHash;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnSoftbodyParticle_t > m_Particles;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnSoftbodySpring_t > m_Springs;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnSoftbodyCapsule_t > m_Capsules;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x20, class CTransform> > m_InitPose;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_ParticleBoneName;// 0x28, size 8 (0x8)
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_Buff : public SchemaBase
{
// CDOTA_Buff additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CDOTA_Buff_08[0x4];
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_name;// 0x8, size 4 (0x4)
char CDOTA_Buff_014[0x8];
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_class;// 0x14, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_szModifierAura;// 0x18, size 4 (0x4)
char CDOTA_Buff_020[0x4];
	__declspec(align(4)) int32_t m_iSerialNumber;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_iStringIndex;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_iIndex;// 0x28, size 4 (0x4)
	__declspec(align(4)) float m_flCreationTime;// 0x2c, size 4 (0x4)
	__declspec(align(4)) int32_t m_iCreationFrame;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flLastAppliedTime;// 0x34, size 4 (0x4)
	__declspec(align(4)) float m_flDuration;// 0x38, size 4 (0x4)
	__declspec(align(4)) float m_flDieTime;// 0x3c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hCaster;// 0x40, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAbility;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hParent;// 0x48, size 4 (0x4)
	__declspec(align(4)) int32_t m_iStackCount;// 0x4c, size 4 (0x4)
	__declspec(align(4)) int32_t m_iDOTDamageValue;// 0x50, size 4 (0x4)
	__declspec(align(2)) int16_t m_iAuraSearchTeam;// 0x54, size 2 (0x2)
	__declspec(align(2)) int16_t m_iAuraSearchType;// 0x56, size 2 (0x2)
	__declspec(align(4)) int32_t m_iAuraSearchFlags;// 0x58, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAuraRadius;// 0x5c, size 4 (0x4)
	__declspec(align(4)) int32_t m_iTeam;// 0x60, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAttributes;// 0x64, size 4 (0x4)
	__declspec(align(2)) int16_t m_iPaddingToMakeSchemaHappy2;// 0x68, size 2 (0x2)
	bool m_bIsAura : 1;// 0x0, size 0 (0x0)
	bool m_bIsAuraActiveOnDeath : 1;// 0x0, size 0 (0x0)
	bool m_bMarkedForDeletion : 1;// 0x0, size 0 (0x0)
	bool m_bAuraIsHeal : 1;// 0x0, size 0 (0x0)
	bool m_bProvidedByAura : 1;// 0x0, size 0 (0x0)
	__declspec(align(4)) float m_flPreviousTick;// 0x6c, size 4 (0x4)
	__declspec(align(4)) float m_flThinkInterval;// 0x70, size 4 (0x4)
	__declspec(align(4)) float m_flThinkTimeAccumulator;// 0x74, size 4 (0x4)
	__declspec(align(4)) float m_flDOTInterval;// 0x78, size 4 (0x4)
	__declspec(align(4)) float m_flDOTTimeAccumulator;// 0x7c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CDOTA_BuffParticle > m_iParticles;// 0x80, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_hAuraUnits;// 0x90, size 16 (0x10)
char CDOTA_Buff_02EC[0x24C];
	__declspec(align(4)) UnknownType <0x4, class HSCRIPT> m_hScriptScope;// 0x2ec, size 4 (0x4)
}; // size: 752 (0x2f0)
#pragma pack(pop)

#pragma pack(push, 1)
class VMapResourceData_t
{
// VMapResourceData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char VMapResourceData_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

class IBotController : public SchemaBase
{
// IBotController additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class vehicle_controlparams_t
{
// vehicle_controlparams_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float throttle;// 0x0, size 4 (0x4)
	__declspec(align(4)) float steering;// 0x4, size 4 (0x4)
	__declspec(align(4)) float brake;// 0x8, size 4 (0x4)
	__declspec(align(4)) float boost;// 0xc, size 4 (0x4)
	__declspec(align(1)) bool handbrake;// 0x10, size 1 (0x1)
	__declspec(align(1)) bool handbrakeLeft;// 0x11, size 1 (0x1)
	__declspec(align(1)) bool handbrakeRight;// 0x12, size 1 (0x1)
	__declspec(align(1)) bool brakepedal;// 0x13, size 1 (0x1)
	__declspec(align(1)) bool bHasBrakePedal;// 0x14, size 1 (0x1)
	__declspec(align(1)) bool bAnalogSteering;// 0x15, size 1 (0x1)
char vehicle_controlparams_t_018[0x2];
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class VSoundEventScript_t
{
// VSoundEventScript_t additional information
// soundsystem.dll, project soundsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class VSoundEvent_t > m_SoundEvents;// 0x0, size 8 (0x8)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class MorphRectData_t
{
// MorphRectData_t additional information
// meshsystem.dll, project meshsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) int16_t m_nXLeftDst;// 0x0, size 2 (0x2)
	__declspec(align(2)) int16_t m_nYTopDst;// 0x2, size 2 (0x2)
	__declspec(align(4)) float m_flUWidthSrc;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flVHeightSrc;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class BundleData_t > m_bundleDatas;// 0xc, size 8 (0x8)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeProcessingGraph_t
{
// InfoForResourceTypeProcessingGraph_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeProcessingGraph_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 8)
class SchemaEnumeratorInfoData_t
{
// SchemaEnumeratorInfoData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x8, class SchemaString_t> m_Name;// 0x0, size 8 (0x8)
	__declspec(align(8)) int64_t m_nValue;// 0x8, size 8 (0x8)
	__declspec(align(4)) SchemaMetadataSetData_t m_Metadata;// 0x10, size 16 (0x10)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class DamageShareEvent_t
{
// DamageShareEvent_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flOriginalDamage;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flTakenDamage;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPlayerID;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomYawFlip : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomYawFlip additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flPercent;// 0x70, size 4 (0x4)
	// m_flPercent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_RandomYawFlip_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderCables : public CParticleRenderOperatorInstance
{
// C_OP_RenderCables additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_hMaterial;// 0xa0, size 8 (0x8)
	// m_hMaterial metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
	__declspec(align(4)) float m_flTextureSize;// 0xa8, size 4 (0x4)
	// m_flTextureSize metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMinTesselation;// 0xac, size 4 (0x4)
	// m_nMinTesselation metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxTesselation;// 0xb0, size 4 (0x4)
	// m_nMaxTesselation metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTessScale;// 0xb4, size 4 (0x4)
	// m_flTessScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTextureScrollRate;// 0xb8, size 4 (0x4)
	// m_flTextureScrollRate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNormalMapScrollRate;// 0xbc, size 4 (0x4)
	// m_flNormalMapScrollRate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 192 (0xc0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_Orient2DRelToCP : public CParticleInitializerOperatorInstance
{
// C_INIT_Orient2DRelToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x70, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flRotOffset;// 0x78, size 4 (0x4)
	// m_flRotOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_Orient2DRelToCP_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCLightTree
{
// InfoForResourceTypeCLightTree additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCLightTree_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

class C_GameRules : public SchemaBase
{
// C_GameRules additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class CWorldVisNode
{
// CWorldVisNode additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vSplitNormal;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_flDist;// 0xc, size 4 (0x4)
	__declspec(align(2)) int16_t m_nChildren[2];// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientPostSimulate_t : public EventSimulate_t
{
// EventClientPostSimulate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCTextureBase
{
// InfoForResourceTypeCTextureBase additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCTextureBase_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class FlexController_t
{
// FlexController_t additional information
// meshsystem.dll, project meshsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szType;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t localToGlobal;// 0x8, size 4 (0x4)
	__declspec(align(4)) float min;// 0xc, size 4 (0x4)
	__declspec(align(4)) float max;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class PostProcessingTonemapParameters_t
{
// PostProcessingTonemapParameters_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flExposureBias;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flShoulderStrength;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flLinearStrength;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flLinearAngle;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flToeStrength;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flToeNum;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flToeDenom;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flWhitePoint;// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class ModelBoneFlexDriverControl_t
{
// ModelBoneFlexDriverControl_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) ModelBoneFlexComponent_t m_nBoneComponent;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_flexController;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t m_flexControllerToken;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flMin;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flMax;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class FeNodeBase_t
{
// FeNodeBase_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nDummy[3];// 0x2, size 6 (0x6)
	__declspec(align(2)) uint16_t nNodeX0;// 0x8, size 2 (0x2)
	__declspec(align(2)) uint16_t nNodeX1;// 0xa, size 2 (0x2)
	__declspec(align(2)) uint16_t nNodeY0;// 0xc, size 2 (0x2)
	__declspec(align(2)) uint16_t nNodeY1;// 0xe, size 2 (0x2)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> qAdjust;// 0x10, size 16 (0x10)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class C_DOTA_AbilityDraftAbilityState : public SchemaBase
{
// C_DOTA_AbilityDraftAbilityState additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char C_DOTA_AbilityDraftAbilityState_0C[0x8];
	__declspec(align(4)) int32_t m_unAbilityIndex;// 0xc, size 4 (0x4)
	// m_unAbilityIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_unPlayerID;// 0x10, size 4 (0x4)
	// m_unPlayerID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_unAbilityPlayerSlot;// 0x14, size 4 (0x4)
	// m_unAbilityPlayerSlot metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
}; // size: 24 (0x18)
#pragma pack(pop)

class IRagdoll : public SchemaBase
{
// IRagdoll additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 16)
class C_OP_SetCPOrientationToGroundNormal : public CParticlePerFrameOperatorInstance
{
// C_OP_SetCPOrientationToGroundNormal additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_flInterpRate;// 0x60, size 4 (0x4)
	// m_flInterpRate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxTraceLength;// 0x64, size 4 (0x4)
	// m_flMaxTraceLength metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTolerance;// 0x68, size 4 (0x4)
	// m_flTolerance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTraceOffset;// 0x6c, size 4 (0x4)
	// m_flTraceOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x70, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nInputCP;// 0xf0, size 4 (0x4)
	// m_nInputCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputCP;// 0xf4, size 4 (0x4)
	// m_nOutputCP metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetCPOrientationToGroundNormal_0FC[0x4];
	__declspec(align(1)) bool m_bIncludeWater;// 0xfc, size 1 (0x1)
	// m_bIncludeWater metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetCPOrientationToGroundNormal_0100[0x3];
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SequenceFromModel : public CParticlePerFrameOperatorInstance
{
// C_OP_SequenceFromModel additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutputAnim;// 0x68, size 4 (0x4)
	// m_nFieldOutputAnim metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x6c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x70, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x74, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x78, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x7c, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x7d, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SequenceFromModel_080[0x2];
}; // size: 128 (0x80)
#pragma pack(pop)

class IParticleEffect : public SchemaBase
{
// IParticleEffect additional information
// client.dll, project particleslib
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

class CResponseCriteriaSet : public SchemaBase
{
// CResponseCriteriaSet additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CResponseCriteriaSet_020[0x1C];
	__declspec(align(4)) int32_t m_nNumPrefixedContexts;// 0x20, size 4 (0x4)
	__declspec(align(1)) bool m_bOverrideOnAppend;// 0x24, size 1 (0x1)
char CResponseCriteriaSet_028[0x3];
}; // size: 40 (0x28)

#pragma pack(push, 16)
class C_OP_RemapCPVisibilityToVector : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPVisibilityToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x60, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPoint;// 0x64, size 4 (0x4)
	// m_nControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x68, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x6c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x70, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMin;// 0x74, size 12 (0xc)
	// m_vecOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMax;// 0x80, size 12 (0xc)
	// m_vecOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadius;// 0x8c, size 4 (0x4)
	// m_flRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceEditFloatData_t
{
// ResourceEditFloatData_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Name;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flFloat;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapCPOrientationToYaw : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPOrientationToYaw additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x60, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flRotOffset;// 0x68, size 4 (0x4)
	// m_flRotOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpinStrength;// 0x6c, size 4 (0x4)
	// m_flSpinStrength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class C_DOTA_Modifier_Lua : public CDOTA_Buff
{
// C_DOTA_Modifier_Lua additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char C_DOTA_Modifier_Lua_0308[0x18];
}; // size: 776 (0x308)
#pragma pack(pop)

#pragma pack(push, 4)
class sAcquireHistory
{
// sAcquireHistory additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_unID;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_fGameTime;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class sBounceInfo
{
// sBounceInfo additional information
// server.dll, project server
// Alignment: 4

public:
	__declspec(align(4)) int32_t iAttackIndex;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t iBounceCount;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > hAlreadyHitList;// 0x8, size 16 (0x10)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 8)
class VBitmapFontDiskData_t
{
// VBitmapFontDiskData_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_TextureSheet;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_Glyphs;// 0x8, size 8 (0x8)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class FeAxialEdgeBend_t
{
// FeAxialEdgeBend_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float te;// 0x0, size 4 (0x4)
	__declspec(align(4)) float tv;// 0x4, size 4 (0x4)
	__declspec(align(4)) float flDist;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flWeight[4];// 0xc, size 16 (0x10)
	__declspec(align(2)) uint16_t nNode[6];// 0x1c, size 12 (0xc)
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 4)
class CProjectedTextureBase : public SchemaBase
{
// CProjectedTextureBase additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CProjectedTextureBase_08[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hTargetEntity;// 0x8, size 4 (0x4)
	// m_hTargetEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bState;// 0xc, size 1 (0x1)
	// m_bState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAlwaysUpdate;// 0xd, size 1 (0x1)
	// m_bAlwaysUpdate metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flLightFOV;// 0x10, size 4 (0x4)
	// m_flLightFOV metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bEnableShadows;// 0x14, size 1 (0x1)
	// m_bEnableShadows metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSimpleProjection;// 0x15, size 1 (0x1)
	// m_bSimpleProjection metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bLightOnlyTarget;// 0x16, size 1 (0x1)
	// m_bLightOnlyTarget metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bLightWorld;// 0x17, size 1 (0x1)
	// m_bLightWorld metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bCameraSpace;// 0x18, size 1 (0x1)
	// m_bCameraSpace metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flBrightnessScale;// 0x1c, size 4 (0x4)
	// m_flBrightnessScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) UnknownType <0x4, class Color> m_LightColor;// 0x20, size 4 (0x4)
	// m_LightColor metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flIntensity;// 0x24, size 4 (0x4)
	// m_flIntensity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flLinearAttenuation;// 0x28, size 4 (0x4)
	// m_flLinearAttenuation metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flQuadraticAttenuation;// 0x2c, size 4 (0x4)
	// m_flQuadraticAttenuation metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bVolumetric;// 0x30, size 1 (0x1)
	// m_bVolumetric metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flVolumetricIntensity;// 0x34, size 4 (0x4)
	// m_flVolumetricIntensity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flNoiseStrength;// 0x38, size 4 (0x4)
	// m_flNoiseStrength metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flFlashlightTime;// 0x3c, size 4 (0x4)
	// m_flFlashlightTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_nNumPlanes;// 0x40, size 4 (0x4)
	// m_nNumPlanes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flPlaneOffset;// 0x44, size 4 (0x4)
	// m_flPlaneOffset metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flColorTransitionTime;// 0x48, size 4 (0x4)
	// m_flColorTransitionTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flAmbient;// 0x4c, size 4 (0x4)
	// m_flAmbient metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) char m_SpotlightTextureName[260];// 0x50, size 260 (0x104)
	// m_SpotlightTextureName metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nSpotlightTextureFrame;// 0x154, size 4 (0x4)
	// m_nSpotlightTextureFrame metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_nShadowQuality;// 0x158, size 4 (0x4)
	// m_nShadowQuality metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float m_flNearZ;// 0x15c, size 4 (0x4)
	// m_flNearZ metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	__declspec(align(4)) float m_flFarZ;// 0x160, size 4 (0x4)
	// m_flFarZ metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	__declspec(align(4)) float m_flProjectionSize;// 0x164, size 4 (0x4)
	// m_flProjectionSize metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flRotation;// 0x168, size 4 (0x4)
	// m_flRotation metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bFlipHorizontal;// 0x16c, size 1 (0x1)
	// m_bFlipHorizontal metadata
	 // MNetworkEnable
	 // MNetworkEnable
char CProjectedTextureBase_01C4[0x57];
public:
	static float Get_m_flVisibleBBoxMinHeight() {return *(float *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CProjectedTextureBase")->m_staticMembers.data[0].m_pInstance; }
}; // size: 452 (0x1c4)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapCPtoCP : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPtoCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nInputControlPoint;// 0x60, size 4 (0x4)
	// m_nInputControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputControlPoint;// 0x64, size 4 (0x4)
	// m_nOutputControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nInputField;// 0x68, size 4 (0x4)
	// m_nInputField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nOutputField;// 0x6c, size 4 (0x4)
	// m_nOutputField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x70, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x74, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x78, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x7c, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LerpScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_LerpScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flOutput;// 0x64, size 4 (0x4)
	// m_flOutput metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x68, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x6c, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class FlexRule_t
{
// FlexRule_t additional information
// meshsystem.dll, project meshsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nFlex;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class FlexOp_t > m_FlexOps;// 0x4, size 8 (0x8)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceAnimEvent_t
{
// AnimResourceAnimEvent_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nFrame;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flCycle;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sOptions;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sEventName;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class FourQuaternions
{
// FourQuaternions additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(16)) UnknownType <0x10, class fltx4> x;// 0x0, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> y;// 0x10, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> z;// 0x20, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> w;// 0x30, size 16 (0x10)
}; // size: 64 (0x40)
#pragma pack(pop)

#pragma pack(push, 4)
class VSoundStackScript_t
{
// VSoundStackScript_t additional information
// soundsystem.dll, project soundsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class VSoundStack_t > m_SoundStacks;// 0x0, size 8 (0x8)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class SkeletonBoneBbox_t
{
// SkeletonBoneBbox_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCenter;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_pad0;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecSize;// 0x10, size 12 (0xc)
	__declspec(align(4)) float m_pad1;// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class RenderInputLayoutField_t
{
// RenderInputLayoutField_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) uint8_t m_pSemanticName[32];// 0x0, size 32 (0x20)
	__declspec(align(4)) int32_t m_nSemanticIndex;// 0x20, size 4 (0x4)
	__declspec(align(4)) uint32_t m_Format;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_nOffset;// 0x28, size 4 (0x4)
	__declspec(align(4)) int32_t m_nSlot;// 0x2c, size 4 (0x4)
	__declspec(align(4)) RenderSlotType_t m_nSlotType;// 0x30, size 4 (0x4)
	__declspec(align(4)) int32_t m_nInstanceStepRate;// 0x34, size 4 (0x4)
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 4)
class CAttributeManager : public SchemaBase
{
// CAttributeManager additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public: 
	#pragma pack(push, 4)
	class cached_attribute_float_t
	{
	// CAttributeManager::cached_attribute_float_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(4)) float flIn;// 0x0, size 4 (0x4)
		__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> iAttribHook;// 0x4, size 4 (0x4)
		__declspec(align(4)) float flOut;// 0x8, size 4 (0x4)
	}; // size: 12 (0xc)
	#pragma pack(pop)

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_Providers;// 0x4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_Receivers;// 0x14, size 16 (0x10)
	__declspec(align(4)) int32_t m_iReapplyProvisionParity;// 0x24, size 4 (0x4)
	// m_iReapplyProvisionParity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hOuter;// 0x28, size 4 (0x4)
	// m_hOuter metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bPreventLoopback;// 0x2c, size 1 (0x1)
	__declspec(align(4)) attributeprovidertypes_t m_ProviderType;// 0x30, size 4 (0x4)
	// m_ProviderType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CAttributeManager::cached_attribute_float_t > m_CachedResults;// 0x34, size 16 (0x10)
char CAttributeManager_048[0x4];
}; // size: 72 (0x48)
#pragma pack(pop)

#pragma pack(push, 4)
class Extent
{
// Extent additional information
// server.dll, project navlib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> lo;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> hi;// 0xc, size 12 (0xc)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class sControlGroupElem
{
// sControlGroupElem additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) char m_UnitName[260];// 0x0, size 260 (0x104)
	__declspec(align(1)) char m_UnitLabel[260];// 0x104, size 260 (0x104)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hEntity;// 0x208, size 4 (0x4)
	__declspec(align(1)) bool m_bIsIllusion;// 0x20c, size 1 (0x1)
	__declspec(align(1)) char m_IllusionLabel[260];// 0x20d, size 260 (0x104)
char sControlGroupElem_0314[0x3];
}; // size: 788 (0x314)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCParticleSnapshot
{
// InfoForResourceTypeCParticleSnapshot additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCParticleSnapshot_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class AABB_t
{
// AABB_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMinBounds;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxBounds;// 0xc, size 12 (0xc)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_GlobalScale : public CParticleInitializerOperatorInstance
{
// C_INIT_GlobalScale additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flScale;// 0x70, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPointNumber;// 0x74, size 4 (0x4)
	// m_nScaleControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x78, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleRadius;// 0x7c, size 1 (0x1)
	// m_bScaleRadius metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScalePosition;// 0x7d, size 1 (0x1)
	// m_bScalePosition metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleVelocity;// 0x7e, size 1 (0x1)
	// m_bScaleVelocity metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_GlobalScale_080[0x1];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceEditInfoBlock_t
{
// ResourceEditInfoBlock_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceInputDependency_t > m_InputDependencies;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceInputDependency_t > m_AdditionalInputDependencies;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceArgumentDependency_t > m_ArgumentDependencies;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceSpecialDependency_t > m_SpecialDependencies;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceCustomDependency_t > m_CustomDependencies;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceAdditionalRelatedFile_t > m_AdditionalRelatedFiles;// 0x28, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceReferenceInfo_t > m_ChildResourceList;// 0x30, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceEditIntData_t > m_ExtraIntData;// 0x38, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceEditFloatData_t > m_ExtraFloatData;// 0x40, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceEditStringData_t > m_ExtraStringData;// 0x48, size 8 (0x8)
}; // size: 80 (0x50)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_ItemStockInfo : public SchemaBase
{
// CDOTA_ItemStockInfo additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char CDOTA_ItemStockInfo_0A[0x6];
	__declspec(align(2)) uint16_t usItemIndex;// 0xa, size 2 (0x2)
	// usItemIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float fStockDuration;// 0xc, size 4 (0x4)
	// fStockDuration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float fStockTime;// 0x10, size 4 (0x4)
	// fStockTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t iStockCount;// 0x14, size 4 (0x4)
	// iStockCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t iMaxCount;// 0x18, size 4 (0x4)
	// iMaxCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class EntComponentInterface_t
{
// EntComponentInterface_t additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) char* m_pName;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nOffset;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomVector : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMin;// 0x70, size 12 (0xc)
	// m_vecMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMax;// 0x7c, size 12 (0xc)
	// m_vecMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x88, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_INIT_RandomVector_090[0x4];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimationDecodeDebugDumpElement_t
{
// AnimationDecodeDebugDumpElement_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_modelName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x4, class CUtlString> > m_poseParams;// 0x4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x4, class CUtlString> > m_decodeOps;// 0x14, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x4, class CUtlString> > m_internalOps;// 0x24, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x4, class CUtlString> > m_decodedAnims;// 0x34, size 16 (0x10)
}; // size: 68 (0x44)
#pragma pack(pop)

#pragma pack(push, 8)
class CSSDSMsg_LayerBase
{
// CSSDSMsg_LayerBase additional information
// scenesystem.dll, project scenesystem
// Alignment: 8

public:
	__declspec(align(8)) SceneViewId_t m_viewId;// 0x0, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_ViewName;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nLayerIndex;// 0x14, size 4 (0x4)
	__declspec(align(8)) uint64_t m_nLayerId;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_LayerName;// 0x20, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_displayText;// 0x24, size 4 (0x4)
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_MovementPlaceOnGround : public CParticlePerFrameOperatorInstance
{
// C_OP_MovementPlaceOnGround additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_flOffset;// 0x60, size 4 (0x4)
	// m_flOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxTraceLength;// 0x64, size 4 (0x4)
	// m_flMaxTraceLength metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTolerance;// 0x68, size 4 (0x4)
	// m_flTolerance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTraceOffset;// 0x6c, size 4 (0x4)
	// m_flTraceOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLerpRate;// 0x70, size 4 (0x4)
	// m_flLerpRate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x74, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nRefCP1;// 0xf4, size 4 (0x4)
	// m_nRefCP1 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nRefCP2;// 0xf8, size 4 (0x4)
	// m_nRefCP2 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nLerpCP;// 0xfc, size 4 (0x4)
	// m_nLerpCP metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_MovementPlaceOnGround_0104[0x4];
	__declspec(align(1)) bool m_bKill;// 0x104, size 1 (0x1)
	// m_bKill metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bIncludeWater;// 0x105, size 1 (0x1)
	// m_bIncludeWater metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_MovementPlaceOnGround_0108[0x2];
	__declspec(align(1)) bool m_bSetNormal;// 0x108, size 1 (0x1)
	// m_bSetNormal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleOffset;// 0x109, size 1 (0x1)
	// m_bScaleOffset metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_MovementPlaceOnGround_0110[0x6];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 4)
class MaterialResourceData_t
{
// MaterialResourceData_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_materialName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_shaderName;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamInt_t > m_intParams;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamFloat_t > m_floatParams;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamVector_t > m_vectorParams;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamTexture_t > m_textureParams;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamBuffer_t > m_dynamicParams;// 0x28, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamBuffer_t > m_dynamicTextureParams;// 0x30, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamInt_t > m_intAttributes;// 0x38, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamFloat_t > m_floatAttributes;// 0x40, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamVector_t > m_vectorAttributes;// 0x48, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamTexture_t > m_textureAttributes;// 0x50, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialParamString_t > m_stringAttributes;// 0x58, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_renderAttributesUsed;// 0x60, size 8 (0x8)
}; // size: 104 (0x68)
#pragma pack(pop)

#pragma pack(push, 4)
class TransitioningLayer_t : public SchemaBase
{
// TransitioningLayer_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) CNetworkedSequenceOperation m_op;// 0x4, size 36 (0x24)
	__declspec(align(4)) float m_flStartAnimTime;// 0x28, size 4 (0x4)
	__declspec(align(4)) float m_flStartWeight;// 0x2c, size 4 (0x4)
	__declspec(align(4)) float m_flAnimTime;// 0x30, size 4 (0x4)
	__declspec(align(4)) int32_t m_nOrder;// 0x34, size 4 (0x4)
	__declspec(align(4)) float m_flPlaybackRate;// 0x38, size 4 (0x4)
	__declspec(align(4)) float m_flFadeOutDuration;// 0x3c, size 4 (0x4)
}; // size: 64 (0x40)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ConstrainDistance : public CParticleConstraintOperatorInstance
{
// C_OP_ConstrainDistance additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_fMinDistance;// 0x60, size 4 (0x4)
	// m_fMinDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fMaxDistance;// 0x64, size 4 (0x4)
	// m_fMaxDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x68, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCP;// 0x6c, size 4 (0x4)
	// m_nScaleCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_CenterOffset;// 0x70, size 12 (0xc)
	// m_CenterOffset metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) bool m_bGlobalCenter;// 0x7c, size 1 (0x1)
	// m_bGlobalCenter metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_ConstrainDistance_080[0x3];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class TextureDesc_t
{
// TextureDesc_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t m_nWidth;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nHeight;// 0x2, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nDepth;// 0x4, size 2 (0x2)
	__declspec(align(1)) int8_t m_nImageFormat;// 0x6, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nNumMipLevels;// 0x7, size 1 (0x1)
	__declspec(align(4)) int32_t m_nPicmip0Res;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

class CDOTAGameManager : public SchemaBase
{
// CDOTAGameManager additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CDOTAGameManager_018[0x14];
	__declspec(align(4)) CNetworkVarChainer __m_pChainEntity;// 0x18, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvHeroes[2];// 0x24, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvUnits[2];// 0x2c, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvAbilities[2];// 0x34, size 8 (0x8)
char CDOTAGameManager_015C[0x120];
	__declspec(align(1)) bool m_bCustomGame;// 0x15c, size 1 (0x1)
	__declspec(align(1)) bool m_bEventGame;// 0x15d, size 1 (0x1)
	__declspec(align(1)) char m_szAddOnGame[128];// 0x15e, size 128 (0x80)
	__declspec(align(1)) char m_szAddOnMap[128];// 0x1de, size 128 (0x80)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvAddOnHeroes[2];// 0x260, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvAddOnUnits[2];// 0x268, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvAddOnAbilities[2];// 0x270, size 8 (0x8)
char CDOTAGameManager_0398[0x120];
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pPortraitsKeyValues;// 0x398, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pTutorialLessonKeyValues;// 0x39c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pTutorialTipKeyValues;// 0x3a0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pDivisionKeyValues;// 0x3a4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pMatchGroupsKeyValues;// 0x3a8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pEmoticonsKeyValues;// 0x3ac, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pPortraitsLightPreselects;// 0x3b0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pAnimationStatues;// 0x3b4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pRegionKeyValues;// 0x3b8, size 4 (0x4)
char CDOTAGameManager_03D8[0x1C];
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pCountryKeyValues;// 0x3d8, size 4 (0x4)
char CDOTAGameManager_0400[0x24];
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pSurveyQuestionData;// 0x400, size 4 (0x4)
	__declspec(align(4)) int32_t m_nNumLoadingPlayers;// 0x404, size 4 (0x4)
	__declspec(align(4)) int32_t m_iDefeatedParticle;// 0x408, size 4 (0x4)
	__declspec(align(1)) bool m_StableHeroAvailable[128];// 0x40c, size 128 (0x80)
	// m_StableHeroAvailable metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_CurrentHeroAvailable[128];// 0x48c, size 128 (0x80)
	// m_CurrentHeroAvailable metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_CulledHeroes[128];// 0x50c, size 128 (0x80)
	// m_CulledHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 1420 (0x58c)

#pragma pack(push, 16)
class C_OP_Noise : public CParticlePerFrameOperatorInstance
{
// C_OP_Noise additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flOutputMin;// 0x64, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x68, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(16)) UnknownType <0x10, class fltx4> m_fl4NoiseScale;// 0x70, size 16 (0x10)
	// m_fl4NoiseScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAdditive;// 0x80, size 1 (0x1)
	// m_bAdditive metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_Noise_090[0xF];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_NormalOffset : public CParticleInitializerOperatorInstance
{
// C_INIT_NormalOffset additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_OffsetMin;// 0x70, size 12 (0xc)
	// m_OffsetMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_OffsetMax;// 0x7c, size 12 (0xc)
	// m_OffsetMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x88, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalCoords;// 0x8c, size 1 (0x1)
	// m_bLocalCoords metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bNormalize;// 0x8d, size 1 (0x1)
	// m_bNormalize metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_NormalOffset_090[0x2];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateInHierarchy : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateInHierarchy additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_fMaxDistance;// 0x70, size 4 (0x4)
	// m_fMaxDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flGrowthTime;// 0x74, size 4 (0x4)
	// m_flGrowthTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDesiredMidPoint;// 0x78, size 4 (0x4)
	// m_flDesiredMidPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOrientation;// 0x7c, size 4 (0x4)
	// m_nOrientation metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBulgeFactor;// 0x80, size 4 (0x4)
	// m_flBulgeFactor metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nDesiredEndPoint;// 0x84, size 4 (0x4)
	// m_nDesiredEndPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nDesiredStartPoint;// 0x88, size 4 (0x4)
	// m_nDesiredStartPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseHighestEndCP;// 0x8c, size 1 (0x1)
	// m_bUseHighestEndCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDistanceBias;// 0x90, size 12 (0xc)
	// m_vecDistanceBias metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDistanceBiasAbs;// 0x9c, size 12 (0xc)
	// m_vecDistanceBiasAbs metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
char C_INIT_CreateInHierarchy_0B0[0x8];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCVPhysXLevelData
{
// InfoForResourceTypeCVPhysXLevelData additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCVPhysXLevelData_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class SchemaMetaModifyAdd_t
{
// SchemaMetaModifyAdd_t additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x8, class SchemaString_t> m_TagName;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class CSchemaType> *m_pTagDataType;// 0x8, size 4 (0x4)
	__declspec(align(4)) void* m_pTagValue;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class LightTreeResourceData_t
{
// LightTreeResourceData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_SerializedOctree;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_IrradValues;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_ImageVertices;// 0x10, size 8 (0x8)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_MovementRigidAttachToCP : public CParticlePerFrameOperatorInstance
{
// C_OP_MovementRigidAttachToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPoint;// 0x64, size 4 (0x4)
	// m_nScaleControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCPField;// 0x68, size 4 (0x4)
	// m_nScaleCPField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldInput;// 0x6c, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x70, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bOffsetLocal;// 0x74, size 1 (0x1)
	// m_bOffsetLocal metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_MovementRigidAttachToCP_080[0xB];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class RnTriangle_t
{
// RnTriangle_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nIndex[3];// 0x0, size 12 (0xc)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class DataTeamPlayer_t : public SchemaBase
{
// DataTeamPlayer_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char DataTeamPlayer_t_0C[0x8];
	__declspec(align(4)) int32_t m_iReliableGold;// 0xc, size 4 (0x4)
	// m_iReliableGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	 // MNetworkPriority
	__declspec(align(4)) int32_t m_iUnreliableGold;// 0x10, size 4 (0x4)
	// m_iUnreliableGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	 // MNetworkPriority
	__declspec(align(4)) int32_t m_iStartingPosition;// 0x14, size 4 (0x4)
	// m_iStartingPosition metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_iTotalEarnedGold;// 0x18, size 4 (0x4)
	// m_iTotalEarnedGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkPriority
	__declspec(align(4)) int32_t m_iTotalEarnedXP;// 0x1c, size 4 (0x4)
	// m_iTotalEarnedXP metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iSharedGold;// 0x20, size 4 (0x4)
	// m_iSharedGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iHeroKillGold;// 0x24, size 4 (0x4)
	// m_iHeroKillGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCreepKillGold;// 0x28, size 4 (0x4)
	// m_iCreepKillGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iIncomeGold;// 0x2c, size 4 (0x4)
	// m_iIncomeGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iDenyCount;// 0x30, size 4 (0x4)
	// m_iDenyCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iLastHitCount;// 0x34, size 4 (0x4)
	// m_iLastHitCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iLastHitStreak;// 0x38, size 4 (0x4)
	// m_iLastHitStreak metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iLastHitMultikill;// 0x3c, size 4 (0x4)
	// m_iLastHitMultikill metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iNearbyCreepDeathCount;// 0x40, size 4 (0x4)
	// m_iNearbyCreepDeathCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iClaimedDenyCount;// 0x44, size 4 (0x4)
	// m_iClaimedDenyCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iClaimedMissCount;// 0x48, size 4 (0x4)
	// m_iClaimedMissCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iMissCount;// 0x4c, size 4 (0x4)
	// m_iMissCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nPossibleHeroSelection;// 0x50, size 4 (0x4)
	// m_nPossibleHeroSelection metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(2)) uint16_t m_iMetaLevel;// 0x54, size 2 (0x2)
	// m_iMetaLevel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_iMetaExperience;// 0x56, size 2 (0x2)
	// m_iMetaExperience metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_iMetaExperienceAwarded;// 0x58, size 2 (0x2)
	// m_iMetaExperienceAwarded metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iEventPoints;// 0x5c, size 4 (0x4)
	// m_iEventPoints metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iEventPremiumPoints;// 0x60, size 4 (0x4)
	// m_iEventPremiumPoints metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_iEventRanks;// 0x64, size 2 (0x2)
	// m_iEventRanks metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flBuybackCooldownTime;// 0x68, size 4 (0x4)
	// m_flBuybackCooldownTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flBuybackGoldLimitTime;// 0x6c, size 4 (0x4)
	// m_flBuybackGoldLimitTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flBuybackCostTime;// 0x70, size 4 (0x4)
	// m_flBuybackCostTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomBuybackCooldown;// 0x74, size 4 (0x4)
	// m_flCustomBuybackCooldown metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_fStuns;// 0x78, size 4 (0x4)
	// m_fStuns metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_fHealing;// 0x7c, size 4 (0x4)
	// m_fHealing metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iTowerKills;// 0x80, size 4 (0x4)
	// m_iTowerKills metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iRoshanKills;// 0x84, size 4 (0x4)
	// m_iRoshanKills metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hCameraTarget;// 0x88, size 4 (0x4)
	// m_hCameraTarget metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hOverrideSelectionEntity;// 0x8c, size 4 (0x4)
	// m_hOverrideSelectionEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class BaseSceneObjectOverride_t
{
// BaseSceneObjectOverride_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nSceneObjectIndex;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapScalarOnceTimed : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapScalarOnceTimed additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bProportional;// 0x60, size 1 (0x1)
	// m_bProportional metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldInput;// 0x64, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x68, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x6c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x70, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x74, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x78, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRemapTime;// 0x7c, size 4 (0x4)
	// m_flRemapTime metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_InstantaneousEmitter : public CParticleEmitterOperatorInstance
{
// C_OP_InstantaneousEmitter additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nParticlesToEmit;// 0x60, size 4 (0x4)
	// m_nParticlesToEmit metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) int32_t m_nMinParticlesToEmit;// 0x64, size 4 (0x4)
	// m_nMinParticlesToEmit metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x68, size 4 (0x4)
	// m_flStartTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTimeMax;// 0x6c, size 4 (0x4)
	// m_flStartTimeMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInitFromKilledParentParticles;// 0x70, size 4 (0x4)
	// m_flInitFromKilledParentParticles metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxEmittedPerFrame;// 0x74, size 4 (0x4)
	// m_nMaxEmittedPerFrame metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPoint;// 0x78, size 4 (0x4)
	// m_nScaleControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPointField;// 0x7c, size 4 (0x4)
	// m_nScaleControlPointField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nSnapshotControlPoint;// 0x80, size 4 (0x4)
	// m_nSnapshotControlPoint metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_InstantaneousEmitter_090[0xC];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RadiusDecay : public CParticlePerFrameOperatorInstance
{
// C_OP_RadiusDecay additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMinRadius;// 0x60, size 4 (0x4)
	// m_flMinRadius metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RadiusDecay_070[0xC];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 8)
class CRMSG_Manifest_Event
{
// CRMSG_Manifest_Event additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nManifestIndex;// 0x0, size 4 (0x4)
	__declspec(align(4)) RMSG_EventType_t m_nEvent;// 0x4, size 4 (0x4)
	__declspec(align(4)) RMSG_SubEventType_t m_nSubEvent;// 0x8, size 4 (0x4)
char CRMSG_Manifest_Event_010[0x4];
	__declspec(align(8)) int64_t m_nTimeUS;// 0x10, size 8 (0x8)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceAdditionalRelatedFile_t
{
// ResourceAdditionalRelatedFile_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_ContentRelativeFilename;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_ContentSearchPath;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class C_MultiplayRules : public C_GameRules
{
// C_MultiplayRules additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char C_MultiplayRules_014[0x10];
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 8)
class ModelReference_t
{
// ModelReference_t additional information
// particles.dll, project particles
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCModel > > m_model;// 0x0, size 8 (0x8)
	// m_model metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	__declspec(align(4)) float m_flRelativeProbabilityOfSpawn;// 0x8, size 4 (0x4)
	// m_flRelativeProbabilityOfSpawn metadata
	 // MAttributeName
	 // MDefaultString
char ModelReference_t_010[0x4];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class RnCapsuleDesc_t : public RnShapeDesc_t
{
// RnCapsuleDesc_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) RnCapsule_t m_Capsule;// 0x8, size 28 (0x1c)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeWorldEnvironmentMaps_t
{
// InfoForResourceTypeWorldEnvironmentMaps_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeWorldEnvironmentMaps_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class C_fogplayerparams_t : public SchemaBase
{
// C_fogplayerparams_t additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_FogController > m_hCtrl;// 0x4, size 4 (0x4)
	// m_hCtrl metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	__declspec(align(4)) float m_flTransitionTime;// 0x8, size 4 (0x4)
	__declspec(align(1)) UnknownType <0x4, class Color> m_OldColor;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flOldStart;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flOldEnd;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flOldMaxDensity;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flOldHDRColorScale;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flOldFarZ;// 0x20, size 4 (0x4)
	__declspec(align(1)) UnknownType <0x4, class Color> m_NewColor;// 0x24, size 4 (0x4)
	__declspec(align(4)) float m_flNewStart;// 0x28, size 4 (0x4)
	__declspec(align(4)) float m_flNewEnd;// 0x2c, size 4 (0x4)
	__declspec(align(4)) float m_flNewMaxDensity;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flNewHDRColorScale;// 0x34, size 4 (0x4)
	__declspec(align(4)) float m_flNewFarZ;// 0x38, size 4 (0x4)
}; // size: 60 (0x3c)
#pragma pack(pop)

#pragma pack(push, 4)
class CreatureStateData_t
{
// CreatureStateData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) char* pszName;// 0x0, size 4 (0x4)
	__declspec(align(4)) float flAggression;// 0x4, size 4 (0x4)
	__declspec(align(4)) float flAvoidance;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flSupport;// 0xc, size 4 (0x4)
	__declspec(align(4)) float flRoamDistance;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetRandomControlPointPosition : public CParticlePerFrameOperatorInstance
{
// C_OP_SetRandomControlPointPosition additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bUseWorldLocation;// 0x60, size 1 (0x1)
	// m_bUseWorldLocation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOrient;// 0x61, size 1 (0x1)
	// m_bOrient metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP1;// 0x64, size 4 (0x4)
	// m_nCP1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nHeadLocation;// 0x68, size 4 (0x4)
	// m_nHeadLocation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flReRandomRate;// 0x6c, size 4 (0x4)
	// m_flReRandomRate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCPMinPos;// 0x70, size 12 (0xc)
	// m_vecCPMinPos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCPMaxPos;// 0x7c, size 12 (0xc)
	// m_vecCPMaxPos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetRandomControlPointPosition_090[0x8];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderSound : public CParticleRenderOperatorInstance
{
// C_OP_RenderSound additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flDurationScale;// 0xa0, size 4 (0x4)
	// m_flDurationScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSndLvlScale;// 0xa4, size 4 (0x4)
	// m_flSndLvlScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flPitchScale;// 0xa8, size 4 (0x4)
	// m_flPitchScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flVolumeScale;// 0xac, size 4 (0x4)
	// m_flVolumeScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nSndLvlField;// 0xb0, size 4 (0x4)
	// m_nSndLvlField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nDurationField;// 0xb4, size 4 (0x4)
	// m_nDurationField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nPitchField;// 0xb8, size 4 (0x4)
	// m_nPitchField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nVolumeField;// 0xbc, size 4 (0x4)
	// m_nVolumeField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nChannel;// 0xc0, size 4 (0x4)
	// m_nChannel metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) char m_pszSoundName[256];// 0xc4, size 256 (0x100)
	// m_pszSoundName metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_OP_RenderSound_01D0[0xC];
}; // size: 464 (0x1d0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapCPtoVector : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPtoVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCPInput;// 0x60, size 4 (0x4)
	// m_nCPInput metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nLocalSpaceCP;// 0x68, size 4 (0x4)
	// m_nLocalSpaceCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vInputMin;// 0x6c, size 12 (0xc)
	// m_vInputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vInputMax;// 0x78, size 12 (0xc)
	// m_vInputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOutputMin;// 0x84, size 12 (0xc)
	// m_vOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOutputMax;// 0x90, size 12 (0xc)
	// m_vOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) float m_flStartTime;// 0x9c, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0xa0, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInterpRate;// 0xa4, size 4 (0x4)
	// m_flInterpRate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0xa8, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0xa9, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOffset;// 0xaa, size 1 (0x1)
	// m_bOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAccelerate;// 0xab, size 1 (0x1)
	// m_bAccelerate metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapCPtoVector_0B0[0x4];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapScalarEndCap : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapScalarEndCap additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldInput;// 0x60, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x68, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x6c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x70, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x74, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapScalarEndCap_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RtEnvCull : public CParticleInitializerOperatorInstance
{
// C_INIT_RtEnvCull additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecTestDir;// 0x70, size 12 (0xc)
	// m_vecTestDir metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecTestNormal;// 0x7c, size 12 (0xc)
	// m_vecTestNormal metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) bool m_bUseVelocity;// 0x88, size 1 (0x1)
	// m_bUseVelocity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bCullOnMiss;// 0x89, size 1 (0x1)
	// m_bCullOnMiss metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLifeAdjust;// 0x8a, size 1 (0x1)
	// m_bLifeAdjust metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_RtEnvName[128];// 0x8b, size 128 (0x80)
	// m_RtEnvName metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RtEnvCull_0110[0x5];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 4)
class FeWorldCollisionParams_t
{
// FeWorldCollisionParams_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flWorldFriction;// 0x0, size 4 (0x4)
	__declspec(align(4)) float flGroundFriction;// 0x4, size 4 (0x4)
	__declspec(align(2)) uint16_t nListBegin;// 0x8, size 2 (0x2)
	__declspec(align(2)) uint16_t nListEnd;// 0xa, size 2 (0x2)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class CMultiInputVar
{
// CMultiInputVar additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public: 
	class inputitem_t : public SchemaBase
	{
	// CMultiInputVar::inputitem_t additional information
	// Alignment: -1
	// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
	// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
	// Abstract Class

	public:
char inputitem_t_018[0x14];
		__declspec(align(4)) int32_t outputID;// 0x18, size 4 (0x4)
		__declspec(align(4)) CMultiInputVar::inputitem_t *next;// 0x1c, size 4 (0x4)
	}; // size: 32 (0x20)

public:
	__declspec(align(4)) CMultiInputVar::inputitem_t *m_InputList;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_bUpdatedThisFrame;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientAdvanceTick_t : public EventAdvanceTick_t
{
// EventClientAdvanceTick_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 44 (0x2c)
#pragma pack(pop)

#pragma pack(push, 4)
class FeBandBendLimit_t
{
// FeBandBendLimit_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flDistMin;// 0x0, size 4 (0x4)
	__declspec(align(4)) float flDistMax;// 0x4, size 4 (0x4)
	__declspec(align(2)) uint16_t nNode[6];// 0x8, size 12 (0xc)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class CResourceDiskStruct
{
// CResourceDiskStruct additional information
// schemasystem.dll, project schemasystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nIntrospectionVersion;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nId;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_pName;// 0x8, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nDiskCrc;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nUserVersion;// 0x10, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nDiskSize;// 0x14, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nAlignment;// 0x16, size 2 (0x2)
	__declspec(align(4)) uint32_t m_nBaseStructId;// 0x18, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class CResourceDiskStructField > m_FieldIntrospection;// 0x1c, size 8 (0x8)
	__declspec(align(1)) uint8_t m_nStructFlags;// 0x24, size 1 (0x1)
char CResourceDiskStruct_028[0x3];
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 8)
class MaterialOverride_t : public BaseSceneObjectOverride_t
{
// MaterialOverride_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nSubSceneObject;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nDrawCallIndex;// 0x8, size 4 (0x4)
char MaterialOverride_t_010[0x4];
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_pMaterial;// 0x10, size 8 (0x8)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SpinYaw : public CGeneralSpin
{
// C_OP_SpinYaw additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class SheetFrameImage_t
{
// SheetFrameImage_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x8, class Vector2D> uvCropped[2];// 0x0, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x8, class Vector2D> uvUncropped[2];// 0x10, size 16 (0x10)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class MaterialParam_t
{
// MaterialParam_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class OnDiskBufferData_t
{
// OnDiskBufferData_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nElementCount;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nElementSizeInBytes;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RenderInputLayoutField_t > m_inputLayoutFields;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_pData;// 0x10, size 8 (0x8)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class WorldEnvironmentMaps_t
{
// WorldEnvironmentMaps_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class WorldEnvironmentMap_t > m_environmentMaps;// 0x0, size 8 (0x8)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ClothMovement : public CParticlePerFrameOperatorInstance
{
// C_OP_ClothMovement additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Gravity;// 0x60, size 12 (0xc)
	// m_Gravity metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_fDrag;// 0x6c, size 4 (0x4)
	// m_fDrag metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(1)) bool m_bTriangulate;// 0x70, size 1 (0x1)
	// m_bTriangulate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bConstraints;// 0x71, size 1 (0x1)
	// m_bConstraints metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAddCurvature;// 0x74, size 4 (0x4)
	// m_flAddCurvature metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAddSlack;// 0x78, size 4 (0x4)
	// m_flAddSlack metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAddNoise;// 0x7c, size 4 (0x4)
	// m_flAddNoise metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxConstraintPasses;// 0x80, size 4 (0x4)
	// m_nMaxConstraintPasses metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockULCorner;// 0x84, size 1 (0x1)
	// m_bLockULCorner metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockURCorner;// 0x85, size 1 (0x1)
	// m_bLockURCorner metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockLLCorner;// 0x86, size 1 (0x1)
	// m_bLockLLCorner metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockLRCorner;// 0x87, size 1 (0x1)
	// m_bLockLRCorner metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockURow;// 0x88, size 1 (0x1)
	// m_bLockURow metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockLRow;// 0x89, size 1 (0x1)
	// m_bLockLRow metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockLColumn;// 0x8a, size 1 (0x1)
	// m_bLockLColumn metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockRColumn;// 0x8b, size 1 (0x1)
	// m_bLockRColumn metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nIterations;// 0x8c, size 4 (0x4)
	// m_nIterations metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapVectortoCP : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapVectortoCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nOutControlPointNumber;// 0x60, size 4 (0x4)
	// m_nOutControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldInput;// 0x64, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nParticleNumber;// 0x68, size 4 (0x4)
	// m_nParticleNumber metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapVectortoCP_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapVisibilityScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapVisibilityScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldInput;// 0x60, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x68, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x6c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x70, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x74, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadiusScale;// 0x78, size 4 (0x4)
	// m_flRadiusScale metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapVisibilityScalar_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_VelocityFromCP : public CParticleInitializerOperatorInstance
{
// C_INIT_VelocityFromCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPoint;// 0x70, size 4 (0x4)
	// m_nControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointCompare;// 0x74, size 4 (0x4)
	// m_nControlPointCompare metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointLocal;// 0x78, size 4 (0x4)
	// m_nControlPointLocal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flVelocityScale;// 0x7c, size 4 (0x4)
	// m_flVelocityScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bDirectionOnly;// 0x80, size 1 (0x1)
	// m_bDirectionOnly metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_VelocityFromCP_090[0xF];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class CTestNugget_1 : public CBaseNugget
{
// CTestNugget_1 additional information
// vscript.dll, project vscript
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_int32Val;// 0x10, size 4 (0x4)
	__declspec(align(4)) TestStruct_1 m_RawStruct1;// 0x14, size 48 (0x30)
}; // size: 68 (0x44)
#pragma pack(pop)

#pragma pack(push, 4)
class Sheet_t
{
// Sheet_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SheetSequence_t > m_Sequences;// 0x0, size 8 (0x8)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class PlayerResourcePlayerTeamData_t : public SchemaBase
{
// PlayerResourcePlayerTeamData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char PlayerResourcePlayerTeamData_t_0C[0x8];
	__declspec(align(4)) int32_t m_nSelectedHeroID;// 0xc, size 4 (0x4)
	// m_nSelectedHeroID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_iKills;// 0x10, size 4 (0x4)
	// m_iKills metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iAssists;// 0x14, size 4 (0x4)
	// m_iAssists metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iDeaths;// 0x18, size 4 (0x4)
	// m_iDeaths metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iStreak;// 0x1c, size 4 (0x4)
	// m_iStreak metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iLevel;// 0x20, size 4 (0x4)
	// m_iLevel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iRespawnSeconds;// 0x24, size 4 (0x4)
	// m_iRespawnSeconds metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iLastBuybackTime;// 0x28, size 4 (0x4)
	// m_iLastBuybackTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hSelectedHero;// 0x2c, size 4 (0x4)
	// m_hSelectedHero metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAFK;// 0x30, size 1 (0x1)
	// m_bAFK metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nSuggestedHeroes[2];// 0x34, size 8 (0x8)
	// m_nSuggestedHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bVoiceChatBanned;// 0x3c, size 1 (0x1)
	// m_bVoiceChatBanned metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iTimedRewardDrops;// 0x40, size 4 (0x4)
	// m_iTimedRewardDrops metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iTimedRewardDropOrigins;// 0x44, size 4 (0x4)
	// m_iTimedRewardDropOrigins metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iTimedRewardCrates;// 0x48, size 4 (0x4)
	// m_iTimedRewardCrates metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iTimedRewardEvents;// 0x4c, size 4 (0x4)
	// m_iTimedRewardEvents metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_unCompendiumLevel;// 0x50, size 2 (0x2)
	// m_unCompendiumLevel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bHasRepicked;// 0x52, size 1 (0x1)
	// m_bHasRepicked metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bHasRandomed;// 0x53, size 1 (0x1)
	// m_bHasRandomed metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bBattleBonusActive;// 0x54, size 1 (0x1)
	// m_bBattleBonusActive metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_iBattleBonusRate;// 0x56, size 2 (0x2)
	// m_iBattleBonusRate metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCustomBuybackCost;// 0x58, size 4 (0x4)
	// m_iCustomBuybackCost metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) UnknownType <0x4, class Color> m_CustomPlayerColor;// 0x5c, size 4 (0x4)
	// m_CustomPlayerColor metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bReservedHeroOnly;// 0x60, size 1 (0x1)
	// m_bReservedHeroOnly metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bQualifiesForPAContractReward;// 0x61, size 1 (0x1)
	// m_bQualifiesForPAContractReward metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bHasPredictedVictory;// 0x62, size 1 (0x1)
	// m_bHasPredictedVictory metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_UnitShareMasks;// 0x64, size 4 (0x4)
	// m_UnitShareMasks metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iTeamSlot;// 0x68, size 4 (0x4)
	// m_iTeamSlot metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 108 (0x6c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_OscillateVector : public CParticlePerFrameOperatorInstance
{
// C_OP_OscillateVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_RateMin;// 0x60, size 12 (0xc)
	// m_RateMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_RateMax;// 0x6c, size 12 (0xc)
	// m_RateMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_FrequencyMin;// 0x78, size 12 (0xc)
	// m_FrequencyMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_FrequencyMax;// 0x84, size 12 (0xc)
	// m_FrequencyMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) int32_t m_nField;// 0x90, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bProportional;// 0x94, size 1 (0x1)
	// m_bProportional metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bProportionalOp;// 0x95, size 1 (0x1)
	// m_bProportionalOp metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOffset;// 0x96, size 1 (0x1)
	// m_bOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_min;// 0x98, size 4 (0x4)
	// m_flStartTime_min metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_max;// 0x9c, size 4 (0x4)
	// m_flStartTime_max metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_min;// 0xa0, size 4 (0x4)
	// m_flEndTime_min metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_max;// 0xa4, size 4 (0x4)
	// m_flEndTime_max metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOscMult;// 0xa8, size 4 (0x4)
	// m_flOscMult metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOscAdd;// 0xac, size 4 (0x4)
	// m_flOscAdd metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 176 (0xb0)
#pragma pack(pop)

class CViewAngleKeyFrame : public SchemaBase
{
// CViewAngleKeyFrame additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_vecAngles;// 0x4, size 12 (0xc)
	__declspec(align(4)) float m_flTime;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_iFlags;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)

#pragma pack(push, 4)
class CDOTA_Modifier_Lua : public CDOTA_Buff
{
// CDOTA_Modifier_Lua additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char CDOTA_Modifier_Lua_0308[0x18];
}; // size: 776 (0x308)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_EndCapTimedDecay : public CParticlePerFrameOperatorInstance
{
// C_OP_EndCapTimedDecay additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flDecayTime;// 0x60, size 4 (0x4)
	// m_flDecayTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_EndCapTimedDecay_070[0xC];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class C_TeamplayRules : public C_MultiplayRules
{
// C_TeamplayRules additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class CWorldVisCluster
{
// CWorldVisCluster additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMins;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxs;// 0xc, size 12 (0xc)
	__declspec(align(4)) int32_t m_nData;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flNearVisibleDistance;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flFarVisibleDistance;// 0x20, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFlags;// 0x24, size 4 (0x4)
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderScreenShake : public CParticleRenderOperatorInstance
{
// C_OP_RenderScreenShake additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flDurationScale;// 0xa0, size 4 (0x4)
	// m_flDurationScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadiusScale;// 0xa4, size 4 (0x4)
	// m_flRadiusScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFrequencyScale;// 0xa8, size 4 (0x4)
	// m_flFrequencyScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAmplitudeScale;// 0xac, size 4 (0x4)
	// m_flAmplitudeScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nRadiusField;// 0xb0, size 4 (0x4)
	// m_nRadiusField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nDurationField;// 0xb4, size 4 (0x4)
	// m_nDurationField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFrequencyField;// 0xb8, size 4 (0x4)
	// m_nFrequencyField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nAmplitudeField;// 0xbc, size 4 (0x4)
	// m_nAmplitudeField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFilterCP;// 0xc0, size 4 (0x4)
	// m_nFilterCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_RenderScreenShake_0D0[0xC];
}; // size: 208 (0xd0)
#pragma pack(pop)

class C_DOTASpectatorGraphManager : public SchemaBase
{
// C_DOTASpectatorGraphManager additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char C_DOTASpectatorGraphManager_014[0x10];
	__declspec(align(4)) CNetworkVarChainer __m_pChainEntity;// 0x14, size 12 (0xc)
	__declspec(align(4)) int32_t m_nPlayerDataCount;// 0x20, size 4 (0x4)
	__declspec(align(4)) CountdownTimer m_Timer;// 0x24, size 16 (0x10)
	__declspec(align(1)) bool m_bTracking;// 0x34, size 1 (0x1)
	__declspec(align(4)) float m_flStartTime;// 0x38, size 4 (0x4)
	__declspec(align(4)) int32_t m_nNextUpdatePlayer;// 0x3c, size 4 (0x4)
char C_DOTASpectatorGraphManager_044[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_DOTASpecGraphPlayerData > m_rgPlayerGraphData[24];// 0x44, size 96 (0x60)
	// m_rgPlayerGraphData metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgRadiantTotalEarnedGold[64];// 0xa4, size 256 (0x100)
	// m_rgRadiantTotalEarnedGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgDireTotalEarnedGold[64];// 0x1a4, size 256 (0x100)
	// m_rgDireTotalEarnedGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgRadiantTotalEarnedXP[64];// 0x2a4, size 256 (0x100)
	// m_rgRadiantTotalEarnedXP metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgDireTotalEarnedXP[64];// 0x3a4, size 256 (0x100)
	// m_rgDireTotalEarnedXP metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgRadiantNetWorth[64];// 0x4a4, size 256 (0x100)
	// m_rgRadiantNetWorth metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgDireNetWorth[64];// 0x5a4, size 256 (0x100)
	// m_rgDireNetWorth metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flTotalEarnedGoldStartTime;// 0x6a4, size 4 (0x4)
	// m_flTotalEarnedGoldStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flTotalEarnedGoldEndTime;// 0x6a8, size 4 (0x4)
	// m_flTotalEarnedGoldEndTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nGoldGraphVersion;// 0x6ac, size 4 (0x4)
	// m_nGoldGraphVersion metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) CountdownTimer m_TeamStatsUpdateTimer;// 0x6b0, size 16 (0x10)
char C_DOTASpectatorGraphManager_06D0[0x10];
	__declspec(align(4)) uint32_t m_unDataChangedCount;// 0x6d0, size 4 (0x4)
}; // size: 1748 (0x6d4)

#pragma pack(push, 4)
class magnetted_objects_t
{
// magnetted_objects_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char magnetted_objects_t_04[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > hEntity;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

class CHorizontalMotionController : public SchemaBase
{
// CHorizontalMotionController additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CHorizontalMotionController_08[0x4];
}; // size: 8 (0x8)

#pragma pack(push, 4)
class SeqResourceBoneMaskList_t
{
// SeqResourceBoneMaskList_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int16_t > m_nLocalBoneArray;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_flBoneWeightArray;// 0xc, size 8 (0x8)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointToCenter : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointToCenter additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP1;// 0x60, size 4 (0x4)
	// m_nCP1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCP1Pos;// 0x64, size 12 (0xc)
	// m_vecCP1Pos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
}; // size: 112 (0x70)
#pragma pack(pop)

class CDOTAMusicProbabilityEntry : public SchemaBase
{
// CDOTAMusicProbabilityEntry additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, float > m_flProbabilityElements;// 0x4, size 16 (0x10)
	__declspec(align(4)) float m_flProbability;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)

#pragma pack(push, 4)
class CNetworkVelocityVector
{
// CNetworkVelocityVector additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Value;// 0x0, size 12 (0xc)
	// m_Value metadata
	 // MNetworkDisable
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecX;// 0xc, size 8 (0x8)
	// m_vecX metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecY;// 0x14, size 8 (0x8)
	// m_vecY metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecZ;// 0x1c, size 8 (0x8)
	// m_vecZ metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
char CNetworkVelocityVector_028[0x4];
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_DifferencePreviousParticle : public CParticlePerFrameOperatorInstance
{
// C_OP_DifferencePreviousParticle additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldInput;// 0x60, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x68, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x6c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x70, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x74, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x78, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x79, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetPreviousParticle;// 0x7a, size 1 (0x1)
	// m_bSetPreviousParticle metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_DifferencePreviousParticle_080[0x5];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class BaseConstraint_t
{
// BaseConstraint_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nConstraintType;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vUpVector;// 0x8, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_qAimOffset;// 0x14, size 16 (0x10)
	__declspec(align(4)) uint32_t m_nTargetUpBoneHash;// 0x24, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nUpType;// 0x28, size 4 (0x4)
	__declspec(align(1)) bool m_bInverse;// 0x2c, size 1 (0x1)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_qParentBindRotation;// 0x30, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_qChildBindRotation;// 0x40, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ConstraintSlave_t > m_slaves;// 0x50, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ConstraintTarget_t > m_targets;// 0x58, size 8 (0x8)
}; // size: 96 (0x60)
#pragma pack(pop)

class CNavVolumeVector : public CNavVolume
{
// CNavVolumeVector additional information
// server.dll, project navlib
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CNavVolumeVector_04C[0x4];
	__declspec(align(1)) bool m_bHasBeenPreFiltered;// 0x4c, size 1 (0x1)
char CNavVolumeVector_060[0x13];
}; // size: 96 (0x60)

#pragma pack(push, 4)
class ResourceSpecialDependency_t
{
// ResourceSpecialDependency_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_String;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_CompilerIdentifier;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFingerprint;// 0x8, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nUserData;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class DOTAAbilityData_t
{
// DOTAAbilityData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) char* m_pszAbilityName;// 0x0, size 4 (0x4)
	__declspec(align(4)) char* m_pszTextureName;// 0x4, size 4 (0x4)
	__declspec(align(4)) char* m_pszSharedCooldownName;// 0x8, size 4 (0x4)
	__declspec(align(4)) char* m_pszItemRecipeName;// 0xc, size 4 (0x4)
	__declspec(align(4)) char* m_pszKeyOverride;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pKVData;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAbilityID;// 0x18, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAbilityType;// 0x1c, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAbilityBehavior;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAbilityTargetTeam;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAbilityTargetType;// 0x28, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAbilityTargetFlags;// 0x2c, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAbilityDamageType;// 0x30, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAbilityImmunityType;// 0x34, size 4 (0x4)
	__declspec(align(4)) int32_t m_iFightRecapLevel;// 0x38, size 4 (0x4)
	__declspec(align(4)) int32_t m_iMaxLevel;// 0x3c, size 4 (0x4)
	__declspec(align(4)) int32_t m_iItemBaseLevel;// 0x40, size 4 (0x4)
	__declspec(align(4)) int32_t m_iItemCost;// 0x44, size 4 (0x4)
	__declspec(align(1)) bool m_bIsItem;// 0x48, size 1 (0x1)
	__declspec(align(4)) int32_t m_iItemID;// 0x4c, size 4 (0x4)
	__declspec(align(1)) bool m_bItemIsRecipe;// 0x50, size 1 (0x1)
	__declspec(align(1)) bool m_bItemIsRecipeGenerated;// 0x51, size 1 (0x1)
	__declspec(align(1)) bool m_bItemRequiresSecretShop;// 0x52, size 1 (0x1)
	__declspec(align(1)) bool m_bItemAvailableAtSideShop;// 0x53, size 1 (0x1)
	__declspec(align(1)) bool m_bItemIsPureSupport;// 0x54, size 1 (0x1)
	__declspec(align(1)) bool m_bItemIsPurchasable;// 0x55, size 1 (0x1)
	__declspec(align(1)) bool m_bDisplayAdditionalHeroes;// 0x56, size 1 (0x1)
	__declspec(align(1)) bool m_bItemContributesToNetWorthWhenDropped;// 0x57, size 1 (0x1)
	__declspec(align(4)) int32_t m_iItemStockMax;// 0x58, size 4 (0x4)
	__declspec(align(4)) float m_fItemStockTime;// 0x5c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, int32_t > m_vecItemShopTagKeys;// 0x60, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, uint16_t > m_vecItemCombinesInto;// 0x70, size 16 (0x10)
	__declspec(align(4)) ItemQuality_t m_ItemQuality;// 0x80, size 4 (0x4)
	__declspec(align(4)) float m_flModifierValue;// 0x84, size 4 (0x4)
	__declspec(align(4)) float m_flModifierValueBonus;// 0x88, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x4, class CUtlString> > m_InvalidHeroes;// 0x8c, size 16 (0x10)
	__declspec(align(1)) bool m_bOnCastbar;// 0x9c, size 1 (0x1)
	__declspec(align(1)) bool m_bOnLearnbar;// 0x9d, size 1 (0x1)
	__declspec(align(1)) bool m_bIsGrantedByScepter;// 0x9e, size 1 (0x1)
	__declspec(align(1)) bool m_bIsCastableWhileHidden;// 0x9f, size 1 (0x1)
char DOTAAbilityData_t_0F0[0x50];
	__declspec(align(4)) int32_t m_nCastRangeBuffer;// 0xf0, size 4 (0x4)
	__declspec(align(1)) bool m_bAnimationIgnoresModelScale;// 0xf4, size 1 (0x1)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class DOTASpecialAbility_t > m_SpecialAbilities;// 0xf8, size 16 (0x10)
	__declspec(align(4)) char* m_pModelName;// 0x108, size 4 (0x4)
	__declspec(align(4)) char* m_pEffectName;// 0x10c, size 4 (0x4)
	__declspec(align(4)) char* m_pPingOverrideText;// 0x110, size 4 (0x4)
	__declspec(align(4)) int32_t m_iLevelsBetweenUpgrades;// 0x114, size 4 (0x4)
	__declspec(align(4)) int32_t m_iRequiredLevel;// 0x118, size 4 (0x4)
}; // size: 284 (0x11c)
#pragma pack(pop)

class CSpeechBubbleInfo : public SchemaBase
{
// CSpeechBubbleInfo additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// Abstract Class

public:
char CSpeechBubbleInfo_0A[0x6];
	__declspec(align(1)) char m_LocalizationStr[256];// 0xa, size 256 (0x100)
	// m_LocalizationStr metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hNPC;// 0x10c, size 4 (0x4)
	// m_hNPC metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flDuration;// 0x110, size 4 (0x4)
	// m_flDuration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_unOffsetX;// 0x114, size 4 (0x4)
	// m_unOffsetX metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_unOffsetY;// 0x118, size 4 (0x4)
	// m_unOffsetY metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_unCount;// 0x11c, size 2 (0x2)
	// m_unCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
char CSpeechBubbleInfo_0120[0x2];
}; // size: 288 (0x120)

#pragma pack(push, 16)
class C_OP_ModelCull : public CParticlePerFrameOperatorInstance
{
// C_OP_ModelCull additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bBoundBox;// 0x64, size 1 (0x1)
	// m_bBoundBox metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bCullOutside;// 0x65, size 1 (0x1)
	// m_bCullOutside metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseBones;// 0x66, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_HitboxSetName[128];// 0x67, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_ModelCull_0F0[0x9];
}; // size: 240 (0xf0)
#pragma pack(pop)

#pragma pack(push, 16)
class CPathParameters
{
// CPathParameters additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nStartControlPointNumber;// 0x0, size 4 (0x4)
	// m_nStartControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nEndControlPointNumber;// 0x4, size 4 (0x4)
	// m_nEndControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nBulgeControl;// 0x8, size 4 (0x4)
	// m_nBulgeControl metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBulge;// 0xc, size 4 (0x4)
	// m_flBulge metadata
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMidPoint;// 0x10, size 4 (0x4)
	// m_flMidPoint metadata
	 // MAttributeName
	 // MDefaultString
char CPathParameters_020[0xC];
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class CAttachment
{
// CAttachment additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_influenceNames[3];// 0x4, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vInfluenceOffsets[3];// 0x10, size 36 (0x24)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_vInfluenceRotations[3];// 0x34, size 48 (0x30)
	__declspec(align(4)) float m_influenceWeights[3];// 0x64, size 12 (0xc)
	__declspec(align(4)) AttachmentInfluenceFlags_t m_influenceFlags[3];// 0x70, size 12 (0xc)
	__declspec(align(1)) uint8_t m_nInfluences;// 0x7c, size 1 (0x1)
char CAttachment_080[0x3];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class CVPhysXSurfacePhysicsParams
{
// CVPhysXSurfacePhysicsParams additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_friction;// 0x0, size 4 (0x4)
	// m_friction metadata
	 // MAttributeName
	__declspec(align(4)) float m_elasticity;// 0x4, size 4 (0x4)
	// m_elasticity metadata
	 // MAttributeName
	__declspec(align(4)) float m_density;// 0x8, size 4 (0x4)
	// m_density metadata
	 // MAttributeName
	__declspec(align(4)) float m_thickness;// 0xc, size 4 (0x4)
	// m_thickness metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_dampening;// 0x10, size 4 (0x4)
	// m_dampening metadata
	 // MAttributeName
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 8)
class CNavVolumeSphere : public CNavVolume
{
// CNavVolumeSphere additional information
// server.dll, project navlib
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCenter;// 0x48, size 12 (0xc)
	__declspec(align(4)) float m_flRadius;// 0x54, size 4 (0x4)
}; // size: 88 (0x58)
#pragma pack(pop)

#pragma pack(push, 8)
class ResponseParams
{
// ResponseParams additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char ResponseParams_010[0x10];
	__declspec(align(2)) int16_t odds;// 0x10, size 2 (0x2)
	__declspec(align(2)) int16_t flags;// 0x12, size 2 (0x2)
	__declspec(align(1)) uint8_t soundlevel;// 0x14, size 1 (0x1)
	__declspec(align(4)) ResponseFollowup *m_pFollowup;// 0x18, size 4 (0x4)
char ResponseParams_020[0x4];
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointFieldToWater : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointFieldToWater additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nSourceCP;// 0x60, size 4 (0x4)
	// m_nSourceCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nDestCP;// 0x64, size 4 (0x4)
	// m_nDestCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCPField;// 0x68, size 4 (0x4)
	// m_nCPField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_OP_SetControlPointFieldToWater_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_PositionOffset : public CParticleInitializerOperatorInstance
{
// C_INIT_PositionOffset additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_OffsetMin;// 0x70, size 12 (0xc)
	// m_OffsetMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_OffsetMax;// 0x7c, size 12 (0xc)
	// m_OffsetMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x88, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalCoords;// 0x8c, size 1 (0x1)
	// m_bLocalCoords metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bProportional;// 0x8d, size 1 (0x1)
	// m_bProportional metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_PositionOffset_090[0x2];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class CVPhysXSurfaceAudioSounds
{
// CVPhysXSurfaceAudioSounds additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_walkStepLeft;// 0x0, size 4 (0x4)
	// m_walkStepLeft metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_walkStepRight;// 0x4, size 4 (0x4)
	// m_walkStepRight metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_runStepLeft;// 0x8, size 4 (0x4)
	// m_runStepLeft metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_runStepRight;// 0xc, size 4 (0x4)
	// m_runStepRight metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_impactSoft;// 0x10, size 4 (0x4)
	// m_impactSoft metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_impactHard;// 0x14, size 4 (0x4)
	// m_impactHard metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_scrapeSmooth;// 0x18, size 4 (0x4)
	// m_scrapeSmooth metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_scrapeRough;// 0x1c, size 4 (0x4)
	// m_scrapeRough metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_bulletImpact;// 0x20, size 4 (0x4)
	// m_bulletImpact metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_rolling;// 0x24, size 4 (0x4)
	// m_rolling metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_break;// 0x28, size 4 (0x4)
	// m_break metadata
	 // MAttributeName
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_strain;// 0x2c, size 4 (0x4)
	// m_strain metadata
	 // MAttributeName
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 4)
class SchemaBaseClassInfoData_t
{
// SchemaBaseClassInfoData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nOffset;// 0x0, size 4 (0x4)
	__declspec(align(4)) CSchemaClassInfo *m_pClass;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class NianDamageTaken_t
{
// NianDamageTaken_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t nDamage;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t nPlayerID;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> vPos;// 0x8, size 12 (0xc)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateSpiralSphere : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateSpiralSphere additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOverrideCP;// 0x74, size 4 (0x4)
	// m_nOverrideCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nDensity;// 0x78, size 4 (0x4)
	// m_nDensity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInitialRadius;// 0x7c, size 4 (0x4)
	// m_flInitialRadius metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInitialSpeedMin;// 0x80, size 4 (0x4)
	// m_flInitialSpeedMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInitialSpeedMax;// 0x84, size 4 (0x4)
	// m_flInitialSpeedMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseParticleCount;// 0x88, size 1 (0x1)
	// m_bUseParticleCount metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateSpiralSphere_090[0x7];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class RnMesh_t
{
// RnMesh_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMin;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMax;// 0xc, size 12 (0xc)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnNode_t > m_Nodes;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0xc, class Vector> > m_Vertices;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnTriangle_t > m_Triangles;// 0x28, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_Materials;// 0x30, size 8 (0x8)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOrthographicAreas;// 0x38, size 12 (0xc)
}; // size: 68 (0x44)
#pragma pack(pop)

#pragma pack(push, 4)
class FeNodeIntegrator_t
{
// FeNodeIntegrator_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flPointDamping;// 0x0, size 4 (0x4)
	__declspec(align(4)) float flAnimationForceAttraction;// 0x4, size 4 (0x4)
	__declspec(align(4)) float flAnimationVertexAttraction;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flGravity;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class sGlaiveInfo
{
// sGlaiveInfo additional information
// server.dll, project server
// Alignment: 4

public:
	__declspec(align(4)) int32_t iAttackIndex;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t iBounceCount;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > hAlreadyHitList;// 0x8, size 16 (0x10)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderProjected : public CParticleRenderOperatorInstance
{
// C_OP_RenderProjected additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bProjectCharacter;// 0xa0, size 1 (0x1)
	// m_bProjectCharacter metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bProjectWorld;// 0xa1, size 1 (0x1)
	// m_bProjectWorld metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bProjectWater;// 0xa2, size 1 (0x1)
	// m_bProjectWater metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bFlipHorizontal;// 0xa3, size 1 (0x1)
	// m_bFlipHorizontal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bEnableProjectedDepthControls;// 0xa4, size 1 (0x1)
	// m_bEnableProjectedDepthControls metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinProjectionDepth;// 0xa8, size 4 (0x4)
	// m_flMinProjectionDepth metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxProjectionDepth;// 0xac, size 4 (0x4)
	// m_flMaxProjectionDepth metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_hProjectedMaterial;// 0xb0, size 8 (0x8)
	// m_hProjectedMaterial metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
char C_OP_RenderProjected_0C0[0x8];
}; // size: 192 (0xc0)
#pragma pack(pop)

class CParticleForceOperatorInstance : public CParticleOperatorInstance
{
// CParticleForceOperatorInstance additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
}; // size: 96 (0x60)

#pragma pack(push, 16)
class C_INIT_InitialVelocityNoise : public CParticleInitializerOperatorInstance
{
// C_INIT_InitialVelocityNoise additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecAbsVal;// 0x70, size 12 (0xc)
	// m_vecAbsVal metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecAbsValInv;// 0x7c, size 12 (0xc)
	// m_vecAbsValInv metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffsetLoc;// 0x88, size 12 (0xc)
	// m_vecOffsetLoc metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flOffset;// 0x94, size 4 (0x4)
	// m_flOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMin;// 0x98, size 12 (0xc)
	// m_vecOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMax;// 0xa4, size 12 (0xc)
	// m_vecOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseScale;// 0xb0, size 4 (0x4)
	// m_flNoiseScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseScaleLoc;// 0xb4, size 4 (0x4)
	// m_flNoiseScaleLoc metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0xb8, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalSpace;// 0xbc, size 1 (0x1)
	// m_bLocalSpace metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bIgnoreDt;// 0xbd, size 1 (0x1)
	// m_bIgnoreDt metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_InitialVelocityNoise_0C0[0x2];
}; // size: 192 (0xc0)
#pragma pack(pop)

#pragma pack(push, 4)
class FlexOp_t
{
// FlexOp_t additional information
// meshsystem.dll, project meshsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_OpCode;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_Data;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RestartAfterDuration : public CParticlePerFrameOperatorInstance
{
// C_OP_RestartAfterDuration additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flDurationMin;// 0x60, size 4 (0x4)
	// m_flDurationMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDurationMax;// 0x64, size 4 (0x4)
	// m_flDurationMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP;// 0x68, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCPField;// 0x6c, size 4 (0x4)
	// m_nCPField metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nChildGroupID;// 0x70, size 4 (0x4)
	// m_nChildGroupID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOnlyChildren;// 0x74, size 1 (0x1)
	// m_bOnlyChildren metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_RestartAfterDuration_080[0xB];
}; // size: 128 (0x80)
#pragma pack(pop)

class CSpinUpdateBase : public CParticlePerFrameOperatorInstance
{
// CSpinUpdateBase additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
}; // size: 96 (0x60)

#pragma pack(push, 4)
class CovMatrix3
{
// CovMatrix3 additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vDiag;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_flXY;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flXZ;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flYZ;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class FeFollowNode_t
{
// FeFollowNode_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nParentNode;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nChildNode;// 0x2, size 2 (0x2)
	__declspec(align(4)) float flWeight;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

class CLocomotionBase : public INextBotComponent
{
// CLocomotionBase additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CLocomotionBase_064[0x50];
}; // size: 100 (0x64)

class IPlayerInfo : public SchemaBase
{
// IPlayerInfo additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class CreatureAbilityData_t
{
// CreatureAbilityData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > hAbility;// 0x0, size 4 (0x4)
	__declspec(align(1)) bool bIsDamage;// 0x4, size 1 (0x1)
	__declspec(align(1)) bool bIsDebuff;// 0x5, size 1 (0x1)
	__declspec(align(1)) bool bIsStun;// 0x6, size 1 (0x1)
	__declspec(align(1)) bool bIsAOE;// 0x7, size 1 (0x1)
	__declspec(align(1)) bool bIsLinear;// 0x8, size 1 (0x1)
	__declspec(align(1)) bool bUseOnCreeps;// 0x9, size 1 (0x1)
	__declspec(align(1)) bool bIsHeal;// 0xa, size 1 (0x1)
	__declspec(align(1)) bool bIsBuff;// 0xb, size 1 (0x1)
	__declspec(align(1)) bool bUseSelfishly;// 0xc, size 1 (0x1)
	__declspec(align(1)) bool bCanHelpOthersEscape;// 0xd, size 1 (0x1)
	__declspec(align(1)) bool bUseOnTrees;// 0xe, size 1 (0x1)
	__declspec(align(4)) int32_t nUseAtHealthPercent;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t nRadius;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t nMinimumTargets;// 0x18, size 4 (0x4)
	__declspec(align(4)) int32_t nMinimumHP;// 0x1c, size 4 (0x4)
	__declspec(align(4)) int32_t nMinimumRange;// 0x20, size 4 (0x4)
	__declspec(align(4)) CreatureAbilityType nAbilityType;// 0x24, size 4 (0x4)
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceIKRule_t
{
// AnimResourceIKRule_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t index;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t type;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t chain;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t bone;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t slot;// 0x10, size 4 (0x4)
	__declspec(align(4)) float height;// 0x14, size 4 (0x4)
	__declspec(align(4)) float radius;// 0x18, size 4 (0x4)
	__declspec(align(4)) float floor;// 0x1c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> pos;// 0x20, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> q;// 0x2c, size 16 (0x10)
	__declspec(align(4)) int32_t iStart;// 0x3c, size 4 (0x4)
	__declspec(align(4)) float start;// 0x40, size 4 (0x4)
	__declspec(align(4)) float peak;// 0x44, size 4 (0x4)
	__declspec(align(4)) float tail;// 0x48, size 4 (0x4)
	__declspec(align(4)) float end;// 0x4c, size 4 (0x4)
	__declspec(align(4)) float contact;// 0x50, size 4 (0x4)
	__declspec(align(4)) float drop;// 0x54, size 4 (0x4)
	__declspec(align(4)) float top;// 0x58, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szAttachmentName;// 0x5c, size 4 (0x4)
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 4)
class RnSoftbodyCapsule_t
{
// RnSoftbodyCapsule_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCenter[2];// 0x0, size 24 (0x18)
	__declspec(align(4)) float m_flRadius;// 0x18, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nParticle[2];// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)
#pragma pack(pop)

class IEconItemInterface : public SchemaBase
{
// IEconItemInterface additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class CAttributeList : public SchemaBase
{
// CAttributeList additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CEconItemAttribute > m_Attributes;// 0x4, size 16 (0x10)
	// m_Attributes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CAttributeList_030[0x1C];
	__declspec(align(4)) CAttributeManager *m_pManager;// 0x30, size 4 (0x4)
}; // size: 52 (0x34)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomSecondSequence : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomSecondSequence additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nSequenceMin;// 0x70, size 4 (0x4)
	// m_nSequenceMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
	__declspec(align(4)) int32_t m_nSequenceMax;// 0x74, size 4 (0x4)
	// m_nSequenceMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
char C_INIT_RandomSecondSequence_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomSequence : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomSequence additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nSequenceMin;// 0x70, size 4 (0x4)
	// m_nSequenceMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
	__declspec(align(4)) int32_t m_nSequenceMax;// 0x74, size 4 (0x4)
	// m_nSequenceMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
	__declspec(align(1)) bool m_bShuffle;// 0x78, size 1 (0x1)
	// m_bShuffle metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLinear;// 0x79, size 1 (0x1)
	// m_bLinear metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RandomSequence_080[0x6];
}; // size: 128 (0x80)
#pragma pack(pop)

class CGeneralRandomRotation : public CParticleInitializerOperatorInstance
{
// CGeneralRandomRotation additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// Abstract Class

public:
	__declspec(align(4)) float m_flDegreesMin;// 0x70, size 4 (0x4)
	// m_flDegreesMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MAlternateAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDegreesMax;// 0x74, size 4 (0x4)
	// m_flDegreesMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MAlternateAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDegrees;// 0x78, size 4 (0x4)
	// m_flDegrees metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MAlternateAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x7c, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char CGeneralRandomRotation_08C[0xC];
	__declspec(align(4)) float m_flRotationRandExponent;// 0x8c, size 4 (0x4)
	// m_flRotationRandExponent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MAlternateAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRandomlyFlipDirection;// 0x90, size 1 (0x1)
	// m_bRandomlyFlipDirection metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char CGeneralRandomRotation_0A0[0xF];
}; // size: 160 (0xa0)

#pragma pack(push, 4)
class RnPlane_t
{
// RnPlane_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vNormal;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_flOffset;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCWorldNode
{
// InfoForResourceTypeCWorldNode additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCWorldNode_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

class CSkeletonAnimationController : public SchemaBase
{
// CSkeletonAnimationController additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) CSkeletonInstance *m_pSkeletonInstance;// 0x4, size 4 (0x4)
	// m_pSkeletonInstance metadata
	 // MNetworkDisable
}; // size: 8 (0x8)

#pragma pack(push, 16)
class C_INIT_RandomScalar : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMin;// 0x70, size 4 (0x4)
	// m_flMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMax;// 0x74, size 4 (0x4)
	// m_flMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flExponent;// 0x78, size 4 (0x4)
	// m_flExponent metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x7c, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeResourceManifest_t
{
// InfoForResourceTypeResourceManifest_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeResourceManifest_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RampScalarSpline : public CParticlePerFrameOperatorInstance
{
// C_OP_RampScalarSpline additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_RateMin;// 0x60, size 4 (0x4)
	// m_RateMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_RateMax;// 0x64, size 4 (0x4)
	// m_RateMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_min;// 0x68, size 4 (0x4)
	// m_flStartTime_min metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_max;// 0x6c, size 4 (0x4)
	// m_flStartTime_max metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_min;// 0x70, size 4 (0x4)
	// m_flEndTime_min metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_max;// 0x74, size 4 (0x4)
	// m_flEndTime_max metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBias;// 0x78, size 4 (0x4)
	// m_flBias metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RampScalarSpline_0A0[0x24];
	__declspec(align(4)) int32_t m_nField;// 0xa0, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bProportionalOp;// 0xa4, size 1 (0x1)
	// m_bProportionalOp metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bEaseOut;// 0xa5, size 1 (0x1)
	// m_bEaseOut metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RampScalarSpline_0B0[0xA];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ReinitializeScalarEndCap : public CParticlePerFrameOperatorInstance
{
// C_OP_ReinitializeScalarEndCap additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flOutputMin;// 0x64, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x68, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_ReinitializeScalarEndCap_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class VpropBreakablePartData_t
{
// VpropBreakablePartData_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) bool m_bMotionDisabled;// 0x0, size 1 (0x1)
	// m_bMotionDisabled metadata
	 // MPropertyFriendlyName
	__declspec(align(1)) bool m_bNoShadows;// 0x1, size 1 (0x1)
	// m_bNoShadows metadata
	 // MPropertyFriendlyName
	__declspec(align(4)) int32_t m_nHealth;// 0x4, size 4 (0x4)
	// m_nHealth metadata
	 // MPropertyFriendlyName
	__declspec(align(4)) int32_t m_nFadeTime;// 0x8, size 4 (0x4)
	// m_nFadeTime metadata
	 // MPropertyFriendlyName
	__declspec(align(4)) int32_t m_nFadeMin;// 0xc, size 4 (0x4)
	// m_nFadeMin metadata
	 // MPropertyFriendlyName
	__declspec(align(4)) int32_t m_nFadeMax;// 0x10, size 4 (0x4)
	// m_nFadeMax metadata
	 // MPropertyFriendlyName
	__declspec(align(4)) float m_flBurstScale;// 0x14, size 4 (0x4)
	// m_flBurstScale metadata
	 // MPropertyFriendlyName
	__declspec(align(4)) float m_flBurstRandomize;// 0x18, size 4 (0x4)
	// m_flBurstRandomize metadata
	 // MPropertyFriendlyName
	__declspec(align(4)) uint32_t m_nSurfaceProp;// 0x1c, size 4 (0x4)
	// m_nSurfaceProp metadata
	 // MPropertyFriendlyName
	__declspec(align(4)) uint32_t m_nCollisionGroupHash;// 0x20, size 4 (0x4)
	// m_nCollisionGroupHash metadata
	 // MPropertyFriendlyName
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 4)
class CResourceIntrospectionManifest
{
// CResourceIntrospectionManifest additional information
// schemasystem.dll, project schemasystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nIntrospectionVersion;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class CResourceDiskStruct > m_ReferencedStructs;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class CResourceDiskEnum > m_ReferencedEnums;// 0xc, size 8 (0x8)
}; // size: 20 (0x14)
#pragma pack(pop)

class CGameRules : public SchemaBase
{
// CGameRules additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(1)) char m_szQuestName[128];// 0x4, size 128 (0x80)
	__declspec(align(4)) int32_t m_nQuestPhase;// 0x84, size 4 (0x4)
}; // size: 136 (0x88)

#pragma pack(push, 16)
class C_OP_CalculateNormalsForGrid : public CParticlePerFrameOperatorInstance
{
// C_OP_CalculateNormalsForGrid additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_Modifier_Lua_Horizontal_Motion : public CDOTA_Modifier_Lua, public CHorizontalMotionController
{
// CDOTA_Modifier_Lua_Horizontal_Motion additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 784 (0x310)
#pragma pack(pop)

#pragma pack(push, 2)
class cache_ragdoll_t
{
// cache_ragdoll_t additional information
// server.dll, project server
// Alignment: 2
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) int16_t solidCount;// 0x0, size 2 (0x2)
	__declspec(align(2)) int16_t constraintCount;// 0x2, size 2 (0x2)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class dynpitchvol_t
{
// dynpitchvol_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t preset;// 0x0, size 4 (0x4)
	// preset metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t pitchrun;// 0x4, size 4 (0x4)
	// pitchrun metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t pitchstart;// 0x8, size 4 (0x4)
	// pitchstart metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t spinup;// 0xc, size 4 (0x4)
	// spinup metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t spindown;// 0x10, size 4 (0x4)
	// spindown metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t volrun;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t volstart;// 0x18, size 4 (0x4)
	// volstart metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t fadein;// 0x1c, size 4 (0x4)
	__declspec(align(4)) int32_t fadeout;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t lfotype;// 0x24, size 4 (0x4)
	// lfotype metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t lforate;// 0x28, size 4 (0x4)
	__declspec(align(4)) int32_t lfomodpitch;// 0x2c, size 4 (0x4)
	// lfomodpitch metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t lfomodvol;// 0x30, size 4 (0x4)
	// lfomodvol metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t cspinup;// 0x34, size 4 (0x4)
	// cspinup metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t cspincount;// 0x38, size 4 (0x4)
	__declspec(align(4)) int32_t pitch;// 0x3c, size 4 (0x4)
	__declspec(align(4)) int32_t spinupsav;// 0x40, size 4 (0x4)
	__declspec(align(4)) int32_t spindownsav;// 0x44, size 4 (0x4)
	__declspec(align(4)) int32_t pitchfrac;// 0x48, size 4 (0x4)
	__declspec(align(4)) int32_t vol;// 0x4c, size 4 (0x4)
	__declspec(align(4)) int32_t fadeinsav;// 0x50, size 4 (0x4)
	__declspec(align(4)) int32_t fadeoutsav;// 0x54, size 4 (0x4)
	__declspec(align(4)) int32_t volfrac;// 0x58, size 4 (0x4)
	__declspec(align(4)) int32_t lfofrac;// 0x5c, size 4 (0x4)
	__declspec(align(4)) int32_t lfomult;// 0x60, size 4 (0x4)
}; // size: 100 (0x64)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_FadeOut : public CParticlePerFrameOperatorInstance
{
// C_OP_FadeOut additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_flFadeOutTimeMin;// 0x60, size 4 (0x4)
	// m_flFadeOutTimeMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFadeOutTimeMax;// 0x64, size 4 (0x4)
	// m_flFadeOutTimeMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFadeOutTimeExp;// 0x68, size 4 (0x4)
	// m_flFadeOutTimeExp metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFadeBias;// 0x6c, size 4 (0x4)
	// m_flFadeBias metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_FadeOut_080[0x10];
	__declspec(align(1)) bool m_bProportional;// 0x80, size 1 (0x1)
	// m_bProportional metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bEaseInAndOut;// 0x81, size 1 (0x1)
	// m_bEaseInAndOut metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_FadeOut_090[0xE];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class C_PlayerState : public SchemaBase
{
// C_PlayerState additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool deadflag;// 0x4, size 1 (0x1)
	__declspec(align(1)) bool hltv;// 0x5, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class QAngle> v_angle;// 0x8, size 12 (0xc)
	__declspec(align(1)) bool hmd_active;// 0x14, size 1 (0x1)
	__declspec(align(1)) bool hmd_hand1_active;// 0x15, size 1 (0x1)
	__declspec(align(1)) bool hmd_hand2_active;// 0x16, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> hmd_middle_eye;// 0x18, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> hmd_viewangles;// 0x24, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> hmd_hand1;// 0x30, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> hmd_hand1_angles;// 0x3c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> hmd_hand2;// 0x48, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> hmd_hand2_angles;// 0x54, size 12 (0xc)
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapScalarToVector : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapScalarToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldInput;// 0x70, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x78, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x7c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMin;// 0x80, size 12 (0xc)
	// m_vecOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMax;// 0x8c, size 12 (0xc)
	// m_vecOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) float m_flStartTime;// 0x98, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x9c, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0xa0, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0xa4, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalCoords;// 0xa8, size 1 (0x1)
	// m_bLocalCoords metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapScalarToVector_0B0[0x7];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 2)
class VPhysXDiskShapeHeader_t
{
// VPhysXDiskShapeHeader_t additional information
// engine2.dll, project modellib
// Alignment: 2
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class VersinEnum_t : unsigned long
	{
		VERSION = 129,
	};

public:
	__declspec(align(1)) uint8_t m_nType;// 0x0, size 1 (0x1)
char VPhysXDiskShapeHeader_t_02[0x1];
	__declspec(align(2)) uint16_t m_nCollisionAttribute;// 0x2, size 2 (0x2)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCSequenceGroupResource
{
// InfoForResourceTypeCSequenceGroupResource additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCSequenceGroupResource_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class FourCovMatrices3
{
// FourCovMatrices3 additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(16)) UnknownType <0x30, class FourVectors> m_vDiag;// 0x0, size 48 (0x30)
	__declspec(align(16)) UnknownType <0x10, class fltx4> m_flXY;// 0x30, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> m_flXZ;// 0x40, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> m_flYZ;// 0x50, size 16 (0x10)
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 16)
class FeFitMatrix_t
{
// FeFitMatrix_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(16)) UnknownType <0x20, class CTransform> bone;// 0x0, size 32 (0x20)
	__declspec(align(4)) UnknownType <0xc, class Vector> vCenter;// 0x20, size 12 (0xc)
	__declspec(align(2)) uint16_t nEnd;// 0x2c, size 2 (0x2)
	__declspec(align(2)) uint16_t nNode;// 0x2e, size 2 (0x2)
	__declspec(align(2)) uint16_t nCtrl;// 0x30, size 2 (0x2)
	__declspec(align(2)) uint16_t nBeginDynamic;// 0x32, size 2 (0x2)
char FeFitMatrix_t_040[0xC];
}; // size: 64 (0x40)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderDeferredLight : public CParticleRenderOperatorInstance
{
// C_OP_RenderDeferredLight additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(1)) bool m_bUseAlphaTestWindow;// 0xa0, size 1 (0x1)
	// m_bUseAlphaTestWindow metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseTexture;// 0xa1, size 1 (0x1)
	// m_bUseTexture metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadiusScale;// 0xa4, size 4 (0x4)
	// m_flRadiusScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAlphaScale;// 0xa8, size 4 (0x4)
	// m_flAlphaScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLightDistance;// 0xac, size 4 (0x4)
	// m_flLightDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartFalloff;// 0xb0, size 4 (0x4)
	// m_flStartFalloff metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDistanceFalloff;// 0xb4, size 4 (0x4)
	// m_flDistanceFalloff metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpotFoV;// 0xb8, size 4 (0x4)
	// m_flSpotFoV metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_ColorScale;// 0xbc, size 4 (0x4)
	// m_ColorScale metadata
	 // MAttributeName
	 // MPropertyColorWithNoAlpha
	 // MDefaultString
char C_OP_RenderDeferredLight_0CC[0xC];
	__declspec(align(4)) int32_t m_nAlphaTestPointField;// 0xcc, size 4 (0x4)
	// m_nAlphaTestPointField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nAlphaTestRangeField;// 0xd0, size 4 (0x4)
	// m_nAlphaTestRangeField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nAlphaTestSharpnessField;// 0xd4, size 4 (0x4)
	// m_nAlphaTestSharpnessField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_hTexture;// 0xd8, size 8 (0x8)
	// m_hTexture metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
}; // size: 224 (0xe0)
#pragma pack(pop)

#pragma pack(push, 16)
class CDeferredLightBase : public SchemaBase
{
// CDeferredLightBase additional information
// client.dll, project client
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CDeferredLightBase_010[0xC];
	__declspec(align(1)) UnknownType <0x4, class color32> m_LightColor;// 0x10, size 4 (0x4)
	// m_LightColor metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float m_flIntensity;// 0x14, size 4 (0x4)
	// m_flIntensity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flLightSize;// 0x18, size 4 (0x4)
	// m_flLightSize metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flSpotFoV;// 0x1c, size 4 (0x4)
	// m_flSpotFoV metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_vLightDirection;// 0x20, size 12 (0xc)
	// m_vLightDirection metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flStartFalloff;// 0x2c, size 4 (0x4)
	// m_flStartFalloff metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flDistanceFalloff;// 0x30, size 4 (0x4)
	// m_flDistanceFalloff metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_nFlags;// 0x34, size 4 (0x4)
	// m_nFlags metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) char m_ProjectedTextureName[260];// 0x38, size 260 (0x104)
	// m_ProjectedTextureName metadata
	 // MNetworkEnable
	 // MNetworkEnable
char CDeferredLightBase_0180[0x44];
}; // size: 384 (0x180)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LerpEndCapScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_LerpEndCapScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flOutput;// 0x64, size 4 (0x4)
	// m_flOutput metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLerpTime;// 0x68, size 4 (0x4)
	// m_flLerpTime metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_LerpEndCapScalar_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SpringForce : public CParticleForceOperatorInstance
{
// C_OP_SpringForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flRestLengthU;// 0x60, size 4 (0x4)
	// m_flRestLengthU metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRestLengthV;// 0x64, size 4 (0x4)
	// m_flRestLengthV metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpringConstant;// 0x68, size 4 (0x4)
	// m_flSpringConstant metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDampingConstant;// 0x6c, size 4 (0x4)
	// m_flDampingConstant metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bStiff;// 0x70, size 1 (0x1)
	// m_bStiff metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SpringForce_080[0xF];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ForceBasedOnDistanceToPlane : public CParticleForceOperatorInstance
{
// C_OP_ForceBasedOnDistanceToPlane additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMinDist;// 0x60, size 4 (0x4)
	// m_flMinDist metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecForceAtMinDist;// 0x64, size 12 (0xc)
	// m_vecForceAtMinDist metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flMaxDist;// 0x70, size 4 (0x4)
	// m_flMaxDist metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecForceAtMaxDist;// 0x74, size 12 (0xc)
	// m_vecForceAtMaxDist metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecPlaneNormal;// 0x80, size 12 (0xc)
	// m_vecPlaneNormal metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x8c, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flExponent;// 0x90, size 4 (0x4)
	// m_flExponent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_ForceBasedOnDistanceToPlane_0A0[0xC];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class CPassengerSeat
{
// CPassengerSeat additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_strSeatName;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nAttachmentID;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CPassengerSeatTransition > m_EntryTransitions;// 0x8, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CPassengerSeatTransition > m_ExitTransitions;// 0x18, size 16 (0x10)
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 4)
class EntClassComponentOverride_t
{
// EntClassComponentOverride_t additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) char* pszBaseComponent;// 0x0, size 4 (0x4)
	__declspec(align(4)) char* pszOverrideComponent;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomLifeTime : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomLifeTime additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_fLifetimeMin;// 0x70, size 4 (0x4)
	// m_fLifetimeMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) float m_fLifetimeMax;// 0x74, size 4 (0x4)
	// m_fLifetimeMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) float m_fLifetimeRandExponent;// 0x78, size 4 (0x4)
	// m_fLifetimeRandExponent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_RandomLifeTime_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_SetHitboxToModel : public CParticleInitializerOperatorInstance
{
// C_INIT_SetHitboxToModel additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nForceInModel;// 0x74, size 4 (0x4)
	// m_nForceInModel metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nDesiredHitbox;// 0x78, size 4 (0x4)
	// m_nDesiredHitbox metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flHitBoxScale;// 0x7c, size 4 (0x4)
	// m_flHitBoxScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDirectionBias;// 0x80, size 12 (0xc)
	// m_vecDirectionBias metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) bool m_bMaintainHitbox;// 0x8c, size 1 (0x1)
	// m_bMaintainHitbox metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseBones;// 0x8d, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_HitboxSetName[128];// 0x8e, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_SetHitboxToModel_0110[0x2];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 4)
class HeroDeathRecord_t
{
// HeroDeathRecord_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t nKillerPlayerID;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t nVictimPlayerID;// 0x4, size 4 (0x4)
	__declspec(align(4)) float fTime;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_OffsetVectorToVector : public CParticleInitializerOperatorInstance
{
// C_INIT_OffsetVectorToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldInput;// 0x70, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMin;// 0x78, size 12 (0xc)
	// m_vecOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMax;// 0x84, size 12 (0xc)
	// m_vecOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_PositionWarp : public CParticleInitializerOperatorInstance
{
// C_INIT_PositionWarp additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecWarpMin;// 0x70, size 12 (0xc)
	// m_vecWarpMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecWarpMax;// 0x7c, size 12 (0xc)
	// m_vecWarpMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nScaleControlPointNumber;// 0x88, size 4 (0x4)
	// m_nScaleControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x8c, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nRadiusComponent;// 0x90, size 4 (0x4)
	// m_nRadiusComponent metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flWarpTime;// 0x94, size 4 (0x4)
	// m_flWarpTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flWarpStartTime;// 0x98, size 4 (0x4)
	// m_flWarpStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flPrevPosScale;// 0x9c, size 4 (0x4)
	// m_flPrevPosScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bInvertWarp;// 0xa0, size 1 (0x1)
	// m_bInvertWarp metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseCount;// 0xa1, size 1 (0x1)
	// m_bUseCount metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_PositionWarp_0B0[0xE];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 8)
class ResourceReferenceInfo_t
{
// ResourceReferenceInfo_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) uint64_t m_nId;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_pResourceName;// 0x8, size 4 (0x4)
char ResourceReferenceInfo_t_010[0x4];
}; // size: 16 (0x10)
#pragma pack(pop)

class IRecipientFilter : public SchemaBase
{
// IRecipientFilter additional information
// engine2.dll, project engine2
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class PermEntityLumpData_t
{
// PermEntityLumpData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) EntityLumpFlags_t m_flags;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_manifestName;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCEntityLump > > > m_childLumps;// 0xc, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class EntityKeyValueData_t > m_entityKeyValues;// 0x14, size 8 (0x8)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateSequentialPath : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateSequentialPath additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_fMaxDistance;// 0x70, size 4 (0x4)
	// m_fMaxDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNumToAssign;// 0x74, size 4 (0x4)
	// m_flNumToAssign metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLoop;// 0x78, size 1 (0x1)
	// m_bLoop metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bCPPairs;// 0x79, size 1 (0x1)
	// m_bCPPairs metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSaveOffset;// 0x7a, size 1 (0x1)
	// m_bSaveOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateSequentialPath_080[0x5];
	__declspec(align(16)) CPathParameters m_PathParams;// 0x80, size 32 (0x20)
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class EntOutput_t
{
// EntOutput_t additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char EntOutput_t_0C[0xC];
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_StopAfterCPDuration : public CParticlePerFrameOperatorInstance
{
// C_OP_StopAfterCPDuration additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flDuration;// 0x60, size 4 (0x4)
	// m_flDuration metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP;// 0x64, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCPField;// 0x68, size 4 (0x4)
	// m_nCPField metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bDestroyImmediately;// 0x6c, size 1 (0x1)
	// m_bDestroyImmediately metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bPlayEndCap;// 0x6d, size 1 (0x1)
	// m_bPlayEndCap metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_StopAfterCPDuration_070[0x2];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class CGlowOverlay : public SchemaBase
{
// CGlowOverlay additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vPos;// 0x4, size 12 (0xc)
	__declspec(align(1)) bool m_bDirectional;// 0x10, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vDirection;// 0x14, size 12 (0xc)
	__declspec(align(1)) bool m_bInSky;// 0x20, size 1 (0x1)
	__declspec(align(4)) float m_skyObstructionScale;// 0x24, size 4 (0x4)
	__declspec(align(4)) CGlowSprite m_Sprites[4];// 0x28, size 96 (0x60)
	__declspec(align(4)) int32_t m_nSprites;// 0x88, size 4 (0x4)
	__declspec(align(4)) float m_flProxyRadius;// 0x8c, size 4 (0x4)
	__declspec(align(4)) float m_flHDRColorScale;// 0x90, size 4 (0x4)
	__declspec(align(4)) float m_flGlowObstructionScale;// 0x94, size 4 (0x4)
	__declspec(align(1)) bool m_bCacheGlowObstruction;// 0x98, size 1 (0x1)
	__declspec(align(1)) bool m_bCacheSkyObstruction;// 0x99, size 1 (0x1)
	__declspec(align(2)) int16_t m_bActivated;// 0x9a, size 2 (0x2)
	__declspec(align(2)) uint16_t m_ListIndex;// 0x9c, size 2 (0x2)
char CGlowOverlay_0A0[0x2];
	__declspec(align(4)) int32_t m_queryHandle;// 0xa0, size 4 (0x4)
}; // size: 164 (0xa4)
#pragma pack(pop)

#pragma pack(push, 4)
class ClientQuickBuyItemState : public SchemaBase
{
// ClientQuickBuyItemState additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) int16_t nItemType;// 0x4, size 2 (0x2)
	// nItemType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool bPurchasable;// 0x6, size 1 (0x1)
	// bPurchasable metadata
	 // MNetworkEnable
	 // MNetworkEnable
char ClientQuickBuyItemState_08[0x1];
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RampScalarLinearSimple : public CParticlePerFrameOperatorInstance
{
// C_OP_RampScalarLinearSimple additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_Rate;// 0x60, size 4 (0x4)
	// m_Rate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x64, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x68, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RampScalarLinearSimple_090[0x24];
	__declspec(align(4)) int32_t m_nField;// 0x90, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_OP_RampScalarLinearSimple_0A0[0xC];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LerpEndCapVector : public CParticlePerFrameOperatorInstance
{
// C_OP_LerpEndCapVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutput;// 0x64, size 12 (0xc)
	// m_vecOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) float m_flLerpTime;// 0x70, size 4 (0x4)
	// m_flLerpTime metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_LerpEndCapVector_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class CSoundEnvelope
{
// CSoundEnvelope additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_current;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_target;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_rate;// 0x8, size 4 (0x4)
	__declspec(align(1)) bool m_forceupdate;// 0xc, size 1 (0x1)
char CSoundEnvelope_010[0x3];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class CNetworkOriginQuantizedVector
{
// CNetworkOriginQuantizedVector additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Value;// 0x0, size 12 (0xc)
	// m_Value metadata
	 // MNetworkDisable
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecX;// 0xc, size 8 (0x8)
	// m_vecX metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecY;// 0x14, size 8 (0x8)
	// m_vecY metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecZ;// 0x1c, size 8 (0x8)
	// m_vecZ metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
char CNetworkOriginQuantizedVector_028[0x4];
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 1)
class CVariantDefaultAllocator
{
// CVariantDefaultAllocator additional information
// worldrenderer.dll, project entity2
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char CVariantDefaultAllocator_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_InitialVelocityFromHitbox : public CParticleInitializerOperatorInstance
{
// C_INIT_InitialVelocityFromHitbox additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flVelocityMin;// 0x70, size 4 (0x4)
	// m_flVelocityMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flVelocityMax;// 0x74, size 4 (0x4)
	// m_flVelocityMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x78, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_HitboxSetName[128];// 0x7c, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseBones;// 0xfc, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_InitialVelocityFromHitbox_0100[0x3];
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 16)
class RnNode_t
{
// RnNode_t additional information
// engine2.dll, project modellib
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMin;// 0x0, size 12 (0xc)
	__declspec(align(4)) uint32_t m_nChildren;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMax;// 0x10, size 12 (0xc)
	__declspec(align(4)) uint32_t m_nTriangleOffset;// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class TextureHeader_t : public TextureDesc_t
{
// TextureHeader_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) uint16_t m_nMultisampleType;// 0xc, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nFlags;// 0xe, size 2 (0x2)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_Reflectivity;// 0x10, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x4, CResourcePointer, class Sheet_t > m_pSheet;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_nSheetSize;// 0x24, size 4 (0x4)
	__declspec(align(1)) uint8_t m_fallbackTextureBits[1360];// 0x28, size 1360 (0x550)
	__declspec(align(4)) int32_t m_nPicmip0Res;// 0x578, size 4 (0x4)
}; // size: 1404 (0x57c)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeWorldLighting_t
{
// InfoForResourceTypeWorldLighting_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeWorldLighting_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 2)
class FeEdgeDesc_t
{
// FeEdgeDesc_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 2
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nEdge[2];// 0x0, size 4 (0x4)
	__declspec(align(2)) uint16_t nSide[2][2];// 0x4, size 8 (0x8)
	__declspec(align(2)) uint16_t nElem[2];// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapScalar : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldInput;// 0x70, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x78, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x7c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x80, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x84, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x88, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x8c, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x90, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x91, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapScalar_0A0[0xE];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class MaterialParamInt_t : public MaterialParam_t
{
// MaterialParamInt_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nValue;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_DecayMaintainCount : public CParticlePerFrameOperatorInstance
{
// C_OP_DecayMaintainCount additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nParticlesToMaintain;// 0x60, size 4 (0x4)
	// m_nParticlesToMaintain metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPoint;// 0x64, size 4 (0x4)
	// m_nScaleControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPointField;// 0x68, size 4 (0x4)
	// m_nScaleControlPointField metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDecayDelay;// 0x6c, size 4 (0x4)
	// m_flDecayDelay metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 112 (0x70)
#pragma pack(pop)

class C_OP_RemapDistanceToLineSegmentBase : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapDistanceToLineSegmentBase additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// Abstract Class

public:
	__declspec(align(4)) int32_t m_nCP0;// 0x60, size 4 (0x4)
	// m_nCP0 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP1;// 0x64, size 4 (0x4)
	// m_nCP1 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinInputValue;// 0x68, size 4 (0x4)
	// m_flMinInputValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxInputValue;// 0x6c, size 4 (0x4)
	// m_flMaxInputValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bInfiniteLine;// 0x70, size 1 (0x1)
	// m_bInfiniteLine metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapDistanceToLineSegmentBase_080[0xF];
}; // size: 128 (0x80)

#pragma pack(push, 16)
class C_OP_RotateVector : public CParticlePerFrameOperatorInstance
{
// C_OP_RotateVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRotAxisMin;// 0x64, size 12 (0xc)
	// m_vecRotAxisMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRotAxisMax;// 0x70, size 12 (0xc)
	// m_vecRotAxisMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flRotRateMin;// 0x7c, size 4 (0x4)
	// m_flRotRateMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRotRateMax;// 0x80, size 4 (0x4)
	// m_flRotRateMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bNormalize;// 0x84, size 1 (0x1)
	// m_bNormalize metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_RotateVector_090[0xB];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_Orient2DRelToCP : public CParticlePerFrameOperatorInstance
{
// C_OP_Orient2DRelToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flRotOffset;// 0x60, size 4 (0x4)
	// m_flRotOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpinStrength;// 0x64, size 4 (0x4)
	// m_flSpinStrength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP;// 0x68, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x6c, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_InitFromParentKilled : public CParticleInitializerOperatorInstance
{
// C_INIT_InitFromParentKilled additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nAttributeToCopy;// 0x70, size 4 (0x4)
	// m_nAttributeToCopy metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_INIT_InitFromParentKilled_0100[0x8C];
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceUser_t
{
// AnimResourceUser_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nType;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceMovement_t
{
// AnimResourceMovement_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t endframe;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t motionflags;// 0x4, size 4 (0x4)
	__declspec(align(4)) float v0;// 0x8, size 4 (0x4)
	__declspec(align(4)) float v1;// 0xc, size 4 (0x4)
	__declspec(align(4)) float angle;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> vector;// 0x14, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> position;// 0x20, size 12 (0xc)
}; // size: 44 (0x2c)
#pragma pack(pop)

#pragma pack(push, 4)
class FeCtrlOffset_t
{
// FeCtrlOffset_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nCtrlParent;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nCtrlChild;// 0x2, size 2 (0x2)
	__declspec(align(4)) UnknownType <0xc, class Vector> vOffset;// 0x4, size 12 (0xc)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class FeTri_t
{
// FeTri_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[3];// 0x0, size 6 (0x6)
	__declspec(align(4)) float w1;// 0x8, size 4 (0x4)
	__declspec(align(4)) float w2;// 0xc, size 4 (0x4)
	__declspec(align(4)) float v1x;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x8, class Vector2D> v2;// 0x14, size 8 (0x8)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class CAnimationLayer : public SchemaBase
{
// CAnimationLayer additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CAnimationLayer_0C[0x8];
	__declspec(align(4)) CNetworkedSequenceOperation m_op;// 0xc, size 36 (0x24)
	// m_op metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MHasSubKeyfields
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_nOrder;// 0x30, size 4 (0x4)
	// m_nOrder metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_flPlaybackRate;// 0x34, size 8 (0x8)
	// m_flPlaybackRate metadata
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkSendProxyRecipientsFilter
	__declspec(align(1)) bool m_bLooping;// 0x3c, size 1 (0x1)
	// m_bLooping metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkSendProxyRecipientsFilter
	__declspec(align(4)) int32_t m_nNewSequenceParity;// 0x40, size 4 (0x4)
	// m_nNewSequenceParity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	 // MNetworkChangeCallback
	 // MNetworkSendProxyRecipientsFilter
	__declspec(align(4)) int32_t m_fFlags;// 0x44, size 4 (0x4)
	// m_fFlags metadata
	 // MNetworkDisable
	__declspec(align(1)) bool m_bSequenceFinished;// 0x48, size 1 (0x1)
	// m_bSequenceFinished metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flKillRate;// 0x4c, size 4 (0x4)
	// m_flKillRate metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flKillDelay;// 0x50, size 4 (0x4)
	// m_flKillDelay metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flLayerAnimtime;// 0x54, size 4 (0x4)
	// m_flLayerAnimtime metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flLayerFadeOuttime;// 0x58, size 4 (0x4)
	// m_flLayerFadeOuttime metadata
	 // MNetworkDisable
	__declspec(align(4)) int32_t m_nActivity;// 0x5c, size 4 (0x4)
	// m_nActivity metadata
	 // MNetworkDisable
	__declspec(align(4)) int32_t m_nPriority;// 0x60, size 4 (0x4)
	// m_nPriority metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flLastEventCycle;// 0x64, size 4 (0x4)
	// m_flLastEventCycle metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flLastAccess;// 0x68, size 4 (0x4)
	// m_flLastAccess metadata
	 // MNetworkDisable
char CAnimationLayer_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 8)
class CSSDSMsg_ViewRender
{
// CSSDSMsg_ViewRender additional information
// scenesystem.dll, project scenesystem
// Alignment: 8

public:
	__declspec(align(8)) SceneViewId_t m_viewId;// 0x0, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_ViewName;// 0x10, size 4 (0x4)
char CSSDSMsg_ViewRender_018[0x4];
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderTrails : public CBaseRendererSource2
{
// C_OP_RenderTrails additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nOrientationType;// 0x210, size 4 (0x4)
	// m_nOrientationType metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceEnumName
	__declspec(align(4)) int32_t m_nOrientationControlPoint;// 0x214, size 4 (0x4)
	// m_nOrientationControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinSize;// 0x218, size 4 (0x4)
	// m_flMinSize metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxSize;// 0x21c, size 4 (0x4)
	// m_flMaxSize metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartFadeSize;// 0x220, size 4 (0x4)
	// m_flStartFadeSize metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndFadeSize;// 0x224, size 4 (0x4)
	// m_flEndFadeSize metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxLength;// 0x228, size 4 (0x4)
	// m_flMaxLength metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinLength;// 0x22c, size 4 (0x4)
	// m_flMinLength metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bIgnoreDT;// 0x230, size 1 (0x1)
	// m_bIgnoreDT metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bClampV;// 0x231, size 1 (0x1)
	// m_bClampV metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flConstrainRadiusToLengthRatio;// 0x234, size 4 (0x4)
	// m_flConstrainRadiusToLengthRatio metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLengthScale;// 0x238, size 4 (0x4)
	// m_flLengthScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadiusTaper;// 0x23c, size 4 (0x4)
	// m_flRadiusTaper metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLengthFadeInTime;// 0x240, size 4 (0x4)
	// m_flLengthFadeInTime metadata
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vEndTrailTintFactor;// 0x244, size 16 (0x10)
	// m_vEndTrailTintFactor metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nHorizCropField;// 0x254, size 4 (0x4)
	// m_nHorizCropField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nVertCropField;// 0x258, size 4 (0x4)
	// m_nVertCropField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flRadiusScale;// 0x25c, size 4 (0x4)
	// m_flRadiusScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFinalTextureScaleU;// 0x260, size 4 (0x4)
	// m_flFinalTextureScaleU metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFinalTextureScaleV;// 0x264, size 4 (0x4)
	// m_flFinalTextureScaleV metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFinalTextureOffsetU;// 0x268, size 4 (0x4)
	// m_flFinalTextureOffsetU metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFinalTextureOffsetV;// 0x26c, size 4 (0x4)
	// m_flFinalTextureOffsetV metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 624 (0x270)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_UpdateLightSource : public CParticlePerFrameOperatorInstance
{
// C_OP_UpdateLightSource additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) UnknownType <0x4, class Color> m_vColorTint;// 0x60, size 4 (0x4)
	// m_vColorTint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBrightnessScale;// 0x64, size 4 (0x4)
	// m_flBrightnessScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadiusScale;// 0x68, size 4 (0x4)
	// m_flRadiusScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinimumLightingRadius;// 0x6c, size 4 (0x4)
	// m_flMinimumLightingRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaximumLightingRadius;// 0x70, size 4 (0x4)
	// m_flMaximumLightingRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flPositionDampingConstant;// 0x74, size 4 (0x4)
	// m_flPositionDampingConstant metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_UpdateLightSource_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_LifespanFromVelocity : public CParticleInitializerOperatorInstance
{
// C_INIT_LifespanFromVelocity additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecComponentScale;// 0x70, size 12 (0xc)
	// m_vecComponentScale metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flTraceOffset;// 0x7c, size 4 (0x4)
	// m_flTraceOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxTraceLength;// 0x80, size 4 (0x4)
	// m_flMaxTraceLength metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTraceTolerance;// 0x84, size 4 (0x4)
	// m_flTraceTolerance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxPlanes;// 0x88, size 4 (0x4)
	// m_nMaxPlanes metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_LifespanFromVelocity_090[0x4];
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x90, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_LifespanFromVelocity_0114[0x4];
	__declspec(align(1)) bool m_bIncludeWater;// 0x114, size 1 (0x1)
	// m_bIncludeWater metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_LifespanFromVelocity_0120[0xB];
}; // size: 288 (0x120)
#pragma pack(pop)

#pragma pack(push, 8)
class CDOTA_ReconnectInfo
{
// CDOTA_ReconnectInfo additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) uint64_t m_playerSteamId;// 0x0, size 8 (0x8)
	__declspec(align(4)) int32_t m_iTeam;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CEntityIndex> m_iUnitControlled;// 0xc, size 4 (0x4)
	__declspec(align(1)) bool m_bWantsRandomHero;// 0x10, size 1 (0x1)
char CDOTA_ReconnectInfo_018[0x7];
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class CLocalNPCObstructionsCache
{
// CLocalNPCObstructionsCache additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nLastUpdatedTick;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flRadius;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CDOTA_BaseNPC > > m_hCachedNPCs;// 0x8, size 16 (0x10)
}; // size: 24 (0x18)
#pragma pack(pop)

class IDamageHandler : public SchemaBase
{
// IDamageHandler additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class TestRawStruct_1
{
// TestRawStruct_1 additional information
// vscript.dll, project vscript
// Alignment: 4

public:
	__declspec(align(4)) TestStruct_1 m_RawStruct1;// 0x0, size 48 (0x30)
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_MovementLoopInsideSphere : public CParticlePerFrameOperatorInstance
{
// C_OP_MovementLoopInsideSphere additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x60, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDistance;// 0x64, size 4 (0x4)
	// m_flDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecScale;// 0x68, size 12 (0xc)
	// m_vecScale metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_MovementLoopInsideSphere_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class FeFitWeight_t
{
// FeFitWeight_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flWeight;// 0x0, size 4 (0x4)
	__declspec(align(2)) uint16_t nNode;// 0x4, size 2 (0x2)
	__declspec(align(2)) uint16_t nDummy;// 0x6, size 2 (0x2)
}; // size: 8 (0x8)
#pragma pack(pop)

class C_DOTAGamerules : public C_TeamplayRules
{
// C_DOTAGamerules additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) CNetworkVarChainer __m_pChainEntity;// 0x14, size 12 (0xc)
	__declspec(align(4)) int32_t m_iMiscHeroPickCounter;// 0x20, size 4 (0x4)
	// m_iMiscHeroPickCounter metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hEndGameCinematicEntity;// 0x24, size 4 (0x4)
	// m_hEndGameCinematicEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_DOTA_BaseNPC > m_hOverlayHealthBarUnit;// 0x28, size 4 (0x4)
	// m_hOverlayHealthBarUnit metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nOverlayHealthBarType;// 0x2c, size 4 (0x4)
	// m_nOverlayHealthBarType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsInItemTestingMode;// 0x30, size 1 (0x1)
	// m_bIsInItemTestingMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsInCinematicMode;// 0x31, size 1 (0x1)
	// m_bIsInCinematicMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bIsInClientSideCinematicMode;// 0x32, size 1 (0x1)
	__declspec(align(4)) int32_t m_nStartingGold;// 0x34, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGoldPerTick;// 0x38, size 4 (0x4)
	__declspec(align(4)) float m_flGoldTickTime;// 0x3c, size 4 (0x4)
	__declspec(align(1)) bool m_bItemWhiteListChanged;// 0x40, size 1 (0x1)
	__declspec(align(4)) uint32_t m_unFanfareGoodGuys;// 0x44, size 4 (0x4)
	// m_unFanfareGoodGuys metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) uint32_t m_unFanfareBadGuys;// 0x48, size 4 (0x4)
	// m_unFanfareBadGuys metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) bool m_bInitTournament;// 0x4c, size 1 (0x1)
	__declspec(align(1)) bool m_bIsTournament;// 0x4d, size 1 (0x1)
	__declspec(align(4)) int32_t m_iMapType;// 0x50, size 4 (0x4)
	__declspec(align(4)) int32_t m_nServerGameState;// 0x54, size 4 (0x4)
	// m_nServerGameState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkAlias
	__declspec(align(4)) DOTA_HeroPickState m_nServerHeroPickState;// 0x58, size 4 (0x4)
	// m_nServerHeroPickState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkAlias
	__declspec(align(4)) int32_t m_nGameState;// 0x5c, size 4 (0x4)
	__declspec(align(4)) DOTA_HeroPickState m_nHeroPickState;// 0x60, size 4 (0x4)
	__declspec(align(4)) float m_flStateTransitionTime;// 0x64, size 4 (0x4)
	// m_flStateTransitionTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_hero_selection_time;// 0x68, size 4 (0x4)
	// m_flOverride_dota_hero_selection_time metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_pregame_time;// 0x6c, size 4 (0x4)
	// m_flOverride_dota_pregame_time metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_postgame_time;// 0x70, size 4 (0x4)
	// m_flOverride_dota_postgame_time metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_rune_spawn_time;// 0x74, size 4 (0x4)
	// m_flOverride_dota_rune_spawn_time metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iGameMode;// 0x78, size 4 (0x4)
	// m_iGameMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hGameModeEntity;// 0x7c, size 4 (0x4)
	// m_hGameModeEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flHeroPickStateTransitionTime;// 0x80, size 4 (0x4)
	// m_flHeroPickStateTransitionTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_iPlayerIDsInControl[64];// 0x84, size 64 (0x40)
	// m_iPlayerIDsInControl metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSameHeroSelectionEnabled;// 0xc4, size 1 (0x1)
	// m_bSameHeroSelectionEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bUseCustomHeroXPValue;// 0xc5, size 1 (0x1)
	// m_bUseCustomHeroXPValue metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bUseBaseGoldBountyOnHeroes;// 0xc6, size 1 (0x1)
	// m_bUseBaseGoldBountyOnHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bUseUniversalShopMode;// 0xc7, size 1 (0x1)
	// m_bUseUniversalShopMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bHideKillMessageHeaders;// 0xc8, size 1 (0x1)
	// m_bHideKillMessageHeaders metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flHeroMinimapIconScale;// 0xcc, size 4 (0x4)
	// m_flHeroMinimapIconScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCreepMinimapIconScale;// 0xd0, size 4 (0x4)
	// m_flCreepMinimapIconScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flRuneMinimapIconScale;// 0xd4, size 4 (0x4)
	// m_flRuneMinimapIconScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) char m_CustomVictoryMessage[256];// 0xd8, size 256 (0x100)
	// m_CustomVictoryMessage metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomGameEndDelay;// 0x1d8, size 4 (0x4)
	// m_flCustomGameEndDelay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomGameSetupAutoLaunchDelay;// 0x1dc, size 4 (0x4)
	// m_flCustomGameSetupAutoLaunchDelay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomGameSetupTimeout;// 0x1e0, size 4 (0x4)
	// m_flCustomGameSetupTimeout metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomVictoryMessageDuration;// 0x1e4, size 4 (0x4)
	// m_flCustomVictoryMessageDuration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bCustomGameSetupAutoLaunchEnabled;// 0x1e8, size 1 (0x1)
	// m_bCustomGameSetupAutoLaunchEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bCustomGameTeamSelectionLocked;// 0x1e9, size 1 (0x1)
	// m_bCustomGameTeamSelectionLocked metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCMModePickBanOrder;// 0x1ec, size 4 (0x4)
	// m_iCMModePickBanOrder metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCDModePickBanOrder;// 0x1f0, size 4 (0x4)
	// m_iCDModePickBanOrder metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iPauseTeam;// 0x1f4, size 4 (0x4)
	// m_iPauseTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nGGTeam;// 0x1f8, size 4 (0x4)
	// m_nGGTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGGEndsAtTime;// 0x1fc, size 4 (0x4)
	// m_flGGEndsAtTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bWhiteListEnabled;// 0x200, size 1 (0x1)
	// m_bWhiteListEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(8)) uint64_t m_bItemWhiteList[4];// 0x208, size 32 (0x20)
	// m_bItemWhiteList metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_nLastHitUIMode;// 0x228, size 4 (0x4)
	// m_nLastHitUIMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) bool m_bHUDTimerTutorialMode;// 0x22c, size 1 (0x1)
	// m_bHUDTimerTutorialMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) CountdownTimer m_HeroPickMiscTimer;// 0x230, size 16 (0x10)
	__declspec(align(4)) CountdownTimer m_ExtraTimeTimer;// 0x240, size 16 (0x10)
	__declspec(align(4)) float m_fExtraTimeRemaining[2];// 0x250, size 8 (0x8)
	// m_fExtraTimeRemaining metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, int32_t > m_HeroPickPhaseBitfield;// 0x258, size 16 (0x10)
	__declspec(align(1)) bool m_bRDFirstThink;// 0x268, size 1 (0x1)
	__declspec(align(1)) bool m_RDMessageSent[64];// 0x269, size 64 (0x40)
	__declspec(align(1)) bool m_bHeroRespawnEnabled;// 0x2a9, size 1 (0x1)
	// m_bHeroRespawnEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSuggestedGoodHeroes[128];// 0x2aa, size 128 (0x80)
	// m_bSuggestedGoodHeroes metadata
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSuggestedBadHeroes[128];// 0x32a, size 128 (0x80)
	// m_bSuggestedBadHeroes metadata
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCaptainPlayerIDs[2];// 0x3ac, size 8 (0x8)
	// m_iCaptainPlayerIDs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_BannedHeroes[10];// 0x3b4, size 40 (0x28)
	// m_BannedHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_SelectedHeroes[10];// 0x3dc, size 40 (0x28)
	// m_SelectedHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iActiveTeam;// 0x404, size 4 (0x4)
	// m_iActiveTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iStartingTeam;// 0x408, size 4 (0x4)
	// m_iStartingTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iPenaltyLevelRadiant;// 0x40c, size 4 (0x4)
	// m_iPenaltyLevelRadiant metadata
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iPenaltyLevelDire;// 0x410, size 4 (0x4)
	// m_iPenaltyLevelDire metadata
	 // MNetworkEnable
	__declspec(align(1)) bool m_bTier3TowerDestroyed;// 0x414, size 1 (0x1)
	// m_bTier3TowerDestroyed metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nSeriesType;// 0x418, size 4 (0x4)
	// m_nSeriesType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_nRadiantSeriesWins;// 0x41c, size 4 (0x4)
	// m_nRadiantSeriesWins metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_nDireSeriesWins;// 0x420, size 4 (0x4)
	// m_nDireSeriesWins metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_AvailableHerosPerPlayer[50];// 0x424, size 200 (0xc8)
	// m_AvailableHerosPerPlayer metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_UnlockedHeroesPerPlayer[10];// 0x4ec, size 40 (0x28)
	// m_UnlockedHeroesPerPlayer metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_LockedHeroesPerPlayer[400];// 0x514, size 1600 (0x640)
	// m_LockedHeroesPerPlayer metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_CustomGameForceSelectHero[24];// 0xb54, size 96 (0x60)
	__declspec(align(4)) float m_flGoldTime;// 0xbb4, size 4 (0x4)
	__declspec(align(4)) float m_flXPTime;// 0xbb8, size 4 (0x4)
	__declspec(align(4)) float m_flCreepSpawntime;// 0xbbc, size 4 (0x4)
	__declspec(align(4)) float m_flAnnounceStartTime;// 0xbc0, size 4 (0x4)
	__declspec(align(4)) float m_flPreGameStartTime;// 0xbc4, size 4 (0x4)
	// m_flPreGameStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGameStartTime;// 0xbc8, size 4 (0x4)
	// m_flGameStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGameEndTime;// 0xbcc, size 4 (0x4)
	// m_flGameEndTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGameLoadTime;// 0xbd0, size 4 (0x4)
	// m_flGameLoadTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flHalloweenRoshanLifetime;// 0xbd4, size 4 (0x4)
	// m_flHalloweenRoshanLifetime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nHalloweenRoshanLevel;// 0xbd8, size 4 (0x4)
	// m_nHalloweenRoshanLevel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nHalloweenRoshanRemainingHealth;// 0xbdc, size 4 (0x4)
	// m_nHalloweenRoshanRemainingHealth metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flHalloweenRoshanRoundStartTime;// 0xbe0, size 4 (0x4)
	// m_flHalloweenRoshanRoundStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCustomGameScore[2];// 0xbe4, size 8 (0x8)
	// m_iCustomGameScore metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nCustomGameDifficulty;// 0xbec, size 4 (0x4)
	// m_nCustomGameDifficulty metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bEnemyModifiersEnabled;// 0xbf0, size 1 (0x1)
	__declspec(align(4)) int32_t m_iWaves;// 0xbf4, size 4 (0x4)
	__declspec(align(4)) int32_t m_iCreepUpgradeState;// 0xbf8, size 4 (0x4)
	__declspec(align(4)) float m_fGoodGlyphCooldown;// 0xbfc, size 4 (0x4)
	// m_fGoodGlyphCooldown metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_fBadGlyphCooldown;// 0xc00, size 4 (0x4)
	// m_fBadGlyphCooldown metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGlyphCooldowns[14];// 0xc04, size 56 (0x38)
	// m_flGlyphCooldowns metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsNightstalkerNight;// 0xc3c, size 1 (0x1)
	// m_bIsNightstalkerNight metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsTemporaryNight;// 0xc3d, size 1 (0x1)
	// m_bIsTemporaryNight metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGoldRedistributeTime;// 0xc40, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGoldToRedistribute[2];// 0xc44, size 8 (0x8)
	__declspec(align(4)) float m_flNextPreGameThink;// 0xc4c, size 4 (0x4)
	__declspec(align(4)) float m_flNextAllDraftGoldThink;// 0xc50, size 4 (0x4)
char C_DOTAGamerules_0C7C[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoGood;// 0xc7c, size 228 (0xe4)
	// m_ItemStockInfoGood metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_0D7C[0x1C];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoBad;// 0xd7c, size 228 (0xe4)
	// m_ItemStockInfoBad metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_0E7C[0x1C];
	__declspec(align(4)) DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData;// 0xe7c, size 8 (0x8)
	// m_AssassinMiniGameNetData metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoCustom1;// 0xe84, size 228 (0xe4)
	// m_ItemStockInfoCustom1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_0F84[0x1C];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoCustom2;// 0xf84, size 228 (0xe4)
	// m_ItemStockInfoCustom2 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_01084[0x1C];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoCustom3;// 0x1084, size 228 (0xe4)
	// m_ItemStockInfoCustom3 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_01184[0x1C];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoCustom4;// 0x1184, size 228 (0xe4)
	// m_ItemStockInfoCustom4 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_01284[0x1C];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoCustom5;// 0x1284, size 228 (0xe4)
	// m_ItemStockInfoCustom5 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_01384[0x1C];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoCustom6;// 0x1384, size 228 (0xe4)
	// m_ItemStockInfoCustom6 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_01484[0x1C];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoCustom7;// 0x1484, size 228 (0xe4)
	// m_ItemStockInfoCustom7 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_01584[0x1C];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class C_DOTA_ItemStockInfo > m_ItemStockInfoCustom8;// 0x1584, size 228 (0xe4)
	// m_ItemStockInfoCustom8 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_01684[0x1C];
	__declspec(align(4)) int32_t m_nGameWinner;// 0x1684, size 4 (0x4)
	// m_nGameWinner metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_unMatchID_Deprecated;// 0x1688, size 4 (0x4)
	// m_unMatchID_Deprecated metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(8)) uint64_t m_unMatchID64;// 0x1690, size 8 (0x8)
	// m_unMatchID64 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) bool m_bMatchSignoutComplete;// 0x1698, size 1 (0x1)
	// m_bMatchSignoutComplete metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hSideShop1;// 0x169c, size 4 (0x4)
	// m_hSideShop1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hSideShop2;// 0x16a0, size 4 (0x4)
	// m_hSideShop2 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hSecretShop1;// 0x16a4, size 4 (0x4)
	// m_hSecretShop1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hSecretShop2;// 0x16a8, size 4 (0x4)
	// m_hSecretShop2 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hTeamFountains[14];// 0x16ac, size 56 (0x38)
	// m_hTeamFountains metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hTeamForts[14];// 0x16e4, size 56 (0x38)
	// m_hTeamForts metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hTeamShops[14];// 0x171c, size 56 (0x38)
	// m_hTeamShops metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hAnnouncerGood;// 0x1754, size 4 (0x4)
	// m_hAnnouncerGood metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hAnnouncerBad;// 0x1758, size 4 (0x4)
	// m_hAnnouncerBad metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hAnnouncerSpectator;// 0x175c, size 4 (0x4)
	// m_hAnnouncerSpectator metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hAnnouncerGood_KillingSpree;// 0x1760, size 4 (0x4)
	// m_hAnnouncerGood_KillingSpree metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hAnnouncerBad_KillingSpree;// 0x1764, size 4 (0x4)
	// m_hAnnouncerBad_KillingSpree metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hAnnouncerSpectator_KillingSpree;// 0x1768, size 4 (0x4)
	// m_hAnnouncerSpectator_KillingSpree metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_fGameTime;// 0x176c, size 4 (0x4)
	// m_fGameTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkPriority
	__declspec(align(4)) float m_fTimeOfDay;// 0x1770, size 4 (0x4)
	__declspec(align(4)) int32_t m_iNetTimeOfDay;// 0x1774, size 4 (0x4)
	// m_iNetTimeOfDay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	__declspec(align(4)) int32_t m_nLoadedPlayers;// 0x1778, size 4 (0x4)
	// m_nLoadedPlayers metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nExpectedPlayers;// 0x177c, size 4 (0x4)
	// m_nExpectedPlayers metadata
	 // MNetworkEnable
	 // MNetworkEnable
char C_DOTAGamerules_01784[0x4];
	__declspec(align(4)) int32_t m_iMinimapDebugGridState;// 0x1784, size 4 (0x4)
	// m_iMinimapDebugGridState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iFoWFrameNumber;// 0x1788, size 4 (0x4)
	// m_iFoWFrameNumber metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	__declspec(align(1)) bool m_bIsStableMode;// 0x178c, size 1 (0x1)
	// m_bIsStableMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bGamePaused;// 0x178d, size 1 (0x1)
	// m_bGamePaused metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_fPauseRawTime;// 0x1790, size 4 (0x4)
	__declspec(align(4)) float m_fPauseCurTime;// 0x1794, size 4 (0x4)
	__declspec(align(4)) float m_fUnpauseRawTime;// 0x1798, size 4 (0x4)
	__declspec(align(4)) float m_fUnpauseCurTime;// 0x179c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nHalloweenTransitionState;// 0x17a0, size 4 (0x4)
	// m_nHalloweenTransitionState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) bool m_bUseAlternateABRules;// 0x17a4, size 1 (0x1)
	__declspec(align(4)) CountdownTimer m_BotDebugTimer;// 0x17a8, size 16 (0x10)
	__declspec(align(1)) uint8_t m_BotDebugPushLane[18];// 0x17b8, size 18 (0x12)
	// m_BotDebugPushLane metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkPriority
	__declspec(align(1)) uint8_t m_BotDebugDefendLane[18];// 0x17ca, size 18 (0x12)
	// m_BotDebugDefendLane metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_BotDebugFarmLane[6];// 0x17dc, size 6 (0x6)
	// m_BotDebugFarmLane metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_BotDebugRoam[8];// 0x17e2, size 8 (0x8)
	// m_BotDebugRoam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hBotDebugRoamTarget[2];// 0x17ec, size 8 (0x8)
	// m_hBotDebugRoamTarget metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_BotDebugRoshan[2];// 0x17f4, size 2 (0x2)
	// m_BotDebugRoshan metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x484, CUtlVector, class C_DOTA_AbilityDraftAbilityState > m_AbilityDraftAbilities;// 0x17f8, size 1156 (0x484)
	// m_AbilityDraftAbilities metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_01C98[0x1C];
	__declspec(align(4)) int32_t m_nAbilityDraftPlayerTracker;// 0x1c98, size 4 (0x4)
	// m_nAbilityDraftPlayerTracker metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nAbilityDraftRoundNumber;// 0x1c9c, size 4 (0x4)
	// m_nAbilityDraftRoundNumber metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nAbilityDraftAdvanceSteps;// 0x1ca0, size 4 (0x4)
	// m_nAbilityDraftAdvanceSteps metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nAbilityDraftPhase;// 0x1ca4, size 4 (0x4)
	// m_nAbilityDraftPhase metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nAbilityDraftHeroesChosen[12];// 0x1ca8, size 48 (0x30)
	// m_nAbilityDraftHeroesChosen metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x1, class KeyValues> *> m_vecARDMHeroes[14];// 0x1cd8, size 224 (0xe0)
	__declspec(align(4)) int32_t m_nARDMHeroesPrecached;// 0x1db8, size 4 (0x4)
	__declspec(align(4)) float m_fLastARDMPrecache;// 0x1dbc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nARDMHeroesPrecachedPercent;// 0x1dc0, size 4 (0x4)
	// m_nARDMHeroesPrecachedPercent metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_nAllDraftPhase;// 0x1dc4, size 4 (0x4)
	// m_nAllDraftPhase metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAllDraftRadiantFirst;// 0x1dc8, size 1 (0x1)
	// m_bAllDraftRadiantFirst metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAllowOverrideVPK;// 0x1dc9, size 1 (0x1)
	// m_bAllowOverrideVPK metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nARDMHeroesRemaining[14];// 0x1dcc, size 56 (0x38)
	// m_nARDMHeroesRemaining metadata
	 // MNetworkEnable
	__declspec(align(1)) bool m_BAbilityDraftHeroesChosenChanged;// 0x1e04, size 1 (0x1)
	__declspec(align(1)) bool m_bUpdateHeroStatues;// 0x1e05, size 1 (0x1)
char C_DOTAGamerules_01E9C[0x94];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, int32_t > m_vecPlayerMMR;// 0x1e9c, size 16 (0x10)
	__declspec(align(4)) uint32_t m_lobbyLeagueID;// 0x1eac, size 4 (0x4)
	// m_lobbyLeagueID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) char m_lobbyGameName[256];// 0x1eb0, size 256 (0x100)
	// m_lobbyGameName metadata
	 // MNetworkEnable
	 // MNetworkEnable
char C_DOTAGamerules_01FB4[0x4];
	__declspec(align(1)) bool m_bHasHeroStatueLiked[576];// 0x1fb4, size 576 (0x240)
	// m_bHasHeroStatueLiked metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_CustomGameTeamMaxPlayers[14];// 0x21f4, size 56 (0x38)
	// m_CustomGameTeamMaxPlayers metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class C_IngameEvent_Base > > m_vecIngameEvents;// 0x222c, size 16 (0x10)
	// m_vecIngameEvents metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char C_DOTAGamerules_02278[0x3C];
}; // size: 8824 (0x2278)

#pragma pack(push, 16)
class C_OP_PlaneCull : public CParticlePerFrameOperatorInstance
{
// C_OP_PlaneCull additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nPlaneControlPoint;// 0x60, size 4 (0x4)
	// m_nPlaneControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecPlaneDirection;// 0x64, size 12 (0xc)
	// m_vecPlaneDirection metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flPlaneOffset;// 0x70, size 4 (0x4)
	// m_flPlaneOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_PlaneCull_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class CPlayerInfo : public IBotController, public IPlayerInfo
{
// CPlayerInfo additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) CBasePlayer *m_pParent;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class ViewLockData_t
{
// ViewLockData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flLockInterval;// 0x0, size 4 (0x4)
	__declspec(align(1)) bool bLocked;// 0x4, size 1 (0x1)
	__declspec(align(4)) float flUnlockTime;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flUnlockBlendInterval;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateWithinSphere : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateWithinSphere additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_fRadiusMin;// 0x70, size 4 (0x4)
	// m_fRadiusMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fRadiusMax;// 0x74, size 4 (0x4)
	// m_fRadiusMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDistanceBias;// 0x78, size 12 (0xc)
	// m_vecDistanceBias metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDistanceBiasAbs;// 0x84, size 12 (0xc)
	// m_vecDistanceBiasAbs metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x90, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCP;// 0x94, size 4 (0x4)
	// m_nScaleCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fSpeedMin;// 0x98, size 4 (0x4)
	// m_fSpeedMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fSpeedMax;// 0x9c, size 4 (0x4)
	// m_fSpeedMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fSpeedRandExp;// 0xa0, size 4 (0x4)
	// m_fSpeedRandExp metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalCoords;// 0xa4, size 1 (0x1)
	// m_bLocalCoords metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateWithinSphere_0A6[0x1];
	__declspec(align(1)) bool m_bUseHighestEndCP;// 0xa6, size 1 (0x1)
	// m_bUseHighestEndCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndCPGrowthTime;// 0xa8, size 4 (0x4)
	// m_flEndCPGrowthTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_LocalCoordinateSystemSpeedMin;// 0xac, size 12 (0xc)
	// m_LocalCoordinateSystemSpeedMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_LocalCoordinateSystemSpeedMax;// 0xb8, size 12 (0xc)
	// m_LocalCoordinateSystemSpeedMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
char C_INIT_CreateWithinSphere_0D0[0xC];
}; // size: 208 (0xd0)
#pragma pack(pop)

#pragma pack(push, 4)
class CBaseConstraint : public SchemaBase
{
// CBaseConstraint additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_name;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nConstraintType;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vUpVector;// 0xc, size 12 (0xc)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class ConstraintSlave_t > m_slaves;// 0x18, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class ConstraintTarget_t > m_targets;// 0x28, size 16 (0x10)
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 4)
class PlayerResourceBroadcasterData_t : public SchemaBase
{
// PlayerResourceBroadcasterData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char PlayerResourceBroadcasterData_t_0C[0x8];
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszBroadcasterChannelDescription;// 0xc, size 4 (0x4)
	// m_iszBroadcasterChannelDescription metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszBroadcasterChannelCountryCode;// 0x10, size 4 (0x4)
	// m_iszBroadcasterChannelCountryCode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszBroadcasterChannelLanguageCode;// 0x14, size 4 (0x4)
	// m_iszBroadcasterChannelLanguageCode metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_SequenceFromCP : public CParticleInitializerOperatorInstance
{
// C_INIT_SequenceFromCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bKillUnused;// 0x70, size 1 (0x1)
	// m_bKillUnused metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRadiusScale;// 0x71, size 1 (0x1)
	// m_bRadiusScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP;// 0x74, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffset;// 0x78, size 12 (0xc)
	// m_vecOffset metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
char C_INIT_SequenceFromCP_090[0xC];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceIKRuleStallFrame_t
{
// AnimResourceIKRuleStallFrame_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) int16_t chain;// 0x0, size 2 (0x2)
	__declspec(align(2)) int16_t slot;// 0x2, size 2 (0x2)
	__declspec(align(4)) float start;// 0x4, size 4 (0x4)
	__declspec(align(4)) float peak;// 0x8, size 4 (0x4)
	__declspec(align(4)) float tail;// 0xc, size 4 (0x4)
	__declspec(align(4)) float end;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class EventServerAdvanceTick_t : public EventAdvanceTick_t
{
// EventServerAdvanceTick_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 44 (0x2c)
#pragma pack(pop)

#pragma pack(push, 4)
class EventSimpleLoopFrameUpdate_t
{
// EventSimpleLoopFrameUpdate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(4)) float m_flRealTime;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flFrameTime;// 0x20, size 4 (0x4)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 4)
class CResourceDiskEnum
{
// CResourceDiskEnum additional information
// schemasystem.dll, project schemasystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nIntrospectionVersion;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nId;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_pName;// 0x8, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nDiskCrc;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nUserVersion;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class CResourceDiskEnumValue > m_EnumValueIntrospection;// 0x14, size 8 (0x8)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class TimedEvent
{
// TimedEvent additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_TimeBetweenEvents;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_fNextEvent;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class FeSimdNodeBase_t
{
// FeSimdNodeBase_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[4];// 0x0, size 8 (0x8)
	__declspec(align(2)) uint16_t nNodeX0[4];// 0x8, size 8 (0x8)
	__declspec(align(2)) uint16_t nNodeX1[4];// 0x10, size 8 (0x8)
	__declspec(align(2)) uint16_t nNodeY0[4];// 0x18, size 8 (0x8)
	__declspec(align(2)) uint16_t nNodeY1[4];// 0x20, size 8 (0x8)
	__declspec(align(2)) uint16_t nDummy[4];// 0x28, size 8 (0x8)
	__declspec(align(16)) FourQuaternions qAdjust;// 0x30, size 64 (0x40)
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class VelocitySampler
{
// VelocitySampler additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_prevSample;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_fPrevSampleTime;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_fIdealSampleRate;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimationResourceData_t
{
// AnimationResourceData_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceEncodedFrames_t > m_frameData;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceAnimDesc_t > m_animArray;// 0xc, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceDecoder_t > m_decoderArray;// 0x14, size 8 (0x8)
	__declspec(align(4)) int32_t m_nMaxUniqueFrameIndex;// 0x1c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceFrameSegment_t > m_segmentArray;// 0x20, size 8 (0x8)
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 16)
class PermModelExtPart_t
{
// PermModelExtPart_t additional information
// engine2.dll, project modellib
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(16)) UnknownType <0x20, class CTransform> m_Transform;// 0x0, size 32 (0x20)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Name;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_nParent;// 0x24, size 4 (0x4)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCModel > > m_refModel;// 0x28, size 8 (0x8)
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 8)
class CRMSG_System_Event
{
// CRMSG_System_Event additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) RMSG_EventType_t m_nEvent;// 0x0, size 4 (0x4)
	__declspec(align(4)) RMSG_SubEventType_t m_nSubEvent;// 0x4, size 4 (0x4)
	__declspec(align(8)) int64_t m_nTimeUS;// 0x8, size 8 (0x8)
	__declspec(align(4)) uint32_t m_nFrameNumber;// 0x10, size 4 (0x4)
char CRMSG_System_Event_018[0x4];
	__declspec(align(8)) int64_t m_nObjectId;// 0x18, size 8 (0x8)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_VectorNoise : public CParticlePerFrameOperatorInstance
{
// C_OP_VectorNoise additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMin;// 0x64, size 12 (0xc)
	// m_vecOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMax;// 0x70, size 12 (0xc)
	// m_vecOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(16)) UnknownType <0x10, class fltx4> m_fl4NoiseScale;// 0x80, size 16 (0x10)
	// m_fl4NoiseScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAdditive;// 0x90, size 1 (0x1)
	// m_bAdditive metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOffset;// 0x91, size 1 (0x1)
	// m_bOffset metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_VectorNoise_0A0[0xE];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class SheetSequence_t
{
// SheetSequence_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nId;// 0x0, size 4 (0x4)
	__declspec(align(1)) bool m_bClamp;// 0x4, size 1 (0x1)
	__declspec(align(1)) bool m_bAlphaCrop;// 0x5, size 1 (0x1)
	__declspec(align(1)) bool m_bNoColor;// 0x6, size 1 (0x1)
	__declspec(align(1)) bool m_bNoAlpha;// 0x7, size 1 (0x1)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SheetSequenceFrame_t > m_Frames;// 0x8, size 8 (0x8)
	__declspec(align(4)) float m_flTotalTime;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x14, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SequenceFloatParam_t > m_floatParams;// 0x18, size 8 (0x8)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class SequenceFloatParam_t
{
// SequenceFloatParam_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_value;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class C_DOTA_ItemStockInfo : public SchemaBase
{
// C_DOTA_ItemStockInfo additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char C_DOTA_ItemStockInfo_0A[0x6];
	__declspec(align(2)) uint16_t usItemIndex;// 0xa, size 2 (0x2)
	// usItemIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float fStockDuration;// 0xc, size 4 (0x4)
	// fStockDuration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float fStockTime;// 0x10, size 4 (0x4)
	// fStockTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t iStockCount;// 0x14, size 4 (0x4)
	// iStockCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t iMaxCount;// 0x18, size 4 (0x4)
	// iMaxCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class CHeadLookParams
{
// CHeadLookParams additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public: 
	enum class HeadLookPriority_t : unsigned long
	{
		BORING = 0,
		INTERESTING = 1,
		IMPORTANT = 2,
		CRITICAL = 3,
		MANDATORY = 4,
	};

public:
	__declspec(align(4)) CHeadLookParams::HeadLookPriority_t m_LookPriority;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flLookDuration;// 0x4, size 4 (0x4)
	__declspec(align(4)) INextBotReply *m_pReplyWhenAimed;// 0x8, size 4 (0x4)
	__declspec(align(4)) char* m_pReasonStr;// 0xc, size 4 (0x4)
	__declspec(align(1)) bool m_bWaitForSteady;// 0x10, size 1 (0x1)
char CHeadLookParams_014[0x3];
	__declspec(align(4)) float m_flEaseInTime;// 0x14, size 4 (0x4)
public:
	static CHeadLookParams Get_ms_Defaults() {return *(CHeadLookParams *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CHeadLookParams")->m_staticMembers.data[0].m_pInstance; }
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceRemapTable_t
{
// ResourceRemapTable_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_baseRemapFiles;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_conditionSymbols;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceRemapRule_t > m_remapRules;// 0x10, size 8 (0x8)
}; // size: 24 (0x18)
#pragma pack(pop)

class CFlashlightEffect : public SchemaBase
{
// CFlashlightEffect additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(1)) bool m_bIsOn;// 0x4, size 1 (0x1)
char CFlashlightEffect_014[0xF];
	__declspec(align(1)) bool m_bMuzzleFlashEnabled;// 0x14, size 1 (0x1)
	__declspec(align(4)) float m_flMuzzleFlashBrightness;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flFov;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flFarZ;// 0x20, size 4 (0x4)
	__declspec(align(4)) float m_flLinearAtten;// 0x24, size 4 (0x4)
	__declspec(align(1)) bool m_bCastsShadows;// 0x28, size 1 (0x1)
	__declspec(align(4)) float m_flCurrentPullBackDist;// 0x2c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeCTextureBase > m_FlashlightTexture;// 0x30, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeCTextureBase > m_MuzzleFlashTexture;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > m_hCurrentFlashlightTexture;// 0x38, size 4 (0x4)
	__declspec(align(1)) char m_textureName[64];// 0x3c, size 64 (0x40)
char CFlashlightEffect_0278[0x1FC];
}; // size: 632 (0x278)

#pragma pack(push, 8)
class EventSetTime_t
{
// EventSetTime_t additional information
// engine2.dll, project engine2
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(4)) int32_t m_nClientOutputFrames;// 0x1c, size 4 (0x4)
	__declspec(align(8)) double m_flRealTime;// 0x20, size 8 (0x8)
	__declspec(align(8)) double m_flRenderTime;// 0x28, size 8 (0x8)
	__declspec(align(8)) double m_flRenderFrameTime;// 0x30, size 8 (0x8)
	__declspec(align(8)) double m_flRenderFrameTimeUnbounded;// 0x38, size 8 (0x8)
	__declspec(align(8)) double m_flRenderFrameTimeUnscaled;// 0x40, size 8 (0x8)
	__declspec(align(8)) double m_flTickRemainder;// 0x48, size 8 (0x8)
}; // size: 80 (0x50)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCVPhysXSurfacePropertiesList
{
// InfoForResourceTypeCVPhysXSurfacePropertiesList additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCVPhysXSurfacePropertiesList_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class FeSphereRigid_t
{
// FeSphereRigid_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) uint16_t nNode;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nCollisionMask;// 0x2, size 2 (0x2)
	__declspec(align(4)) UnknownType <0xc, class Vector> vCenter;// 0x4, size 12 (0xc)
	__declspec(align(4)) float flRadius;// 0x10, size 4 (0x4)
	__declspec(align(4)) float flStickiness;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourceSynthAnimDesc_t
{
// SeqResourceSynthAnimDesc_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sName;// 0x0, size 4 (0x4)
	__declspec(align(1)) SeqResourceSeqDesc_t_Flag_t m_flags;// 0x4, size 10 (0xa)
	__declspec(align(4)) SeqResourceTransition_t m_transition;// 0x10, size 8 (0x8)
	__declspec(align(2)) int16_t m_nLocalBaseReference;// 0x18, size 2 (0x2)
	__declspec(align(2)) int16_t m_nLocalBoneMask;// 0x1a, size 2 (0x2)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceActivity_t > m_activityArray;// 0x1c, size 8 (0x8)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 4)
class OldFeEdge_t
{
// OldFeEdge_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flK[3];// 0x0, size 12 (0xc)
	__declspec(align(4)) float invA;// 0xc, size 4 (0x4)
	__declspec(align(4)) float t;// 0x10, size 4 (0x4)
	__declspec(align(4)) float flThetaRelaxed;// 0x14, size 4 (0x4)
	__declspec(align(4)) float flThetaFactor;// 0x18, size 4 (0x4)
	__declspec(align(4)) float c01;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float c02;// 0x20, size 4 (0x4)
	__declspec(align(4)) float c03;// 0x24, size 4 (0x4)
	__declspec(align(4)) float c04;// 0x28, size 4 (0x4)
	__declspec(align(4)) float flAxialModelDist;// 0x2c, size 4 (0x4)
	__declspec(align(4)) float flAxialModelWeights[4];// 0x30, size 16 (0x10)
	__declspec(align(2)) uint16_t m_nNode[4];// 0x40, size 8 (0x8)
}; // size: 72 (0x48)
#pragma pack(pop)

#pragma pack(push, 4)
class constraint_breakableparams_t
{
// constraint_breakableparams_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float strength;// 0x0, size 4 (0x4)
	__declspec(align(4)) float forceLimit;// 0x4, size 4 (0x4)
	__declspec(align(4)) float torqueLimit;// 0x8, size 4 (0x4)
	__declspec(align(4)) float bodyMassScale[2];// 0xc, size 8 (0x8)
	__declspec(align(1)) bool isActive;// 0x14, size 1 (0x1)
char constraint_breakableparams_t_018[0x3];
}; // size: 24 (0x18)
#pragma pack(pop)

class IBody : public INextBotComponent
{
// IBody additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public: 
	enum class ActivityType : unsigned long
	{
		MOTION_CONTROLLED_XY = 1,
		MOTION_CONTROLLED_Z = 2,
		ACTIVITY_UNINTERRUPTIBLE = 4,
		ACTIVITY_TRANSITORY = 8,
		ENTINDEX_PLAYBACK_RATE = 16,
	};

	enum class PostureType : unsigned long
	{
		STAND = 0,
		CROUCH = 1,
		SIT = 2,
		CRAWL = 3,
		LIE = 4,
	};

	enum class ArousalType : unsigned long
	{
		NEUTRAL = 0,
		ALERT = 1,
		INTENSE = 2,
	};

public:
}; // size: 20 (0x14)

#pragma pack(push, 4)
class CWorldVisibility
{
// CWorldVisibility additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nNodeCount;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nClusterCount;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class CWorldVisCluster > m_clusters;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class CWorldVisNode > m_nodes;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_visDataDwords;// 0x18, size 8 (0x8)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_MaxVelocity : public CParticlePerFrameOperatorInstance
{
// C_OP_MaxVelocity additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMaxVelocity;// 0x60, size 4 (0x4)
	// m_flMaxVelocity metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOverrideCP;// 0x64, size 4 (0x4)
	// m_nOverrideCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOverrideCPField;// 0x68, size 4 (0x4)
	// m_nOverrideCPField metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_MaxVelocity_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_OscillateVectorSimple : public CParticlePerFrameOperatorInstance
{
// C_OP_OscillateVectorSimple additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Rate;// 0x60, size 12 (0xc)
	// m_Rate metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Frequency;// 0x6c, size 12 (0xc)
	// m_Frequency metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nField;// 0x78, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flOscMult;// 0x7c, size 4 (0x4)
	// m_flOscMult metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOscAdd;// 0x80, size 4 (0x4)
	// m_flOscAdd metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOffset;// 0x84, size 1 (0x1)
	// m_bOffset metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_OscillateVectorSimple_090[0xB];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 1)
class EventSplitScreenStateChanged_t
{
// EventSplitScreenStateChanged_t additional information
// engine2.dll, project engine2
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char EventSplitScreenStateChanged_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapCPVisibilityToScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPVisibilityToScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x60, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPoint;// 0x64, size 4 (0x4)
	// m_nControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x68, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x6c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x70, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x74, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x78, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadius;// 0x7c, size 4 (0x4)
	// m_flRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeVGameSoundScript_t
{
// InfoForResourceTypeVGameSoundScript_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeVGameSoundScript_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class MaterialParamBuffer_t : public MaterialParam_t
{
// MaterialParamBuffer_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_value;// 0x4, size 8 (0x8)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class EventPostDataUpdate_t
{
// EventPostDataUpdate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCount;// 0x0, size 4 (0x4)
char EventPostDataUpdate_t_08[0x4];
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class BuilderModelBoneFlexDriver_t
{
// BuilderModelBoneFlexDriver_t additional information
// engine2.dll, project modellib
// Alignment: 4

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_boneName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class BuilderModelBoneFlexDriverControl_t > m_controls;// 0x4, size 16 (0x10)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceCustomDependency_t
{
// ResourceCustomDependency_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nParentIndex;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFingerprint;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

class CModelState : public SchemaBase
{
// CModelState additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CModelState_080[0x7C];
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeCModel > m_hModel;// 0x80, size 4 (0x4)
	// m_hModel metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_ModelName;// 0x84, size 4 (0x4)
	// m_ModelName metadata
	 // MNetworkDisable
char CModelState_0E8[0x60];
	__declspec(align(8)) uint64_t m_MeshGroupMask;// 0xe8, size 8 (0x8)
	// m_MeshGroupMask metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
char CModelState_0100[0x10];
	__declspec(align(4)) int32_t m_nDebugIndex;// 0x100, size 4 (0x4)
char CModelState_0108[0x4];
	__declspec(align(1)) int8_t m_nIdealMotionType;// 0x108, size 1 (0x1)
	// m_nIdealMotionType metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) int8_t m_nForceLOD;// 0x109, size 1 (0x1)
	// m_nForceLOD metadata
	 // MNetworkDisable
	__declspec(align(1)) bool m_bHasAnimation;// 0x10a, size 1 (0x1)
	// m_bHasAnimation metadata
	 // MNetworkDisable
	__declspec(align(1)) bool m_bIsJiggleBonesEnabled;// 0x10b, size 1 (0x1)
	// m_bIsJiggleBonesEnabled metadata
	 // MNetworkDisable
	__declspec(align(1)) int8_t m_nClothUpdateFlags;// 0x10c, size 1 (0x1)
	// m_nClothUpdateFlags metadata
	 // MNetworkDisable
char CModelState_0120[0x13];
}; // size: 288 (0x120)

#pragma pack(push, 4)
class CTakeDamageInfo
{
// CTakeDamageInfo additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDamageForce;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDamagePosition;// 0xc, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecReportedPosition;// 0x18, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDamageDirection;// 0x24, size 12 (0xc)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hInflictor;// 0x30, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAttacker;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hWeapon;// 0x38, size 4 (0x4)
	__declspec(align(4)) float m_flDamage;// 0x3c, size 4 (0x4)
	__declspec(align(4)) float m_flMaxDamage;// 0x40, size 4 (0x4)
	__declspec(align(4)) float m_flBaseDamage;// 0x44, size 4 (0x4)
	__declspec(align(4)) int32_t m_bitsDamageType;// 0x48, size 4 (0x4)
	__declspec(align(4)) int32_t m_iDamageCustom;// 0x4c, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAmmoType;// 0x50, size 4 (0x4)
	__declspec(align(4)) float m_flRadius;// 0x54, size 4 (0x4)
char CTakeDamageInfo_05C[0x4];
	__declspec(align(1)) bool m_bCanHeadshot;// 0x5c, size 1 (0x1)
	__declspec(align(4)) float m_flOriginalDamage;// 0x60, size 4 (0x4)
	__declspec(align(4)) int32_t m_nDamageTaken;// 0x64, size 4 (0x4)
	__declspec(align(2)) int16_t m_iRecord;// 0x68, size 2 (0x2)
	__declspec(align(4)) float m_flStabilityDamage;// 0x6c, size 4 (0x4)
	__declspec(align(4)) int32_t m_bitsDotaDamageType;// 0x70, size 4 (0x4)
	__declspec(align(1)) bool m_bAllowFriendlyFire;// 0x74, size 1 (0x1)
	__declspec(align(1)) bool m_bCanBeBlocked;// 0x75, size 1 (0x1)
char CTakeDamageInfo_078[0x2];
}; // size: 120 (0x78)
#pragma pack(pop)

#pragma pack(push, 8)
class CSSDSMsg_ViewTargetList
{
// CSSDSMsg_ViewTargetList additional information
// scenesystem.dll, project scenesystem
// Alignment: 8

public:
	__declspec(align(8)) SceneViewId_t m_viewId;// 0x0, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_ViewName;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CSSDSMsg_ViewTarget > m_Targets;// 0x14, size 16 (0x10)
char CSSDSMsg_ViewTargetList_028[0x4];
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_VelocityMatchingForce : public CParticlePerFrameOperatorInstance
{
// C_OP_VelocityMatchingForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flDirScale;// 0x60, size 4 (0x4)
	// m_flDirScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpdScale;// 0x64, size 4 (0x4)
	// m_flSpdScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCPBroadcast;// 0x68, size 4 (0x4)
	// m_nCPBroadcast metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_VelocityMatchingForce_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderBlobs : public CParticleRenderOperatorInstance
{
// C_OP_RenderBlobs additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_cubeWidth;// 0xa0, size 4 (0x4)
	// m_cubeWidth metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_cutoffRadius;// 0xa4, size 4 (0x4)
	// m_cutoffRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_renderRadius;// 0xa8, size 4 (0x4)
	// m_renderRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCP;// 0xac, size 4 (0x4)
	// m_nScaleCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_hMaterial;// 0xb0, size 8 (0x8)
	// m_hMaterial metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
char C_OP_RenderBlobs_0C0[0x8];
}; // size: 192 (0xc0)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimationDecodeDebugDump_t
{
// AnimationDecodeDebugDump_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4

public:
	__declspec(align(4)) AnimationProcessingType_t m_processingType;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class AnimationDecodeDebugDumpElement_t > m_elems;// 0x4, size 16 (0x10)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class RenderSkeletonBone_t
{
// RenderSkeletonBone_t additional information
// engine2.dll, project modellib
// Alignment: 4

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_boneName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_parentName;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x30, class matrix3x4_t> m_invBindPose;// 0x8, size 48 (0x30)
	__declspec(align(4)) SkeletonBoneBbox_t m_bbox;// 0x38, size 32 (0x20)
	__declspec(align(4)) float m_flSphereRadius;// 0x58, size 4 (0x4)
}; // size: 92 (0x5c)
#pragma pack(pop)

#pragma pack(push, 4)
class FeSpringIntegrator_t
{
// FeSpringIntegrator_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[2];// 0x0, size 4 (0x4)
	__declspec(align(4)) float flSpringRestLength;// 0x4, size 4 (0x4)
	__declspec(align(4)) float flSpringConstant;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flSpringDamping;// 0xc, size 4 (0x4)
	__declspec(align(4)) float flNodeWeight0;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 1)
class ResponseFollowup
{
// ResponseFollowup additional information
// server.dll, project server
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) char* followup_concept;// 0x0, size 4 (0x4)
	__declspec(align(4)) char* followup_contexts;// 0x4, size 4 (0x4)
	__declspec(align(4)) float followup_delay;// 0x8, size 4 (0x4)
	__declspec(align(4)) char* followup_target;// 0xc, size 4 (0x4)
	__declspec(align(4)) char* followup_entityiotarget;// 0x10, size 4 (0x4)
	__declspec(align(4)) char* followup_entityioinput;// 0x14, size 4 (0x4)
	__declspec(align(4)) float followup_entityiodelay;// 0x18, size 4 (0x4)
	__declspec(align(1)) bool bFired;// 0x1c, size 1 (0x1)
}; // size: 29 (0x1d)
#pragma pack(pop)

#pragma pack(push, 4)
class CDotaEntityFilterFlags
{
// CDotaEntityFilterFlags additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool m_bInvertFilter;// 0x0, size 1 (0x1)
	// m_bInvertFilter metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bEveryUnit;// 0x1, size 1 (0x1)
	// m_bEveryUnit metadata
	 // MKeyfieldname
	__declspec(align(4)) int32_t m_nTeamNumber;// 0x4, size 4 (0x4)
	// m_nTeamNumber metadata
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_UnitName;// 0x8, size 4 (0x4)
	// m_UnitName metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsAncient;// 0xc, size 1 (0x1)
	// m_bIsAncient metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsNeutralUnitType;// 0xd, size 1 (0x1)
	// m_bIsNeutralUnitType metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsSummoned;// 0xe, size 1 (0x1)
	// m_bIsSummoned metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsHero;// 0xf, size 1 (0x1)
	// m_bIsHero metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsRealHero;// 0x10, size 1 (0x1)
	// m_bIsRealHero metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsTower;// 0x11, size 1 (0x1)
	// m_bIsTower metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsMechanical;// 0x12, size 1 (0x1)
	// m_bIsMechanical metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsPhantom;// 0x13, size 1 (0x1)
	// m_bIsPhantom metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsIllusion;// 0x14, size 1 (0x1)
	// m_bIsIllusion metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsCreep;// 0x15, size 1 (0x1)
	// m_bIsCreep metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bIsLaneCreep;// 0x16, size 1 (0x1)
	// m_bIsLaneCreep metadata
	 // MKeyfieldname
char CDotaEntityFilterFlags_018[0x1];
}; // size: 24 (0x18)
#pragma pack(pop)

class CEntityComponentHelper : public SchemaBase
{
// CEntityComponentHelper additional information
// worldrenderer.dll, project entity2
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CEntityComponentHelper_08[0x4];
	__declspec(align(4)) uint32_t m_flags;// 0x8, size 4 (0x4)
	__declspec(align(4)) EntComponentInfo_t *m_pInfo;// 0xc, size 4 (0x4)
	__declspec(align(1)) bool m_bCannotSetPriority;// 0x10, size 1 (0x1)
	__declspec(align(4)) int32_t m_pBatchIndex[6];// 0x14, size 24 (0x18)
	__declspec(align(4)) int32_t m_nPriority;// 0x2c, size 4 (0x4)
	__declspec(align(4)) CEntityComponentHelper *m_pNext;// 0x30, size 4 (0x4)
char CEntityComponentHelper_058[0x24];
}; // size: 88 (0x58)

#pragma pack(push, 16)
class C_OP_ControlpointLight : public CParticlePerFrameOperatorInstance
{
// C_OP_ControlpointLight additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_flScale;// 0x60, size 4 (0x4)
	// m_flScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_ControlpointLight_02B4[0x250];
	__declspec(align(4)) int32_t m_nControlPoint1;// 0x2b4, size 4 (0x4)
	// m_nControlPoint1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPoint2;// 0x2b8, size 4 (0x4)
	// m_nControlPoint2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPoint3;// 0x2bc, size 4 (0x4)
	// m_nControlPoint3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPoint4;// 0x2c0, size 4 (0x4)
	// m_nControlPoint4 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCPOffset1;// 0x2c4, size 12 (0xc)
	// m_vecCPOffset1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCPOffset2;// 0x2d0, size 12 (0xc)
	// m_vecCPOffset2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCPOffset3;// 0x2dc, size 12 (0xc)
	// m_vecCPOffset3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCPOffset4;// 0x2e8, size 12 (0xc)
	// m_vecCPOffset4 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_LightFiftyDist1;// 0x2f4, size 4 (0x4)
	// m_LightFiftyDist1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_LightZeroDist1;// 0x2f8, size 4 (0x4)
	// m_LightZeroDist1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_LightFiftyDist2;// 0x2fc, size 4 (0x4)
	// m_LightFiftyDist2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_LightZeroDist2;// 0x300, size 4 (0x4)
	// m_LightZeroDist2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_LightFiftyDist3;// 0x304, size 4 (0x4)
	// m_LightFiftyDist3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_LightZeroDist3;// 0x308, size 4 (0x4)
	// m_LightZeroDist3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_LightFiftyDist4;// 0x30c, size 4 (0x4)
	// m_LightFiftyDist4 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_LightZeroDist4;// 0x310, size 4 (0x4)
	// m_LightZeroDist4 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_LightColor1;// 0x314, size 4 (0x4)
	// m_LightColor1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_LightColor2;// 0x318, size 4 (0x4)
	// m_LightColor2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_LightColor3;// 0x31c, size 4 (0x4)
	// m_LightColor3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_LightColor4;// 0x320, size 4 (0x4)
	// m_LightColor4 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLightType1;// 0x324, size 1 (0x1)
	// m_bLightType1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLightType2;// 0x325, size 1 (0x1)
	// m_bLightType2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLightType3;// 0x326, size 1 (0x1)
	// m_bLightType3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLightType4;// 0x327, size 1 (0x1)
	// m_bLightType4 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLightDynamic1;// 0x328, size 1 (0x1)
	// m_bLightDynamic1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLightDynamic2;// 0x329, size 1 (0x1)
	// m_bLightDynamic2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLightDynamic3;// 0x32a, size 1 (0x1)
	// m_bLightDynamic3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLightDynamic4;// 0x32b, size 1 (0x1)
	// m_bLightDynamic4 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseNormal;// 0x32c, size 1 (0x1)
	// m_bUseNormal metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseHLambert;// 0x32d, size 1 (0x1)
	// m_bUseHLambert metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_ControlpointLight_0332[0x4];
	__declspec(align(1)) bool m_bClampLowerRange;// 0x332, size 1 (0x1)
	// m_bClampLowerRange metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bClampUpperRange;// 0x333, size 1 (0x1)
	// m_bClampUpperRange metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_ControlpointLight_0340[0xC];
}; // size: 832 (0x340)
#pragma pack(pop)

#pragma pack(push, 4)
class FeCollisionPlane_t
{
// FeCollisionPlane_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nCtrlParent;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nChildNode;// 0x2, size 2 (0x2)
	__declspec(align(4)) RnPlane_t m_Plane;// 0x4, size 16 (0x10)
	__declspec(align(4)) float flStickiness;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class C_TeamplayRoundBasedRules : public C_TeamplayRules
{
// C_TeamplayRoundBasedRules additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) CNetworkVarChainer __m_pChainEntity;// 0x14, size 12 (0xc)
	__declspec(align(4)) float m_flLastRoundStateChangeTime;// 0x20, size 4 (0x4)
	__declspec(align(1)) bool m_bOldInWaitingForPlayers;// 0x24, size 1 (0x1)
	__declspec(align(1)) bool m_bOldInOvertime;// 0x25, size 1 (0x1)
	__declspec(align(1)) bool m_bOldInSetup;// 0x26, size 1 (0x1)
	__declspec(align(4)) gamerules_roundstate_t m_iRoundState;// 0x28, size 4 (0x4)
	// m_iRoundState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bInOvertime;// 0x2c, size 1 (0x1)
	// m_bInOvertime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bInSetup;// 0x2d, size 1 (0x1)
	// m_bInSetup metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSwitchedTeamsThisRound;// 0x2e, size 1 (0x1)
	// m_bSwitchedTeamsThisRound metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_iWinningTeam;// 0x2f, size 1 (0x1)
	// m_iWinningTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_iWinReason;// 0x30, size 4 (0x4)
	__declspec(align(1)) bool m_bInWaitingForPlayers;// 0x34, size 1 (0x1)
	// m_bInWaitingForPlayers metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAwaitingReadyRestart;// 0x35, size 1 (0x1)
	// m_bAwaitingReadyRestart metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flRestartRoundTime;// 0x38, size 4 (0x4)
	// m_flRestartRoundTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flMapResetTime;// 0x3c, size 4 (0x4)
	// m_flMapResetTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flNextRespawnWave[32];// 0x40, size 128 (0x80)
	// m_flNextRespawnWave metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bTeamReady[32];// 0xc0, size 32 (0x20)
	// m_bTeamReady metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bStopWatch;// 0xe0, size 1 (0x1)
	// m_bStopWatch metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_TeamRespawnWaveTimes[32];// 0xe4, size 128 (0x80)
	// m_TeamRespawnWaveTimes metadata
	 // MNetworkEnable
	__declspec(align(4)) float m_flStartBalancingTeamsAt;// 0x164, size 4 (0x4)
	__declspec(align(4)) float m_flNextBalanceTeamsTime;// 0x168, size 4 (0x4)
	__declspec(align(1)) bool m_bPrintedUnbalanceWarning;// 0x16c, size 1 (0x1)
	__declspec(align(4)) float m_flFoundUnbalancedTeamsTime;// 0x170, size 4 (0x4)
	__declspec(align(4)) float m_flStopWatchTotalTime;// 0x174, size 4 (0x4)
	__declspec(align(4)) int32_t m_iLastCapPointChanged;// 0x178, size 4 (0x4)
}; // size: 380 (0x17c)
#pragma pack(pop)

#pragma pack(push, 8)
class CEconItemView : public IEconItemInterface
{
// CEconItemView additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) uint16_t m_iItemDefinitionIndex;// 0x4, size 2 (0x2)
	// m_iItemDefinitionIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iEntityQuality;// 0x8, size 4 (0x4)
	// m_iEntityQuality metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iEntityLevel;// 0xc, size 4 (0x4)
	// m_iEntityLevel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(8)) uint64_t m_iItemID;// 0x10, size 8 (0x8)
	// m_iItemID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iAccountID;// 0x18, size 4 (0x4)
	// m_iAccountID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iInventoryPosition;// 0x1c, size 4 (0x4)
	// m_iInventoryPosition metadata
	 // MNetworkEnable
char CEconItemView_024[0x4];
	__declspec(align(1)) bool m_bInitialized;// 0x24, size 1 (0x1)
	// m_bInitialized metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_nOverrideStyle;// 0x25, size 1 (0x1)
	__declspec(align(1)) bool m_bIsStoreItem;// 0x26, size 1 (0x1)
	__declspec(align(1)) bool m_bIsTradeItem;// 0x27, size 1 (0x1)
	__declspec(align(1)) bool m_bHasComputedAttachedParticles;// 0x28, size 1 (0x1)
	__declspec(align(1)) bool m_bHasAttachedParticles;// 0x29, size 1 (0x1)
	__declspec(align(4)) int32_t m_iEntityQuantity;// 0x2c, size 4 (0x4)
	__declspec(align(1)) uint8_t m_unClientFlags;// 0x30, size 1 (0x1)
	__declspec(align(4)) eEconItemOrigin m_unOverrideOrigin;// 0x34, size 4 (0x4)
char CEconItemView_03C[0x4];
	__declspec(align(4)) char* m_pszGrayedOutReason;// 0x3c, size 4 (0x4)
	__declspec(align(4)) CAttributeList m_AttributeList;// 0x40, size 52 (0x34)
	// m_AttributeList metadata
	 // MNetworkEnable
	 // MNetworkEnable
char CEconItemView_090[0x1C];
}; // size: 144 (0x90)
#pragma pack(pop)

class CVerticalMotionController : public SchemaBase
{
// CVerticalMotionController additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CVerticalMotionController_08[0x4];
}; // size: 8 (0x8)

#pragma pack(push, 4)
class CMultiplayRules : public CGameRules
{
// CMultiplayRules additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CMultiplayRules_098[0x10];
	__declspec(align(4)) float m_flIntermissionEndTime;// 0x98, size 4 (0x4)
char CMultiplayRules_0AC[0x10];
public:
	static int32_t Get_m_nMapCycleTimeStamp() {return *(int32_t *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_staticMembers.data[0].m_pInstance; }
	static int32_t Get_m_nMapCycleindex() {return *(int32_t *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CMultiplayRules")->m_staticMembers.data[1].m_pInstance; }
}; // size: 172 (0xac)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimationRetargetElementData_t
{
// AnimationRetargetElementData_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nElementType;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGroupType;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nChainType;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nChainIndex;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nChainInvIndex;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nBoneIndex;// 0x14, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_boneName;// 0x18, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x30, class matrix3x4_t> m_transform;// 0x1c, size 48 (0x30)
	__declspec(align(4)) UnknownType <0x30, class matrix3x4_t> m_invTransform;// 0x4c, size 48 (0x30)
	__declspec(align(4)) float m_flDistance;// 0x7c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMin;// 0x80, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMax;// 0x8c, size 12 (0xc)
	__declspec(align(4)) float m_flMass;// 0x98, size 4 (0x4)
}; // size: 156 (0x9c)
#pragma pack(pop)

class CFourWheelVehiclePhysics : public SchemaBase
{
// CFourWheelVehiclePhysics additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseAnimating > m_pOuter;// 0x4, size 4 (0x4)
	__declspec(align(4)) CFourWheelServerVehicle *m_pOuterServerVehicle;// 0x8, size 4 (0x4)
	__declspec(align(4)) vehicle_controlparams_t m_controls;// 0xc, size 24 (0x18)
char CFourWheelVehiclePhysics_028[0x4];
	__declspec(align(4)) int32_t m_nSpeed;// 0x28, size 4 (0x4)
	__declspec(align(4)) int32_t m_nLastSpeed;// 0x2c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRPM;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_fLastBoost;// 0x34, size 4 (0x4)
	__declspec(align(4)) int32_t m_nBoostTimeLeft;// 0x38, size 4 (0x4)
	__declspec(align(1)) bool m_bHasBoost;// 0x3c, size 1 (0x1)
	__declspec(align(4)) float m_maxThrottle;// 0x40, size 4 (0x4)
	__declspec(align(4)) float m_flMaxRevThrottle;// 0x44, size 4 (0x4)
	__declspec(align(4)) float m_flMaxSpeed;// 0x48, size 4 (0x4)
	__declspec(align(4)) float m_actionSpeed;// 0x4c, size 4 (0x4)
char CFourWheelVehiclePhysics_060[0x10];
	__declspec(align(4)) int32_t m_wheelCount;// 0x60, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_wheelPosition[4];// 0x64, size 48 (0x30)
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_wheelRotation[4];// 0x94, size 48 (0x30)
	__declspec(align(4)) float m_wheelBaseHeight[4];// 0xc4, size 16 (0x10)
	__declspec(align(4)) float m_wheelTotalHeight[4];// 0xd4, size 16 (0x10)
	__declspec(align(4)) int32_t m_poseParameters[12];// 0xe4, size 48 (0x30)
	__declspec(align(4)) float m_actionValue;// 0x114, size 4 (0x4)
	__declspec(align(4)) float m_actionScale;// 0x118, size 4 (0x4)
	__declspec(align(4)) float m_debugRadius;// 0x11c, size 4 (0x4)
	__declspec(align(4)) float m_throttleRate;// 0x120, size 4 (0x4)
	__declspec(align(4)) float m_throttleStartTime;// 0x124, size 4 (0x4)
	__declspec(align(4)) float m_throttleActiveTime;// 0x128, size 4 (0x4)
	__declspec(align(4)) float m_turboTimer;// 0x12c, size 4 (0x4)
	__declspec(align(4)) float m_flVehicleVolume;// 0x130, size 4 (0x4)
	__declspec(align(1)) bool m_bIsOn;// 0x134, size 1 (0x1)
	__declspec(align(1)) bool m_bLastThrottle;// 0x135, size 1 (0x1)
	__declspec(align(1)) bool m_bLastBoost;// 0x136, size 1 (0x1)
	__declspec(align(1)) bool m_bLastSkid;// 0x137, size 1 (0x1)
}; // size: 312 (0x138)

#pragma pack(push, 16)
class C_OP_SetControlPointToPlayer : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointToPlayer additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP1;// 0x60, size 4 (0x4)
	// m_nCP1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCP1Pos;// 0x64, size 12 (0xc)
	// m_vecCP1Pos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) bool m_bOrientToEyes;// 0x70, size 1 (0x1)
	// m_bOrientToEyes metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointToPlayer_080[0xF];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RampScalarLinear : public CParticlePerFrameOperatorInstance
{
// C_OP_RampScalarLinear additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_RateMin;// 0x60, size 4 (0x4)
	// m_RateMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_RateMax;// 0x64, size 4 (0x4)
	// m_RateMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_min;// 0x68, size 4 (0x4)
	// m_flStartTime_min metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_max;// 0x6c, size 4 (0x4)
	// m_flStartTime_max metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_min;// 0x70, size 4 (0x4)
	// m_flEndTime_min metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_max;// 0x74, size 4 (0x4)
	// m_flEndTime_max metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RampScalarLinear_0A0[0x28];
	__declspec(align(4)) int32_t m_nField;// 0xa0, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bProportionalOp;// 0xa4, size 1 (0x1)
	// m_bProportionalOp metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RampScalarLinear_0B0[0xB];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_FadeAndKillForTracers : public CParticlePerFrameOperatorInstance
{
// C_OP_FadeAndKillForTracers additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flStartFadeInTime;// 0x60, size 4 (0x4)
	// m_flStartFadeInTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndFadeInTime;// 0x64, size 4 (0x4)
	// m_flEndFadeInTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartFadeOutTime;// 0x68, size 4 (0x4)
	// m_flStartFadeOutTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndFadeOutTime;// 0x6c, size 4 (0x4)
	// m_flEndFadeOutTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartAlpha;// 0x70, size 4 (0x4)
	// m_flStartAlpha metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndAlpha;// 0x74, size 4 (0x4)
	// m_flEndAlpha metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_FadeAndKillForTracers_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_CodeDrivenEmitter : public CParticleEmitterOperatorInstance
{
// C_OP_CodeDrivenEmitter additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapQAnglesToRotation : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapQAnglesToRotation additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x70, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapQAnglesToRotation_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_ChaoticAttractor : public CParticleInitializerOperatorInstance
{
// C_INIT_ChaoticAttractor additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flAParm;// 0x70, size 4 (0x4)
	// m_flAParm metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBParm;// 0x74, size 4 (0x4)
	// m_flBParm metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flCParm;// 0x78, size 4 (0x4)
	// m_flCParm metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDParm;// 0x7c, size 4 (0x4)
	// m_flDParm metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flScale;// 0x80, size 4 (0x4)
	// m_flScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpeedMin;// 0x84, size 4 (0x4)
	// m_flSpeedMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpeedMax;// 0x88, size 4 (0x4)
	// m_flSpeedMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nBaseCP;// 0x8c, size 4 (0x4)
	// m_nBaseCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUniformSpeed;// 0x90, size 1 (0x1)
	// m_bUniformSpeed metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_ChaoticAttractor_0A0[0xF];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientPreSimulate_t : public EventSimulate_t
{
// EventClientPreSimulate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

class CJiggleBones
{
// CJiggleBones additional information
// client.dll, project client
// Alignment: -1
// Abstract Class

public:
char CJiggleBones_01C[0x1C];
}; // size: 28 (0x1c)

#pragma pack(push, 4)
class SchemaFieldMetadataOverrideData_t
{
// SchemaFieldMetadataOverrideData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x8, class SchemaString_t> m_FieldName;// 0x0, size 8 (0x8)
	__declspec(align(1)) bool m_bRemoveAll;// 0x8, size 1 (0x1)
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, class SchemaMetaModifyAdd_t > m_ModifyAdds;// 0xc, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, UnknownType <0x8, class SchemaString_t> > m_ModifyRemoves;// 0x14, size 8 (0x8)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class ViewSmoothingData_t
{
// ViewSmoothingData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) CBaseAnimating *pVehicle;// 0x0, size 4 (0x4)
	__declspec(align(1)) bool bClampEyeAngles;// 0x4, size 1 (0x1)
	__declspec(align(4)) float flPitchCurveZero;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flPitchCurveLinear;// 0xc, size 4 (0x4)
	__declspec(align(4)) float flRollCurveZero;// 0x10, size 4 (0x4)
	__declspec(align(4)) float flRollCurveLinear;// 0x14, size 4 (0x4)
	__declspec(align(4)) float flFOV;// 0x18, size 4 (0x4)
	__declspec(align(4)) ViewLockData_t pitchLockData;// 0x1c, size 16 (0x10)
	__declspec(align(4)) ViewLockData_t rollLockData;// 0x2c, size 16 (0x10)
	__declspec(align(1)) bool bDampenEyePosition;// 0x3c, size 1 (0x1)
	__declspec(align(1)) bool bRunningEnterExit;// 0x3d, size 1 (0x1)
	__declspec(align(1)) bool bWasRunningAnim;// 0x3e, size 1 (0x1)
	__declspec(align(4)) float flEnterExitStartTime;// 0x40, size 4 (0x4)
	__declspec(align(4)) float flEnterExitDuration;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class QAngle> vecAnglesSaved;// 0x48, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> vecOriginSaved;// 0x54, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> vecAngleDiffSaved;// 0x60, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> vecAngleDiffMin;// 0x6c, size 12 (0xc)
}; // size: 120 (0x78)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimationKeyResourceData_t
{
// AnimationKeyResourceData_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceBone_t > m_boneArray;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceUser_t > m_userArray;// 0xc, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_morphArray;// 0x14, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceIKChain_t > m_IKChainArray;// 0x1c, size 8 (0x8)
	__declspec(align(4)) int32_t m_nChannelElements;// 0x24, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceDataChannel_t > m_dataChannelArray;// 0x28, size 8 (0x8)
}; // size: 48 (0x30)
#pragma pack(pop)

class IClientAlphaProperty : public SchemaBase
{
// IClientAlphaProperty additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 1)
class CEntityComponent
{
// CEntityComponent additional information
// worldrenderer.dll, project entity2
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapVelocityToVector : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapVelocityToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flScale;// 0x64, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bNormalize;// 0x68, size 1 (0x1)
	// m_bNormalize metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapVelocityToVector_070[0x7];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class MaterialParamFloat_t : public MaterialParam_t
{
// MaterialParamFloat_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flValue;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class EventServerSimulate_t : public EventSimulate_t
{
// EventServerSimulate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 8)
class PermModelData_t
{
// PermModelData_t additional information
// engine2.dll, project modellib
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) PermModelInfo_t m_modelInfo;// 0x4, size 80 (0x50)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class PermModelExtPart_t > m_ExtParts;// 0x54, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCRenderMesh > > > m_refMeshes;// 0x5c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint64_t > m_refMeshGroupMasks;// 0x64, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint64_t > m_refPhysGroupMasks;// 0x6c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_refLODGroupMasks;// 0x74, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_lodGroupSwitchDistances;// 0x7c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCPhysAggregateData > > > m_refPhysicsData;// 0x84, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCPhysAggregateData > > > m_refPhysicsHitboxData;// 0x8c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCAnimationGroupResource > > > m_refAnimGroups;// 0x94, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCSequenceGroupResource > > > m_refSequenceGroups;// 0x9c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_meshGroups;// 0xa4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialGroup_t > m_materialGroups;// 0xac, size 8 (0x8)
	__declspec(align(8)) uint64_t m_nDefaultMeshGroupMask;// 0xb8, size 8 (0x8)
	__declspec(align(4)) ModelSkeletonData_t m_modelSkeleton;// 0xc0, size 48 (0x30)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int16_t > m_remappingTable;// 0xf0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_remappingTableStarts;// 0xf8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ModelBoneFlexDriver_t > m_boneFlexDrivers;// 0x100, size 8 (0x8)
}; // size: 264 (0x108)
#pragma pack(pop)

#pragma pack(push, 4)
class SchemaClassInfoData_t
{
// SchemaClassInfoData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownType <0x8, class SchemaString_t> m_Name;// 0x0, size 8 (0x8)
char SchemaClassInfoData_t_0C[0x4];
	__declspec(align(4)) int32_t m_nSizeOf;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nAlignOf;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, class SchemaClassFieldData_t > m_Fields;// 0x14, size 8 (0x8)
char SchemaClassInfoData_t_024[0x8];
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, class SchemaBaseClassInfoData_t > m_BaseClasses;// 0x24, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, class SchemaFieldMetadataOverrideData_t > m_FieldMetadataOverrides;// 0x2c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, CSchemaClassInfo *> m_NestedClasses;// 0x34, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, SchemaArray_t, CSchemaEnumInfo *> m_NestedEnums;// 0x3c, size 8 (0x8)
	__declspec(align(4)) SchemaMetadataSetData_t m_Metadata;// 0x44, size 16 (0x10)
char SchemaClassInfoData_t_068[0x14];
}; // size: 104 (0x68)
#pragma pack(pop)

#pragma pack(push, 8)
class C_EconItemView : public IEconItemInterface
{
// C_EconItemView additional information
// client.dll, project client
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) uint16_t m_iItemDefinitionIndex;// 0x4, size 2 (0x2)
	// m_iItemDefinitionIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iEntityQuality;// 0x8, size 4 (0x4)
	// m_iEntityQuality metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iEntityLevel;// 0xc, size 4 (0x4)
	// m_iEntityLevel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(8)) uint64_t m_iItemID;// 0x10, size 8 (0x8)
	// m_iItemID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iAccountID;// 0x18, size 4 (0x4)
	// m_iAccountID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iInventoryPosition;// 0x1c, size 4 (0x4)
	// m_iInventoryPosition metadata
	 // MNetworkEnable
char C_EconItemView_024[0x4];
	__declspec(align(1)) bool m_bInitialized;// 0x24, size 1 (0x1)
	// m_bInitialized metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_nOverrideStyle;// 0x25, size 1 (0x1)
	__declspec(align(1)) bool m_bIsStoreItem;// 0x26, size 1 (0x1)
	__declspec(align(1)) bool m_bIsTradeItem;// 0x27, size 1 (0x1)
	__declspec(align(1)) bool m_bHasComputedAttachedParticles;// 0x28, size 1 (0x1)
	__declspec(align(1)) bool m_bHasAttachedParticles;// 0x29, size 1 (0x1)
	__declspec(align(4)) int32_t m_iEntityQuantity;// 0x2c, size 4 (0x4)
	__declspec(align(1)) uint8_t m_unClientFlags;// 0x30, size 1 (0x1)
	__declspec(align(4)) eEconItemOrigin m_unOverrideOrigin;// 0x34, size 4 (0x4)
char C_EconItemView_03C[0x4];
	__declspec(align(4)) char* m_pszGrayedOutReason;// 0x3c, size 4 (0x4)
	__declspec(align(4)) CAttributeList m_AttributeList;// 0x40, size 52 (0x34)
	// m_AttributeList metadata
	 // MNetworkEnable
	 // MNetworkEnable
char C_EconItemView_090[0x1C];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class VSoundStack_t
{
// VSoundStack_t additional information
// soundsystem.dll, project soundsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_StackName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_StackKV;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCPanoramaStyle
{
// InfoForResourceTypeCPanoramaStyle additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCPanoramaStyle_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_OrientTo2dDirection : public CParticlePerFrameOperatorInstance
{
// C_OP_OrientTo2dDirection additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flRotOffset;// 0x60, size 4 (0x4)
	// m_flRotOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpinStrength;// 0x64, size 4 (0x4)
	// m_flSpinStrength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x68, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_OP_OrientTo2dDirection_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_DistanceToCP : public CParticlePerFrameOperatorInstance
{
// C_OP_DistanceToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x64, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x68, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x6c, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x70, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nStartCP;// 0x74, size 4 (0x4)
	// m_nStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLOS;// 0x78, size 1 (0x1)
	// m_bLOS metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x79, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxTraceLength;// 0xfc, size 4 (0x4)
	// m_flMaxTraceLength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLOSScale;// 0x100, size 4 (0x4)
	// m_flLOSScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x104, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x105, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x106, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_DistanceToCP_0110[0x9];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_PercentageBetweenCPLerpCPs : public CParticlePerFrameOperatorInstance
{
// C_OP_PercentageBetweenCPLerpCPs additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x64, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x68, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nStartCP;// 0x6c, size 4 (0x4)
	// m_nStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nEndCP;// 0x70, size 4 (0x4)
	// m_nEndCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputStartCP;// 0x74, size 4 (0x4)
	// m_nOutputStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputStartField;// 0x78, size 4 (0x4)
	// m_nOutputStartField metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputEndCP;// 0x7c, size 4 (0x4)
	// m_nOutputEndCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputEndField;// 0x80, size 4 (0x4)
	// m_nOutputEndField metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x84, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x85, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x86, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRadialCheck;// 0x87, size 1 (0x1)
	// m_bRadialCheck metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_PercentageBetweenCPLerpCPs_090[0x8];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceLocalHierarchy_t
{
// AnimResourceLocalHierarchy_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sBone;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sNewParent;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nStartFrame;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPeakFrame;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTailFrame;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nEndFrame;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class SceneObjectData_t
{
// SceneObjectData_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMinBounds;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxBounds;// 0xc, size 12 (0xc)
	__declspec(align(4)) MeshTranslucencyType_t m_translucencyType;// 0x18, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialDrawDescriptor_t > m_drawCalls;// 0x1c, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vTintColor;// 0x24, size 16 (0x10)
}; // size: 52 (0x34)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_MovementMaintainOffset : public CParticlePerFrameOperatorInstance
{
// C_OP_MovementMaintainOffset additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffset;// 0x60, size 12 (0xc)
	// m_vecOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nCP;// 0x6c, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRadiusScale;// 0x70, size 1 (0x1)
	// m_bRadiusScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_MovementMaintainOffset_080[0xF];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SnapshotRigidSkinToBones : public CParticlePerFrameOperatorInstance
{
// C_OP_SnapshotRigidSkinToBones additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bTransformNormals;// 0x60, size 1 (0x1)
	// m_bTransformNormals metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x64, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SnapshotRigidSkinToBones_070[0x8];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_BoxConstraint : public CParticleConstraintOperatorInstance
{
// C_OP_BoxConstraint additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMin;// 0x60, size 12 (0xc)
	// m_vecMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMax;// 0x6c, size 12 (0xc)
	// m_vecMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP;// 0x78, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_BoxConstraint_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_InheritFromParentParticles : public CParticleInitializerOperatorInstance
{
// C_INIT_InheritFromParentParticles additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flScale;// 0x70, size 4 (0x4)
	// m_flScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nIncrement;// 0x78, size 4 (0x4)
	// m_nIncrement metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRandomDistribution;// 0x7c, size 1 (0x1)
	// m_bRandomDistribution metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_InheritFromParentParticles_080[0x3];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceDecoder_t
{
// AnimResourceDecoder_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szName;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nVersion;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nType;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCPanoramaDynamicImages
{
// InfoForResourceTypeCPanoramaDynamicImages additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCPanoramaDynamicImages_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_InitialSequenceFromModel : public CParticleInitializerOperatorInstance
{
// C_INIT_InitialSequenceFromModel additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutputAnim;// 0x78, size 4 (0x4)
	// m_nFieldOutputAnim metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x7c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x80, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x84, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x88, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x8c, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_InitialSequenceFromModel_090[0x3];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointFromObjectScale : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointFromObjectScale additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCPInput;// 0x60, size 4 (0x4)
	// m_nCPInput metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCPOutput;// 0x64, size 4 (0x4)
	// m_nCPOutput metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointFromObjectScale_070[0x8];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceFrameSegment_t
{
// AnimResourceFrameSegment_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nUniqueFrameIndex;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nLocalElementMasks;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nLocalChannel;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_container;// 0xc, size 8 (0x8)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class WorldBuilderParams_t
{
// WorldBuilderParams_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nSizeBytesPerVoxel;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flMinDrawVolumeSize;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flMinDistToCamera;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flMinAtlasDist;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flMinSimplifiedDist;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flHorzFOV;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flHalfScreenWidth;// 0x18, size 4 (0x4)
	__declspec(align(4)) int32_t m_nAtlasTextureSizeX;// 0x1c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nAtlasTextureSizeY;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_nUniqueTextureSizeX;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_nUniqueTextureSizeY;// 0x28, size 4 (0x4)
	__declspec(align(4)) int32_t m_nCompressedAtlasSize;// 0x2c, size 4 (0x4)
	__declspec(align(4)) float m_flGutterSize;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flUVMapThreshold;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vWorldUnitsPerTile;// 0x38, size 12 (0xc)
	__declspec(align(4)) int32_t m_nMaxTexScaleSlots;// 0x44, size 4 (0x4)
	__declspec(align(1)) bool m_bWrapInAtlas;// 0x48, size 1 (0x1)
	__declspec(align(1)) uint8_t m_padding[3];// 0x49, size 3 (0x3)
}; // size: 76 (0x4c)
#pragma pack(pop)

#pragma pack(push, 4)
class VPhysXDiskMesh2_t : public VPhysXDiskShapeHeader_t
{
// VPhysXDiskMesh2_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_shape;// 0x4, size 8 (0x8)
	__declspec(align(4)) float m_flSkinWidth;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flMaxVelocity;// 0x10, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nReserved2[2];// 0x14, size 8 (0x8)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_FadeIn : public CParticlePerFrameOperatorInstance
{
// C_OP_FadeIn additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flFadeInTimeMin;// 0x60, size 4 (0x4)
	// m_flFadeInTimeMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFadeInTimeMax;// 0x64, size 4 (0x4)
	// m_flFadeInTimeMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFadeInTimeExp;// 0x68, size 4 (0x4)
	// m_flFadeInTimeExp metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bProportional;// 0x6c, size 1 (0x1)
	// m_bProportional metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_FadeIn_070[0x3];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceBoneDifference_t
{
// AnimResourceBoneDifference_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_parent;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_posError;// 0x8, size 12 (0xc)
	__declspec(align(1)) bool m_bHasRotation;// 0x14, size 1 (0x1)
	__declspec(align(1)) bool m_bHasMovement;// 0x15, size 1 (0x1)
char AnimResourceBoneDifference_t_018[0x2];
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class FourVectors2D
{
// FourVectors2D additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(16)) UnknownType <0x10, class fltx4> x;// 0x0, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> y;// 0x10, size 16 (0x10)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class RnDummy_t
{
// RnDummy_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nDummy;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class FeRodConstraint_t
{
// FeRodConstraint_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[2];// 0x0, size 4 (0x4)
	__declspec(align(4)) float flMaxDist;// 0x4, size 4 (0x4)
	__declspec(align(4)) float flMinDist;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flWeight0;// 0xc, size 4 (0x4)
	__declspec(align(4)) float flRelaxationFactor;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapAverageScalarValuetoCP : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapAverageScalarValuetoCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nOutControlPointNumber;// 0x60, size 4 (0x4)
	// m_nOutControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nField;// 0x64, size 4 (0x4)
	// m_nField metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x68, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x6c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x70, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x74, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapAverageScalarValuetoCP_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_AddVectorToVector : public CParticleInitializerOperatorInstance
{
// C_INIT_AddVectorToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecScale;// 0x70, size 12 (0xc)
	// m_vecScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x7c, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldInput;// 0x80, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_INIT_AddVectorToVector_090[0xC];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapSpeed : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapSpeed additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x64, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x68, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x6c, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x70, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x74, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x75, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bIgnoreDelta;// 0x76, size 1 (0x1)
	// m_bIgnoreDelta metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
char C_OP_RemapSpeed_080[0x9];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class SchemaClassFieldData_t
{
// SchemaClassFieldData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x8, class SchemaString_t> m_Name;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class CSchemaType> *m_pType;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nSingleInheritanceOffset;// 0xc, size 4 (0x4)
	__declspec(align(4)) SchemaMetadataSetData_t m_Metadata;// 0x10, size 16 (0x10)
}; // size: 32 (0x20)
#pragma pack(pop)

class IVehicle : public SchemaBase
{
// IVehicle additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 8)
class CRR_Response
{
// CRR_Response additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public: 
	enum class ResponseEnum_t : unsigned long
	{
		MAX_RESPONSE_NAME = 192,
		MAX_RULE_NAME = 128,
	};

public:
	__declspec(align(1)) uint8_t m_Type;// 0x0, size 1 (0x1)
	__declspec(align(1)) char m_szResponseName[192];// 0x1, size 192 (0xc0)
	__declspec(align(1)) char m_szMatchingRule[128];// 0xc1, size 128 (0x80)
	__declspec(align(8)) ResponseParams m_Params;// 0x148, size 32 (0x20)
	__declspec(align(4)) float m_fMatchScore;// 0x168, size 4 (0x4)
	__declspec(align(4)) char* m_szSpeakerContext;// 0x16c, size 4 (0x4)
	__declspec(align(4)) char* m_szWorldContext;// 0x170, size 4 (0x4)
	__declspec(align(1)) ResponseFollowup m_Followup;// 0x174, size 29 (0x1d)
char CRR_Response_0198[0x7];
}; // size: 408 (0x198)
#pragma pack(pop)

#pragma pack(push, 16)
class AnimationSnapshotBase_t
{
// AnimationSnapshotBase_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 16

public:
	__declspec(align(4)) float m_flRealTime;// 0x0, size 4 (0x4)
	__declspec(align(16)) UnknownType <0x30, class matrix3x4a_t> m_rootToWorld;// 0x10, size 48 (0x30)
	__declspec(align(1)) bool m_bBonesInWorldSpace;// 0x40, size 1 (0x1)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, uint32_t > m_boneSetupMask;// 0x44, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x30, class matrix3x4a_t> > m_boneTransforms;// 0x54, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, float > m_flexControllers;// 0x64, size 16 (0x10)
	__declspec(align(4)) AnimationSnapshotType_t m_SnapshotType;// 0x74, size 4 (0x4)
	__declspec(align(1)) bool m_bHasDecodeDump;// 0x78, size 1 (0x1)
char AnimationSnapshotBase_t_07C[0x3];
	__declspec(align(4)) AnimationDecodeDebugDumpElement_t m_DecodeDump;// 0x7c, size 68 (0x44)
}; // size: 192 (0xc0)
#pragma pack(pop)

#pragma pack(push, 8)
class MaterialParamTexture_t : public MaterialParam_t
{
// MaterialParamTexture_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char MaterialParamTexture_t_08[0x4];
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pValue;// 0x8, size 8 (0x8)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCPanoramaScript
{
// InfoForResourceTypeCPanoramaScript additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCPanoramaScript_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class CGlobalLightBase : public SchemaBase
{
// CGlobalLightBase additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char CGlobalLightBase_08[0x4];
	__declspec(align(4)) UnknownType <0xc, class Vector> m_ShadowDirection;// 0x8, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_AmbientDirection;// 0x14, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_SpecularDirection;// 0x20, size 12 (0xc)
	__declspec(align(4)) float m_flSpecularPower;// 0x2c, size 4 (0x4)
	// m_flSpecularPower metadata
	 // MKeyfieldname
	__declspec(align(1)) UnknownType <0x4, class color32> m_SpecularColor;// 0x30, size 4 (0x4)
	// m_SpecularColor metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bStartDisabled;// 0x34, size 1 (0x1)
	// m_bStartDisabled metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bEnabled;// 0x35, size 1 (0x1)
	__declspec(align(1)) UnknownType <0x4, class color32> m_LightColor;// 0x36, size 4 (0x4)
	// m_LightColor metadata
	 // MKeyfieldname
	__declspec(align(1)) UnknownType <0x4, class color32> m_AmbientColor1;// 0x3a, size 4 (0x4)
	// m_AmbientColor1 metadata
	 // MKeyfieldname
	__declspec(align(1)) UnknownType <0x4, class color32> m_AmbientColor2;// 0x3e, size 4 (0x4)
	// m_AmbientColor2 metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flSunDistance;// 0x44, size 4 (0x4)
	__declspec(align(4)) float m_flFOV;// 0x48, size 4 (0x4)
	// m_flFOV metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flNearZ;// 0x4c, size 4 (0x4)
	// m_flNearZ metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bEnableShadows;// 0x50, size 1 (0x1)
	// m_bEnableShadows metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bOldEnableShadows;// 0x51, size 1 (0x1)
	__declspec(align(1)) bool m_bBackgroundClearNotRequired;// 0x52, size 1 (0x1)
	// m_bBackgroundClearNotRequired metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flCloudScale;// 0x54, size 4 (0x4)
	__declspec(align(4)) float m_flCloud1Speed;// 0x58, size 4 (0x4)
	__declspec(align(4)) float m_flCloud1Direction;// 0x5c, size 4 (0x4)
	__declspec(align(4)) float m_flCloud2Speed;// 0x60, size 4 (0x4)
	__declspec(align(4)) float m_flCloud2Direction;// 0x64, size 4 (0x4)
	__declspec(align(4)) float m_flAmbientScale1;// 0x68, size 4 (0x4)
	// m_flAmbientScale1 metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flAmbientScale2;// 0x6c, size 4 (0x4)
	// m_flAmbientScale2 metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flGroundScale;// 0x70, size 4 (0x4)
	// m_flGroundScale metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flLightScale;// 0x74, size 4 (0x4)
	// m_flLightScale metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flFoWDarkness;// 0x78, size 4 (0x4)
	// m_flFoWDarkness metadata
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vFowColor;// 0x7c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_ViewOrigin;// 0x88, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_ViewAngles;// 0x94, size 12 (0xc)
	__declspec(align(4)) float m_flViewFoV;// 0xa0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_WorldPoints[8];// 0xa4, size 96 (0x60)
char CGlobalLightBase_02FC[0x1F8];
}; // size: 764 (0x2fc)
#pragma pack(pop)

#pragma pack(push, 4)
class CPassengerInfo
{
// CPassengerInfo additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nRole;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nSeat;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_strRoleName;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_strSeatName;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseCombatCharacter > m_hPassenger;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class CSchemaMetadataEntry : public SchemaMetadataEntryData_t
{
// CSchemaMetadataEntry additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 1)
class AIHullFlags_t
{
// AIHullFlags_t additional information
// server.dll, project server
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool m_bHull_Human;// 0x0, size 1 (0x1)
	// m_bHull_Human metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bHull_SmallCentered;// 0x1, size 1 (0x1)
	// m_bHull_SmallCentered metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bHull_WideHuman;// 0x2, size 1 (0x1)
	// m_bHull_WideHuman metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bHull_Tiny;// 0x3, size 1 (0x1)
	// m_bHull_Tiny metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bHull_Medium;// 0x4, size 1 (0x1)
	// m_bHull_Medium metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bHull_TinyCentered;// 0x5, size 1 (0x1)
	// m_bHull_TinyCentered metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bHull_Large;// 0x6, size 1 (0x1)
	// m_bHull_Large metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bHull_LargeCentered;// 0x7, size 1 (0x1)
	// m_bHull_LargeCentered metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bHull_MediumTall;// 0x8, size 1 (0x1)
	// m_bHull_MediumTall metadata
	 // MKeyfieldname
}; // size: 9 (0x9)
#pragma pack(pop)

#pragma pack(push, 4)
class CShowcaseData : public SchemaBase
{
// CShowcaseData additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hRootEntity;// 0x4, size 4 (0x4)
	// m_hRootEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CShowcaseSlot > m_Slots;// 0x8, size 16 (0x10)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapSpeedToScalar : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapSpeedToScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x70, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x74, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x78, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x7c, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMin;// 0x80, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x84, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x88, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x8c, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x90, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bPerParticle;// 0x91, size 1 (0x1)
	// m_bPerParticle metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapSpeedToScalar_0A0[0xE];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 8)
class CSchemaEnumInfo : public SchemaEnumInfoData_t
{
// CSchemaEnumInfo additional information
// schemasystem.dll, project schemalib
// Alignment: 8
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
}; // size: 80 (0x50)
#pragma pack(pop)

#pragma pack(push, 16)
class CSceneObjectExtraData_t
{
// CSceneObjectExtraData_t additional information
// scenesystem.dll, project scenesystem
// Alignment: 16
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CSceneObjectExtraData_t_02E4[0x2E4];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, float > m_flExtraShaderData;// 0x2e4, size 16 (0x10)
char CSceneObjectExtraData_t_0348[0x50];
	__declspec(align(8)) uint64_t m_nCurrentMeshGroupMask;// 0x348, size 8 (0x8)
char CSceneObjectExtraData_t_0354[0x4];
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_nLayerForceID;// 0x354, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCubeMapOrigin;// 0x358, size 12 (0xc)
	__declspec(align(4)) float m_flDepthSortBias;// 0x364, size 4 (0x4)
	__declspec(align(1)) uint8_t m_nVisibleToPlayer[4];// 0x368, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nAlphaFade;// 0x36c, size 2 (0x2)
	__declspec(align(2)) int16_t m_nViewProducerIndex;// 0x36e, size 2 (0x2)
	__declspec(align(1)) int8_t m_nCurrentLOD;// 0x370, size 1 (0x1)
char CSceneObjectExtraData_t_0380[0xF];
}; // size: 896 (0x380)
#pragma pack(pop)

#pragma pack(push, 16)
class ParticleChildrenInfo_t
{
// ParticleChildrenInfo_t additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIParticleSystemDefinition > > m_ChildRef;// 0x0, size 8 (0x8)
	// m_ChildRef metadata
	 // MDefaultString
	__declspec(align(1)) bool m_bPreventNameBasedLookup;// 0x8, size 1 (0x1)
	// m_bPreventNameBasedLookup metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDelay;// 0xc, size 4 (0x4)
	// m_flDelay metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bEndCap;// 0x10, size 1 (0x1)
	// m_bEndCap metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bDisableChild;// 0x11, size 1 (0x1)
	// m_bDisableChild metadata
	 // MAttributeName
	 // MDefaultString
char ParticleChildrenInfo_t_020[0xE];
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetCPOrientationToDirection : public CParticlePerFrameOperatorInstance
{
// C_OP_SetCPOrientationToDirection additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nInputControlPoint;// 0x60, size 4 (0x4)
	// m_nInputControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputControlPoint;// 0x64, size 4 (0x4)
	// m_nOutputControlPoint metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetCPOrientationToDirection_070[0x8];
}; // size: 112 (0x70)
#pragma pack(pop)

class CClientAlphaProperty : public IClientAlphaProperty
{
// CClientAlphaProperty additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CClientAlphaProperty_08[0x4];
	__declspec(align(1)) uint8_t m_nRenderFX;// 0x8, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nRenderMode;// 0x9, size 1 (0x1)
	bool m_bAlphaOverride : 1;// 0x0, size 0 (0x0)
	bool m_bShadowAlphaOverride : 1;// 0x0, size 0 (0x0)
	bool m_nDistanceFadeMode : 1;// 0x0, size 0 (0x0)
	char m_nReserved : 4;// 0x0, size 0 (0x0)
	__declspec(align(1)) uint8_t m_nAlpha;// 0xb, size 1 (0x1)
	__declspec(align(2)) uint16_t m_nDesyncOffset;// 0xc, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nReserved2;// 0xe, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nDistFadeStart;// 0x10, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nDistFadeEnd;// 0x12, size 2 (0x2)
	__declspec(align(4)) float m_flFadeScale;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flRenderFxStartTime;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flRenderFxDuration;// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)

class C_DOTAGameManager : public SchemaBase
{
// C_DOTAGameManager additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char C_DOTAGameManager_018[0x14];
	__declspec(align(4)) CNetworkVarChainer __m_pChainEntity;// 0x18, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvHeroes[2];// 0x24, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvUnits[2];// 0x2c, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvAbilities[2];// 0x34, size 8 (0x8)
char C_DOTAGameManager_015C[0x120];
	__declspec(align(1)) bool m_bCustomGame;// 0x15c, size 1 (0x1)
	__declspec(align(1)) bool m_bEventGame;// 0x15d, size 1 (0x1)
	__declspec(align(1)) char m_szAddOnGame[128];// 0x15e, size 128 (0x80)
	__declspec(align(1)) char m_szAddOnMap[128];// 0x1de, size 128 (0x80)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvAddOnHeroes[2];// 0x260, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvAddOnUnits[2];// 0x268, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pkvAddOnAbilities[2];// 0x270, size 8 (0x8)
char C_DOTAGameManager_0398[0x120];
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pPortraitsKeyValues;// 0x398, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pTutorialLessonKeyValues;// 0x39c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pTutorialTipKeyValues;// 0x3a0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pDivisionKeyValues;// 0x3a4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pMatchGroupsKeyValues;// 0x3a8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pEmoticonsKeyValues;// 0x3ac, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pPortraitsLightPreselects;// 0x3b0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pAnimationStatues;// 0x3b4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pRegionKeyValues;// 0x3b8, size 4 (0x4)
char C_DOTAGameManager_03D8[0x1C];
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pCountryKeyValues;// 0x3d8, size 4 (0x4)
char C_DOTAGameManager_0400[0x24];
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pSurveyQuestionData;// 0x400, size 4 (0x4)
	__declspec(align(4)) int32_t m_nNumLoadingPlayers;// 0x404, size 4 (0x4)
	__declspec(align(4)) int32_t m_iDefeatedParticle;// 0x408, size 4 (0x4)
char C_DOTAGameManager_0430[0x24];
	__declspec(align(1)) bool m_bLoadedFullBodyPortraits;// 0x430, size 1 (0x1)
char C_DOTAGameManager_0458[0x27];
	__declspec(align(1)) bool m_bLoadedCardPortraits;// 0x458, size 1 (0x1)
	__declspec(align(1)) bool m_bCanChooseRandomHero;// 0x459, size 1 (0x1)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pControlGroupsKeyValues;// 0x45c, size 4 (0x4)
	__declspec(align(1)) bool m_StableHeroAvailable[128];// 0x460, size 128 (0x80)
	// m_StableHeroAvailable metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_CurrentHeroAvailable[128];// 0x4e0, size 128 (0x80)
	// m_CurrentHeroAvailable metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_CulledHeroes[128];// 0x560, size 128 (0x80)
	// m_CulledHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 1504 (0x5e0)

#pragma pack(push, 16)
class CSceneObject : public SchemaBase
{
// CSceneObject additional information
// scenesystem.dll, project scenesystem
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CSceneObject_08[0x4];
	__declspec(align(4)) UnknownType <0x1, class ISceneObjectDesc> *m_pDesc;// 0x8, size 4 (0x4)
	__declspec(align(4)) CSceneObjectReference_t *m_pRefData;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flStartFadeDistanceSquared;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flFarCullDistanceSquared;// 0x14, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nObjectTypeFlags;// 0x18, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nGameRenderCounter;// 0x1a, size 2 (0x2)
char CSceneObject_01F[0x3];
	__declspec(align(1)) uint8_t m_nMeshGroupMaskSmall;// 0x1f, size 1 (0x1)
	char m_nDebugLevel : 2;// 0x0, size 0 (0x0)
	char m_nSizeCullBloat : 2;// 0x0, size 0 (0x0)
	bool m_nBoundsType : 1;// 0x0, size 0 (0x0)
	__declspec(align(1)) uint8_t m_nID;// 0x21, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nNumTransformBlocks;// 0x22, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nObjectClass;// 0x23, size 1 (0x1)
	__declspec(align(16)) UnknownType <0x30, class matrix3x4a_t> m_transform;// 0x30, size 48 (0x30)
	__declspec(align(4)) CPVSData *m_pPVS;// 0x60, size 4 (0x4)
	__declspec(align(8)) uint64_t m_nOriginalRenderableFlags;// 0x68, size 8 (0x8)
	__declspec(align(8)) uint64_t m_nRenderableFlags;// 0x70, size 8 (0x8)
char CSceneObject_080[0x8];
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_nLayerMatchID;// 0x80, size 4 (0x4)
char CSceneObject_090[0xC];
public:
	static /*Array, 4 elements*/float *Get_s_flSizeCullBloatScale() {return *(float **)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSceneObject")->m_staticMembers.data[0].m_pInstance; }
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointsToModelParticles : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointsToModelParticles additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) char m_HitboxSetName[128];// 0x60, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_AttachmentName[128];// 0xe0, size 128 (0x80)
	// m_AttachmentName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstControlPoint;// 0x160, size 4 (0x4)
	// m_nFirstControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nNumControlPoints;// 0x164, size 4 (0x4)
	// m_nNumControlPoints metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstSourcePoint;// 0x168, size 4 (0x4)
	// m_nFirstSourcePoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSkin;// 0x16c, size 1 (0x1)
	// m_bSkin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAttachment;// 0x16d, size 1 (0x1)
	// m_bAttachment metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointsToModelParticles_0170[0x2];
}; // size: 368 (0x170)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_GlobalLight : public CParticlePerFrameOperatorInstance
{
// C_OP_GlobalLight additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flScale;// 0x60, size 4 (0x4)
	// m_flScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bClampLowerRange;// 0x64, size 1 (0x1)
	// m_bClampLowerRange metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bClampUpperRange;// 0x65, size 1 (0x1)
	// m_bClampUpperRange metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_GlobalLight_070[0xA];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class ResponseContext_t
{
// ResponseContext_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszValue;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_fExpirationTime;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class IntervalTimer : public SchemaBase
{
// IntervalTimer additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_timestamp;// 0x4, size 4 (0x4)
	// m_timestamp metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldInput;// 0x60, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x68, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x6c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x70, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x74, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapScalar_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapParticleCountToScalar : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapParticleCountToScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x70, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nInputMin;// 0x74, size 4 (0x4)
	// m_nInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nInputMax;// 0x78, size 4 (0x4)
	// m_nInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPoint;// 0x7c, size 4 (0x4)
	// m_nScaleControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPointField;// 0x80, size 4 (0x4)
	// m_nScaleControlPointField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flOutputMin;// 0x84, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x88, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x8c, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x8d, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bInvert;// 0x8e, size 1 (0x1)
	// m_bInvert metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapParticleCountToScalar_090[0x1];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class TonemapParameters_t : public SchemaBase
{
// TonemapParameters_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flAutoExposureMin;// 0x4, size 4 (0x4)
	// m_flAutoExposureMin metadata
	 // MNetworkEnable
	__declspec(align(4)) float m_flAutoExposureMax;// 0x8, size 4 (0x4)
	// m_flAutoExposureMax metadata
	 // MNetworkEnable
	__declspec(align(4)) float m_flTonemapPercentTarget;// 0xc, size 4 (0x4)
	// m_flTonemapPercentTarget metadata
	 // MNetworkEnable
	__declspec(align(4)) float m_flTonemapPercentBrightPixels;// 0x10, size 4 (0x4)
	// m_flTonemapPercentBrightPixels metadata
	 // MNetworkEnable
	__declspec(align(4)) float m_flTonemapMinAvgLum;// 0x14, size 4 (0x4)
	// m_flTonemapMinAvgLum metadata
	 // MNetworkEnable
	__declspec(align(4)) float m_flRate;// 0x18, size 4 (0x4)
	// m_flRate metadata
	 // MNetworkEnable
	__declspec(align(4)) float m_flAccelerateExposureDown;// 0x1c, size 4 (0x4)
	// m_flAccelerateExposureDown metadata
	 // MNetworkEnable
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetParentControlPointsToChildCP : public CParticlePerFrameOperatorInstance
{
// C_OP_SetParentControlPointsToChildCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nChildGroupID;// 0x60, size 4 (0x4)
	// m_nChildGroupID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nChildControlPoint;// 0x64, size 4 (0x4)
	// m_nChildControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nNumControlPoints;// 0x68, size 4 (0x4)
	// m_nNumControlPoints metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstSourcePoint;// 0x6c, size 4 (0x4)
	// m_nFirstSourcePoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetOrientation;// 0x70, size 1 (0x1)
	// m_bSetOrientation metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetParentControlPointsToChildCP_080[0xF];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_DistanceToCPInit : public CParticleInitializerOperatorInstance
{
// C_INIT_DistanceToCPInit additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x70, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x74, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x78, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x7c, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x80, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nStartCP;// 0x84, size 4 (0x4)
	// m_nStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLOS;// 0x88, size 1 (0x1)
	// m_bLOS metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x89, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxTraceLength;// 0x10c, size 4 (0x4)
	// m_flMaxTraceLength metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLOSScale;// 0x110, size 4 (0x4)
	// m_flLOSScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x114, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x115, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDistanceScale;// 0x118, size 12 (0xc)
	// m_vecDistanceScale metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_DistanceToCPInit_0130[0xC];
}; // size: 304 (0x130)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientPollNetworking_t
{
// EventClientPollNetworking_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nTickCount;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class C_DOTA_PlayerChallengeInfo
{
// C_DOTA_PlayerChallengeInfo additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char C_DOTA_PlayerChallengeInfo_08[0x8];
	__declspec(align(4)) int32_t nType;// 0x8, size 4 (0x4)
	// nType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t nTier;// 0xc, size 4 (0x4)
	// nTier metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t nParam0;// 0x10, size 4 (0x4)
	// nParam0 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t nParam1;// 0x14, size 4 (0x4)
	// nParam1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t nSlotID;// 0x18, size 4 (0x4)
	// nSlotID metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LagCompensation : public CParticlePerFrameOperatorInstance
{
// C_OP_LagCompensation additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nDesiredVelocityCP;// 0x60, size 4 (0x4)
	// m_nDesiredVelocityCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nLatencyCP;// 0x64, size 4 (0x4)
	// m_nLatencyCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nLatencyCPField;// 0x68, size 4 (0x4)
	// m_nLatencyCPField metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nDesiredVelocityCPField;// 0x6c, size 4 (0x4)
	// m_nDesiredVelocityCPField metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetToCP : public CParticlePerFrameOperatorInstance
{
// C_OP_SetToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffset;// 0x64, size 12 (0xc)
	// m_vecOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOffsetLocal;// 0x70, size 1 (0x1)
	// m_bOffsetLocal metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetToCP_080[0xF];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class WeaponSoundData_t
{
// WeaponSoundData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) WeaponSound_t m_Type;// 0x0, size 4 (0x4)
	// m_Type metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Sound;// 0x4, size 4 (0x4)
	// m_Sound metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_NormalizeVector : public CParticlePerFrameOperatorInstance
{
// C_OP_NormalizeVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flScale;// 0x64, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_NormalizeVector_070[0x8];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointOrientation : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointOrientation additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(1)) bool m_bUseWorldLocation;// 0x60, size 1 (0x1)
	// m_bUseWorldLocation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointOrientation_062[0x1];
	__declspec(align(1)) bool m_bRandomize;// 0x62, size 1 (0x1)
	// m_bRandomize metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetOnce;// 0x63, size 1 (0x1)
	// m_bSetOnce metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP;// 0x64, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nHeadLocation;// 0x68, size 4 (0x4)
	// m_nHeadLocation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_vecRotation;// 0x6c, size 12 (0xc)
	// m_vecRotation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_vecRotationB;// 0x78, size 12 (0xc)
	// m_vecRotationB metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointOrientation_090[0xC];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceDataChannel_t
{
// AnimResourceDataChannel_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szChannelClass;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szVariableName;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nFlags;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nType;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szGrouping;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_szDescription;// 0x14, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_szElementNameArray;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_nElementIndexArray;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_nElementMaskArray;// 0x28, size 8 (0x8)
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_InitialRepulsionVelocity : public CParticleInitializerOperatorInstance
{
// C_INIT_InitialRepulsionVelocity additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x70, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMin;// 0xf0, size 12 (0xc)
	// m_vecOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMax;// 0xfc, size 12 (0xc)
	// m_vecOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x108, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bPerParticle;// 0x10c, size 1 (0x1)
	// m_bPerParticle metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bTranslate;// 0x10d, size 1 (0x1)
	// m_bTranslate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bProportional;// 0x10e, size 1 (0x1)
	// m_bProportional metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTraceLength;// 0x110, size 4 (0x4)
	// m_flTraceLength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bPerParticleTR;// 0x114, size 1 (0x1)
	// m_bPerParticleTR metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bInherit;// 0x115, size 1 (0x1)
	// m_bInherit metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nChildCP;// 0x118, size 4 (0x4)
	// m_nChildCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nChildGroupID;// 0x11c, size 4 (0x4)
	// m_nChildGroupID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 288 (0x120)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourceMultiFetch_t
{
// SeqResourceMultiFetch_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) SeqResourceMultiFetch_t_Flag_t m_flags;// 0x0, size 6 (0x6)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int16_t > m_localReferenceArray;// 0x8, size 8 (0x8)
	__declspec(align(4)) int32_t m_nGroupSize[2];// 0x10, size 8 (0x8)
	__declspec(align(4)) int32_t m_nLocalPose[2];// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_poseKeyArray0;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_poseKeyArray1;// 0x28, size 8 (0x8)
	__declspec(align(4)) int32_t m_nLocalCyclePoseParameter;// 0x30, size 4 (0x4)
	__declspec(align(1)) bool m_bCalculatePoseParameters;// 0x34, size 1 (0x1)
char SeqResourceMultiFetch_t_038[0x3];
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientPauseSimulate_t : public EventSimulate_t
{
// EventClientPauseSimulate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

class CFireOverlay : public CGlowOverlay
{
// CFireOverlay additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) C_FireSmoke *m_pOwner;// 0xa4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vBaseColors[4];// 0xa8, size 48 (0x30)
	__declspec(align(4)) float m_flScale;// 0xd8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGUID;// 0xdc, size 4 (0x4)
}; // size: 224 (0xe0)

#pragma pack(push, 16)
class C_OP_NoiseEmitter : public CParticleEmitterOperatorInstance
{
// C_OP_NoiseEmitter additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flEmissionDuration;// 0x60, size 4 (0x4)
	// m_flEmissionDuration metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x64, size 4 (0x4)
	// m_flStartTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEmissionScale;// 0x68, size 4 (0x4)
	// m_flEmissionScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAbsVal;// 0x6c, size 1 (0x1)
	// m_bAbsVal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAbsValInv;// 0x6d, size 1 (0x1)
	// m_bAbsValInv metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffset;// 0x70, size 4 (0x4)
	// m_flOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x74, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x78, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseScale;// 0x7c, size 4 (0x4)
	// m_flNoiseScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseScaleLoc;// 0x80, size 4 (0x4)
	// m_flNoiseScaleLoc metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffsetLoc;// 0x84, size 12 (0xc)
	// m_vecOffsetLoc metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flWorldTimeScale;// 0x90, size 4 (0x4)
	// m_flWorldTimeScale metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_NoiseEmitter_0A0[0xC];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class CThrustController : public SchemaBase
{
// CThrustController additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_thrustVector;// 0x4, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_torqueVector;// 0x10, size 12 (0xc)
	__declspec(align(4)) float m_thrust;// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapControlPointDirectionToVector : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapControlPointDirectionToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flScale;// 0x64, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x68, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapControlPointDirectionToVector_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapInitialDirectionToCPToVector : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapInitialDirectionToCPToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x70, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flScale;// 0x78, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffsetRot;// 0x7c, size 4 (0x4)
	// m_flOffsetRot metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffsetAxis;// 0x80, size 12 (0xc)
	// m_vecOffsetAxis metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) bool m_bNormalize;// 0x8c, size 1 (0x1)
	// m_bNormalize metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapInitialDirectionToCPToVector_090[0x3];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class FeTaperedCapsuleRigid_t
{
// FeTaperedCapsuleRigid_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) uint16_t nNode;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nCollisionMask;// 0x2, size 2 (0x2)
	__declspec(align(4)) UnknownType <0xc, class Vector> vCenter[2];// 0x4, size 24 (0x18)
	__declspec(align(4)) float flRadius[2];// 0x1c, size 8 (0x8)
	__declspec(align(4)) float flStickiness;// 0x24, size 4 (0x4)
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 4)
class CResourceDiskStructField
{
// CResourceDiskStructField additional information
// schemasystem.dll, project schemasystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_pFieldName;// 0x0, size 4 (0x4)
	__declspec(align(2)) int16_t m_nCount;// 0x4, size 2 (0x2)
	__declspec(align(2)) int16_t m_nOnDiskOffset;// 0x6, size 2 (0x2)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_Indirection;// 0x8, size 8 (0x8)
	__declspec(align(4)) uint32_t m_nTypeData;// 0x10, size 4 (0x4)
	__declspec(align(2)) int16_t m_nType;// 0x14, size 2 (0x2)
char CResourceDiskStructField_018[0x2];
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_Modifier_Lua_Vertical_Motion : public CDOTA_Modifier_Lua, public CVerticalMotionController
{
// CDOTA_Modifier_Lua_Vertical_Motion additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 784 (0x310)
#pragma pack(pop)

#pragma pack(push, 8)
class PermRenderMeshData_t
{
// PermRenderMeshData_t additional information
// engine2.dll, project modellib
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SceneObjectData_t > m_sceneObjects;// 0x0, size 8 (0x8)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCMorphSet > > m_pMorphSet;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x4, CResourcePointer, class RenderSkeletonData_t > m_skeleton;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AttachmentData_t > m_attachments;// 0x14, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class HitBoxSet_t > m_hitboxsets;// 0x1c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class BaseConstraint_t > m_boneConstraints;// 0x24, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class OnDiskBufferData_t > m_vertexBuffers;// 0x2c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class OnDiskBufferData_t > m_indexBuffers;// 0x34, size 8 (0x8)
char PermRenderMeshData_t_040[0x4];
}; // size: 64 (0x40)
#pragma pack(pop)

#pragma pack(push, 4)
class ConstraintSlave_t
{
// ConstraintSlave_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nBoneHash;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flWeight;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vBasePosition;// 0x8, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_qBaseOrientation;// 0x14, size 16 (0x10)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_MovementRotateParticleAroundAxis : public CParticlePerFrameOperatorInstance
{
// C_OP_MovementRotateParticleAroundAxis additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRotAxis;// 0x60, size 12 (0xc)
	// m_vecRotAxis metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flRotRate;// 0x6c, size 4 (0x4)
	// m_flRotRate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP;// 0x70, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalSpace;// 0x74, size 1 (0x1)
	// m_bLocalSpace metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_MovementRotateParticleAroundAxis_080[0xB];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateOnModel : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateOnModel additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nForceInModel;// 0x74, size 4 (0x4)
	// m_nForceInModel metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nDesiredHitbox;// 0x78, size 4 (0x4)
	// m_nDesiredHitbox metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flHitBoxScale;// 0x7c, size 4 (0x4)
	// m_flHitBoxScale metadata
	 // MAttributeName
	 // MAlternateAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBoneVelocity;// 0x80, size 4 (0x4)
	// m_flBoneVelocity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxBoneVelocity;// 0x84, size 4 (0x4)
	// m_flMaxBoneVelocity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDirectionBias;// 0x88, size 12 (0xc)
	// m_vecDirectionBias metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) char m_HitboxSetName[128];// 0x94, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalCoords;// 0x114, size 1 (0x1)
	// m_bLocalCoords metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseBones;// 0x115, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateOnModel_0120[0xA];
}; // size: 288 (0x120)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimationRetargetChainData_t
{
// AnimationRetargetChainData_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sChainName;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGroupType;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nChainType;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_nElement;// 0xc, size 8 (0x8)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class CRecipientFilter : public IRecipientFilter
{
// CRecipientFilter additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) NetChannelBufType_t m_nBufType;// 0x4, size 4 (0x4)
	__declspec(align(1)) bool m_bInitMessage;// 0x8, size 1 (0x1)
	__declspec(align(4)) UnknownAtomicType <0x114, CUtlVector, UnknownType <0x4, class CEntityIndex> > m_Recipients;// 0xc, size 276 (0x114)
	__declspec(align(1)) bool m_bUsingPredictionRules;// 0x120, size 1 (0x1)
	__declspec(align(1)) bool m_bIgnorePredictionCull;// 0x121, size 1 (0x1)
char CRecipientFilter_0124[0x2];
}; // size: 292 (0x124)
#pragma pack(pop)

#pragma pack(push, 4)
class CHitBox
{
// CHitBox additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x30, class matrix3x4_t> m_forcedRotation;// 0x0, size 48 (0x30)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_name;// 0x30, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_sSurfaceProperty;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_sBoneName;// 0x38, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nBoneNameHash;// 0x3c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGroupId;// 0x40, size 4 (0x4)
	__declspec(align(1)) UnknownType <0x4, class Color> m_cRenderColor;// 0x44, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nHitBoxIndex;// 0x48, size 2 (0x2)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMinBounds;// 0x4c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxBounds;// 0x58, size 12 (0xc)
	__declspec(align(1)) bool m_bForcedRotation;// 0x64, size 1 (0x1)
	__declspec(align(1)) bool m_bVisible;// 0x65, size 1 (0x1)
	__declspec(align(1)) bool m_bSelected;// 0x66, size 1 (0x1)
char CHitBox_068[0x1];
}; // size: 104 (0x68)
#pragma pack(pop)

#pragma pack(push, 4)
class ClusteredDistributionParams_t
{
// ClusteredDistributionParams_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flClusterCoverageFraction;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flClusterArea;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 8)
class CShowcaseSlot : public SchemaBase
{
// CShowcaseSlot additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
char CShowcaseSlot_08[0x4];
	__declspec(align(4)) ETeamShowcase_SlotType nType;// 0x8, size 4 (0x4)
	// nType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) char szName[255];// 0xc, size 255 (0xff)
	// szName metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0xc, class Vector> vecLocalOrigin;// 0x10c, size 12 (0xc)
	// vecLocalOrigin metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) UnknownType <0xc, class QAngle> angLocalAngles;// 0x118, size 12 (0xc)
	// angLocalAngles metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	 // MNetworkBitCount
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > hEntity;// 0x124, size 4 (0x4)
	// hEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > hExtraEntity;// 0x128, size 4 (0x4)
	// hExtraEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0xc, class Vector> vecExtraLocalOrigin;// 0x12c, size 12 (0xc)
	// vecExtraLocalOrigin metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) UnknownType <0xc, class QAngle> angExtraLocalAngles;// 0x138, size 12 (0xc)
	// angExtraLocalAngles metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	 // MNetworkBitCount
	__declspec(align(1)) bool bIsOnlySlotOfThisType;// 0x144, size 1 (0x1)
	// bIsOnlySlotOfThisType metadata
	 // MNetworkEnable
	__declspec(align(8)) uint64_t ulItemID;// 0x148, size 8 (0x8)
	// ulItemID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(8)) CEconItemView m_Item;// 0x150, size 144 (0x90)
	__declspec(align(4)) int32_t iSlot;// 0x1e0, size 4 (0x4)
char CShowcaseSlot_01E8[0x4];
}; // size: 488 (0x1e8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RampScalarSplineSimple : public CParticlePerFrameOperatorInstance
{
// C_OP_RampScalarSplineSimple additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_Rate;// 0x60, size 4 (0x4)
	// m_Rate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x64, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x68, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RampScalarSplineSimple_090[0x24];
	__declspec(align(4)) int32_t m_nField;// 0x90, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bEaseOut;// 0x94, size 1 (0x1)
	// m_bEaseOut metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RampScalarSplineSimple_0A0[0xB];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class BuilderModelBoneFlexDriverList_t
{
// BuilderModelBoneFlexDriverList_t additional information
// engine2.dll, project modellib
// Alignment: 4

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class BuilderModelBoneFlexDriver_t > m_drivers;// 0x0, size 16 (0x10)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class C_EconItemAttribute : public SchemaBase
{
// C_EconItemAttribute additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char C_EconItemAttribute_0A[0x6];
	__declspec(align(2)) uint16_t m_iAttributeDefinitionIndex;// 0xa, size 2 (0x2)
	// m_iAttributeDefinitionIndex metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flValue;// 0xc, size 4 (0x4)
	// m_flValue metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkAlias
}; // size: 16 (0x10)
#pragma pack(pop)

class C_CHintMessageQueue : public SchemaBase
{
// C_CHintMessageQueue additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) float m_tmMessageEnd;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, CHintMessage *> m_messages;// 0x8, size 16 (0x10)
	__declspec(align(4)) C_BasePlayer *m_pPlayer;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)

#pragma pack(push, 4)
class CTeamplayRules : public CMultiplayRules
{
// CTeamplayRules additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool m_DisableDeathMessages;// 0xac, size 1 (0x1)
	__declspec(align(1)) bool m_DisableDeathPenalty;// 0xad, size 1 (0x1)
	__declspec(align(1)) bool m_teamLimit;// 0xae, size 1 (0x1)
	__declspec(align(1)) char m_szTeamList[512];// 0xaf, size 512 (0x200)
	__declspec(align(1)) bool m_bSwitchTeams;// 0x2af, size 1 (0x1)
	__declspec(align(1)) bool m_bScrambleTeams;// 0x2b0, size 1 (0x1)
char CTeamplayRules_02B4[0x3];
}; // size: 692 (0x2b4)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceFrameBlockAnim_t
{
// AnimResourceFrameBlockAnim_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nStartFrame;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nEndFrame;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_segmentIndexArray;// 0x8, size 8 (0x8)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class CRenderSkeleton
{
// CRenderSkeleton additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class RenderSkeletonBone_t > m_bones;// 0x0, size 16 (0x10)
char CRenderSkeleton_020[0x10];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, int32_t > m_boneParents;// 0x20, size 16 (0x10)
	__declspec(align(4)) RenderSkeletonData_t::FlagEnum_t m_nFlags;// 0x30, size 4 (0x4)
	__declspec(align(4)) int32_t m_nBoneWeightCount;// 0x34, size 4 (0x4)
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 4)
class FeQuad_t
{
// FeQuad_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[4];// 0x0, size 8 (0x8)
	__declspec(align(4)) float flSlack;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> vShape[4];// 0xc, size 64 (0x40)
}; // size: 76 (0x4c)
#pragma pack(pop)

#pragma pack(push, 4)
class vehicle_gear_t : public SchemaBase
{
// vehicle_gear_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flMinSpeed;// 0x4, size 4 (0x4)
	__declspec(align(4)) float flMaxSpeed;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flSpeedApproachFactor;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_VelocityFromNormal : public CParticleInitializerOperatorInstance
{
// C_INIT_VelocityFromNormal additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_fSpeedMin;// 0x70, size 4 (0x4)
	// m_fSpeedMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fSpeedMax;// 0x74, size 4 (0x4)
	// m_fSpeedMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bIgnoreDt;// 0x78, size 1 (0x1)
	// m_bIgnoreDt metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_VelocityFromNormal_080[0x7];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointsToParticle : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointsToParticle additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nChildGroupID;// 0x60, size 4 (0x4)
	// m_nChildGroupID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstControlPoint;// 0x64, size 4 (0x4)
	// m_nFirstControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nNumControlPoints;// 0x68, size 4 (0x4)
	// m_nNumControlPoints metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstSourcePoint;// 0x6c, size 4 (0x4)
	// m_nFirstSourcePoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetOrientation;// 0x70, size 1 (0x1)
	// m_bSetOrientation metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointsToParticle_080[0xF];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class CSound
{
// CSound additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hOwner;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hTarget;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_iVolume;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flOcclusionScale;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_iType;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_iNextAudible;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flExpireTime;// 0x18, size 4 (0x4)
	__declspec(align(2)) int16_t m_iNext;// 0x1c, size 2 (0x2)
	__declspec(align(1)) bool m_bNoExpirationTime;// 0x1e, size 1 (0x1)
	__declspec(align(4)) int32_t m_ownerChannelIndex;// 0x20, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOrigin;// 0x24, size 12 (0xc)
	__declspec(align(1)) bool m_bHasOwner;// 0x30, size 1 (0x1)
char CSound_034[0x3];
}; // size: 52 (0x34)
#pragma pack(pop)

#pragma pack(push, 4)
class CSoundParameters
{
// CSoundParameters additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t channel;// 0x0, size 4 (0x4)
	__declspec(align(4)) float volume;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t pitch;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t pitchlow;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t pitchhigh;// 0x10, size 4 (0x4)
	__declspec(align(4)) soundlevel_t soundlevel;// 0x14, size 4 (0x4)
	__declspec(align(1)) bool play_to_owner_only;// 0x18, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nSpecialWaveFlags;// 0x19, size 1 (0x1)
	__declspec(align(4)) int32_t count;// 0x1c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> soundname;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t delay_msec;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_hGameSound;// 0x28, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pOperatorsKV;// 0x2c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRandomSeed;// 0x30, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *gameData;// 0x34, size 4 (0x4)
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 8)
class CSSDSEndFrameViewInfo
{
// CSSDSEndFrameViewInfo additional information
// scenesystem.dll, project scenesystem
// Alignment: 8

public:
	__declspec(align(8)) uint64_t m_nViewId;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_ViewName;// 0x8, size 4 (0x4)
char CSSDSEndFrameViewInfo_010[0x4];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_NormalLock : public CParticlePerFrameOperatorInstance
{
// C_OP_NormalLock additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_NormalLock_070[0xC];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class CSchemaFieldMetadataOverride : public SchemaFieldMetadataOverrideData_t
{
// CSchemaFieldMetadataOverride additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_SetRigidAttachment : public CParticleInitializerOperatorInstance
{
// C_INIT_SetRigidAttachment additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldInput;// 0x74, size 4 (0x4)
	// m_nFieldInput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x78, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bLocalSpace;// 0x7c, size 1 (0x1)
	// m_bLocalSpace metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_SetRigidAttachment_080[0x3];
}; // size: 128 (0x80)
#pragma pack(pop)

class IVision : public INextBotComponent
{
// IVision additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) CountdownTimer m_scanTimer;// 0x14, size 16 (0x10)
	__declspec(align(4)) float m_FOV;// 0x24, size 4 (0x4)
	__declspec(align(4)) float m_cosHalfFOV;// 0x28, size 4 (0x4)
char IVision_03C[0x10];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_primaryThreat;// 0x3c, size 4 (0x4)
	__declspec(align(4)) float m_lastVisionUpdateTimestamp;// 0x40, size 4 (0x4)
	__declspec(align(4)) IntervalTimer m_notVisibleTimer[32];// 0x44, size 256 (0x100)
}; // size: 324 (0x144)

#pragma pack(push, 16)
class C_OP_TurbulenceForce : public CParticleForceOperatorInstance
{
// C_OP_TurbulenceForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flNoiseCoordScale0;// 0x60, size 4 (0x4)
	// m_flNoiseCoordScale0 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseCoordScale1;// 0x64, size 4 (0x4)
	// m_flNoiseCoordScale1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseCoordScale2;// 0x68, size 4 (0x4)
	// m_flNoiseCoordScale2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseCoordScale3;// 0x6c, size 4 (0x4)
	// m_flNoiseCoordScale3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecNoiseAmount0;// 0x70, size 12 (0xc)
	// m_vecNoiseAmount0 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecNoiseAmount1;// 0x7c, size 12 (0xc)
	// m_vecNoiseAmount1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecNoiseAmount2;// 0x88, size 12 (0xc)
	// m_vecNoiseAmount2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecNoiseAmount3;// 0x94, size 12 (0xc)
	// m_vecNoiseAmount3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeVSound_t
{
// InfoForResourceTypeVSound_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeVSound_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class CLightInfoBase : public SchemaBase
{
// CLightInfoBase additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char CLightInfoBase_08[0x4];
	__declspec(align(4)) UnknownType <0x8, class Vector2D> m_origin2D;// 0x8, size 8 (0x8)
	__declspec(align(1)) UnknownType <0x4, class color32> m_Color[2];// 0x10, size 8 (0x8)
	__declspec(align(4)) float m_LightScale[2];// 0x18, size 8 (0x8)
	__declspec(align(1)) UnknownType <0x4, class color32> m_AmbientColor[2];// 0x20, size 8 (0x8)
	__declspec(align(4)) float m_AmbientScale[2];// 0x28, size 8 (0x8)
	__declspec(align(1)) UnknownType <0x4, class color32> m_ShadowColor[2];// 0x30, size 8 (0x8)
	__declspec(align(4)) float m_ShadowScale[2];// 0x38, size 8 (0x8)
	__declspec(align(4)) float m_ShadowGroundScale[2];// 0x40, size 8 (0x8)
	__declspec(align(1)) UnknownType <0x4, class color32> m_SpecularColor[2];// 0x48, size 8 (0x8)
	__declspec(align(4)) float m_flSpecularPower[2];// 0x50, size 8 (0x8)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_LightDirection[2];// 0x58, size 24 (0x18)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_AmbientDirection[2];// 0x70, size 24 (0x18)
	__declspec(align(1)) UnknownType <0x4, class color32> m_FogColor[2];// 0x88, size 8 (0x8)
	__declspec(align(4)) float m_FogStart[2];// 0x90, size 8 (0x8)
	__declspec(align(4)) float m_FogEnd[2];// 0x98, size 8 (0x8)
	__declspec(align(4)) float m_HeightFogValue[2];// 0xa0, size 8 (0x8)
	__declspec(align(1)) UnknownType <0x4, class color32> m_HeightFogColor[2];// 0xa8, size 8 (0x8)
	__declspec(align(4)) float m_FoWDarkness[2];// 0xb0, size 8 (0x8)
	__declspec(align(4)) float m_FoWColorR[2];// 0xb8, size 8 (0x8)
	__declspec(align(4)) float m_FoWColorG[2];// 0xc0, size 8 (0x8)
	__declspec(align(4)) float m_FoWColorB[2];// 0xc8, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszSkyboxName;// 0xd0, size 4 (0x4)
	// m_iszSkyboxName metadata
	 // MKeyfieldname
	__declspec(align(1)) UnknownType <0x4, class color32> m_SkyboxTint[2];// 0xd4, size 8 (0x8)
	__declspec(align(4)) float m_fInnerRadius;// 0xdc, size 4 (0x4)
	// m_fInnerRadius metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_fOuterRadius;// 0xe0, size 4 (0x4)
	// m_fOuterRadius metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flLightning_specular_pow_scale_min;// 0xe4, size 4 (0x4)
	__declspec(align(4)) float m_flLightning_specular_pow_scale_max;// 0xe8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nWeatherType;// 0xec, size 4 (0x4)
	__declspec(align(4)) float m_flLightning_period_min;// 0xf0, size 4 (0x4)
	__declspec(align(4)) float m_flLightning_period_max;// 0xf4, size 4 (0x4)
	__declspec(align(4)) float m_flLightning_duration_min;// 0xf8, size 4 (0x4)
	__declspec(align(4)) float m_flLightning_duration_max;// 0xfc, size 4 (0x4)
	__declspec(align(4)) float m_flLightning_fluctuation_min;// 0x100, size 4 (0x4)
	__declspec(align(4)) float m_flLightning_fluctuation_max;// 0x104, size 4 (0x4)
	__declspec(align(1)) char m_pszLightningSound[260];// 0x108, size 260 (0x104)
	__declspec(align(4)) float m_flNextLightningStartTime;// 0x20c, size 4 (0x4)
	__declspec(align(4)) float m_flNextLightningEndTime;// 0x210, size 4 (0x4)
	__declspec(align(4)) float m_flLightningFluctuationTimeStart;// 0x214, size 4 (0x4)
	__declspec(align(4)) float m_flLightningFluctuationTimeEnd;// 0x218, size 4 (0x4)
	__declspec(align(4)) float m_flLightningNumFluctuations;// 0x21c, size 4 (0x4)
	__declspec(align(4)) float m_flNextLightningSoundTime;// 0x220, size 4 (0x4)
	__declspec(align(1)) bool m_bPlayLightingSound;// 0x224, size 1 (0x1)
	__declspec(align(4)) float m_flLightningEventMagnitude;// 0x228, size 4 (0x4)
	__declspec(align(4)) float m_flLightningScale;// 0x22c, size 4 (0x4)
	__declspec(align(4)) float m_flLightningFluctuation;// 0x230, size 4 (0x4)
}; // size: 564 (0x234)
#pragma pack(pop)

#pragma pack(push, 4)
class HeroPickRecord_t
{
// HeroPickRecord_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) HeroPickType eType;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t nHeroID;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t nTeam;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

class IParticleSystemDefinition : public SchemaBase
{
// IParticleSystemDefinition additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 16)
class C_OP_RenderPoints : public CParticleRenderOperatorInstance
{
// C_OP_RenderPoints additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_hMaterial;// 0xa0, size 8 (0x8)
	// m_hMaterial metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
char C_OP_RenderPoints_0B0[0x8];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientFrameSimulate_t
{
// EventClientFrameSimulate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(4)) float m_flRealTime;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flFrameTime;// 0x20, size 4 (0x4)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 4)
class RnHull_t
{
// RnHull_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCentroid;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_flMaxAngularRadius;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0xc, class Vector> > m_Vertices;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnPlane_t > m_Planes;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnHalfEdge_t > m_Edges;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnFace_t > m_Faces;// 0x28, size 8 (0x8)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOrthographicAreas;// 0x30, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x30, class matrix3x4_t> m_MassProperties;// 0x3c, size 48 (0x30)
	__declspec(align(4)) float m_flVolume;// 0x6c, size 4 (0x4)
	__declspec(align(4)) float m_flMaxMotionRadius;// 0x70, size 4 (0x4)
	__declspec(align(4)) float m_flMinMotionThickness;// 0x74, size 4 (0x4)
	__declspec(align(4)) AABB_t m_Bounds;// 0x78, size 24 (0x18)
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 8)
class C_CommandContext
{
// C_CommandContext additional information
// client.dll, project client
// Alignment: 8

public:
	__declspec(align(1)) bool needsprocessing;// 0x0, size 1 (0x1)
char C_CommandContext_0E8[0xE4];
	__declspec(align(4)) int32_t command_number;// 0xe8, size 4 (0x4)
char C_CommandContext_0F0[0x4];
}; // size: 240 (0xf0)
#pragma pack(pop)

#pragma pack(push, 4)
class CModifierParams
{
// CModifierParams additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CDOTABaseAbility > ability;// 0x0, size 4 (0x4)
	__declspec(align(4)) float fDamage;// 0x4, size 4 (0x4)
	__declspec(align(4)) float fOriginalDamage;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t nActivity;// 0xc, size 4 (0x4)
	__declspec(align(1)) bool bTooltip;// 0x10, size 1 (0x1)
	__declspec(align(4)) int32_t nTooltipParam;// 0x14, size 4 (0x4)
	__declspec(align(1)) bool bIgnoreInvis;// 0x18, size 1 (0x1)
	__declspec(align(1)) bool bNoCooldown;// 0x19, size 1 (0x1)
	__declspec(align(1)) bool bReincarnate;// 0x1a, size 1 (0x1)
	__declspec(align(1)) bool bDoNotConsume;// 0x1b, size 1 (0x1)
	__declspec(align(4)) float fDistance;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float fGain;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_nIssuerPlayerIndex;// 0x24, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > inflictor;// 0x28, size 4 (0x4)
	__declspec(align(4)) int32_t nDamageType;// 0x2c, size 4 (0x4)
	__declspec(align(4)) int32_t nDamageflags;// 0x30, size 4 (0x4)
	__declspec(align(4)) int32_t nDamageCategory;// 0x34, size 4 (0x4)
	__declspec(align(4)) int32_t iFailType;// 0x38, size 4 (0x4)
	__declspec(align(2)) int16_t iRecord;// 0x3c, size 2 (0x2)
	__declspec(align(4)) CDOTA_Orb *pOrb;// 0x40, size 4 (0x4)
	__declspec(align(4)) CDOTA_Orb *pOrb2;// 0x44, size 4 (0x4)
	__declspec(align(4)) int32_t nCost;// 0x48, size 4 (0x4)
	__declspec(align(4)) int32_t nOrdertype;// 0x4c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> vOldLoc;// 0x50, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> vNewLoc;// 0x5c, size 12 (0xc)
	__declspec(align(1)) bool bCraniumBasherTested;// 0x68, size 1 (0x1)
	__declspec(align(1)) bool bHeartRegenApplied;// 0x69, size 1 (0x1)
	__declspec(align(1)) bool bDiffusalApplied;// 0x6a, size 1 (0x1)
	__declspec(align(1)) bool bSuppressDamage;// 0x6b, size 1 (0x1)
	__declspec(align(1)) bool bRangedAttack;// 0x6c, size 1 (0x1)
	__declspec(align(1)) bool bProcessProcs;// 0x6d, size 1 (0x1)
	__declspec(align(4)) int32_t nPlayerids_stick;// 0x70, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > hattacker;// 0x74, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > htarget;// 0x78, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > hunit;// 0x7c, size 4 (0x4)
public:
	static CModifierParams Get_s_Default() {return *(CModifierParams *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CModifierParams")->m_staticMembers.data[0].m_pInstance; }
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_MoveBetweenPoints : public CParticleInitializerOperatorInstance
{
// C_INIT_MoveBetweenPoints additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flSpeedMin;// 0x70, size 4 (0x4)
	// m_flSpeedMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSpeedMax;// 0x74, size 4 (0x4)
	// m_flSpeedMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndSpread;// 0x78, size 4 (0x4)
	// m_flEndSpread metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartOffset;// 0x7c, size 4 (0x4)
	// m_flStartOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndOffset;// 0x80, size 4 (0x4)
	// m_flEndOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nEndControlPointNumber;// 0x84, size 4 (0x4)
	// m_nEndControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bTrailBias;// 0x88, size 1 (0x1)
	// m_bTrailBias metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_MoveBetweenPoints_090[0x7];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceAnimDesc_t
{
// AnimResourceAnimDesc_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(1)) AnimResourceAnimDesc_t_Flag_t m_flags;// 0x4, size 5 (0x5)
	__declspec(align(4)) float fps;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CResourcePointer, class AnimResourceEncodedFrames_t > m_pData;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceMovement_t > m_movementArray;// 0x14, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceAnimEvent_t > m_eventArray;// 0x1c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceActivity_t > m_activityArray;// 0x24, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceLocalHierarchy_t > m_hierarchyArray;// 0x2c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceIKRule_t > m_IKRuleArray;// 0x34, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceIKRuleStallFrame_t > m_IKRuleZeroFrameArray;// 0x3c, size 8 (0x8)
	__declspec(align(4)) float framestalltime;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRootMin;// 0x48, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRootMax;// 0x54, size 12 (0xc)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0xc, class Vector> > m_vecBoneWorldMin;// 0x60, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0xc, class Vector> > m_vecBoneWorldMax;// 0x68, size 8 (0x8)
	__declspec(align(4)) AnimResourceSequenceParams_t m_sequenceParams;// 0x70, size 8 (0x8)
}; // size: 120 (0x78)
#pragma pack(pop)

#pragma pack(push, 4)
class ConstraintTarget_t
{
// ConstraintTarget_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nBoneHash;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flWeight;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOffset;// 0x8, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_qOffset;// 0x14, size 16 (0x10)
	__declspec(align(1)) bool m_bIsAttachment;// 0x24, size 1 (0x1)
char ConstraintTarget_t_028[0x3];
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 4)
class CSimpleSimTimer
{
// CSimpleSimTimer additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_next;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 8)
class VPhysicsCollisionAttribute_t : public SchemaBase
{
// VPhysicsCollisionAttribute_t additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) uint64_t m_nInteractsAs;// 0x8, size 8 (0x8)
	// m_nInteractsAs metadata
	 // MNetworkEnable
	__declspec(align(8)) uint64_t m_nInteractsWith;// 0x10, size 8 (0x8)
	// m_nInteractsWith metadata
	 // MNetworkEnable
	__declspec(align(8)) uint64_t m_nInteractsExclude;// 0x18, size 8 (0x8)
	// m_nInteractsExclude metadata
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_nEntityId;// 0x20, size 4 (0x4)
	// m_nEntityId metadata
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_nHierarchyId;// 0x24, size 2 (0x2)
	// m_nHierarchyId metadata
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_nCollisionGroup;// 0x26, size 1 (0x1)
	// m_nCollisionGroup metadata
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_nCollisionFunctionMask;// 0x27, size 1 (0x1)
	// m_nCollisionFunctionMask metadata
	 // MNetworkEnable
}; // size: 40 (0x28)
#pragma pack(pop)

class PlayerBody : public IBody
{
// PlayerBody additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) CBasePlayer *m_pPlayer;// 0x14, size 4 (0x4)
	__declspec(align(4)) IBody::PostureType m_posture;// 0x18, size 4 (0x4)
	__declspec(align(4)) IBody::ArousalType m_arousal;// 0x1c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vEyePos;// 0x20, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vViewVector;// 0x2c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vHullMins;// 0x38, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vHullMaxs;// 0x44, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLookAtPos;// 0x50, size 12 (0xc)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hLookAtSubject;// 0x5c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_lookAtVelocity;// 0x60, size 12 (0xc)
	__declspec(align(4)) CountdownTimer m_lookAtTrackingTimer;// 0x6c, size 16 (0x10)
	__declspec(align(4)) CHeadLookParams::HeadLookPriority_t m_LookAtPriority;// 0x7c, size 4 (0x4)
	__declspec(align(4)) CountdownTimer m_lookAtExpireTimer;// 0x80, size 16 (0x10)
	__declspec(align(4)) IntervalTimer m_lookAtDurationTimer;// 0x90, size 8 (0x8)
	__declspec(align(4)) INextBotReply *m_pLookAtReplyWhenAimed;// 0x98, size 4 (0x4)
	__declspec(align(1)) bool m_bIsSightedIn;// 0x9c, size 1 (0x1)
	__declspec(align(1)) bool m_bHasBeenSightedIn;// 0x9d, size 1 (0x1)
	__declspec(align(4)) float m_flHeadEaseInTime;// 0xa0, size 4 (0x4)
	__declspec(align(4)) IntervalTimer m_headSteadyTimer;// 0xa4, size 8 (0x8)
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_qPriorAngles;// 0xac, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_qDesiredAngles;// 0xb8, size 12 (0xc)
	__declspec(align(4)) CountdownTimer m_anchorRepositionTimer;// 0xc4, size 16 (0x10)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_anchorForward;// 0xd4, size 12 (0xc)
}; // size: 224 (0xe0)

#pragma pack(push, 4)
class CSequenceTransitioner2 : public SchemaBase
{
// CSequenceTransitioner2 additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) CNetworkedSequenceOperation m_currentOp;// 0x4, size 36 (0x24)
	__declspec(align(4)) float m_flCurrentPlaybackRate;// 0x28, size 4 (0x4)
	__declspec(align(4)) float m_flCurrentAnimTime;// 0x2c, size 4 (0x4)
	__declspec(align(4)) TransitioningLayer_t m_transitioningLayers[4];// 0x30, size 256 (0x100)
	__declspec(align(4)) CBaseAnimatingController *m_pOwner;// 0x130, size 4 (0x4)
}; // size: 308 (0x134)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase
{
// C_OP_RemapDistanceToLineSegmentToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x80, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMinOutputValue;// 0x84, size 12 (0xc)
	// m_vMinOutputValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxOutputValue;// 0x90, size 12 (0xc)
	// m_vMaxOutputValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapDistanceToLineSegmentToVector_0A0[0x4];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class CCompressorGroup
{
// CCompressorGroup additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nTotalElementCount;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, char *> m_szChannelClass;// 0x4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, char *> m_szVariableName;// 0x14, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, fieldtype_t > m_nType;// 0x24, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, int32_t > m_nFlags;// 0x34, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x4, class CUtlString> > m_szGrouping;// 0x44, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, int32_t > m_nCompressorIndex;// 0x54, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x10, CUtlVector, char *> > m_szElementNames;// 0x64, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x10, CUtlVector, int32_t > > m_nElementUniqueID;// 0x74, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, uint32_t > m_nElementMask;// 0x84, size 16 (0x10)
char CCompressorGroup_0A4[0x10];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x20, CCompressor, UnknownType <0xc, class Vector> > *> m_vectorCompressor;// 0xa4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x20, CCompressor, UnknownType <0x10, class Quaternion> > *> m_quaternionCompressor;// 0xb4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x20, CCompressor, int32_t > *> m_intCompressor;// 0xc4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x20, CCompressor, bool > *> m_boolCompressor;// 0xd4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x20, CCompressor, UnknownType <0x4, class Color> > *> m_colorCompressor;// 0xe4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x20, CCompressor, UnknownType <0x8, class Vector2D> > *> m_vector2DCompressor;// 0xf4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x20, CCompressor, UnknownType <0x10, class Vector4D> > *> m_vector4DCompressor;// 0x104, size 16 (0x10)
}; // size: 276 (0x114)
#pragma pack(pop)

#pragma pack(push, 8)
class RenderBufferBinding_t
{
// RenderBufferBinding_t additional information
// engine2.dll, project modellib
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) uint64_t m_hBuffer;// 0x0, size 8 (0x8)
	__declspec(align(4)) uint32_t m_nBindOffsetBytes;// 0x8, size 4 (0x4)
char RenderBufferBinding_t_010[0x4];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCAnimationResource
{
// InfoForResourceTypeCAnimationResource additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCAnimationResource_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class CBasePortraitData : public SchemaBase
{
// CBasePortraitData additional information
// client.dll, project client
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CBasePortraitData_0314[0x310];
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeCModel > m_iModelIndex;// 0x314, size 4 (0x4)
char CBasePortraitData_07DC[0x4C4];
	__declspec(align(1)) bool m_bHasSetupView;// 0x7dc, size 1 (0x1)
char CBasePortraitData_07EC[0xF];
	__declspec(align(4)) float m_flRotation;// 0x7ec, size 4 (0x4)
}; // size: 2032 (0x7f0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_AlphaDecay : public CParticlePerFrameOperatorInstance
{
// C_OP_AlphaDecay additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMinAlpha;// 0x60, size 4 (0x4)
	// m_flMinAlpha metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_AlphaDecay_070[0xC];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ExternalWindForce : public CParticleForceOperatorInstance
{
// C_OP_ExternalWindForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x60, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecScale;// 0x64, size 12 (0xc)
	// m_vecScale metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class CCopyRecipientFilter : public IRecipientFilter
{
// CCopyRecipientFilter additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_Flags;// 0x4, size 4 (0x4)
	__declspec(align(1)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x4, class CEntityIndex> > m_Recipients;// 0x8, size 16 (0x10)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class CTestNugget_2 : public CBaseNugget
{
// CTestNugget_2 additional information
// vscript.dll, project vscript
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) CTestNugget_1 m_Nugget1;// 0x10, size 68 (0x44)
	__declspec(align(4)) CTestNugget_1 m_Nugget2;// 0x54, size 68 (0x44)
}; // size: 152 (0x98)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_Orb : public SchemaBase
{
// CDOTA_Orb additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CDOTA_Orb_08[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hCaster;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAbility;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class sSharedCooldownInfo
{
// sSharedCooldownInfo additional information
// server.dll, project server
// Alignment: 4

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlString> cooldownName;// 0x0, size 4 (0x4)
	__declspec(align(4)) float cooldownLength;// 0x4, size 4 (0x4)
	__declspec(align(4)) float cooldownTime;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_InheritVelocity : public CParticleInitializerOperatorInstance
{
// C_INIT_InheritVelocity additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flVelocityScale;// 0x74, size 4 (0x4)
	// m_flVelocityScale metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_InheritVelocity_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class BundleData_t
{
// BundleData_t additional information
// meshsystem.dll, project meshsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flULeftSrc;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flVTopSrc;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_offsets;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, float > m_ranges;// 0x10, size 8 (0x8)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ClampScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_ClampScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flOutputMin;// 0x64, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x68, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_ClampScalar_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_TwistAroundAxis : public CParticleForceOperatorInstance
{
// C_OP_TwistAroundAxis additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_fForceAmount;// 0x60, size 4 (0x4)
	// m_fForceAmount metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_TwistAxis;// 0x64, size 12 (0xc)
	// m_TwistAxis metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) bool m_bLocalSpace;// 0x70, size 1 (0x1)
	// m_bLocalSpace metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x74, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_TwistAroundAxis_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class VSoundEvent_t
{
// VSoundEvent_t additional information
// soundsystem.dll, project soundsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_SoundName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_GameData;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_OperatorsKV;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 1)
class RnHalfEdge_t
{
// RnHalfEdge_t additional information
// engine2.dll, project modellib
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) uint8_t m_nNext;// 0x0, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nTwin;// 0x1, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nOrigin;// 0x2, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nFace;// 0x3, size 1 (0x1)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class CPlayerLocalData : public SchemaBase
{
// CPlayerLocalData additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex;// 0x4, size 2 (0x2)
	// m_NetworkVar_PathIndex metadata
	 // MNetworkDisable
char CPlayerLocalData_0C[0x6];
	__declspec(align(1)) uint8_t m_chAreaBits[32];// 0xc, size 32 (0x20)
	// m_chAreaBits metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_chAreaPortalBits[24];// 0x2c, size 24 (0x18)
	// m_chAreaPortalBits metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nStepside;// 0x44, size 4 (0x4)
	__declspec(align(4)) int32_t m_nOldButtons;// 0x48, size 4 (0x4)
	__declspec(align(4)) uint32_t m_iHideHUD;// 0x4c, size 4 (0x4)
	// m_iHideHUD metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float m_flFOVRate;// 0x50, size 4 (0x4)
	// m_flFOVRate metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOverViewpoint;// 0x54, size 12 (0xc)
	__declspec(align(1)) bool m_bDucked;// 0x60, size 1 (0x1)
	// m_bDucked metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bDucking;// 0x61, size 1 (0x1)
	// m_bDucking metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bInDuckJump;// 0x62, size 1 (0x1)
	// m_bInDuckJump metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_nDuckTimeMsecs;// 0x64, size 4 (0x4)
	// m_nDuckTimeMsecs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	__declspec(align(4)) uint32_t m_nDuckJumpTimeMsecs;// 0x68, size 4 (0x4)
	// m_nDuckJumpTimeMsecs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) uint32_t m_nJumpTimeMsecs;// 0x6c, size 4 (0x4)
	// m_nJumpTimeMsecs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float m_flFallVelocity;// 0x70, size 4 (0x4)
	// m_flFallVelocity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
char CPlayerLocalData_078[0x4];
	__declspec(align(1)) bool m_bDrawViewmodel;// 0x78, size 1 (0x1)
	// m_bDrawViewmodel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bWearingSuit;// 0x79, size 1 (0x1)
	// m_bWearingSuit metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bPoisoned;// 0x7a, size 1 (0x1)
	// m_bPoisoned metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flStepSize;// 0x7c, size 4 (0x4)
	// m_flStepSize metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkEncodeFlags
	 // MNetworkMinValue
	 // MNetworkMaxValue
	__declspec(align(1)) bool m_bAllowAutoMovement;// 0x80, size 1 (0x1)
	// m_bAllowAutoMovement metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSlowMovement;// 0x81, size 1 (0x1)
	// m_bSlowMovement metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAutoAimTarget;// 0x82, size 1 (0x1)
	// m_bAutoAimTarget metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) sky3dparams_t m_skybox3d;// 0x84, size 116 (0x74)
	// m_skybox3d metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) audioparams_t m_audio;// 0xf8, size 112 (0x70)
	// m_audio metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) fogparams_t m_fog;// 0x168, size 88 (0x58)
}; // size: 448 (0x1c0)
#pragma pack(pop)

#pragma pack(push, 4)
class CSceneEventInfo
{
// CSceneEventInfo additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char CSceneEventInfo_010[0x10];
	__declspec(align(1)) bool m_bStarted;// 0x10, size 1 (0x1)
	__declspec(align(4)) int32_t m_iLayer;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t m_iPriority;// 0x18, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class HSequence> m_hSequence;// 0x1c, size 4 (0x4)
	__declspec(align(1)) bool m_bIsGesture;// 0x20, size 1 (0x1)
	__declspec(align(4)) float m_flWeight;// 0x24, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hTarget;// 0x28, size 4 (0x4)
	__declspec(align(1)) bool m_bIsMoving;// 0x2c, size 1 (0x1)
	__declspec(align(1)) bool m_bHasArrived;// 0x2d, size 1 (0x1)
	__declspec(align(4)) float m_flInitialYaw;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flTargetYaw;// 0x34, size 4 (0x4)
	__declspec(align(4)) float m_flFacingYaw;// 0x38, size 4 (0x4)
	__declspec(align(4)) int32_t m_nType;// 0x3c, size 4 (0x4)
	__declspec(align(4)) float m_flNext;// 0x40, size 4 (0x4)
	__declspec(align(1)) bool m_bClientSide;// 0x44, size 1 (0x1)
	__declspec(align(1)) bool m_bShouldRemove;// 0x45, size 1 (0x1)
char CSceneEventInfo_04C[0x6];
}; // size: 76 (0x4c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ClampVector : public CParticlePerFrameOperatorInstance
{
// C_OP_ClampVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMin;// 0x64, size 12 (0xc)
	// m_vecOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMax;// 0x70, size 12 (0xc)
	// m_vecOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
char C_OP_ClampVector_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 1)
class EventClientProcessNetworking_t
{
// EventClientProcessNetworking_t additional information
// engine2.dll, project engine2
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char EventClientProcessNetworking_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class PlayerSeatAssignment_t
{
// PlayerSeatAssignment_t additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t unAccountID;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t unSeat;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t unReversedSeat;// 0x8, size 4 (0x4)
	__declspec(align(4)) uint32_t unTeamID;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCPanoramaLayout
{
// InfoForResourceTypeCPanoramaLayout additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCPanoramaLayout_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LockToSavedSequentialPath : public CParticlePerFrameOperatorInstance
{
// C_OP_LockToSavedSequentialPath additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char C_OP_LockToSavedSequentialPath_064[0x4];
	__declspec(align(4)) float m_flFadeStart;// 0x64, size 4 (0x4)
	// m_flFadeStart metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFadeEnd;// 0x68, size 4 (0x4)
	// m_flFadeEnd metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bCPPairs;// 0x6c, size 1 (0x1)
	// m_bCPPairs metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_LockToSavedSequentialPath_070[0x3];
	__declspec(align(16)) CPathParameters m_PathParams;// 0x70, size 32 (0x20)
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapInitialVisibilityScalar : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapInitialVisibilityScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char C_INIT_RemapInitialVisibilityScalar_074[0x4];
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x78, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x7c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x80, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x84, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapInitialVisibilityScalar_090[0x8];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCAnimationGroupResource
{
// InfoForResourceTypeCAnimationGroupResource additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCAnimationGroupResource_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceRemapRule_t
{
// ResourceRemapRule_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_originalResourceName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_replacementResourceName;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_condition;// 0x8, size 4 (0x4)
	__declspec(align(1)) bool m_bClearAllPreviousRules;// 0xc, size 1 (0x1)
char ResourceRemapRule_t_010[0x3];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class TimedKillEvent_t
{
// TimedKillEvent_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nKillTime;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flKillValue;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPlayerID;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class CPhysicsShake : public SchemaBase
{
// CPhysicsShake additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_force;// 0x4, size 12 (0xc)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderLights : public C_OP_RenderPoints
{
// C_OP_RenderLights additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flAnimationRate;// 0xb0, size 4 (0x4)
	// m_flAnimationRate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bFitCycleToLifetime;// 0xb4, size 1 (0x1)
	// m_bFitCycleToLifetime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAnimateInFPS;// 0xb5, size 1 (0x1)
	// m_bAnimateInFPS metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinSize;// 0xb8, size 4 (0x4)
	// m_flMinSize metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxSize;// 0xbc, size 4 (0x4)
	// m_flMaxSize metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartFadeSize;// 0xc0, size 4 (0x4)
	// m_flStartFadeSize metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndFadeSize;// 0xc4, size 4 (0x4)
	// m_flEndFadeSize metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RenderLights_0D0[0x8];
}; // size: 208 (0xd0)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientProcessGameInput_t
{
// EventClientProcessGameInput_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(4)) float m_flRealTime;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flFrameTime;// 0x20, size 4 (0x4)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 4)
class VsInputSignatureElement_t
{
// VsInputSignatureElement_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) char m_pName[64];// 0x0, size 64 (0x40)
	__declspec(align(1)) char m_pSemantic[64];// 0x40, size 64 (0x40)
	__declspec(align(1)) char m_pD3DSemanticName[64];// 0x80, size 64 (0x40)
	__declspec(align(4)) int32_t m_nD3DSemanticIndex;// 0xc0, size 4 (0x4)
}; // size: 196 (0xc4)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_Modifier_Lua_Motion_Both : public CDOTA_Modifier_Lua, public CVerticalMotionController, public CHorizontalMotionController
{
// CDOTA_Modifier_Lua_Motion_Both additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 792 (0x318)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_EnableChildrenFromParentParticleCount : public CParticlePerFrameOperatorInstance
{
// C_OP_EnableChildrenFromParentParticleCount additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nChildGroupID;// 0x60, size 4 (0x4)
	// m_nChildGroupID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstChild;// 0x64, size 4 (0x4)
	// m_nFirstChild metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nNumChildrenToEnable;// 0x68, size 4 (0x4)
	// m_nNumChildrenToEnable metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_EnableChildrenFromParentParticleCount_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
// C_INIT_RandomRotationSpeed additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class VertexPositionColor_t
{
// VertexPositionColor_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vPosition;// 0x0, size 12 (0xc)
char VertexPositionColor_t_010[0x4];
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 8)
class SceneObject_t
{
// SceneObject_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nObjectID;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vTransform[4];// 0x4, size 64 (0x40)
	__declspec(align(4)) float m_flFadeStartDistance;// 0x44, size 4 (0x4)
	__declspec(align(4)) float m_flFadeEndDistance;// 0x48, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vTintColor;// 0x4c, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_skin;// 0x5c, size 4 (0x4)
	__declspec(align(4)) ObjectTypeFlags_t m_nObjectTypeFlags;// 0x60, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCubeMapOrigin;// 0x64, size 12 (0xc)
	__declspec(align(4)) int32_t m_nOverlayRenderOrder;// 0x70, size 4 (0x4)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCModel > > m_renderableModel;// 0x78, size 8 (0x8)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCRenderMesh > > m_renderable;// 0x80, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > > m_externalTextures;// 0x88, size 8 (0x8)
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 8)
class CSSDSMsg_ViewTarget
{
// CSSDSMsg_ViewTarget additional information
// scenesystem.dll, project scenesystem
// Alignment: 8

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_Name;// 0x0, size 4 (0x4)
	__declspec(align(8)) uint64_t m_TextureId;// 0x8, size 8 (0x8)
	__declspec(align(4)) int32_t m_nWidth;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nHeight;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRequestedWidth;// 0x18, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRequestedHeight;// 0x1c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nNumMipLevels;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_nDepth;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_nFormat;// 0x28, size 4 (0x4)
char CSSDSMsg_ViewTarget_030[0x4];
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateWithinHexahedron : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateWithinHexahedron additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) ControlPointReference_t m_nControlPoint0;// 0x70, size 84 (0x54)
	// m_nControlPoint0 metadata
	 // MAttributeName
	__declspec(align(4)) ControlPointReference_t m_nControlPoint1;// 0xc4, size 84 (0x54)
	// m_nControlPoint1 metadata
	 // MAttributeName
	__declspec(align(4)) ControlPointReference_t m_nControlPoint2;// 0x118, size 84 (0x54)
	// m_nControlPoint2 metadata
	 // MAttributeName
	__declspec(align(4)) ControlPointReference_t m_nControlPoint3;// 0x16c, size 84 (0x54)
	// m_nControlPoint3 metadata
	 // MAttributeName
	__declspec(align(4)) ControlPointReference_t m_nControlPoint4;// 0x1c0, size 84 (0x54)
	// m_nControlPoint4 metadata
	 // MAttributeName
	__declspec(align(4)) ControlPointReference_t m_nControlPoint5;// 0x214, size 84 (0x54)
	// m_nControlPoint5 metadata
	 // MAttributeName
	__declspec(align(4)) ControlPointReference_t m_nControlPoint6;// 0x268, size 84 (0x54)
	// m_nControlPoint6 metadata
	 // MAttributeName
	__declspec(align(4)) ControlPointReference_t m_nControlPoint7;// 0x2bc, size 84 (0x54)
	// m_nControlPoint7 metadata
	 // MAttributeName
}; // size: 784 (0x310)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetCPOrientationToPointAtCP : public CParticlePerFrameOperatorInstance
{
// C_OP_SetCPOrientationToPointAtCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nInputCP;// 0x60, size 4 (0x4)
	// m_nInputCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutputCP;// 0x64, size 4 (0x4)
	// m_nOutputCP metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetCPOrientationToPointAtCP_070[0x8];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_AttractToControlPoint : public CParticleForceOperatorInstance
{
// C_OP_AttractToControlPoint additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecComponentScale;// 0x60, size 12 (0xc)
	// m_vecComponentScale metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_fForceAmount;// 0x6c, size 4 (0x4)
	// m_fForceAmount metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fFalloffPower;// 0x70, size 4 (0x4)
	// m_fFalloffPower metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x74, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCP;// 0x78, size 4 (0x4)
	// m_nScaleCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCPField;// 0x7c, size 4 (0x4)
	// m_nScaleCPField metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleLocal;// 0x80, size 1 (0x1)
	// m_bScaleLocal metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_AttractToControlPoint_090[0xF];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapInitialCPDirectionToRotation : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapInitialCPDirectionToRotation additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x70, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nAxis;// 0x78, size 4 (0x4)
	// m_nAxis metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flScale;// 0x7c, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffsetRot;// 0x80, size 4 (0x4)
	// m_flOffsetRot metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapInitialCPDirectionToRotation_090[0xC];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class HitBox_t
{
// HitBox_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sSurfaceProperty;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGroupId;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sBoneName;// 0xc, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nBoneNameHash;// 0x10, size 4 (0x4)
	__declspec(align(1)) uint8_t m_cRenderColor[4];// 0x14, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nHitBoxIndex;// 0x18, size 2 (0x2)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMinBounds;// 0x1c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxBounds;// 0x28, size 12 (0xc)
	__declspec(align(1)) bool m_bVisible;// 0x34, size 1 (0x1)
char HitBox_t_038[0x3];
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 8)
class VirtualVolumeTexData_t
{
// VirtualVolumeTexData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vBoundsMin;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vBoundsMax;// 0xc, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vPlaneX;// 0x18, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vPlaneY;// 0x28, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vPlaneZ;// 0x38, size 16 (0x10)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vPlaneEndDistancesXYZ;// 0x48, size 12 (0xc)
	__declspec(align(4)) int32_t m_nVirtualResX;// 0x54, size 4 (0x4)
	__declspec(align(4)) int32_t m_nVirtualResY;// 0x58, size 4 (0x4)
	__declspec(align(4)) int32_t m_nVirtualResZ;// 0x5c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_channelPageResX;// 0x60, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_channelPageResY;// 0x68, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_channelPageResZ;// 0x70, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_imageFormats;// 0x78, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int64_t > m_pageOffsets;// 0x80, size 8 (0x8)
	__declspec(align(8)) int64_t m_nPageDataTotalSize;// 0x88, size 8 (0x8)
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_EndCapDecay : public CParticlePerFrameOperatorInstance
{
// C_OP_EndCapDecay additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 4)
class RnSphereDesc_t : public RnShapeDesc_t
{
// RnSphereDesc_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) RnSphere_t m_Sphere;// 0x8, size 16 (0x10)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 8)
class CSSDSMsg_PreLayer : public CSSDSMsg_LayerBase
{
// CSSDSMsg_PreLayer additional information
// scenesystem.dll, project scenesystem
// Alignment: 8

public:
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapCPtoScalar : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapCPtoScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCPInput;// 0x70, size 4 (0x4)
	// m_nCPInput metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nField;// 0x78, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x7c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x80, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x84, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x88, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x8c, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x90, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x94, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapCPtoScalar_0A0[0xB];
}; // size: 160 (0xa0)
#pragma pack(pop)

class IServerVehicle : public IVehicle
{
// IServerVehicle additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class RnSoftbodyParticle_t
{
// RnSoftbodyParticle_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flMassInv;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class CPassengerSeatTransition
{
// CPassengerSeatTransition additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_strAnimationName;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPriority;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class CEffectScriptElement
{
// CEffectScriptElement additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) char m_szEffectName[128];// 0x0, size 128 (0x80)
	__declspec(align(1)) bool m_bTrailActive;// 0x80, size 1 (0x1)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CSprite > m_pSprite;// 0x84, size 4 (0x4)
	__declspec(align(4)) int32_t m_iType;// 0x88, size 4 (0x4)
	__declspec(align(4)) int32_t m_iRenderType;// 0x8c, size 4 (0x4)
	__declspec(align(4)) int32_t m_iR;// 0x90, size 4 (0x4)
	__declspec(align(4)) int32_t m_iG;// 0x94, size 4 (0x4)
	__declspec(align(4)) int32_t m_iB;// 0x98, size 4 (0x4)
	__declspec(align(4)) int32_t m_iA;// 0x9c, size 4 (0x4)
	__declspec(align(1)) char m_szAttachment[128];// 0xa0, size 128 (0x80)
	__declspec(align(1)) char m_szMaterial[128];// 0x120, size 128 (0x80)
	__declspec(align(4)) float m_flScale;// 0x1a0, size 4 (0x4)
	__declspec(align(4)) float m_flFadeTime;// 0x1a4, size 4 (0x4)
	__declspec(align(4)) float m_flTextureRes;// 0x1a8, size 4 (0x4)
	__declspec(align(1)) bool m_bStopFollowOnKill;// 0x1ac, size 1 (0x1)
	__declspec(align(1)) bool m_bActive;// 0x1ad, size 1 (0x1)
char CEffectScriptElement_01B0[0x2];
}; // size: 432 (0x1b0)
#pragma pack(pop)

#pragma pack(push, 4)
class EventFrameBoundary_t
{
// EventFrameBoundary_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flFrameTime;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCRenderMesh
{
// InfoForResourceTypeCRenderMesh additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCRenderMesh_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class vehiclesounds_t : public SchemaBase
{
// vehiclesounds_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class vehicle_gear_t > pGears;// 0x4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class vehicle_crashsound_t > crashSounds;// 0x14, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> iszSound[9];// 0x24, size 36 (0x24)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> iszStateSounds[20];// 0x48, size 80 (0x50)
	__declspec(align(4)) float minStateTime[20];// 0x98, size 80 (0x50)
}; // size: 232 (0xe8)
#pragma pack(pop)

#pragma pack(push, 4)
class CSimTimer : public CSimpleSimTimer
{
// CSimTimer additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_interval;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class BoneOverride_t : public BaseSceneObjectOverride_t
{
// BoneOverride_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_boneHashes;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x30, class matrix3x4_t> > m_boneTransforms;// 0xc, size 8 (0x8)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class WorldNode_t
{
// WorldNode_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SceneObject_t > m_sceneObjects;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class InfoOverlayData_t > m_infoOverlays;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class BoneOverride_t > m_boneOverrides;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ExtraVertexStreamOverride_t > m_extraVertexStreamOverrides;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class MaterialOverride_t > m_materialOverrides;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class OnDiskBufferData_t > m_extraVertexStreams;// 0x28, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_layerNames;// 0x30, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_sceneObjectLayerIndices;// 0x38, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_overlayLayerIndices;// 0x40, size 8 (0x8)
}; // size: 72 (0x48)
#pragma pack(pop)

class CAI_ExpresserWithFollowup : public CAI_Expresser
{
// CAI_ExpresserWithFollowup additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) ResponseFollowup *m_pPostponedFollowup;// 0x44, size 4 (0x4)
char CAI_ExpresserWithFollowup_050[0x8];
}; // size: 80 (0x50)

#pragma pack(push, 4)
class EventPostAdvanceTick_t : public EventSimulate_t
{
// EventPostAdvanceTick_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nCurrentTick;// 0x20, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTotalTicksThisFrame;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTotalTicks;// 0x28, size 4 (0x4)
}; // size: 44 (0x2c)
#pragma pack(pop)

class IPhysicsPlayerController : public SchemaBase
{
// IPhysicsPlayerController additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 16)
class C_OP_RemapSpeedtoCP : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapSpeedtoCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nInControlPointNumber;// 0x60, size 4 (0x4)
	// m_nInControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutControlPointNumber;// 0x64, size 4 (0x4)
	// m_nOutControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nField;// 0x68, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x6c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x70, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x74, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x78, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapSpeedtoCP_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_WindForce : public CParticleForceOperatorInstance
{
// C_OP_WindForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vForce;// 0x60, size 12 (0xc)
	// m_vForce metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
char C_OP_WindForce_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 8)
class AnimationGroupResourceData_t
{
// AnimationGroupResourceData_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) uint32_t m_nFlags;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCAnimationResource > > > m_localHAnimArray;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCAnimationGroupResource > > > m_includedGroupArray;// 0x10, size 8 (0x8)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCSequenceGroupResource > > m_directHSeqGroup;// 0x18, size 8 (0x8)
	__declspec(align(4)) AnimationKeyResourceData_t m_decodeKey;// 0x20, size 48 (0x30)
	__declspec(align(4)) AnimationRetargetData_t m_retarget;// 0x50, size 32 (0x20)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_szScripts;// 0x70, size 8 (0x8)
}; // size: 120 (0x78)
#pragma pack(pop)

#pragma pack(push, 4)
class EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t
{
// EventServerPostAdvanceTick_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 44 (0x2c)
#pragma pack(pop)

#pragma pack(push, 8)
class EventClientPreOutput_t
{
// EventClientPreOutput_t additional information
// engine2.dll, project engine2
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(8)) double m_flRenderTime;// 0x20, size 8 (0x8)
	__declspec(align(8)) double m_flRenderFrameTime;// 0x28, size 8 (0x8)
	__declspec(align(8)) double m_flRenderFrameTimeUnbounded;// 0x30, size 8 (0x8)
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 8)
class CSchemaEnumeratorInfo : public SchemaEnumeratorInfoData_t
{
// CSchemaEnumeratorInfo additional information
// schemasystem.dll, project schemalib
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_DampenToCP : public CParticlePerFrameOperatorInstance
{
// C_OP_DampenToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRange;// 0x64, size 4 (0x4)
	// m_flRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flScale;// 0x68, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_DampenToCP_070[0x4];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_PositionLock : public CParticlePerFrameOperatorInstance
{
// C_OP_PositionLock additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_PositionLock_070[0xC];
	__declspec(align(4)) float m_flStartTime_min;// 0x70, size 4 (0x4)
	// m_flStartTime_min metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_max;// 0x74, size 4 (0x4)
	// m_flStartTime_max metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_exp;// 0x78, size 4 (0x4)
	// m_flStartTime_exp metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_min;// 0x7c, size 4 (0x4)
	// m_flEndTime_min metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_max;// 0x80, size 4 (0x4)
	// m_flEndTime_max metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_exp;// 0x84, size 4 (0x4)
	// m_flEndTime_exp metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRange;// 0x88, size 4 (0x4)
	// m_flRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flJumpThreshold;// 0x8c, size 4 (0x4)
	// m_flJumpThreshold metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flPrevPosScale;// 0x90, size 4 (0x4)
	// m_flPrevPosScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLockRot;// 0x94, size 1 (0x1)
	// m_bLockRot metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_PositionLock_0A0[0xB];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 1)
class SeqResourceAutoLayerFlag_t
{
// SeqResourceAutoLayerFlag_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool m_bPost;// 0x0, size 1 (0x1)
	__declspec(align(1)) bool m_bSpline;// 0x1, size 1 (0x1)
	__declspec(align(1)) bool m_bXFade;// 0x2, size 1 (0x1)
	__declspec(align(1)) bool m_bNoBlend;// 0x3, size 1 (0x1)
	__declspec(align(1)) bool m_bLocal;// 0x4, size 1 (0x1)
	__declspec(align(1)) bool m_bPose;// 0x5, size 1 (0x1)
	__declspec(align(1)) bool m_bFetchFrame;// 0x6, size 1 (0x1)
	__declspec(align(1)) bool m_bSubtract;// 0x7, size 1 (0x1)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class RnSoftbodySpring_t
{
// RnSoftbodySpring_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t m_nParticle[2];// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flLength;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class RnHullDesc_t : public RnShapeDesc_t
{
// RnHullDesc_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) RnHull_t m_Hull;// 0x8, size 144 (0x90)
}; // size: 152 (0x98)
#pragma pack(pop)

#pragma pack(push, 4)
class FeNodeReverseOffset_t
{
// FeNodeReverseOffset_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nBoneCtrl;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nTargetNode;// 0x2, size 2 (0x2)
	__declspec(align(4)) UnknownType <0xc, class Vector> vOffset;// 0x4, size 12 (0xc)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapCPtoScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPtoScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCPInput;// 0x60, size 4 (0x4)
	// m_nCPInput metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nField;// 0x68, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x6c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x70, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x74, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x78, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x7c, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x80, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInterpRate;// 0x84, size 4 (0x4)
	// m_flInterpRate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x88, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x89, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapCPtoScalar_090[0x6];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_Spin : public CGeneralSpin
{
// C_OP_Spin additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 1)
class EventClientSendInput_t
{
// EventClientSendInput_t additional information
// engine2.dll, project engine2
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char EventClientSendInput_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

class C_SpeechBubbleInfo : public SchemaBase
{
// C_SpeechBubbleInfo additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// Abstract Class

public:
char C_SpeechBubbleInfo_0A[0x6];
	__declspec(align(1)) char m_LocalizationStr[256];// 0xa, size 256 (0x100)
	// m_LocalizationStr metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hNPC;// 0x10c, size 4 (0x4)
	// m_hNPC metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flDuration;// 0x110, size 4 (0x4)
	// m_flDuration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_unOffsetX;// 0x114, size 4 (0x4)
	// m_unOffsetX metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_unOffsetY;// 0x118, size 4 (0x4)
	// m_unOffsetY metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_unCount;// 0x11c, size 2 (0x2)
	// m_unCount metadata
	 // MNetworkEnable
	 // MNetworkEnable
char C_SpeechBubbleInfo_0120[0x2];
}; // size: 288 (0x120)

#pragma pack(push, 16)
class C_INIT_CreateFromCPs : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateFromCPs additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bRandomDistribution;// 0x70, size 1 (0x1)
	// m_bRandomDistribution metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nIncrement;// 0x74, size 4 (0x4)
	// m_nIncrement metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMinCP;// 0x78, size 4 (0x4)
	// m_nMinCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateFromCPs_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class FeCollisionSphere_t
{
// FeCollisionSphere_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nCtrlParent;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nChildNode;// 0x2, size 2 (0x2)
	__declspec(align(4)) float m_flRFactor;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOrigin;// 0x8, size 12 (0xc)
	__declspec(align(4)) float flStickiness;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class CBaseAnimatingController : public CSkeletonAnimationController
{
// CBaseAnimatingController additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) CNetworkedSequenceOperation m_baseLayer;// 0x8, size 36 (0x24)
	// m_baseLayer metadata
	 // MNetworkEnable
	 // MHasSubKeyfields
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bSequenceFinished;// 0x2c, size 1 (0x1)
	// m_bSequenceFinished metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flGroundSpeed;// 0x30, size 4 (0x4)
	// m_flGroundSpeed metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flLastEventCycle;// 0x34, size 4 (0x4)
	// m_flLastEventCycle metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flLastEventAnimTime;// 0x38, size 4 (0x4)
	// m_flLastEventAnimTime metadata
	 // MNetworkDisable
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_flPlaybackRate;// 0x3c, size 8 (0x8)
	// m_flPlaybackRate metadata
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MKeyfieldname
	 // MNetworkSendProxyRecipientsFilter
	 // MNetworkPriority
	 // MNetworkChangeCallback
	__declspec(align(4)) float m_flPrevAnimTime;// 0x44, size 4 (0x4)
	// m_flPrevAnimTime metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flPoseParameter[24];// 0x48, size 96 (0x60)
	// m_flPoseParameter metadata
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkUserGroup
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bClientSideAnimation;// 0xa8, size 1 (0x1)
	// m_bClientSideAnimation metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bEnableIK;// 0xa9, size 1 (0x1)
	// m_bEnableIK metadata
	 // MNetworkDisable
	__declspec(align(1)) bool m_bNetworkedAnimationInputsChanged;// 0xaa, size 1 (0x1)
	// m_bNetworkedAnimationInputsChanged metadata
	 // MNetworkDisable
	__declspec(align(4)) int32_t m_nNewSequenceParity;// 0xac, size 4 (0x4)
	// m_nNewSequenceParity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_nResetEventsParity;// 0xb0, size 4 (0x4)
	// m_nResetEventsParity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	__declspec(align(4)) float m_flIKGroundContactTime;// 0xb4, size 4 (0x4)
	// m_flIKGroundContactTime metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flIKGroundMinHeight;// 0xb8, size 4 (0x4)
	// m_flIKGroundMinHeight metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flIKGroundMaxHeight;// 0xbc, size 4 (0x4)
	// m_flIKGroundMaxHeight metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flEstIkFloor;// 0xc0, size 4 (0x4)
	// m_flEstIkFloor metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flEstIkOffset;// 0xc4, size 4 (0x4)
	// m_flEstIkOffset metadata
	 // MNetworkDisable
char CBaseAnimatingController_0CC[0x4];
	__declspec(align(4)) int32_t m_iIKCounter;// 0xcc, size 4 (0x4)
	// m_iIKCounter metadata
	 // MNetworkDisable
char CBaseAnimatingController_0E0[0x10];
	__declspec(align(4)) CSequenceTransitioner2 m_SequenceTransitioner;// 0xe0, size 308 (0x134)
	// m_SequenceTransitioner metadata
	 // MNetworkDisable
}; // size: 532 (0x214)
#pragma pack(pop)

#pragma pack(push, 8)
class ExtraVertexStreamOverride_t : public BaseSceneObjectOverride_t
{
// ExtraVertexStreamOverride_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nSubSceneObject;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nDrawCallIndex;// 0x8, size 4 (0x4)
	__declspec(align(4)) MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags;// 0xc, size 4 (0x4)
	__declspec(align(8)) RenderBufferBinding_t m_extraBufferBinding;// 0x10, size 16 (0x10)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class EntityIOConnectionData_t
{
// EntityIOConnectionData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_outputName;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_targetType;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_targetName;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_inputName;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_overrideParam;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flDelay;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTimesToFire;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)
#pragma pack(pop)

class C_HorizontalMotionController : public SchemaBase
{
// C_HorizontalMotionController additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char C_HorizontalMotionController_08[0x4];
}; // size: 8 (0x8)

#pragma pack(push, 4)
class CNetworkViewOffsetVector
{
// CNetworkViewOffsetVector additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Value;// 0x0, size 12 (0xc)
	// m_Value metadata
	 // MNetworkDisable
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecX;// 0xc, size 8 (0x8)
	// m_vecX metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecY;// 0x14, size 8 (0x8)
	// m_vecY metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_vecZ;// 0x1c, size 8 (0x8)
	// m_vecZ metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MNetworkChangeCallback
char CNetworkViewOffsetVector_028[0x4];
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 4)
class CGlowProperty : public SchemaBase
{
// CGlowProperty additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_fGlowColor;// 0x4, size 12 (0xc)
	__declspec(align(4)) int32_t m_iGlowTeam;// 0x10, size 4 (0x4)
char CGlowProperty_020[0xC];
	__declspec(align(4)) int32_t m_iGlowType;// 0x20, size 4 (0x4)
	// m_iGlowType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_nGlowRange;// 0x24, size 4 (0x4)
	// m_nGlowRange metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nGlowRangeMin;// 0x28, size 4 (0x4)
	// m_nGlowRangeMin metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) UnknownType <0x4, class Color> m_glowColorOverride;// 0x2c, size 4 (0x4)
	// m_glowColorOverride metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bFlashing;// 0x30, size 1 (0x1)
	// m_bFlashing metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bGlowing;// 0x31, size 1 (0x1)
char CGlowProperty_034[0x2];
}; // size: 52 (0x34)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase
{
// C_OP_RemapDistanceToLineSegmentToScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x80, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flMinOutputValue;// 0x84, size 4 (0x4)
	// m_flMinOutputValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxOutputValue;// 0x88, size 4 (0x4)
	// m_flMaxOutputValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapDistanceToLineSegmentToScalar_090[0x4];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class CSchemaMetaModifyAdd : public SchemaMetaModifyAdd_t
{
// CSchemaMetaModifyAdd additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class hudtextparms_t
{
// hudtextparms_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) UnknownType <0x4, class Color> color1;// 0x0, size 4 (0x4)
	__declspec(align(1)) UnknownType <0x4, class Color> color2;// 0x4, size 4 (0x4)
	__declspec(align(1)) uint8_t effect;// 0x8, size 1 (0x1)
	// effect metadata
	 // MKeyfieldname
	__declspec(align(1)) uint8_t channel;// 0x9, size 1 (0x1)
	// channel metadata
	 // MKeyfieldname
	__declspec(align(4)) float x;// 0xc, size 4 (0x4)
	// x metadata
	 // MKeyfieldname
	__declspec(align(4)) float y;// 0x10, size 4 (0x4)
	// y metadata
	 // MKeyfieldname
	__declspec(align(4)) float fadeinTime;// 0x14, size 4 (0x4)
	// fadeinTime metadata
	 // MKeyfieldname
	__declspec(align(4)) float fadeoutTime;// 0x18, size 4 (0x4)
	// fadeoutTime metadata
	 // MKeyfieldname
	__declspec(align(4)) float holdTime;// 0x1c, size 4 (0x4)
	// holdTime metadata
	 // MKeyfieldname
	__declspec(align(4)) float fxTime;// 0x20, size 4 (0x4)
	// fxTime metadata
	 // MKeyfieldname
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreationNoise : public CParticleInitializerOperatorInstance
{
// C_INIT_CreationNoise additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x70, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bAbsVal;// 0x74, size 1 (0x1)
	// m_bAbsVal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAbsValInv;// 0x75, size 1 (0x1)
	// m_bAbsValInv metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffset;// 0x78, size 4 (0x4)
	// m_flOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x7c, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x80, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseScale;// 0x84, size 4 (0x4)
	// m_flNoiseScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoiseScaleLoc;// 0x88, size 4 (0x4)
	// m_flNoiseScaleLoc metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffsetLoc;// 0x8c, size 12 (0xc)
	// m_vecOffsetLoc metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flWorldTimeScale;// 0x98, size 4 (0x4)
	// m_flWorldTimeScale metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreationNoise_0A0[0x4];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class CSchemaClassField : public SchemaClassFieldData_t
{
// CSchemaClassField additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

class C_DotaTree : public SchemaBase
{
// C_DotaTree additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(1)) bool m_bStanding;// 0x4, size 1 (0x1)
char C_DotaTree_08[0x3];
	__declspec(align(4)) uint32_t m_nOccluderIndex;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)

#pragma pack(push, 4)
class GameFileWeaponInfo_t : public FileWeaponInfo_t
{
// GameFileWeaponInfo_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 224 (0xe0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointPositions : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointPositions additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bUseWorldLocation;// 0x60, size 1 (0x1)
	// m_bUseWorldLocation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOrient;// 0x61, size 1 (0x1)
	// m_bOrient metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetOnce;// 0x62, size 1 (0x1)
	// m_bSetOnce metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP1;// 0x64, size 4 (0x4)
	// m_nCP1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP1Parent;// 0x68, size 4 (0x4)
	// m_nCP1Parent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP2;// 0x6c, size 4 (0x4)
	// m_nCP2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP2Parent;// 0x70, size 4 (0x4)
	// m_nCP2Parent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP3;// 0x74, size 4 (0x4)
	// m_nCP3 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP3Parent;// 0x78, size 4 (0x4)
	// m_nCP3Parent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP4;// 0x7c, size 4 (0x4)
	// m_nCP4 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP4Parent;// 0x80, size 4 (0x4)
	// m_nCP4Parent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCP1Pos;// 0x84, size 12 (0xc)
	// m_vecCP1Pos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCP2Pos;// 0x90, size 12 (0xc)
	// m_vecCP2Pos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCP3Pos;// 0x9c, size 12 (0xc)
	// m_vecCP3Pos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCP4Pos;// 0xa8, size 12 (0xc)
	// m_vecCP4Pos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nHeadLocation;// 0xb4, size 4 (0x4)
	// m_nHeadLocation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointPositions_0C0[0x8];
}; // size: 192 (0xc0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_PercentageBetweenCPsVector : public CParticlePerFrameOperatorInstance
{
// C_OP_PercentageBetweenCPsVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x64, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x68, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMin;// 0x6c, size 12 (0xc)
	// m_vecOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutputMax;// 0x78, size 12 (0xc)
	// m_vecOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) int32_t m_nStartCP;// 0x84, size 4 (0x4)
	// m_nStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nEndCP;// 0x88, size 4 (0x4)
	// m_nEndCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x8c, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x8d, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x8e, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRadialCheck;// 0x8f, size 1 (0x1)
	// m_bRadialCheck metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class CRMSG_Entity_Info
{
// CRMSG_Entity_Info additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nEHandle;// 0x0, size 4 (0x4)
	__declspec(align(1)) char m_pEntityName[256];// 0x4, size 256 (0x100)
	__declspec(align(1)) char m_pEntityClass[256];// 0x104, size 256 (0x100)
}; // size: 516 (0x204)
#pragma pack(pop)

class CDOTASpectatorGraphManager : public SchemaBase
{
// CDOTASpectatorGraphManager additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CDOTASpectatorGraphManager_014[0x10];
	__declspec(align(4)) CNetworkVarChainer __m_pChainEntity;// 0x14, size 12 (0xc)
	__declspec(align(4)) int32_t m_nPlayerDataCount;// 0x20, size 4 (0x4)
	__declspec(align(4)) CountdownTimer m_Timer;// 0x24, size 16 (0x10)
	__declspec(align(1)) bool m_bTracking;// 0x34, size 1 (0x1)
	__declspec(align(4)) float m_flStartTime;// 0x38, size 4 (0x4)
	__declspec(align(4)) int32_t m_nNextUpdatePlayer;// 0x3c, size 4 (0x4)
char CDOTASpectatorGraphManager_044[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CDOTASpecGraphPlayerData > m_rgPlayerGraphData[24];// 0x44, size 96 (0x60)
	// m_rgPlayerGraphData metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgRadiantTotalEarnedGold[64];// 0xa4, size 256 (0x100)
	// m_rgRadiantTotalEarnedGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgDireTotalEarnedGold[64];// 0x1a4, size 256 (0x100)
	// m_rgDireTotalEarnedGold metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgRadiantTotalEarnedXP[64];// 0x2a4, size 256 (0x100)
	// m_rgRadiantTotalEarnedXP metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgDireTotalEarnedXP[64];// 0x3a4, size 256 (0x100)
	// m_rgDireTotalEarnedXP metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgRadiantNetWorth[64];// 0x4a4, size 256 (0x100)
	// m_rgRadiantNetWorth metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_rgDireNetWorth[64];// 0x5a4, size 256 (0x100)
	// m_rgDireNetWorth metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flTotalEarnedGoldStartTime;// 0x6a4, size 4 (0x4)
	// m_flTotalEarnedGoldStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flTotalEarnedGoldEndTime;// 0x6a8, size 4 (0x4)
	// m_flTotalEarnedGoldEndTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nGoldGraphVersion;// 0x6ac, size 4 (0x4)
	// m_nGoldGraphVersion metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) CountdownTimer m_TeamStatsUpdateTimer;// 0x6b0, size 16 (0x10)
	__declspec(align(4)) int32_t m_event_dota_player_killed;// 0x6c0, size 4 (0x4)
	__declspec(align(4)) int32_t m_event_server_pre_shutdown;// 0x6c4, size 4 (0x4)
	__declspec(align(4)) int32_t m_event_dota_player_pick_hero;// 0x6c8, size 4 (0x4)
}; // size: 1740 (0x6cc)

#pragma pack(push, 16)
class C_OP_DistanceCull : public CParticlePerFrameOperatorInstance
{
// C_OP_DistanceCull additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPoint;// 0x60, size 4 (0x4)
	// m_nControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecPointOffset;// 0x64, size 12 (0xc)
	// m_vecPointOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flDistance;// 0x70, size 4 (0x4)
	// m_flDistance metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bCullInside;// 0x74, size 1 (0x1)
	// m_bCullInside metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_DistanceCull_080[0xB];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_VelocityRadialRandom : public CParticleInitializerOperatorInstance
{
// C_INIT_VelocityRadialRandom additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fSpeedMin;// 0x74, size 4 (0x4)
	// m_fSpeedMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fSpeedMax;// 0x78, size 4 (0x4)
	// m_fSpeedMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecLocalCoordinateSystemSpeedScale;// 0x7c, size 12 (0xc)
	// m_vecLocalCoordinateSystemSpeedScale metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_VelocityRadialRandom_089[0x1];
	__declspec(align(1)) bool m_bIgnoreDelta;// 0x89, size 1 (0x1)
	// m_bIgnoreDelta metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_VelocityRadialRandom_090[0x6];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class FeCtrlOsOffset_t
{
// FeCtrlOsOffset_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nCtrlParent;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t nCtrlChild;// 0x2, size 2 (0x2)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class C_CSequenceTransitioner2 : public SchemaBase
{
// C_CSequenceTransitioner2 additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) CNetworkedSequenceOperation m_currentOp;// 0x4, size 36 (0x24)
	__declspec(align(4)) float m_flCurrentPlaybackRate;// 0x28, size 4 (0x4)
	__declspec(align(4)) float m_flCurrentAnimTime;// 0x2c, size 4 (0x4)
	__declspec(align(4)) TransitioningLayer_t m_transitioningLayers[4];// 0x30, size 256 (0x100)
	__declspec(align(4)) C_BaseAnimatingController *m_pOwner;// 0x130, size 4 (0x4)
char C_CSequenceTransitioner2_0168[0x34];
}; // size: 360 (0x168)
#pragma pack(pop)

#pragma pack(push, 4)
class EventAppShutdown_t
{
// EventAppShutdown_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nDummy0;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class ModelBoneFlexDriver_t
{
// ModelBoneFlexDriver_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_boneName;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_boneNameToken;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ModelBoneFlexDriverControl_t > m_controls;// 0x8, size 8 (0x8)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class FeSimdSpringIntegrator_t
{
// FeSimdSpringIntegrator_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[4][2];// 0x0, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> flSpringRestLength;// 0x10, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> flSpringConstant;// 0x20, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> flSpringDamping;// 0x30, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> flNodeWeight0;// 0x40, size 16 (0x10)
}; // size: 80 (0x50)
#pragma pack(pop)

#pragma pack(push, 4)
class C_ViewSmoothingData_t
{
// C_ViewSmoothingData_t additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) C_BaseAnimating *pVehicle;// 0x0, size 4 (0x4)
	__declspec(align(1)) bool bClampEyeAngles;// 0x4, size 1 (0x1)
	__declspec(align(4)) float flPitchCurveZero;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flPitchCurveLinear;// 0xc, size 4 (0x4)
	__declspec(align(4)) float flRollCurveZero;// 0x10, size 4 (0x4)
	__declspec(align(4)) float flRollCurveLinear;// 0x14, size 4 (0x4)
	__declspec(align(4)) float flFOV;// 0x18, size 4 (0x4)
	__declspec(align(4)) ViewLockData_t pitchLockData;// 0x1c, size 16 (0x10)
	__declspec(align(4)) ViewLockData_t rollLockData;// 0x2c, size 16 (0x10)
	__declspec(align(1)) bool bDampenEyePosition;// 0x3c, size 1 (0x1)
	__declspec(align(1)) bool bRunningEnterExit;// 0x3d, size 1 (0x1)
	__declspec(align(1)) bool bWasRunningAnim;// 0x3e, size 1 (0x1)
	__declspec(align(4)) float flEnterExitStartTime;// 0x40, size 4 (0x4)
	__declspec(align(4)) float flEnterExitDuration;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class QAngle> vecAnglesSaved;// 0x48, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> vecOriginSaved;// 0x54, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> vecAngleDiffSaved;// 0x60, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> vecAngleDiffMin;// 0x6c, size 12 (0xc)
}; // size: 120 (0x78)
#pragma pack(pop)

class CHintMessage : public SchemaBase
{
// CHintMessage additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) char* m_hintString;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, char *> m_args;// 0x8, size 16 (0x10)
	__declspec(align(4)) float m_duration;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)

#pragma pack(push, 4)
class WeaponTextureData_t
{
// WeaponTextureData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Name;// 0x0, size 4 (0x4)
	// m_Name metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Sprite;// 0x4, size 4 (0x4)
	// m_Sprite metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_x;// 0x8, size 4 (0x4)
	// m_x metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_y;// 0xc, size 4 (0x4)
	// m_y metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_width;// 0x10, size 4 (0x4)
	// m_width metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_height;// 0x14, size 4 (0x4)
	// m_height metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Font;// 0x18, size 4 (0x4)
	// m_Font metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_FontCharacter;// 0x1c, size 4 (0x4)
	// m_FontCharacter metadata
	 // MAttributeName
	 // MAllowCharValuesForInt
	 // MDefaultString
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LocalAccelerationForce : public CParticleForceOperatorInstance
{
// C_OP_LocalAccelerationForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x60, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCP;// 0x64, size 4 (0x4)
	// m_nScaleCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecAccel;// 0x68, size 12 (0xc)
	// m_vecAccel metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_LocalAccelerationForce_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourceS1SeqDesc_t
{
// SeqResourceS1SeqDesc_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sName;// 0x0, size 4 (0x4)
	__declspec(align(1)) SeqResourceSeqDesc_t_Flag_t m_flags;// 0x4, size 10 (0xa)
	__declspec(align(4)) SeqResourceMultiFetch_t m_fetch;// 0x10, size 56 (0x38)
	__declspec(align(4)) int32_t m_nLocalWeightlist;// 0x48, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceAutoLayer_t > m_autoLayerArray;// 0x4c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceIKLock_t > m_IKLockArray;// 0x54, size 8 (0x8)
	__declspec(align(4)) SeqResourceTransition_t m_transition;// 0x5c, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_keyValueText;// 0x64, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceActivity_t > m_activityArray;// 0x68, size 8 (0x8)
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 1)
class CRCMD_SetProfileMode
{
// CRCMD_SetProfileMode additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) bool m_bEnableProfiling;// 0x0, size 1 (0x1)
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeVMapResourceData_t
{
// InfoForResourceTypeVMapResourceData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeVMapResourceData_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RampCPLinearRandom : public CParticlePerFrameOperatorInstance
{
// C_OP_RampCPLinearRandom additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nOutControlPointNumber;// 0x60, size 4 (0x4)
	// m_nOutControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRateMin;// 0x64, size 12 (0xc)
	// m_vecRateMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRateMax;// 0x70, size 12 (0xc)
	// m_vecRateMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RampCPLinearRandom_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class CPassengerRole
{
// CPassengerRole additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_strName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CPassengerSeat > m_PassengerSeats;// 0x4, size 16 (0x10)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 8)
class CNavVolumeAll : public CNavVolumeVector
{
// CNavVolumeAll additional information
// server.dll, project navlib
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 4)
class ragdollelement_t
{
// ragdollelement_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> originParentSpace;// 0x0, size 12 (0xc)
char ragdollelement_t_014[0x8];
	__declspec(align(4)) int32_t parentIndex;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flRadius;// 0x18, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x30, class matrix3x4_t> m_xform;// 0x1c, size 48 (0x30)
}; // size: 76 (0x4c)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourceAutoLayer_t
{
// SeqResourceAutoLayer_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) int16_t m_nLocalReference;// 0x0, size 2 (0x2)
	__declspec(align(2)) int16_t m_nLocalPose;// 0x2, size 2 (0x2)
	__declspec(align(1)) SeqResourceAutoLayerFlag_t m_flags;// 0x4, size 8 (0x8)
	__declspec(align(4)) float m_start;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_peak;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_tail;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_end;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 16)
class AnimationSnapshot_t : public AnimationSnapshotBase_t
{
// AnimationSnapshot_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 16

public:
	__declspec(align(4)) int32_t m_nEntIndex;// 0xc0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_modelName;// 0xc4, size 4 (0x4)
char AnimationSnapshot_t_0D0[0x8];
}; // size: 208 (0xd0)
#pragma pack(pop)

#pragma pack(push, 4)
class CVPhysXLevelData
{
// CVPhysXLevelData additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class CVPhysXMesh > m_meshes;// 0x0, size 8 (0x8)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class VPhysXCollisionAttributes_t
{
// VPhysXCollisionAttributes_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_CollisionGroup;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_InteractAs;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint32_t > m_InteractWith;// 0xc, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_CollisionGroupString;// 0x14, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_InteractAsStrings;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_InteractWithStrings;// 0x20, size 8 (0x8)
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_OscillateScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_OscillateScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_RateMin;// 0x60, size 4 (0x4)
	// m_RateMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_RateMax;// 0x64, size 4 (0x4)
	// m_RateMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_FrequencyMin;// 0x68, size 4 (0x4)
	// m_FrequencyMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_FrequencyMax;// 0x6c, size 4 (0x4)
	// m_FrequencyMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nField;// 0x70, size 4 (0x4)
	// m_nField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bProportional;// 0x74, size 1 (0x1)
	// m_bProportional metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bProportionalOp;// 0x75, size 1 (0x1)
	// m_bProportionalOp metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_min;// 0x78, size 4 (0x4)
	// m_flStartTime_min metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime_max;// 0x7c, size 4 (0x4)
	// m_flStartTime_max metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_min;// 0x80, size 4 (0x4)
	// m_flEndTime_min metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime_max;// 0x84, size 4 (0x4)
	// m_flEndTime_max metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOscMult;// 0x88, size 4 (0x4)
	// m_flOscMult metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOscAdd;// 0x8c, size 4 (0x4)
	// m_flOscAdd metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 144 (0x90)
#pragma pack(pop)

class CMultiplayer_Expresser : public CAI_ExpresserWithFollowup
{
// CMultiplayer_Expresser additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(1)) bool m_bAllowMultipleScenes;// 0x50, size 1 (0x1)
char CMultiplayer_Expresser_054[0x3];
}; // size: 84 (0x54)

#pragma pack(push, 4)
class VPhysXShapeCompoundHeader2_t : public VPhysXDiskShapeHeader_t
{
// VPhysXShapeCompoundHeader2_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceArray, uint8_t > > m_components;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_types;// 0xc, size 8 (0x8)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class SheetSequenceFrame_t
{
// SheetSequenceFrame_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_flDisplayTime;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SheetFrameImage_t > m_Images;// 0x4, size 8 (0x8)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeIParticleSystemDefinition
{
// InfoForResourceTypeIParticleSystemDefinition additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeIParticleSystemDefinition_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class C_SunGlowOverlay : public CGlowOverlay
{
// C_SunGlowOverlay additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bModulateByDot;// 0xa4, size 1 (0x1)
char C_SunGlowOverlay_0A8[0x3];
}; // size: 168 (0xa8)
#pragma pack(pop)

#pragma pack(push, 4)
class ragdoll_t
{
// ragdoll_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t listCount;// 0x0, size 4 (0x4)
	__declspec(align(4)) ragdollelement_t list[32];// 0x4, size 2432 (0x980)
	__declspec(align(4)) int32_t boneIndex[32];// 0x984, size 128 (0x80)
	__declspec(align(1)) bool allowStretch;// 0xa04, size 1 (0x1)
	__declspec(align(1)) bool unused;// 0xa05, size 1 (0x1)
char ragdoll_t_0A08[0x2];
}; // size: 2568 (0xa08)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateInEpitrochoid : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateInEpitrochoid additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nComponent1;// 0x70, size 4 (0x4)
	// m_nComponent1 metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nComponent2;// 0x74, size 4 (0x4)
	// m_nComponent2 metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x78, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCP;// 0x7c, size 4 (0x4)
	// m_nScaleCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flParticleDensity;// 0x80, size 4 (0x4)
	// m_flParticleDensity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffset;// 0x84, size 4 (0x4)
	// m_flOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadius1;// 0x88, size 4 (0x4)
	// m_flRadius1 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadius2;// 0x8c, size 4 (0x4)
	// m_flRadius2 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseCount;// 0x90, size 1 (0x1)
	// m_bUseCount metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseLocalCoords;// 0x91, size 1 (0x1)
	// m_bUseLocalCoords metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOffsetExistingPos;// 0x92, size 1 (0x1)
	// m_bOffsetExistingPos metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateInEpitrochoid_0A0[0xD];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class EventServerPostSimulate_t : public EventSimulate_t
{
// EventServerPostSimulate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceInputDependency_t
{
// ResourceInputDependency_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_ContentRelativeFilename;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_ContentSearchPath;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFileCRC;// 0x8, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFlags;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeResourceRemapTable_t
{
// InfoForResourceTypeResourceRemapTable_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeResourceRemapTable_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_FadeAndKill : public CParticlePerFrameOperatorInstance
{
// C_OP_FadeAndKill additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flStartFadeInTime;// 0x60, size 4 (0x4)
	// m_flStartFadeInTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndFadeInTime;// 0x64, size 4 (0x4)
	// m_flEndFadeInTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartFadeOutTime;// 0x68, size 4 (0x4)
	// m_flStartFadeOutTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndFadeOutTime;// 0x6c, size 4 (0x4)
	// m_flEndFadeOutTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartAlpha;// 0x70, size 4 (0x4)
	// m_flStartAlpha metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndAlpha;// 0x74, size 4 (0x4)
	// m_flEndAlpha metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_FadeAndKill_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class CSceneObjectData
{
// CSceneObjectData additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMinBounds;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxBounds;// 0xc, size 12 (0xc)
char CSceneObjectData_01C[0x4];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CMaterialDrawDescriptor > m_drawCalls;// 0x1c, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vTintColor;// 0x2c, size 16 (0x10)
}; // size: 60 (0x3c)
#pragma pack(pop)

#pragma pack(push, 2)
class FeTreeChildren_t
{
// FeTreeChildren_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 2
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nChild[2];// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 8)
class CNavVolumeSphericalShell : public CNavVolumeSphere
{
// CNavVolumeSphericalShell additional information
// server.dll, project navlib
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flRadiusInner;// 0x58, size 4 (0x4)
char CNavVolumeSphericalShell_060[0x4];
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 16)
class CSceneObjectReference_t
{
// CSceneObjectReference_t additional information
// scenesystem.dll, project scenesystem
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(16)) UnknownType <0x10, class VectorAligned> m_vecAABBMins;// 0x0, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class VectorAligned> m_vecAABBMaxes;// 0x10, size 16 (0x10)
	__declspec(align(8)) uint64_t m_nRenderableFlags;// 0x20, size 8 (0x8)
	__declspec(align(4)) CSceneObject *m_pObject;// 0x28, size 4 (0x4)
char CSceneObjectReference_t_030[0x4];
}; // size: 48 (0x30)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomRadius : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomRadius additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flRadiusMin;// 0x70, size 4 (0x4)
	// m_flRadiusMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) float m_flRadiusMax;// 0x74, size 4 (0x4)
	// m_flRadiusMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) float m_flRadiusRandExponent;// 0x78, size 4 (0x4)
	// m_flRadiusRandExponent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
char C_INIT_RandomRadius_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomVectorComponent : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomVectorComponent additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMin;// 0x70, size 4 (0x4)
	// m_flMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMax;// 0x74, size 4 (0x4)
	// m_flMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x78, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nComponent;// 0x7c, size 4 (0x4)
	// m_nComponent metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	 // MVectorIsSometimesCoordinate
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceIKChain_t
{
// AnimResourceIKChain_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceIKTargetInfo_t > m_targetInfoArray;// 0x4, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceIKLink_t > m_linkArray;// 0xc, size 8 (0x8)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class SlideMaterialList_t
{
// SlideMaterialList_t additional information
// client.dll, project client
// Alignment: 4

public:
	__declspec(align(1)) char szSlideKeyword[64];// 0x0, size 64 (0x40)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CStrongHandleCopyable, class InfoForResourceTypeIMaterial2 > > iSlideMaterials;// 0x40, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, int32_t > iSlideIndex;// 0x50, size 16 (0x10)
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomAlphaWindowThreshold : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomAlphaWindowThreshold additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMin;// 0x70, size 4 (0x4)
	// m_flMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMax;// 0x74, size 4 (0x4)
	// m_flMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flExponent;// 0x78, size 4 (0x4)
	// m_flExponent metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RandomAlphaWindowThreshold_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_VelocityRandom : public CParticleInitializerOperatorInstance
{
// C_INIT_VelocityRandom additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fSpeedMin;// 0x74, size 4 (0x4)
	// m_fSpeedMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fSpeedMax;// 0x78, size 4 (0x4)
	// m_fSpeedMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_LocalCoordinateSystemSpeedMin;// 0x7c, size 12 (0xc)
	// m_LocalCoordinateSystemSpeedMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_LocalCoordinateSystemSpeedMax;// 0x88, size 12 (0xc)
	// m_LocalCoordinateSystemSpeedMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
char C_INIT_VelocityRandom_0A0[0xC];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceIKTargetInfo_t
{
// AnimResourceIKTargetInfo_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nType;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPosChannel;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPosElement;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nQuatChannel;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nQuatElement;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 8)
class CCollisionProperty : public SchemaBase
{
// CCollisionProperty additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(8)) VPhysicsCollisionAttribute_t m_collisionAttribute;// 0x8, size 40 (0x28)
	// m_collisionAttribute metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMins;// 0x30, size 12 (0xc)
	// m_vecMins metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMaxs;// 0x3c, size 12 (0xc)
	// m_vecMaxs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
char CCollisionProperty_04A[0x2];
	__declspec(align(1)) uint8_t m_usSolidFlags;// 0x4a, size 1 (0x1)
	// m_usSolidFlags metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkChangeCallback
	__declspec(align(1)) SolidType_t m_nSolidType;// 0x4b, size 1 (0x1)
	// m_nSolidType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) uint8_t m_triggerBloat;// 0x4c, size 1 (0x1)
	// m_triggerBloat metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) SurroundingBoundsType_t m_nSurroundType;// 0x4d, size 1 (0x1)
	// m_nSurroundType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) uint8_t m_CollisionGroup;// 0x4e, size 1 (0x1)
	// m_CollisionGroup metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) bool m_bHitboxEnabled;// 0x4f, size 1 (0x1)
	// m_bHitboxEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flRadius;// 0x50, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecSpecifiedSurroundingMins;// 0x54, size 12 (0xc)
	// m_vecSpecifiedSurroundingMins metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecSpecifiedSurroundingMaxs;// 0x60, size 12 (0xc)
	// m_vecSpecifiedSurroundingMaxs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecSurroundingMaxs;// 0x6c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecSurroundingMins;// 0x78, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCapsuleCenter1;// 0x84, size 12 (0xc)
	// m_vCapsuleCenter1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vCapsuleCenter2;// 0x90, size 12 (0xc)
	// m_vCapsuleCenter2 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCapsuleRadius;// 0x9c, size 4 (0x4)
	// m_flCapsuleRadius metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 160 (0xa0)
#pragma pack(pop)

class CHintMessageQueue : public SchemaBase
{
// CHintMessageQueue additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) float m_tmMessageEnd;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, CHintMessage *> m_messages;// 0x8, size 16 (0x10)
	__declspec(align(4)) CBasePlayer *m_pPlayer;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)

#pragma pack(push, 4)
class C_BaseAnimatingController : public CSkeletonAnimationController
{
// C_BaseAnimatingController additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) CNetworkedSequenceOperation m_baseLayer;// 0x8, size 36 (0x24)
	// m_baseLayer metadata
	 // MNetworkEnable
	 // MHasSubKeyfields
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bSequenceFinished;// 0x2c, size 1 (0x1)
	// m_bSequenceFinished metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flGroundSpeed;// 0x30, size 4 (0x4)
	// m_flGroundSpeed metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flLastEventCycle;// 0x34, size 4 (0x4)
	// m_flLastEventCycle metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flLastEventAnimTime;// 0x38, size 4 (0x4)
	// m_flLastEventAnimTime metadata
	 // MNetworkDisable
	__declspec(align(4)) UnknownType <0x8, class CNetworkedQuantizedFloat> m_flPlaybackRate;// 0x3c, size 8 (0x8)
	// m_flPlaybackRate metadata
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkEncodeFlags
	 // MKeyfieldname
	 // MNetworkSendProxyRecipientsFilter
	 // MNetworkPriority
	 // MNetworkChangeCallback
	__declspec(align(4)) float m_flPrevAnimTime;// 0x44, size 4 (0x4)
	// m_flPrevAnimTime metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flPoseParameter[24];// 0x48, size 96 (0x60)
	// m_flPoseParameter metadata
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	 // MNetworkUserGroup
	 // MNetworkChangeCallback
char C_BaseAnimatingController_0AC[0x4];
	__declspec(align(1)) bool m_bClientSideAnimation;// 0xac, size 1 (0x1)
	// m_bClientSideAnimation metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bEnableIK;// 0xad, size 1 (0x1)
	// m_bEnableIK metadata
	 // MNetworkDisable
	__declspec(align(1)) bool m_bNetworkedAnimationInputsChanged;// 0xae, size 1 (0x1)
	// m_bNetworkedAnimationInputsChanged metadata
	 // MNetworkDisable
	__declspec(align(1)) uint8_t m_nPrevNewSequenceParity;// 0xaf, size 1 (0x1)
	// m_nPrevNewSequenceParity metadata
	 // MNetworkDisable
	__declspec(align(1)) uint8_t m_nPrevResetEventsParity;// 0xb0, size 1 (0x1)
	// m_nPrevResetEventsParity metadata
	 // MNetworkDisable
	__declspec(align(4)) int32_t m_nNewSequenceParity;// 0xb4, size 4 (0x4)
	// m_nNewSequenceParity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_nResetEventsParity;// 0xb8, size 4 (0x4)
	// m_nResetEventsParity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	__declspec(align(4)) float m_flIKGroundContactTime;// 0xbc, size 4 (0x4)
	// m_flIKGroundContactTime metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flIKGroundMinHeight;// 0xc0, size 4 (0x4)
	// m_flIKGroundMinHeight metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flIKGroundMaxHeight;// 0xc4, size 4 (0x4)
	// m_flIKGroundMaxHeight metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flEstIkFloor;// 0xc8, size 4 (0x4)
	// m_flEstIkFloor metadata
	 // MNetworkDisable
	__declspec(align(4)) float m_flEstIkOffset;// 0xcc, size 4 (0x4)
	// m_flEstIkOffset metadata
	 // MNetworkDisable
char C_BaseAnimatingController_0D4[0x4];
	__declspec(align(4)) int32_t m_iIKCounter;// 0xd4, size 4 (0x4)
	// m_iIKCounter metadata
	 // MNetworkDisable
char C_BaseAnimatingController_0E8[0x10];
	__declspec(align(4)) C_CSequenceTransitioner2 m_SequenceTransitioner;// 0xe8, size 360 (0x168)
	// m_SequenceTransitioner metadata
	 // MNetworkDisable
char C_BaseAnimatingController_0254[0x4];
	__declspec(align(4)) UnknownType <0x4, class HSequence> m_hLastAnimEventSequence;// 0x254, size 4 (0x4)
	// m_hLastAnimEventSequence metadata
	 // MNetworkDisable
	__declspec(align(4)) uint32_t m_ClientSideAnimationListHandle;// 0x258, size 4 (0x4)
	// m_ClientSideAnimationListHandle metadata
	 // MNetworkDisable
char C_BaseAnimatingController_0288[0x2C];
}; // size: 648 (0x288)
#pragma pack(pop)

class CSoundPatch : public SchemaBase
{
// CSoundPatch additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) CSoundEnvelope m_pitch;// 0x4, size 16 (0x10)
	__declspec(align(4)) CSoundEnvelope m_volume;// 0x14, size 16 (0x10)
char CSoundPatch_02C[0x8];
	__declspec(align(4)) soundlevel_t m_soundlevel;// 0x2c, size 4 (0x4)
	__declspec(align(4)) float m_shutdownTime;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flLastTime;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszSoundName;// 0x38, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszSoundScriptName;// 0x3c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hEnt;// 0x40, size 4 (0x4)
	__declspec(align(4)) int32_t m_entityChannel;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CEntityIndex> m_soundEntityIndex;// 0x48, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_soundOrigin;// 0x4c, size 12 (0xc)
	__declspec(align(4)) int32_t m_flags;// 0x58, size 4 (0x4)
	__declspec(align(4)) int32_t m_baseFlags;// 0x5c, size 4 (0x4)
	__declspec(align(4)) int32_t m_isPlaying;// 0x60, size 4 (0x4)
	__declspec(align(4)) float m_flScriptVolume;// 0x64, size 4 (0x4)
	__declspec(align(4)) CCopyRecipientFilter m_Filter;// 0x68, size 24 (0x18)
	__declspec(align(4)) float m_flCloseCaptionDuration;// 0x80, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszClassName;// 0x84, size 4 (0x4)
public:
	static int32_t Get_g_SoundPatchCount() {return *(int32_t *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CSoundPatch")->m_staticMembers.data[0].m_pInstance; }
}; // size: 136 (0x88)

#pragma pack(push, 4)
class WorldLighting_t
{
// WorldLighting_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) GlobalIlluminationMethod_t m_globalIlluminationMethod;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class IrradVolume_t > m_irradVolumes;// 0x4, size 8 (0x8)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_NormalAlignToCP : public CParticleInitializerOperatorInstance
{
// C_INIT_NormalAlignToCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_NormalAlignToCP_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientOutput_t
{
// EventClientOutput_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(4)) float m_flRenderTime;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flRealTime;// 0x20, size 4 (0x4)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 8)
class CRMSG_Manifest_New
{
// CRMSG_Manifest_New additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nManifestIndex;// 0x0, size 4 (0x4)
	__declspec(align(8)) int64_t m_nTimeUS;// 0x8, size 8 (0x8)
	__declspec(align(1)) char m_pManifestDebugName[256];// 0x10, size 256 (0x100)
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 4)
class CSchemaClassInfo : public SchemaClassInfoData_t
{
// CSchemaClassInfo additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
}; // size: 104 (0x68)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SnapshotSkinToBones : public CParticlePerFrameOperatorInstance
{
// C_OP_SnapshotSkinToBones additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bTransformNormals;// 0x60, size 1 (0x1)
	// m_bTransformNormals metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x64, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLifeTimeFadeStart;// 0x68, size 4 (0x4)
	// m_flLifeTimeFadeStart metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLifeTimeFadeEnd;// 0x6c, size 4 (0x4)
	// m_flLifeTimeFadeEnd metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flJumpThreshold;// 0x70, size 4 (0x4)
	// m_flJumpThreshold metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flPrevPosScale;// 0x74, size 4 (0x4)
	// m_flPrevPosScale metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SnapshotSkinToBones_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapBoundingVolumetoCP : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapBoundingVolumetoCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nOutControlPointNumber;// 0x60, size 4 (0x4)
	// m_nOutControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMin;// 0x64, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x68, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x6c, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x70, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapBoundingVolumetoCP_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientProcessInput_t
{
// EventClientProcessInput_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(4)) float m_flRealTime;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flFrameTime;// 0x20, size 4 (0x4)
}; // size: 36 (0x24)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypePRTMatrixData_t
{
// InfoForResourceTypePRTMatrixData_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypePRTMatrixData_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 8)
class PlayerResourcePlayerData_t : public SchemaBase
{
// PlayerResourcePlayerData_t additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char PlayerResourcePlayerData_t_010[0xC];
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszPlayerName;// 0x10, size 4 (0x4)
	// m_iszPlayerName metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_iPlayerTeam;// 0x14, size 4 (0x4)
	// m_iPlayerTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_iLobbyPlayerTeam;// 0x18, size 4 (0x4)
	// m_iLobbyPlayerTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bFullyJoinedServer;// 0x1c, size 1 (0x1)
	// m_bFullyJoinedServer metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bFakeClient;// 0x1d, size 1 (0x1)
	// m_bFakeClient metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bIsBroadcaster;// 0x1e, size 1 (0x1)
	// m_bIsBroadcaster metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iBroadcasterChannel;// 0x20, size 4 (0x4)
	// m_iBroadcasterChannel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iBroadcasterChannelSlot;// 0x24, size 4 (0x4)
	// m_iBroadcasterChannelSlot metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsBroadcasterChannelCameraman;// 0x28, size 1 (0x1)
	// m_bIsBroadcasterChannelCameraman metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iConnectionState;// 0x2c, size 4 (0x4)
	// m_iConnectionState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(8)) uint64_t m_iPlayerSteamID;// 0x30, size 8 (0x8)
	// m_iPlayerSteamID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
}; // size: 56 (0x38)
#pragma pack(pop)

class CEnvWindShared : public SchemaBase
{
// CEnvWindShared additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public: 
	#pragma pack(push, 4)
	class WindAveEvent_t
	{
	// CEnvWindShared::WindAveEvent_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(4)) float m_flStartWindSpeed;// 0x0, size 4 (0x4)
		__declspec(align(4)) float m_flAveWindSpeed;// 0x4, size 4 (0x4)
	}; // size: 8 (0x8)
	#pragma pack(pop)

	#pragma pack(push, 4)
	class WindVariationEvent_t
	{
	// CEnvWindShared::WindVariationEvent_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(4)) float m_flWindAngleVariation;// 0x0, size 4 (0x4)
		__declspec(align(4)) float m_flWindSpeedVariation;// 0x4, size 4 (0x4)
	}; // size: 8 (0x8)
	#pragma pack(pop)

public:
	__declspec(align(4)) float m_flStartTime;// 0x4, size 4 (0x4)
	// m_flStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iWindSeed;// 0x8, size 4 (0x4)
	// m_iWindSeed metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_iMinWind;// 0xc, size 2 (0x2)
	// m_iMinWind metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(2)) uint16_t m_iMaxWind;// 0xe, size 2 (0x2)
	// m_iMaxWind metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(4)) int32_t m_windRadius;// 0x10, size 4 (0x4)
	// m_windRadius metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(2)) uint16_t m_iMinGust;// 0x14, size 2 (0x2)
	// m_iMinGust metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(2)) uint16_t m_iMaxGust;// 0x16, size 2 (0x2)
	// m_iMaxGust metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(4)) float m_flMinGustDelay;// 0x18, size 4 (0x4)
	// m_flMinGustDelay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float m_flMaxGustDelay;// 0x1c, size 4 (0x4)
	// m_flMaxGustDelay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float m_flGustDuration;// 0x20, size 4 (0x4)
	// m_flGustDuration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(2)) uint16_t m_iGustDirChange;// 0x24, size 2 (0x2)
	// m_iGustDirChange metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0xc, class Vector> m_location;// 0x28, size 12 (0xc)
	// m_location metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) int32_t m_iszGustSound;// 0x34, size 4 (0x4)
	__declspec(align(4)) int32_t m_iWindDir;// 0x38, size 4 (0x4)
	__declspec(align(4)) float m_flWindSpeed;// 0x3c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_currentWindVector;// 0x40, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_CurrentSwayVector;// 0x4c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_PrevSwayVector;// 0x58, size 12 (0xc)
	__declspec(align(2)) uint16_t m_iInitialWindDir;// 0x64, size 2 (0x2)
	// m_iInitialWindDir metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float m_flInitialWindSpeed;// 0x68, size 4 (0x4)
	// m_flInitialWindSpeed metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) CEntityIOOutput m_OnGustStart;// 0x6c, size 8 (0x8)
	// m_OnGustStart metadata
	 // MKeyfieldname
	__declspec(align(4)) CEntityIOOutput m_OnGustEnd;// 0x74, size 8 (0x8)
	// m_OnGustEnd metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flVariationTime;// 0x7c, size 4 (0x4)
	__declspec(align(4)) float m_flSwayTime;// 0x80, size 4 (0x4)
	__declspec(align(4)) float m_flSimTime;// 0x84, size 4 (0x4)
	__declspec(align(4)) float m_flSwitchTime;// 0x88, size 4 (0x4)
	__declspec(align(4)) float m_flAveWindSpeed;// 0x8c, size 4 (0x4)
	__declspec(align(1)) bool m_bGusting;// 0x90, size 1 (0x1)
	__declspec(align(4)) float m_flWindAngleVariation;// 0x94, size 4 (0x4)
	__declspec(align(4)) float m_flWindSpeedVariation;// 0x98, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CEntityIndex> m_iEntIndex;// 0x9c, size 4 (0x4)
char CEnvWindShared_0214[0x174];
}; // size: 532 (0x214)

#pragma pack(push, 16)
class C_OP_RenderRopes : public CBaseRendererSource2
{
// C_OP_RenderRopes additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flRadiusTaper;// 0x210, size 4 (0x4)
	// m_flRadiusTaper metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMinTesselation;// 0x214, size 4 (0x4)
	// m_nMinTesselation metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxTesselation;// 0x218, size 4 (0x4)
	// m_nMaxTesselation metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTessScale;// 0x21c, size 4 (0x4)
	// m_flTessScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTextureVWorldSize;// 0x220, size 4 (0x4)
	// m_flTextureVWorldSize metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTextureVScrollRate;// 0x224, size 4 (0x4)
	// m_flTextureVScrollRate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTextureVOffset;// 0x228, size 4 (0x4)
	// m_flTextureVOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFinalTextureScaleU;// 0x22c, size 4 (0x4)
	// m_flFinalTextureScaleU metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFinalTextureScaleV;// 0x230, size 4 (0x4)
	// m_flFinalTextureScaleV metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFinalTextureOffsetU;// 0x234, size 4 (0x4)
	// m_flFinalTextureOffsetU metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFinalTextureOffsetV;// 0x238, size 4 (0x4)
	// m_flFinalTextureOffsetV metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bClampV;// 0x23c, size 1 (0x1)
	// m_bClampV metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOrientationType;// 0x240, size 4 (0x4)
	// m_nOrientationType metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceEnumName
	__declspec(align(4)) int32_t m_nScaleCP1;// 0x244, size 4 (0x4)
	// m_nScaleCP1 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCP2;// 0x248, size 4 (0x4)
	// m_nScaleCP2 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flScaleVSizeByControlPointDistance;// 0x24c, size 4 (0x4)
	// m_flScaleVSizeByControlPointDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flScaleVScrollByControlPointDistance;// 0x250, size 4 (0x4)
	// m_flScaleVScrollByControlPointDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flScaleVOffsetByControlPointDistance;// 0x254, size 4 (0x4)
	// m_flScaleVOffsetByControlPointDistance metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RenderRopes_0259[0x1];
	__declspec(align(1)) bool m_bDrawAsOpaque;// 0x259, size 1 (0x1)
	// m_bDrawAsOpaque metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bGenerateNormals;// 0x25a, size 1 (0x1)
	// m_bGenerateNormals metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bReverseOrder;// 0x25b, size 1 (0x1)
	// m_bReverseOrder metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadiusScale;// 0x25c, size 4 (0x4)
	// m_flRadiusScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 608 (0x260)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RadiusFromCPObject : public CParticleInitializerOperatorInstance
{
// C_INIT_RadiusFromCPObject additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPoint;// 0x70, size 4 (0x4)
	// m_nControlPoint metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RadiusFromCPObject_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_SequenceLifeTime : public CParticleInitializerOperatorInstance
{
// C_INIT_SequenceLifeTime additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flFramerate;// 0x70, size 4 (0x4)
	// m_flFramerate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_SequenceLifeTime_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 8)
class CRMSG_Resource_Event
{
// CRMSG_Resource_Event additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) uint64_t m_nResourceId;// 0x0, size 8 (0x8)
	__declspec(align(4)) RMSG_EventType_t m_nEvent;// 0x8, size 4 (0x4)
	__declspec(align(4)) RMSG_SubEventType_t m_nSubEvent;// 0xc, size 4 (0x4)
	__declspec(align(8)) int64_t m_nTimeUS;// 0x10, size 8 (0x8)
	__declspec(align(4)) uint32_t m_nManifestIndex;// 0x18, size 4 (0x4)
char CRMSG_Resource_Event_020[0x4];
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceArgumentDependency_t
{
// ResourceArgumentDependency_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_ParameterName;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_ParameterType;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFingerprint;// 0x8, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFingerprintDefault;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

class IHandleEntity : public SchemaBase
{
// IHandleEntity additional information
// worldrenderer.dll, project entity2
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 16)
class C_OP_RenderAsModels : public CParticleRenderOperatorInstance
{
// C_OP_RenderAsModels additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ModelReference_t > m_ModelList;// 0xa0, size 8 (0x8)
	// m_ModelList metadata
	 // MAttributeName
char C_OP_RenderAsModels_0AC[0x4];
	__declspec(align(4)) float m_flModelScale;// 0xac, size 4 (0x4)
	// m_flModelScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bFitToModelSize;// 0xb0, size 1 (0x1)
	// m_bFitToModelSize metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bNonUniformScaling;// 0xb1, size 1 (0x1)
	// m_bNonUniformScaling metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nXAxisScalingAttribute;// 0xb4, size 4 (0x4)
	// m_nXAxisScalingAttribute metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nYAxisScalingAttribute;// 0xb8, size 4 (0x4)
	// m_nYAxisScalingAttribute metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nZAxisScalingAttribute;// 0xbc, size 4 (0x4)
	// m_nZAxisScalingAttribute metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nSizeCullBloat;// 0xc0, size 4 (0x4)
	// m_nSizeCullBloat metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_OP_RenderAsModels_0D0[0xC];
}; // size: 208 (0xd0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_InterpolateRadius : public CParticlePerFrameOperatorInstance
{
// C_OP_InterpolateRadius additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_flStartTime;// 0x60, size 4 (0x4)
	// m_flStartTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x64, size 4 (0x4)
	// m_flEndTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartScale;// 0x68, size 4 (0x4)
	// m_flStartScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndScale;// 0x6c, size 4 (0x4)
	// m_flEndScale metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bEaseInAndOut;// 0x70, size 1 (0x1)
	// m_bEaseInAndOut metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBias;// 0x74, size 4 (0x4)
	// m_flBias metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_InterpolateRadius_090[0x18];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_PositionPlaceOnGround : public CParticleInitializerOperatorInstance
{
// C_INIT_PositionPlaceOnGround additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) float m_flOffset;// 0x70, size 4 (0x4)
	// m_flOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxTraceLength;// 0x74, size 4 (0x4)
	// m_flMaxTraceLength metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x78, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_PositionPlaceOnGround_0FC[0x4];
	__declspec(align(1)) bool m_bKill;// 0xfc, size 1 (0x1)
	// m_bKill metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bIncludeWater;// 0xfd, size 1 (0x1)
	// m_bIncludeWater metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetNormal;// 0xfe, size 1 (0x1)
	// m_bSetNormal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetPXYZOnly;// 0xff, size 1 (0x1)
	// m_bSetPXYZOnly metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffsetByRadiusFactor;// 0x100, size 4 (0x4)
	// m_flOffsetByRadiusFactor metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_PositionPlaceOnGround_0110[0xC];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceIKLink_t
{
// AnimResourceIKLink_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t bone;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> kneeDir;// 0x4, size 12 (0xc)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceActivity_t
{
// AnimResourceActivity_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nActivity;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nFlags;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nWeight;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceUserDifference_t
{
// AnimResourceUserDifference_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nType;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class C_PlayerLocalData : public SchemaBase
{
// C_PlayerLocalData additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) ChangeAccessorFieldPathIndex_t m_NetworkVar_PathIndex;// 0x4, size 2 (0x2)
	// m_NetworkVar_PathIndex metadata
	 // MNetworkDisable
char C_PlayerLocalData_0C[0x6];
	__declspec(align(1)) uint8_t m_chAreaBits[32];// 0xc, size 32 (0x20)
	// m_chAreaBits metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_chAreaPortalBits[24];// 0x2c, size 24 (0x18)
	// m_chAreaPortalBits metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nStepside;// 0x44, size 4 (0x4)
	__declspec(align(4)) int32_t m_nOldButtons;// 0x48, size 4 (0x4)
	__declspec(align(4)) float m_flFOVRate;// 0x4c, size 4 (0x4)
	// m_flFOVRate metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iHideHUD;// 0x50, size 4 (0x4)
	// m_iHideHUD metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) uint32_t m_nDuckTimeMsecs;// 0x54, size 4 (0x4)
	// m_nDuckTimeMsecs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	__declspec(align(4)) uint32_t m_nDuckJumpTimeMsecs;// 0x58, size 4 (0x4)
	// m_nDuckJumpTimeMsecs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) uint32_t m_nJumpTimeMsecs;// 0x5c, size 4 (0x4)
	// m_nJumpTimeMsecs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float m_flFallVelocity;// 0x60, size 4 (0x4)
	// m_flFallVelocity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkMinValue
	 // MNetworkMaxValue
	__declspec(align(4)) float m_flStepSize;// 0x64, size 4 (0x4)
	// m_flStepSize metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkEncodeFlags
	 // MNetworkMinValue
	 // MNetworkMaxValue
	__declspec(align(1)) bool m_bDucked;// 0x68, size 1 (0x1)
	// m_bDucked metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bDucking;// 0x69, size 1 (0x1)
	// m_bDucking metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bInDuckJump;// 0x6a, size 1 (0x1)
	// m_bInDuckJump metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bDrawViewmodel;// 0x6b, size 1 (0x1)
	// m_bDrawViewmodel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bWearingSuit;// 0x6c, size 1 (0x1)
	// m_bWearingSuit metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bPoisoned;// 0x6d, size 1 (0x1)
	// m_bPoisoned metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAllowAutoMovement;// 0x6e, size 1 (0x1)
	// m_bAllowAutoMovement metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSlowMovement;// 0x6f, size 1 (0x1)
	// m_bSlowMovement metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAutoAimTarget;// 0x70, size 1 (0x1)
	// m_bAutoAimTarget metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) sky3dparams_t m_skybox3d;// 0x74, size 116 (0x74)
	// m_skybox3d metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) audioparams_t m_audio;// 0xe8, size 112 (0x70)
	// m_audio metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bInLanding;// 0x158, size 1 (0x1)
	__declspec(align(4)) float m_flLandingTime;// 0x15c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecClientBaseVelocity;// 0x160, size 12 (0xc)
}; // size: 364 (0x16c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderClothForce : public CParticleRenderOperatorInstance
{
// C_OP_RenderClothForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderSprites : public CBaseRendererSource2
{
// C_OP_RenderSprites additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nSequenceOverride;// 0x210, size 4 (0x4)
	// m_nSequenceOverride metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOrientationType;// 0x214, size 4 (0x4)
	// m_nOrientationType metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MPropertyAttributeChoiceEnumName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOrientationControlPoint;// 0x218, size 4 (0x4)
	// m_nOrientationControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinSize;// 0x21c, size 4 (0x4)
	// m_flMinSize metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flMaxSize;// 0x220, size 4 (0x4)
	// m_flMaxSize metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flStartFadeSize;// 0x224, size 4 (0x4)
	// m_flStartFadeSize metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flEndFadeSize;// 0x228, size 4 (0x4)
	// m_flEndFadeSize metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flStartFadeDot;// 0x22c, size 4 (0x4)
	// m_flStartFadeDot metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flEndFadeDot;// 0x230, size 4 (0x4)
	// m_flEndFadeDot metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flDepthBias;// 0x234, size 4 (0x4)
	// m_flDepthBias metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flFinalTextureScaleU;// 0x238, size 4 (0x4)
	// m_flFinalTextureScaleU metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flFinalTextureScaleV;// 0x23c, size 4 (0x4)
	// m_flFinalTextureScaleV metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flFinalTextureOffsetU;// 0x240, size 4 (0x4)
	// m_flFinalTextureOffsetU metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flFinalTextureOffsetV;// 0x244, size 4 (0x4)
	// m_flFinalTextureOffsetV metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flCenterXOffset;// 0x248, size 4 (0x4)
	// m_flCenterXOffset metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flCenterYOffset;// 0x24c, size 4 (0x4)
	// m_flCenterYOffset metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flZoomAmount0;// 0x250, size 4 (0x4)
	// m_flZoomAmount0 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flZoomAmount1;// 0x254, size 4 (0x4)
	// m_flZoomAmount1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bDistanceAlpha;// 0x258, size 1 (0x1)
	// m_bDistanceAlpha metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bSoftEdges;// 0x259, size 1 (0x1)
	// m_bSoftEdges metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flEdgeSoftnessStart;// 0x25c, size 4 (0x4)
	// m_flEdgeSoftnessStart metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flEdgeSoftnessEnd;// 0x260, size 4 (0x4)
	// m_flEdgeSoftnessEnd metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) bool m_bOutline;// 0x264, size 1 (0x1)
	// m_bOutline metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(1)) UnknownType <0x4, class Color> m_OutlineColor;// 0x265, size 4 (0x4)
	// m_OutlineColor metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) int32_t m_nOutlineAlpha;// 0x26c, size 4 (0x4)
	// m_nOutlineAlpha metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	 // MPropertyGroupName
	__declspec(align(4)) float m_flOutlineStart0;// 0x270, size 4 (0x4)
	// m_flOutlineStart0 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flOutlineStart1;// 0x274, size 4 (0x4)
	// m_flOutlineStart1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flOutlineEnd0;// 0x278, size 4 (0x4)
	// m_flOutlineEnd0 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
	__declspec(align(4)) float m_flOutlineEnd1;// 0x27c, size 4 (0x4)
	// m_flOutlineEnd1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyGroupName
}; // size: 640 (0x280)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_TimeVaryingForce : public CParticleForceOperatorInstance
{
// C_OP_TimeVaryingForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flStartLerpTime;// 0x60, size 4 (0x4)
	// m_flStartLerpTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_StartingForce;// 0x64, size 12 (0xc)
	// m_StartingForce metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flEndLerpTime;// 0x70, size 4 (0x4)
	// m_flEndLerpTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_EndingForce;// 0x74, size 12 (0xc)
	// m_EndingForce metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class CEnvCubemapBase : public SchemaBase
{
// CEnvCubemapBase additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CEnvCubemapBase_08[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeCTextureBase > m_hCubemapTexture;// 0x8, size 4 (0x4)
	// m_hCubemapTexture metadata
	 // MKeyfieldname
	__declspec(align(4)) float m_flInfluenceRadius;// 0xc, size 4 (0x4)
	// m_flInfluenceRadius metadata
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vBoxProjectMins;// 0x10, size 12 (0xc)
	// m_vBoxProjectMins metadata
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vBoxProjectMaxs;// 0x1c, size 12 (0xc)
	// m_vBoxProjectMaxs metadata
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_LightGroups;// 0x28, size 4 (0x4)
	// m_LightGroups metadata
	 // MKeyfieldname
	__declspec(align(1)) bool m_bStartDisabled;// 0x2c, size 1 (0x1)
	// m_bStartDisabled metadata
	 // MKeyfieldname
char CEnvCubemapBase_034[0x7];
}; // size: 52 (0x34)
#pragma pack(pop)

#pragma pack(push, 8)
class ConceptHistory_t
{
// ConceptHistory_t additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float timeSpoken;// 0x0, size 4 (0x4)
char ConceptHistory_t_08[0x4];
	__declspec(align(8)) CRR_Response m_response;// 0x8, size 408 (0x198)
}; // size: 416 (0x1a0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapDirectionToCPToVector : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapDirectionToCPToVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x60, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flScale;// 0x68, size 4 (0x4)
	// m_flScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffsetRot;// 0x6c, size 4 (0x4)
	// m_flOffsetRot metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffsetAxis;// 0x70, size 12 (0xc)
	// m_vecOffsetAxis metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) bool m_bNormalize;// 0x7c, size 1 (0x1)
	// m_bNormalize metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapDirectionToCPToVector_080[0x3];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapModelVolumetoCP : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapModelVolumetoCP additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nInControlPointNumber;// 0x60, size 4 (0x4)
	// m_nInControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOutControlPointNumber;// 0x64, size 4 (0x4)
	// m_nOutControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMin;// 0x68, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x6c, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x70, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x74, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapModelVolumetoCP_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class VPhysics2ShapeDef_t
{
// VPhysics2ShapeDef_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnSphereDesc_t > m_spheres;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnCapsuleDesc_t > m_capsules;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnHullDesc_t > m_hulls;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RnMeshDesc_t > m_meshes;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint16_t > m_CollisionAttributeIndices;// 0x20, size 8 (0x8)
}; // size: 40 (0x28)
#pragma pack(pop)

class CResponseQueue : public SchemaBase
{
// CResponseQueue additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public: 
	class CDeferredResponse : public SchemaBase
	{
	// CResponseQueue::CDeferredResponse additional information
	// Alignment: -1
	// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
	// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
	// Abstract Class

	public:
char CDeferredResponse_0C[0x8];
		__declspec(align(1)) CResponseCriteriaSet m_contexts;// 0xc, size 40 (0x28)
		__declspec(align(4)) float m_fDispatchTime;// 0x34, size 4 (0x4)
		__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hIssuer;// 0x38, size 4 (0x4)
char CDeferredResponse_044[0x8];
	}; // size: 68 (0x44)

public:
char CResponseQueue_030[0x2C];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, CAI_Expresser *> m_ExpresserTargets;// 0x30, size 16 (0x10)
}; // size: 64 (0x40)

#pragma pack(push, 4)
class CBaseAnimatingOverlayController : public CBaseAnimatingController
{
// CBaseAnimatingOverlayController additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CAnimationLayer > m_AnimOverlay;// 0x214, size 16 (0x10)
	// m_AnimOverlay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	 // MNetworkChangeCallback
char CBaseAnimatingOverlayController_0244[0x20];
}; // size: 580 (0x244)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_WorldCollideConstraint : public CParticleConstraintOperatorInstance
{
// C_OP_WorldCollideConstraint additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ColorInterpolate : public CParticlePerFrameOperatorInstance
{
// C_OP_ColorInterpolate additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(1)) UnknownType <0x4, class Color> m_ColorFade;// 0x60, size 4 (0x4)
	// m_ColorFade metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_ColorInterpolate_070[0xC];
	__declspec(align(4)) float m_flFadeStartTime;// 0x70, size 4 (0x4)
	// m_flFadeStartTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flFadeEndTime;// 0x74, size 4 (0x4)
	// m_flFadeEndTime metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x78, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(1)) bool m_bEaseInOut;// 0x7c, size 1 (0x1)
	// m_bEaseInOut metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_ColorInterpolate_080[0x3];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class ItemDropData_t
{
// ItemDropData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) char* pszItemName;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t nChance;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t nReqLevel;// 0x8, size 4 (0x4)
	__declspec(align(1)) bool bMustBeChampion;// 0xc, size 1 (0x1)
char ItemDropData_t_010[0x3];
}; // size: 16 (0x10)
#pragma pack(pop)

class IParticleCollection : public SchemaBase
{
// IParticleCollection additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char IParticleCollection_08[0x4];
}; // size: 8 (0x8)

#pragma pack(push, 16)
class C_INIT_CodeDriven : public CParticleInitializerOperatorInstance
{
// C_INIT_CodeDriven additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bPosition;// 0x70, size 1 (0x1)
	// m_bPosition metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bPrevPosition;// 0x71, size 1 (0x1)
	// m_bPrevPosition metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRadius;// 0x72, size 1 (0x1)
	// m_bRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRotation;// 0x73, size 1 (0x1)
	// m_bRotation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bColor;// 0x74, size 1 (0x1)
	// m_bColor metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAlpha;// 0x75, size 1 (0x1)
	// m_bAlpha metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSequence;// 0x76, size 1 (0x1)
	// m_bSequence metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSequence1;// 0x77, size 1 (0x1)
	// m_bSequence1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_CodeDriven_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeWorld_t
{
// InfoForResourceTypeWorld_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeWorld_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCEntityLump
{
// InfoForResourceTypeCEntityLump additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCEntityLump_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class CParticleProperty
{
// CParticleProperty additional information
// client.dll, project particleslib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CParticleProperty_018[0x18];
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class MaterialParamVector_t : public MaterialParam_t
{
// MaterialParamVector_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_value;// 0x4, size 16 (0x10)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class VertexPositionNormal_t
{
// VertexPositionNormal_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vPosition;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vNormal;// 0xc, size 12 (0xc)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetSingleControlPointPosition : public CParticlePerFrameOperatorInstance
{
// C_OP_SetSingleControlPointPosition additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bUseWorldLocation;// 0x60, size 1 (0x1)
	// m_bUseWorldLocation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetOnce;// 0x61, size 1 (0x1)
	// m_bSetOnce metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP1;// 0x64, size 4 (0x4)
	// m_nCP1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCP1Pos;// 0x68, size 12 (0xc)
	// m_vecCP1Pos metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nHeadLocation;// 0x74, size 4 (0x4)
	// m_nHeadLocation metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetSingleControlPointPosition_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

class C_CEnvWindShared : public SchemaBase
{
// C_CEnvWindShared additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public: 
	#pragma pack(push, 4)
	class WindAveEvent_t
	{
	// C_CEnvWindShared::WindAveEvent_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(4)) float m_flStartWindSpeed;// 0x0, size 4 (0x4)
		__declspec(align(4)) float m_flAveWindSpeed;// 0x4, size 4 (0x4)
	}; // size: 8 (0x8)
	#pragma pack(pop)

	#pragma pack(push, 4)
	class WindVariationEvent_t
	{
	// C_CEnvWindShared::WindVariationEvent_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(4)) float m_flWindAngleVariation;// 0x0, size 4 (0x4)
		__declspec(align(4)) float m_flWindSpeedVariation;// 0x4, size 4 (0x4)
	}; // size: 8 (0x8)
	#pragma pack(pop)

public:
	__declspec(align(4)) float m_flStartTime;// 0x4, size 4 (0x4)
	// m_flStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_iWindSeed;// 0x8, size 4 (0x4)
	// m_iWindSeed metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(2)) uint16_t m_iMinWind;// 0xc, size 2 (0x2)
	// m_iMinWind metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(2)) uint16_t m_iMaxWind;// 0xe, size 2 (0x2)
	// m_iMaxWind metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(4)) int32_t m_windRadius;// 0x10, size 4 (0x4)
	// m_windRadius metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(2)) uint16_t m_iMinGust;// 0x14, size 2 (0x2)
	// m_iMinGust metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(2)) uint16_t m_iMaxGust;// 0x16, size 2 (0x2)
	// m_iMaxGust metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(4)) float m_flMinGustDelay;// 0x18, size 4 (0x4)
	// m_flMinGustDelay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float m_flMaxGustDelay;// 0x1c, size 4 (0x4)
	// m_flMaxGustDelay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(4)) float m_flGustDuration;// 0x20, size 4 (0x4)
	// m_flGustDuration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	__declspec(align(2)) uint16_t m_iGustDirChange;// 0x24, size 2 (0x2)
	// m_iGustDirChange metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0xc, class Vector> m_location;// 0x28, size 12 (0xc)
	// m_location metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkEncoder
	__declspec(align(4)) int32_t m_iszGustSound;// 0x34, size 4 (0x4)
	__declspec(align(4)) int32_t m_iWindDir;// 0x38, size 4 (0x4)
	__declspec(align(4)) float m_flWindSpeed;// 0x3c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_currentWindVector;// 0x40, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_CurrentSwayVector;// 0x4c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_PrevSwayVector;// 0x58, size 12 (0xc)
	__declspec(align(2)) uint16_t m_iInitialWindDir;// 0x64, size 2 (0x2)
	// m_iInitialWindDir metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float m_flInitialWindSpeed;// 0x68, size 4 (0x4)
	// m_flInitialWindSpeed metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flVariationTime;// 0x6c, size 4 (0x4)
	__declspec(align(4)) float m_flSwayTime;// 0x70, size 4 (0x4)
	__declspec(align(4)) float m_flSimTime;// 0x74, size 4 (0x4)
	__declspec(align(4)) float m_flSwitchTime;// 0x78, size 4 (0x4)
	__declspec(align(4)) float m_flAveWindSpeed;// 0x7c, size 4 (0x4)
	__declspec(align(1)) bool m_bGusting;// 0x80, size 1 (0x1)
	__declspec(align(4)) float m_flWindAngleVariation;// 0x84, size 4 (0x4)
	__declspec(align(4)) float m_flWindSpeedVariation;// 0x88, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CEntityIndex> m_iEntIndex;// 0x8c, size 4 (0x4)
char C_CEnvWindShared_0204[0x174];
}; // size: 516 (0x204)

#pragma pack(push, 4)
class CSchemaBaseClassInfo : public SchemaBaseClassInfoData_t
{
// CSchemaBaseClassInfo additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class CPlayerState : public SchemaBase
{
// CPlayerState additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool deadflag;// 0x4, size 1 (0x1)
	__declspec(align(1)) bool hltv;// 0x5, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class QAngle> v_angle;// 0x8, size 12 (0xc)
	__declspec(align(1)) bool hmd_active;// 0x14, size 1 (0x1)
	__declspec(align(1)) bool hmd_hand1_active;// 0x15, size 1 (0x1)
	__declspec(align(1)) bool hmd_hand2_active;// 0x16, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> hmd_middle_eye;// 0x18, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> hmd_viewangles;// 0x24, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> hmd_hand1;// 0x30, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> hmd_hand1_angles;// 0x3c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> hmd_hand2;// 0x48, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class QAngle> hmd_hand2_angles;// 0x54, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> netname;// 0x60, size 4 (0x4)
	__declspec(align(4)) int32_t fixangle;// 0x64, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class QAngle> anglechange;// 0x68, size 12 (0xc)
	__declspec(align(4)) int32_t frags;// 0x74, size 4 (0x4)
	__declspec(align(4)) int32_t deaths;// 0x78, size 4 (0x4)
}; // size: 124 (0x7c)
#pragma pack(pop)

class CEntityClass : public SchemaBase
{
// CEntityClass additional information
// worldrenderer.dll, project entity2
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public: 
	#pragma pack(push, 2)
	class ComponentOffsets_t
	{
	// CEntityClass::ComponentOffsets_t additional information
	// Alignment: 2
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(2)) uint16_t m_nBaseOffset;// 0x0, size 2 (0x2)
		__declspec(align(2)) uint16_t m_nPostReferenceOffset;// 0x2, size 2 (0x2)
	}; // size: 4 (0x4)
	#pragma pack(pop)

	#pragma pack(push, 4)
	class ComponentHelper_t
	{
	// CEntityClass::ComponentHelper_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
	// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
	// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

	public:
		__declspec(align(4)) uint32_t m_offset;// 0x0, size 4 (0x4)
char ComponentHelper_t_08[0x4];
	}; // size: 8 (0x8)
	#pragma pack(pop)

	#pragma pack(push, 1)
	class CClassAttributes
	{
	// CEntityClass::CClassAttributes additional information
	// Alignment: 1
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
char CClassAttributes_01[0x1];
	}; // size: 1 (0x1)
	#pragma pack(pop)

public:
char CEntityClass_08[0x4];
	__declspec(align(4)) EntInput_t *m_pInputs;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nInputCount;// 0xc, size 4 (0x4)
	__declspec(align(4)) EntOutput_t *m_pOutputs;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nOutputCount;// 0x14, size 4 (0x4)
	__declspec(align(4)) EntClassComponentOverride_t *m_pComponentOverrides;// 0x18, size 4 (0x4)
	__declspec(align(4)) int32_t m_iRuntimeIndex;// 0x1c, size 4 (0x4)
	__declspec(align(4)) CEntityClassInfo *m_pClassInfo;// 0x20, size 4 (0x4)
	__declspec(align(4)) CEntityClassInfo *m_pBaseClassInfo;// 0x24, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_designerName;// 0x28, size 4 (0x4)
	__declspec(align(4)) uint32_t m_flags;// 0x2c, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nAllHelpersFlags;// 0x30, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CEntityClass::ComponentOffsets_t > m_ComponentOffsets;// 0x34, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CEntityClass::ComponentHelper_t > m_AllHelpers;// 0x44, size 16 (0x10)
char CEntityClass_016C[0x118];
	__declspec(align(4)) UnknownType <0x4, class CEntityHandle> m_requiredEHandle;// 0x16c, size 4 (0x4)
char CEntityClass_0174[0x4];
	__declspec(align(4)) int32_t m_nThinks;// 0x174, size 4 (0x4)
	__declspec(align(4)) CEntityClass *m_pNextClass;// 0x178, size 4 (0x4)
char CEntityClass_0184[0x8];
public:
	static UnknownAtomicType <0x10, CUtlVector, bool > Get_gm_fComponentsContained() {return *(UnknownAtomicType <0x10, CUtlVector, bool > *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CEntityClass")->m_staticMembers.data[0].m_pInstance; }
	static UnknownAtomicType <0x10, CUtlVector, bool > Get_gm_fComponentsAccessible() {return *(UnknownAtomicType <0x10, CUtlVector, bool > *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CEntityClass")->m_staticMembers.data[1].m_pInstance; }
	static UnknownAtomicType <0x10, CUtlVector, EntComponentInfo_t *> Get_gm_ComponentInfosById() {return *(UnknownAtomicType <0x10, CUtlVector, EntComponentInfo_t *> *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CEntityClass")->m_staticMembers.data[2].m_pInstance; }
	static CEntityClass::CClassAttributes Get_gm_ClassAttributes() {return *(CEntityClass::CClassAttributes *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CEntityClass")->m_staticMembers.data[3].m_pInstance; }
}; // size: 388 (0x184)

#pragma pack(push, 16)
class C_OP_VelocityDecay : public CParticlePerFrameOperatorInstance
{
// C_OP_VelocityDecay additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMinVelocity;// 0x60, size 4 (0x4)
	// m_flMinVelocity metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_VelocityDecay_070[0xC];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LerpVector : public CParticlePerFrameOperatorInstance
{
// C_OP_LerpVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOutput;// 0x64, size 12 (0xc)
	// m_vecOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) float m_flStartTime;// 0x70, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0x74, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x78, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_LerpVector_080[0x7];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RemapCPOrientationToRotations : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapCPOrientationToRotations additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x70, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRotation;// 0x74, size 12 (0xc)
	// m_vecRotation metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class VPhysXRange_t
{
// VPhysXRange_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flMin;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flMax;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class CSchemaSystemInternalRegistration
{
// CSchemaSystemInternalRegistration additional information
// schemasystem.dll, project schemasystem
// Alignment: 16

public:
	__declspec(align(4)) UnknownType <0x8, class Vector2D> m_Vector2D;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_Vector;// 0x8, size 12 (0xc)
	__declspec(align(16)) UnknownType <0x10, class VectorAligned> m_VectorAligned;// 0x20, size 16 (0x10)
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_QAngle;// 0x30, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class RadianEuler> m_RadianEuler;// 0x3c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class DegreeEuler> m_DegreeEuler;// 0x48, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_Quaternion;// 0x54, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x30, class matrix3x4_t> m_matrix3x4_t;// 0x64, size 48 (0x30)
	__declspec(align(16)) UnknownType <0x30, class matrix3x4a_t> m_matrix3x4a_t;// 0xa0, size 48 (0x30)
	__declspec(align(1)) UnknownType <0x4, class Color> m_Color;// 0xd0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_Vector4D;// 0xd4, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x20, class CTransform> m_CTransform;// 0xf0, size 32 (0x20)
	__declspec(align(4)) UnknownType <0x1, class KeyValues> *m_pKeyValues;// 0x110, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x10, class CUtlBinaryBlock> m_CUtlBinaryBlock;// 0x114, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_CUtlString;// 0x124, size 4 (0x4)
	__declspec(align(2)) UnknownType <0x2, class CUtlSymbol> m_CUtlSymbol;// 0x128, size 2 (0x2)
	__declspec(align(4)) CSchemaClassInfo *m_ClassIntrospectionHandle_t;// 0x12c, size 4 (0x4)
	__declspec(align(4)) CSchemaEnumInfo *m_EnumIntrospectionHandle_t;// 0x130, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_stringToken;// 0x134, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x4, CResourcePointer, UnknownType <0x4, class CResourceString> > > m_ResourceTypes;// 0x138, size 8 (0x8)
}; // size: 320 (0x140)
#pragma pack(pop)

#pragma pack(push, 4)
class sPendingTreeRemoval
{
// sPendingTreeRemoval additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t nTeam;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t nIndex;// 0x4, size 4 (0x4)
	__declspec(align(4)) float fTimestamp;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class CollisionGroupContext_t
{
// CollisionGroupContext_t additional information
// particles.dll, project particles
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nCollisionGroupNumber;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceEncodeDifference_t
{
// AnimResourceEncodeDifference_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceBoneDifference_t > m_boneArray;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceMorphDifference_t > m_morphArray;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceUserDifference_t > m_userArray;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_bHasRotationBitArray;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_bHasMovementBitArray;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_bHasMorphBitArray;// 0x28, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_bHasUserBitArray;// 0x30, size 8 (0x8)
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 4)
class CStopwatchBase : public CSimpleSimTimer, public SchemaBase
{
// CStopwatchBase additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) bool m_fIsRunning;// 0x8, size 1 (0x1)
char CStopwatchBase_0C[0x3];
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderModels : public CParticleRenderOperatorInstance
{
// C_OP_RenderModels additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(1)) char m_ActivityName[256];// 0xa0, size 256 (0x100)
	// m_ActivityName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_EconSlotName[256];// 0x1a0, size 256 (0x100)
	// m_EconSlotName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ModelReference_t > m_ModelList;// 0x2a0, size 8 (0x8)
	// m_ModelList metadata
	 // MAttributeName
char C_OP_RenderModels_02AC[0x4];
	__declspec(align(1)) bool m_bIgnoreNormal;// 0x2ac, size 1 (0x1)
	// m_bIgnoreNormal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOrientZ;// 0x2ad, size 1 (0x1)
	// m_bOrientZ metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleAnimationRate;// 0x2ae, size 1 (0x1)
	// m_bScaleAnimationRate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bResetAnimOnStop;// 0x2af, size 1 (0x1)
	// m_bResetAnimOnStop metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bManualAnimFrame;// 0x2b0, size 1 (0x1)
	// m_bManualAnimFrame metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nAnimationScaleField;// 0x2b4, size 4 (0x4)
	// m_nAnimationScaleField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nSkin;// 0x2b8, size 4 (0x4)
	// m_nSkin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nBodyGroupField;// 0x2bc, size 4 (0x4)
	// m_nBodyGroupField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nSubModelField;// 0x2c0, size 4 (0x4)
	// m_nSubModelField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nAnimationField;// 0x2c4, size 4 (0x4)
	// m_nAnimationField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nManualFrameField;// 0x2c8, size 4 (0x4)
	// m_nManualFrameField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nLOD;// 0x2cc, size 4 (0x4)
	// m_nLOD metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeIMaterial2 > m_hOverrideMaterial;// 0x2d0, size 4 (0x4)
	// m_hOverrideMaterial metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	__declspec(align(4)) int32_t m_nSkinCP;// 0x2d4, size 4 (0x4)
	// m_nSkinCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nModelCP;// 0x2d8, size 4 (0x4)
	// m_nModelCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flAnimationRate;// 0x2dc, size 4 (0x4)
	// m_flAnimationRate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAnimated;// 0x2e0, size 1 (0x1)
	// m_bAnimated metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bForceDrawInterlevedWithSiblings;// 0x2e1, size 1 (0x1)
	// m_bForceDrawInterlevedWithSiblings metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOriginalModel;// 0x2e2, size 1 (0x1)
	// m_bOriginalModel metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSuppressTint;// 0x2e3, size 1 (0x1)
	// m_bSuppressTint metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RenderModels_02F0[0xC];
}; // size: 752 (0x2f0)
#pragma pack(pop)

#pragma pack(push, 4)
class SosEditItemInfo_t
{
// SosEditItemInfo_t additional information
// soundsystem.dll, project soundsystem
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) SosEditItemType_t itemType;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> itemName;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> itemTypeName;// 0x8, size 4 (0x4)
char SosEditItemInfo_t_010[0x4];
	__declspec(align(4)) UnknownType <0x4, class CUtlString> itemKVString;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x8, class Vector2D> itemPos;// 0x14, size 8 (0x8)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientPollInput_t
{
// EventClientPollInput_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) EngineLoopState_t m_LoopState;// 0x0, size 28 (0x1c)
	__declspec(align(4)) float m_flRealTime;// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class CBuilderModelInfo
{
// CBuilderModelInfo additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) uint32_t m_nFlags;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vHullMin;// 0x4, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vHullMax;// 0x10, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vViewMin;// 0x1c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vViewMax;// 0x28, size 12 (0xc)
	__declspec(align(4)) float m_flMass;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vEyePosition;// 0x38, size 12 (0xc)
	__declspec(align(4)) float m_flMaxEyeDeflection;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_sSurfaceProperty;// 0x48, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_keyValueText;// 0x4c, size 4 (0x4)
}; // size: 80 (0x50)
#pragma pack(pop)

#pragma pack(push, 4)
class FeFitInfluence_t
{
// FeFitInfluence_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t nVertexNode;// 0x0, size 4 (0x4)
	__declspec(align(4)) float flWeight;// 0x4, size 4 (0x4)
	__declspec(align(4)) uint32_t nMatrixNode;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

class CGameSceneNode : public SchemaBase
{
// CGameSceneNode additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(16)) UnknownType <0x30, class matrix3x4a_t> m_mNodeToWorld;// 0x10, size 48 (0x30)
	// m_mNodeToWorld metadata
	 // MNetworkDisable
	 // MIsWorldSpace
	__declspec(align(4)) CEntityInstance *m_pOwner;// 0x40, size 4 (0x4)
	// m_pOwner metadata
	 // MNetworkDisable
	__declspec(align(4)) CGameSceneNode *m_pParent;// 0x44, size 4 (0x4)
	// m_pParent metadata
	 // MNetworkDisable
	__declspec(align(4)) CGameSceneNode *m_pChild;// 0x48, size 4 (0x4)
	// m_pChild metadata
	 // MNetworkDisable
	__declspec(align(4)) CGameSceneNode *m_pNextSibling;// 0x4c, size 4 (0x4)
	// m_pNextSibling metadata
	 // MNetworkDisable
char CGameSceneNode_05C[0xC];
	__declspec(align(4)) CGameSceneNodeHandle m_hParent;// 0x5c, size 12 (0xc)
	// m_hParent metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkSerializer
	 // MNetworkChangeCallback
	 // MNetworkPriority
	__declspec(align(4)) CNetworkOriginCellCoordQuantizedVector m_vecOrigin;// 0x68, size 48 (0x30)
	// m_vecOrigin metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	 // MNetworkPriority
	 // MNetworkUserGroup
	 // MNetworkChangeCallback
char CGameSceneNode_09C[0x4];
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_angRotation;// 0x9c, size 12 (0xc)
	// m_angRotation metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	 // MNetworkPriority
	 // MNetworkSerializer
	 // MNetworkChangeCallback
	__declspec(align(4)) float m_flScale;// 0xa8, size 4 (0x4)
	// m_flScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	 // MNetworkPriority
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecAbsOrigin;// 0xac, size 12 (0xc)
	// m_vecAbsOrigin metadata
	 // MNetworkDisable
	 // MKeyfieldname
	 // MIsWorldSpace
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_angAbsRotation;// 0xb8, size 12 (0xc)
	// m_angAbsRotation metadata
	 // MNetworkDisable
	 // MKeyfieldname
	 // MIsWorldSpace
	__declspec(align(4)) float m_flAbsScale;// 0xc4, size 4 (0x4)
	// m_flAbsScale metadata
	 // MNetworkDisable
	__declspec(align(2)) int16_t m_nParentAttachmentOrBone;// 0xc8, size 2 (0x2)
	// m_nParentAttachmentOrBone metadata
	 // MNetworkDisable
	bool m_bDirtyHierarchy : 1;// 0x0, size 0 (0x0)
	// m_bDirtyHierarchy metadata
	 // MNetworkDisable
	bool m_bDormant : 1;// 0x0, size 0 (0x0)
	// m_bDormant metadata
	 // MNetworkDisable
	bool m_bForceParentToBeNetworked : 1;// 0x0, size 0 (0x0)
	// m_bForceParentToBeNetworked metadata
	 // MNetworkDisable
	bool m_bNetworkedPositionChanged : 1;// 0x0, size 0 (0x0)
	// m_bNetworkedPositionChanged metadata
	 // MNetworkDisable
	bool m_bNetworkedAnglesChanged : 1;// 0x0, size 0 (0x0)
	// m_bNetworkedAnglesChanged metadata
	 // MNetworkDisable
	bool m_bNetworkedScaleChanged : 1;// 0x0, size 0 (0x0)
	// m_bNetworkedScaleChanged metadata
	 // MNetworkDisable
	bool m_bWillBeCallingPostDataUpdate : 1;// 0x0, size 0 (0x0)
	// m_bWillBeCallingPostDataUpdate metadata
	 // MNetworkDisable
	bool m_bNotifyBoneTransformsChanged : 1;// 0x0, size 0 (0x0)
	// m_bNotifyBoneTransformsChanged metadata
	 // MNetworkDisable
	char m_nLatchAbsOrigin : 2;// 0x0, size 0 (0x0)
	// m_nLatchAbsOrigin metadata
	 // MNetworkDisable
	bool m_bDirtyBoneMergeBoneToRoot : 1;// 0x0, size 0 (0x0)
	// m_bDirtyBoneMergeBoneToRoot metadata
	 // MNetworkDisable
	__declspec(align(1)) uint8_t m_nHierarchicalDepth;// 0xcc, size 1 (0x1)
	// m_nHierarchicalDepth metadata
	 // MNetworkDisable
	__declspec(align(1)) uint8_t m_nHierarchyType;// 0xcd, size 1 (0x1)
	// m_nHierarchyType metadata
	 // MNetworkDisable
	__declspec(align(1)) uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount;// 0xce, size 1 (0x1)
	// m_nDoNotSetAnimTimeInInvalidatePhysicsCount metadata
	 // MNetworkDisable
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_name;// 0xd0, size 4 (0x4)
	// m_name metadata
	 // MNetworkEnable
	 // MNetworkEnable
char CGameSceneNode_0EC[0x18];
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_hierarchyAttachName;// 0xec, size 4 (0x4)
	// m_hierarchyAttachName metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MKeyfieldname
	 // MNetworkChangeCallback
char CGameSceneNode_0F4[0x4];
	__declspec(align(4)) float m_flZOffset;// 0xf4, size 4 (0x4)
	// m_flZOffset metadata
	 // MNetworkDisable
char CGameSceneNode_0100[0x8];
}; // size: 256 (0x100)

#pragma pack(push, 16)
class C_OP_ConstantForce : public CParticleForceOperatorInstance
{
// C_OP_ConstantForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nMinCol;// 0x60, size 4 (0x4)
	// m_nMinCol metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxCol;// 0x64, size 4 (0x4)
	// m_nMaxCol metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMinRow;// 0x68, size 4 (0x4)
	// m_nMinRow metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxRow;// 0x6c, size 4 (0x4)
	// m_nMaxRow metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vForce;// 0x70, size 12 (0xc)
	// m_vForce metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flBlendValue;// 0x7c, size 4 (0x4)
	// m_flBlendValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomYaw : public CGeneralRandomRotation
{
// C_INIT_RandomYaw additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 16)
class FeSimdQuad_t
{
// FeSimdQuad_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[4][4];// 0x0, size 32 (0x20)
	__declspec(align(16)) UnknownType <0x10, class fltx4> f4Slack;// 0x20, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x30, class FourVectors> vShape[4];// 0x30, size 192 (0xc0)
	__declspec(align(16)) UnknownType <0x10, class fltx4> f4Weights[4];// 0xf0, size 64 (0x40)
}; // size: 304 (0x130)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceEditStringData_t
{
// ResourceEditStringData_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_Name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_String;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t
{
// EventClientPostAdvanceTick_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 44 (0x2c)
#pragma pack(pop)

#pragma pack(push, 4)
class GameChatLogEntry_t
{
// GameChatLogEntry_t additional information
// server.dll, project server
// Alignment: 4

public:
	__declspec(align(4)) int32_t m_nTeam;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPlayerID;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_sText;// 0x8, size 4 (0x4)
	__declspec(align(4)) uint32_t m_unGameTime;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class CBaseServerVehicle : public IServerVehicle
{
// CBaseServerVehicle additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public: 
	#pragma pack(push, 4)
	class entryanim_t
	{
	// CBaseServerVehicle::entryanim_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(4)) int32_t iHitboxGroup;// 0x0, size 4 (0x4)
		__declspec(align(1)) char szAnimName[128];// 0x4, size 128 (0x80)
	}; // size: 132 (0x84)
	#pragma pack(pop)

	#pragma pack(push, 4)
	class exitanim_t
	{
	// CBaseServerVehicle::exitanim_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(1)) bool bUpright;// 0x0, size 1 (0x1)
		__declspec(align(1)) bool bEscapeExit;// 0x1, size 1 (0x1)
		__declspec(align(1)) char szAnimName[128];// 0x2, size 128 (0x80)
		__declspec(align(4)) UnknownType <0xc, class Vector> vecExitPointLocal;// 0x84, size 12 (0xc)
		__declspec(align(4)) UnknownType <0xc, class QAngle> vecExitAnglesLocal;// 0x90, size 12 (0xc)
	}; // size: 156 (0x9c)
	#pragma pack(pop)

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CPassengerInfo > m_PassengerInfo;// 0x4, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CPassengerRole > m_PassengerRoles;// 0x14, size 16 (0x10)
	__declspec(align(4)) CBaseEntity *m_pVehicle;// 0x24, size 4 (0x4)
char CBaseServerVehicle_02C[0x4];
	__declspec(align(4)) int32_t m_nNPCButtons;// 0x2c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPrevNPCButtons;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flTurnDegrees;// 0x34, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CBaseServerVehicle::entryanim_t > m_EntryAnimations;// 0x38, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CBaseServerVehicle::exitanim_t > m_ExitAnimations;// 0x48, size 16 (0x10)
	__declspec(align(1)) bool m_bParsedAnimations;// 0x58, size 1 (0x1)
	__declspec(align(1)) bool m_bUseLegacyExitChecks;// 0x59, size 1 (0x1)
	__declspec(align(4)) int32_t m_iCurrentExitAnim;// 0x5c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCurrentExitEndPoint;// 0x60, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_savedViewOffset;// 0x6c, size 12 (0xc)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CEntityBlocker > m_hExitBlocker;// 0x78, size 4 (0x4)
	__declspec(align(1)) char m_chPreviousTextureType;// 0x7c, size 1 (0x1)
	__declspec(align(4)) vehiclesounds_t m_vehicleSounds;// 0x80, size 232 (0xe8)
	__declspec(align(4)) float m_flVehicleVolume;// 0x168, size 4 (0x4)
	__declspec(align(4)) int32_t m_iSoundGear;// 0x16c, size 4 (0x4)
	__declspec(align(4)) float m_flSpeedPercentage;// 0x170, size 4 (0x4)
char CBaseServerVehicle_017C[0x8];
	__declspec(align(4)) sound_states m_soundState;// 0x17c, size 4 (0x4)
	__declspec(align(4)) float m_soundStateStartTime;// 0x180, size 4 (0x4)
	__declspec(align(4)) float m_lastSpeed;// 0x184, size 4 (0x4)
}; // size: 392 (0x188)
#pragma pack(pop)

class CRandStopwatch : public CStopwatchBase
{
// CRandStopwatch additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) float m_minInterval;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_maxInterval;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)

#pragma pack(push, 16)
class C_OP_WorldTraceConstraint : public CParticleConstraintOperatorInstance
{
// C_OP_WorldTraceConstraint additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecCpOffset;// 0x60, size 12 (0xc)
	// m_vecCpOffset metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nCollisionMode;// 0x6c, size 4 (0x4)
	// m_nCollisionMode metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBounceAmount;// 0x70, size 4 (0x4)
	// m_flBounceAmount metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flSlideAmount;// 0x74, size 4 (0x4)
	// m_flSlideAmount metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRadiusScale;// 0x78, size 4 (0x4)
	// m_flRadiusScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flCpMovementTolerance;// 0x7c, size 4 (0x4)
	// m_flCpMovementTolerance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTraceTolerance;// 0x80, size 4 (0x4)
	// m_flTraceTolerance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMinSpeed;// 0x84, size 4 (0x4)
	// m_flMinSpeed metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bKillonContact;// 0x88, size 1 (0x1)
	// m_bKillonContact metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bConfirmCollision;// 0x89, size 1 (0x1)
	// m_bConfirmCollision metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x8a, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bBrushOnly;// 0x10a, size 1 (0x1)
	// m_bBrushOnly metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_WorldTraceConstraint_0110[0x5];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 4)
class VPhysXBodyPart_t
{
// VPhysXBodyPart_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	enum class VPhysXFlagEnum_t : unsigned long
	{
		FLAG_STATIC = 1,
		FLAG_KINEMATIC = 2,
		FLAG_JOINT = 4,
		FLAG_MASS = 8,
	};

public:
	__declspec(align(4)) uint32_t m_nFlags;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flMass;// 0x4, size 4 (0x4)
	__declspec(align(4)) VPhysics2ShapeDef_t m_rnShape;// 0x8, size 40 (0x28)
	__declspec(align(4)) UnknownAtomicType <0x4, CResourcePointer, class VpropBreakablePartData_t > m_pBreakablePartData;// 0x30, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_nSurfacepropertyIndices;// 0x34, size 8 (0x8)
	__declspec(align(2)) uint16_t m_nCollisionAttributeIndex;// 0x3c, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nReserved;// 0x3e, size 2 (0x2)
	__declspec(align(4)) float m_flInertiaScale;// 0x40, size 4 (0x4)
	__declspec(align(4)) float m_flLinearDamping;// 0x44, size 4 (0x4)
	__declspec(align(4)) float m_flAngularDamping;// 0x48, size 4 (0x4)
}; // size: 76 (0x4c)
#pragma pack(pop)

#pragma pack(push, 16)
class CPortraitData : public CBasePortraitData
{
// CPortraitData additional information
// client.dll, project client
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class C_BaseEntity > > m_RenderList;// 0x7f0, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_BaseEntity > m_hHero;// 0x800, size 4 (0x4)
char CPortraitData_0810[0xC];
}; // size: 2064 (0x810)
#pragma pack(pop)

#pragma pack(push, 4)
class INextBotReply : public SchemaBase
{
// INextBotReply additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateFromPlaneCache : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateFromPlaneCache additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffsetMin;// 0x70, size 12 (0xc)
	// m_vecOffsetMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffsetMax;// 0x7c, size 12 (0xc)
	// m_vecOffsetMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
char C_INIT_CreateFromPlaneCache_089[0x1];
	__declspec(align(1)) bool m_bUseNormal;// 0x89, size 1 (0x1)
	// m_bUseNormal metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateFromPlaneCache_090[0x6];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 4)
class SequenceGroupResourceData_t
{
// SequenceGroupResourceData_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sName;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFlags;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_localSequenceNameArray;// 0x8, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceS1SeqDesc_t > m_localS1SeqDescArray;// 0x10, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceS1SeqDesc_t > m_localMultiSeqDescArray;// 0x18, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceSynthAnimDesc_t > m_localSynthAnimDescArray;// 0x20, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceCmdSeqDesc_t > m_localCmdSeqDescArray;// 0x28, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceBoneMaskList_t > m_localBoneMaskArray;// 0x30, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_localBoneNameArray;// 0x38, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_localNodeName;// 0x40, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourcePoseParamDesc_t > m_localPoseParamArray;// 0x44, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_keyValueText;// 0x4c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceIKLock_t > m_localIKAutoplayLockArray;// 0x50, size 8 (0x8)
}; // size: 88 (0x58)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourcePoseParamDesc_t
{
// SeqResourcePoseParamDesc_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sName;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flStart;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flEnd;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flLoop;// 0xc, size 4 (0x4)
	__declspec(align(1)) bool m_bLooping;// 0x10, size 1 (0x1)
char SeqResourcePoseParamDesc_t_014[0x3];
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCModel
{
// InfoForResourceTypeCModel additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCModel_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 8)
class CRMSG_Resource_ExtReference
{
// CRMSG_Resource_ExtReference additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) uint64_t m_nReferencerResourceId;// 0x0, size 8 (0x8)
	__declspec(align(8)) uint64_t m_nReferredToResourceId;// 0x8, size 8 (0x8)
	__declspec(align(4)) int32_t m_nManifestIndex;// 0x10, size 4 (0x4)
char CRMSG_Resource_ExtReference_018[0x4];
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class EntInput_t
{
// EntInput_t additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char EntInput_t_018[0x18];
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 4)
class BuilderModelBoneFlexDriverControl_t
{
// BuilderModelBoneFlexDriverControl_t additional information
// engine2.dll, project modellib
// Alignment: 4

public:
	__declspec(align(4)) ModelBoneFlexComponent_t m_nBoneComponent;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_flexController;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flMin;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flMax;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class CRenderablePortraitData : public CBasePortraitData
{
// CRenderablePortraitData additional information
// client.dll, project client
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CRenderablePortraitData_0D89F0[0xD8200];
	__declspec(align(4)) int32_t m_nCurrentHeroID;// 0xd89f0, size 4 (0x4)
char CRenderablePortraitData_0D89F8[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_PortraitCallbackHandler > m_hCallbackHandler;// 0xd89f8, size 4 (0x4)
char CRenderablePortraitData_0D8A50[0x54];
	__declspec(align(1)) bool m_bHasHero;// 0xd8a50, size 1 (0x1)
	__declspec(align(1)) bool m_bRotateBackgroundWithHero;// 0xd8a51, size 1 (0x1)
	__declspec(align(1)) bool m_bTransparentBG;// 0xd8a52, size 1 (0x1)
	__declspec(align(1)) bool m_bUseModelForParticles;// 0xd8a53, size 1 (0x1)
char CRenderablePortraitData_0D8A58[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class C_PortraitHero > m_hPortraitHero;// 0xd8a58, size 4 (0x4)
char CRenderablePortraitData_0D8A60[0x4];
}; // size: 887392 (0xd8a60)
#pragma pack(pop)

#pragma pack(push, 4)
class CSchemaMetadataSet : public SchemaMetadataSetData_t
{
// CSchemaMetadataSet additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class ConstraintSoundInfo
{
// ConstraintSoundInfo additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) VelocitySampler m_vSampler;// 0x0, size 20 (0x14)
	__declspec(align(4)) SimpleConstraintSoundProfile m_soundProfile;// 0x14, size 24 (0x18)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_forwardAxis;// 0x2c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszTravelSoundFwd;// 0x38, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszTravelSoundBack;// 0x3c, size 4 (0x4)
char ConstraintSoundInfo_044[0x4];
	__declspec(align(1)) bool m_bPlayTravelSound;// 0x44, size 1 (0x1)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszReversalSounds[3];// 0x48, size 12 (0xc)
	__declspec(align(1)) bool m_bPlayReversalSound;// 0x54, size 1 (0x1)
char ConstraintSoundInfo_058[0x3];
}; // size: 88 (0x58)
#pragma pack(pop)

class IHasAttributes : public SchemaBase
{
// IHasAttributes additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class RemnantData_t
{
// RemnantData_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hRemnant;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nProjectileHandle;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 16)
class CParticleSystemDefinition : public IParticleSystemDefinition
{
// CParticleSystemDefinition additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) int32_t m_nInitialParticles;// 0x4, size 4 (0x4)
	// m_nInitialParticles metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char CParticleSystemDefinition_030[0x28];
	__declspec(align(4)) UnknownType <0xc, class Vector> m_BoundingBoxMin;// 0x30, size 12 (0xc)
	// m_BoundingBoxMin metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_BoundingBoxMax;// 0x3c, size 12 (0xc)
	// m_BoundingBoxMax metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nSnapshotControlPoint;// 0x48, size 4 (0x4)
	// m_nSnapshotControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_pszSnapshotName[260];// 0x4c, size 260 (0x104)
	// m_pszSnapshotName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_pszTargetLayerID[128];// 0x150, size 128 (0x80)
	// m_pszTargetLayerID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char CParticleSystemDefinition_01E8[0x18];
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIParticleSystemDefinition > > m_hReferenceReplacement;// 0x1e8, size 8 (0x8)
	// m_hReferenceReplacement metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(1)) char m_pszCullReplacementName[128];// 0x1f0, size 128 (0x80)
	// m_pszCullReplacementName metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flCullRadius;// 0x270, size 4 (0x4)
	// m_flCullRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flCullFillCost;// 0x274, size 4 (0x4)
	// m_flCullFillCost metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nCullControlPoint;// 0x278, size 4 (0x4)
	// m_nCullControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
char CParticleSystemDefinition_028C[0x10];
	__declspec(align(4)) float m_flMaxRecreationTime;// 0x28c, size 4 (0x4)
	// m_flMaxRecreationTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIParticleSystemDefinition > > m_hFallback;// 0x290, size 8 (0x8)
	// m_hFallback metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nFallbackMaxCount;// 0x298, size 4 (0x4)
	// m_nFallbackMaxCount metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIParticleSystemDefinition > > m_hLowViolenceDef;// 0x2a0, size 8 (0x8)
	// m_hLowViolenceDef metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(1)) UnknownType <0x4, class Color> m_ConstantColor;// 0x2a8, size 4 (0x4)
	// m_ConstantColor metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_ConstantNormal;// 0x2ac, size 12 (0xc)
	// m_ConstantNormal metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flConstantRadius;// 0x2b8, size 4 (0x4)
	// m_flConstantRadius metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeRange
	__declspec(align(4)) float m_flConstantRotation;// 0x2bc, size 4 (0x4)
	// m_flConstantRotation metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flConstantRotationSpeed;// 0x2c0, size 4 (0x4)
	// m_flConstantRotationSpeed metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flConstantLifespan;// 0x2c4, size 4 (0x4)
	// m_flConstantLifespan metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nConstantSequenceNumber;// 0x2c8, size 4 (0x4)
	// m_nConstantSequenceNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
	__declspec(align(4)) int32_t m_nConstantSequenceNumber1;// 0x2cc, size 4 (0x4)
	// m_nConstantSequenceNumber1 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
	__declspec(align(4)) int32_t m_nGroupID;// 0x2d0, size 4 (0x4)
	// m_nGroupID metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flMaximumTimeStep;// 0x2d4, size 4 (0x4)
	// m_flMaximumTimeStep metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flMaximumSimTime;// 0x2d8, size 4 (0x4)
	// m_flMaximumSimTime metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flMinimumSimTime;// 0x2dc, size 4 (0x4)
	// m_flMinimumSimTime metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flMinimumTimeStep;// 0x2e0, size 4 (0x4)
	// m_flMinimumTimeStep metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nMinimumFrames;// 0x2e4, size 4 (0x4)
	// m_nMinimumFrames metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nMinCPULevel;// 0x2e8, size 4 (0x4)
	// m_nMinCPULevel metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nMinGPULevel;// 0x2ec, size 4 (0x4)
	// m_nMinGPULevel metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(1)) bool m_bViewModelEffect;// 0x2f0, size 1 (0x1)
	// m_bViewModelEffect metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(1)) bool m_bScreenSpaceEffect;// 0x2f1, size 1 (0x1)
	// m_bScreenSpaceEffect metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
char CParticleSystemDefinition_0418[0x124];
	__declspec(align(4)) float m_flMaxDrawDistance;// 0x418, size 4 (0x4)
	// m_flMaxDrawDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartFadeDistance;// 0x41c, size 4 (0x4)
	// m_flStartFadeDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNoDrawTimeToGoToSleep;// 0x420, size 4 (0x4)
	// m_flNoDrawTimeToGoToSleep metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxParticles;// 0x424, size 4 (0x4)
	// m_nMaxParticles metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nSkipRenderControlPoint;// 0x428, size 4 (0x4)
	// m_nSkipRenderControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nAllowRenderControlPoint;// 0x42c, size 4 (0x4)
	// m_nAllowRenderControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) int32_t m_nAggregationMinAvailableParticles;// 0x430, size 4 (0x4)
	// m_nAggregationMinAvailableParticles metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flAggregateRadius;// 0x434, size 4 (0x4)
	// m_flAggregateRadius metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flStopSimulationAfterTime;// 0x438, size 4 (0x4)
	// m_flStopSimulationAfterTime metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vControlPoint1DefaultOffsetRelativeToControlPoint0;// 0x43c, size 12 (0xc)
	// m_vControlPoint1DefaultOffsetRelativeToControlPoint0 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char CParticleSystemDefinition_04A8[0x60];
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ParticleChildrenInfo_t > m_Children;// 0x4a8, size 8 (0x8)
	// m_Children metadata
	 // MPropertySuppressField
char CParticleSystemDefinition_0520[0x70];
	__declspec(align(1)) bool m_bShouldSort;// 0x520, size 1 (0x1)
	// m_bShouldSort metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bShouldBatch;// 0x521, size 1 (0x1)
	// m_bShouldBatch metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
	__declspec(align(4)) float m_flDepthSortBias;// 0x524, size 4 (0x4)
	// m_flDepthSortBias metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char CParticleSystemDefinition_052A[0x2];
	__declspec(align(1)) bool m_bShouldHitboxesFallbackToRenderBounds;// 0x52a, size 1 (0x1)
	// m_bShouldHitboxesFallbackToRenderBounds metadata
	 // MAttributeName
	 // MDefaultString
	 // MParticleAdvancedField
char CParticleSystemDefinition_0538[0xC];
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x4, CResourcePointer, class CParticleOperatorInstance > > m_Operators;// 0x538, size 8 (0x8)
	// m_Operators metadata
	 // MPropertySuppressField
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x4, CResourcePointer, class CParticleOperatorInstance > > m_Renderers;// 0x540, size 8 (0x8)
	// m_Renderers metadata
	 // MPropertySuppressField
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x4, CResourcePointer, class CParticleOperatorInstance > > m_Initializers;// 0x548, size 8 (0x8)
	// m_Initializers metadata
	 // MPropertySuppressField
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x4, CResourcePointer, class CParticleOperatorInstance > > m_Emitters;// 0x550, size 8 (0x8)
	// m_Emitters metadata
	 // MPropertySuppressField
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x4, CResourcePointer, class CParticleOperatorInstance > > m_ForceGenerators;// 0x558, size 8 (0x8)
	// m_ForceGenerators metadata
	 // MPropertySuppressField
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x4, CResourcePointer, class CParticleOperatorInstance > > m_Constraints;// 0x560, size 8 (0x8)
	// m_Constraints metadata
	 // MPropertySuppressField
char CParticleSystemDefinition_0570[0x8];
}; // size: 1392 (0x570)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LockToBone : public CParticlePerFrameOperatorInstance
{
// C_OP_LockToBone additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x60, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLifeTimeFadeStart;// 0x64, size 4 (0x4)
	// m_flLifeTimeFadeStart metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLifeTimeFadeEnd;// 0x68, size 4 (0x4)
	// m_flLifeTimeFadeEnd metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flJumpThreshold;// 0x6c, size 4 (0x4)
	// m_flJumpThreshold metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flPrevPosScale;// 0x70, size 4 (0x4)
	// m_flPrevPosScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_HitboxSetName[128];// 0x74, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRigid;// 0xf4, size 1 (0x1)
	// m_bRigid metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseBones;// 0xf5, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_LockToBone_0100[0xA];
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SpinUpdate : public CSpinUpdateBase
{
// C_OP_SpinUpdate additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 4)
class EventClientSimulate_t : public EventSimulate_t
{
// EventClientSimulate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class CEntityIdentity
{
// CEntityIdentity additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CEntityIdentity_0C[0xC];
	__declspec(align(4)) int32_t m_nameStringableIndex;// 0xc, size 4 (0x4)
	// m_nameStringableIndex metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_name;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_designerName;// 0x14, size 4 (0x4)
char CEntityIdentity_01C[0x4];
	__declspec(align(4)) uint32_t m_flags;// 0x1c, size 4 (0x4)
char CEntityIdentity_024[0x4];
	__declspec(align(4)) uint32_t m_fDataObjectTypes;// 0x24, size 4 (0x4)
	__declspec(align(2)) ChangeAccessorFieldPathIndex_t m_PathIndex;// 0x28, size 2 (0x2)
	// m_PathIndex metadata
	 // MNetworkDisable
char CEntityIdentity_034[0x8];
	__declspec(align(4)) CEntityIdentity *m_pPrev;// 0x34, size 4 (0x4)
	__declspec(align(4)) CEntityIdentity *m_pNext;// 0x38, size 4 (0x4)
	__declspec(align(4)) CEntityIdentity *m_pPrevByClass;// 0x3c, size 4 (0x4)
	__declspec(align(4)) CEntityIdentity *m_pNextByClass;// 0x40, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x10, class V_uuid_t> *m_pId;// 0x44, size 4 (0x4)
}; // size: 72 (0x48)
#pragma pack(pop)

#pragma pack(push, 8)
class WorldEnvironmentMap_t
{
// WorldEnvironmentMap_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vPosition;// 0x0, size 12 (0xc)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_environmentMapTexture;// 0x10, size 8 (0x8)
	__declspec(align(1)) bool m_bSkyRelight;// 0x18, size 1 (0x1)
	__declspec(align(4)) float m_flInfluenceRadius;// 0x1c, size 4 (0x4)
	__declspec(align(4)) AABB_t m_BoxProjection;// 0x20, size 24 (0x18)
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 4)
class CResourceDiskEnumValue
{
// CResourceDiskEnumValue additional information
// schemasystem.dll, project schemasystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_pEnumValueName;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nEnumValue;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class CDOTA_AttackRecord
{
// CDOTA_AttackRecord additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CDOTA_AttackRecord_04[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hSource;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hInflictor;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hTarget;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hProjectileSource;// 0x10, size 4 (0x4)
	__declspec(align(4)) float m_flDamage;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flOriginalDamage;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flDamagePhysical;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float m_flDamageMagical;// 0x20, size 4 (0x4)
	__declspec(align(4)) float m_flDamageComposite;// 0x24, size 4 (0x4)
	__declspec(align(4)) float m_flDamagePure;// 0x28, size 4 (0x4)
	__declspec(align(2)) int16_t m_iRecord;// 0x2c, size 2 (0x2)
	__declspec(align(4)) int32_t m_iDamageCategory;// 0x30, size 4 (0x4)
	__declspec(align(4)) int32_t m_iFailType;// 0x34, size 4 (0x4)
	__declspec(align(4)) int32_t m_iDamageType;// 0x38, size 4 (0x4)
	__declspec(align(4)) int32_t m_iFlags;// 0x3c, size 4 (0x4)
	__declspec(align(1)) bool m_bAttack;// 0x40, size 1 (0x1)
	__declspec(align(1)) bool m_bRangedAttack;// 0x41, size 1 (0x1)
	__declspec(align(4)) int32_t m_animation;// 0x44, size 4 (0x4)
	__declspec(align(4)) CDOTA_Orb *m_pOrb;// 0x48, size 4 (0x4)
	__declspec(align(4)) CDOTA_Orb *m_pOrb2;// 0x4c, size 4 (0x4)
	__declspec(align(1)) bool m_bProcessProcs;// 0x50, size 1 (0x1)
	__declspec(align(1)) bool m_bUseCastAttackOrb;// 0x51, size 1 (0x1)
	__declspec(align(4)) int32_t m_nBashSource;// 0x54, size 4 (0x4)
	__declspec(align(4)) float m_flCriticalBonus;// 0x58, size 4 (0x4)
	__declspec(align(4)) float m_flCriticalDamage;// 0x5c, size 4 (0x4)
	__declspec(align(4)) float m_flCriticalDisplay;// 0x60, size 4 (0x4)
	__declspec(align(4)) int32_t m_iProjectileSpeed;// 0x64, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszAutoAttackRangedParticle;// 0x68, size 4 (0x4)
}; // size: 108 (0x6c)
#pragma pack(pop)

class CNewParticleEffect : public IParticleEffect
{
// CNewParticleEffect additional information
// client.dll, project particleslib
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char CNewParticleEffect_08[0x4];
	__declspec(align(4)) CNewParticleEffect *m_pNext;// 0x8, size 4 (0x4)
	__declspec(align(4)) CNewParticleEffect *m_pPrev;// 0xc, size 4 (0x4)
	__declspec(align(4)) IParticleCollection *m_pParticles;// 0x10, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_TEMP_DEBUG_Name;// 0x14, size 4 (0x4)
	__declspec(align(4)) char* m_pDebugName;// 0x18, size 4 (0x4)
	bool m_bDontRemove : 1;// 0x0, size 0 (0x0)
	bool m_bRemove : 1;// 0x0, size 0 (0x0)
	bool m_bNeedsBBoxUpdate : 1;// 0x0, size 0 (0x0)
	bool m_bIsFirstFrame : 1;// 0x0, size 0 (0x0)
	bool m_bAutoUpdateBBox : 1;// 0x0, size 0 (0x0)
	bool m_bAllocated : 1;// 0x0, size 0 (0x0)
	bool m_bSimulate : 1;// 0x0, size 0 (0x0)
	bool m_bShouldPerformCullCheck : 1;// 0x0, size 0 (0x0)
	bool m_bForceNoDraw : 1;// 0x0, size 0 (0x0)
	bool m_bDisableAggregation : 1;// 0x0, size 0 (0x0)
	bool m_bShouldSimulateDuringGamePaused : 1;// 0x0, size 0 (0x0)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vSortOrigin;// 0x20, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x1, class PARTICLE_EHANDLE__> *m_hOwner;// 0x2c, size 4 (0x4)
	__declspec(align(4)) CParticleProperty *m_pOwningParticleProperty;// 0x30, size 4 (0x4)
char CNewParticleEffect_038[0x4];
	__declspec(align(4)) UnknownType <0xc, class Vector> m_LastMin;// 0x38, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_LastMax;// 0x44, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x4, class CSplitScreenSlot> m_nSplitScreenUser;// 0x50, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecAggregationCenter;// 0x54, size 12 (0xc)
char CNewParticleEffect_070[0x10];
	__declspec(align(4)) int32_t m_RefCount;// 0x70, size 4 (0x4)
}; // size: 116 (0x74)

#pragma pack(push, 8)
class DOTASpecialAbility_t
{
// DOTASpecialAbility_t additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) char* m_pszName;// 0x0, size 4 (0x4)
	__declspec(align(4)) char* m_pszValue;// 0x4, size 4 (0x4)
	__declspec(align(4)) char* m_pszLevelKey;// 0x8, size 4 (0x4)
	__declspec(align(4)) fieldtype_t m_FieldType;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nCount;// 0x10, size 4 (0x4)
char DOTASpecialAbility_t_018[0x4];
	__declspec(align(8)) UnknownAtomicType <0x10, CVariantBase, class CVariantDefaultAllocator > m_Values[20];// 0x18, size 320 (0x140)
}; // size: 344 (0x158)
#pragma pack(pop)

#pragma pack(push, 4)
class sSpiritDef
{
// sSpiritDef additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) CDOTA_BaseNPC *pSpirit;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t nSpiritFXIndex;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t nSpiritState;// 0x8, size 4 (0x4)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
// C_INIT_RandomRotation additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class FeKelagerBend_t
{
// FeKelagerBend_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flHeight0;// 0x0, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nNode[3];// 0x4, size 6 (0x6)
	__declspec(align(2)) uint16_t m_nFlags;// 0xa, size 2 (0x2)
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourceCmdSeqDesc_t
{
// SeqResourceCmdSeqDesc_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sName;// 0x0, size 4 (0x4)
	__declspec(align(1)) SeqResourceSeqDesc_t_Flag_t m_flags;// 0x4, size 10 (0xa)
	__declspec(align(4)) SeqResourceTransition_t m_transition;// 0x10, size 8 (0x8)
	__declspec(align(2)) int16_t m_nFrameRangeSequence;// 0x18, size 2 (0x2)
	__declspec(align(2)) int16_t m_nFrameCount;// 0x1a, size 2 (0x2)
	__declspec(align(4)) float m_flFPS;// 0x1c, size 4 (0x4)
	__declspec(align(2)) int16_t m_nSubCycles;// 0x20, size 2 (0x2)
	__declspec(align(2)) int16_t m_numLocalResults;// 0x22, size 2 (0x2)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourceCmdLayer_t > m_cmdLayerArray;// 0x24, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceAnimEvent_t > m_eventArray;// 0x2c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceActivity_t > m_activityArray;// 0x34, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class SeqResourcePoseSetting_t > m_poseSettingArray;// 0x3c, size 8 (0x8)
}; // size: 68 (0x44)
#pragma pack(pop)

#pragma pack(push, 4)
class MaterialParamString_t : public MaterialParam_t
{
// MaterialParamString_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_value;// 0x4, size 4 (0x4)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class CHitBoxSetList
{
// CHitBoxSetList additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CHitBoxSet > m_HitBoxSets;// 0x0, size 16 (0x10)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class RnBlendVertex_t
{
// RnBlendVertex_t additional information
// engine2.dll, project modellib
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t m_nWeight0;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nIndex0;// 0x2, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nWeight1;// 0x4, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nIndex1;// 0x6, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nWeight2;// 0x8, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nIndex2;// 0xa, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nFlags;// 0xc, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nTargetIndex;// 0xe, size 2 (0x2)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class VsInputSignature_t
{
// VsInputSignature_t additional information
// rendersystemdx9.dll, project rendersystemdx9
// Alignment: 4

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CCopyableUtlVector, class VsInputSignatureElement_t > m_elems;// 0x0, size 16 (0x10)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCPostProcessingResource
{
// InfoForResourceTypeCPostProcessingResource additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCPostProcessingResource_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class SchemaStaticFieldData_t
{
// SchemaStaticFieldData_t additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x8, class SchemaString_t> m_Name;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x1, class CSchemaType> *m_pType;// 0x8, size 4 (0x4)
	__declspec(align(4)) void* m_pInstance;// 0xc, size 4 (0x4)
	__declspec(align(4)) SchemaMetadataSetData_t m_Metadata;// 0x10, size 16 (0x10)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 8)
class InfoOverlayData_t
{
// InfoOverlayData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x30, class matrix3x4_t> m_transform;// 0x0, size 48 (0x30)
	__declspec(align(4)) float m_flWidth;// 0x30, size 4 (0x4)
	__declspec(align(4)) float m_flHeight;// 0x34, size 4 (0x4)
	__declspec(align(4)) float m_flDepth;// 0x38, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x8, class Vector2D> m_vUVStart;// 0x3c, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x8, class Vector2D> m_vUVEnd;// 0x44, size 8 (0x8)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_pMaterial;// 0x50, size 8 (0x8)
	__declspec(align(4)) int32_t m_nRenderOrder;// 0x58, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_vTintColor;// 0x5c, size 16 (0x10)
	__declspec(align(4)) int32_t m_nSequenceOverride;// 0x6c, size 4 (0x4)
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_FadeInSimple : public CParticlePerFrameOperatorInstance
{
// C_OP_FadeInSimple additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flFadeInTime;// 0x60, size 4 (0x4)
	// m_flFadeInTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_OP_FadeInSimple_070[0x8];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateWithinBox : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateWithinBox additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMin;// 0x70, size 12 (0xc)
	// m_vecMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecMax;// 0x7c, size 12 (0xc)
	// m_vecMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x88, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLocalSpace;// 0x8c, size 1 (0x1)
	// m_bLocalSpace metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateWithinBox_090[0x3];
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderScreenVelocityRotate : public CParticleRenderOperatorInstance
{
// C_OP_RenderScreenVelocityRotate additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flRotateRateDegrees;// 0xa0, size 4 (0x4)
	// m_flRotateRateDegrees metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flForwardDegrees;// 0xa4, size 4 (0x4)
	// m_flForwardDegrees metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_RenderScreenVelocityRotate_0B0[0x8];
}; // size: 176 (0xb0)
#pragma pack(pop)

class PlayerLocomotion : public CLocomotionBase
{
// PlayerLocomotion additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) CBasePlayer *m_player;// 0x64, size 4 (0x4)
	__declspec(align(1)) bool m_bIsJumping;// 0x68, size 1 (0x1)
	__declspec(align(4)) CountdownTimer m_jumpTimer;// 0x6c, size 16 (0x10)
	__declspec(align(1)) bool m_bIsClimbingUpToLedge;// 0x7c, size 1 (0x1)
	__declspec(align(1)) bool m_bIsJumpingAcrossGap;// 0x7d, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLandingGoal;// 0x80, size 12 (0xc)
	__declspec(align(1)) bool m_bHasLeftTheGround;// 0x8c, size 1 (0x1)
	__declspec(align(4)) float m_flFacingEaseInTime;// 0x90, size 4 (0x4)
	__declspec(align(4)) float m_flDesiredSpeed;// 0x94, size 4 (0x4)
	__declspec(align(4)) float m_flSpeedLimitMin;// 0x98, size 4 (0x4)
	__declspec(align(4)) float m_flSpeedLimitMax;// 0x9c, size 4 (0x4)
char PlayerLocomotion_0AC[0xC];
	__declspec(align(4)) CountdownTimer m_ladderTimer;// 0xac, size 16 (0x10)
}; // size: 188 (0xbc)

#pragma pack(push, 16)
class C_INIT_RemapCPtoVector : public CParticleInitializerOperatorInstance
{
// C_INIT_RemapCPtoVector additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCPInput;// 0x70, size 4 (0x4)
	// m_nCPInput metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x74, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vInputMin;// 0x78, size 12 (0xc)
	// m_vInputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vInputMax;// 0x84, size 12 (0xc)
	// m_vInputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOutputMin;// 0x90, size 12 (0xc)
	// m_vOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOutputMax;// 0x9c, size 12 (0xc)
	// m_vOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsSometimesCoordinate
	__declspec(align(4)) float m_flStartTime;// 0xa8, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flEndTime;// 0xac, size 4 (0x4)
	// m_flEndTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0xb0, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bOffset;// 0xb1, size 1 (0x1)
	// m_bOffset metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bAccelerate;// 0xb2, size 1 (0x1)
	// m_bAccelerate metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nLocalSpaceCP;// 0xb4, size 4 (0x4)
	// m_nLocalSpaceCP metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RemapCPtoVector_0C0[0x8];
}; // size: 192 (0xc0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomModelSequence : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomModelSequence additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) char m_ActivityName[256];// 0x70, size 256 (0x100)
	// m_ActivityName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCModel > > m_hModel;// 0x170, size 8 (0x8)
	// m_hModel metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RandomModelSequence_0180[0x8];
}; // size: 384 (0x180)
#pragma pack(pop)

#pragma pack(push, 4)
class SelectedEditItemInfo_t
{
// SelectedEditItemInfo_t additional information
// soundsystem.dll, project soundsystem
// Alignment: 4

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class SosEditItemInfo_t > m_EditItems;// 0x0, size 16 (0x10)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class CPhysSurfaceProperties
{
// CPhysSurfaceProperties additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	// m_name metadata
	 // MAttributeName
	__declspec(align(4)) uint32_t m_nameHash;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_description;// 0x8, size 4 (0x4)
	// m_description metadata
	 // MAttributeName
	__declspec(align(4)) CVPhysXSurfacePhysicsParams m_physics;// 0xc, size 20 (0x14)
	// m_physics metadata
	 // MAttributeName
	__declspec(align(4)) CVPhysXSurfaceAudioSounds m_audioSounds;// 0x20, size 48 (0x30)
	// m_audioSounds metadata
	 // MAttributeName
	__declspec(align(4)) CVPhysXSurfaceAudioParams m_audioParams;// 0x50, size 24 (0x18)
	// m_audioParams metadata
	 // MAttributeName
	__declspec(align(4)) CVPhysXSurfaceGameProperties m_gameProperties;// 0x68, size 12 (0xc)
	// m_gameProperties metadata
	 // MAttributeName
}; // size: 116 (0x74)
#pragma pack(pop)

#pragma pack(push, 4)
class C_LightGlowOverlay : public CGlowOverlay
{
// C_LightGlowOverlay additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOrigin;// 0xa4, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecDirection;// 0xb0, size 12 (0xc)
	__declspec(align(4)) int32_t m_nMinDist;// 0xbc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nMaxDist;// 0xc0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nOuterMaxDist;// 0xc4, size 4 (0x4)
	__declspec(align(1)) bool m_bOneSided;// 0xc8, size 1 (0x1)
	__declspec(align(1)) bool m_bModulateByDot;// 0xc9, size 1 (0x1)
char C_LightGlowOverlay_0CC[0x2];
}; // size: 204 (0xcc)
#pragma pack(pop)

#pragma pack(push, 8)
class CSSDSMsg_PostLayer : public CSSDSMsg_LayerBase
{
// CSSDSMsg_PostLayer additional information
// scenesystem.dll, project scenesystem
// Alignment: 8

public:
}; // size: 40 (0x28)
#pragma pack(pop)

class IControlPointEditorData : public SchemaBase
{
// IControlPointEditorData additional information
// particles.dll, project particles
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 4 (0x4)

#pragma pack(push, 4)
class VPhysXConstraint2_t
{
// VPhysXConstraint2_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t m_nFlags;// 0x0, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nParent;// 0x4, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nChild;// 0x6, size 2 (0x2)
	__declspec(align(4)) VPhysXConstraintParams_t m_params;// 0x8, size 248 (0xf8)
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceManifest_t
{
// ResourceManifest_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class CResourceString> > m_ResourceFileNameList;// 0x0, size 8 (0x8)
	// m_ResourceFileNameList metadata
	 // MAttributeName
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 8)
class CAttributeContainer : public CAttributeManager
{
// CAttributeContainer additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(8)) CEconItemView m_Item;// 0x48, size 144 (0x90)
	// m_Item metadata
	 // MNetworkEnable
	 // MNetworkEnable
}; // size: 216 (0xd8)
#pragma pack(pop)

#pragma pack(push, 8)
class IrradVolume_t
{
// IrradVolume_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x40, class VMatrix> m_transform;// 0x0, size 64 (0x40)
	__declspec(align(4)) float m_flFadeMinDist;// 0x40, size 4 (0x4)
	__declspec(align(4)) float m_flFadeMaxDist;// 0x44, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMinBounds;// 0x48, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxBounds;// 0x54, size 12 (0xc)
	__declspec(align(4)) IrradVolumeFlags_t m_nFlags;// 0x60, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nSortKey;// 0x64, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nPlanes;// 0x68, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x10, class Vector4D> m_planes[16];// 0x6c, size 256 (0x100)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_texture;// 0x170, size 8 (0x8)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCLightTree > > m_lightTree;// 0x178, size 8 (0x8)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypePRTMatrixData_t > > m_prtMatrix;// 0x180, size 8 (0x8)
}; // size: 392 (0x188)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_LockPoints : public CParticlePerFrameOperatorInstance
{
// C_OP_LockPoints additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nMinCol;// 0x60, size 4 (0x4)
	// m_nMinCol metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxCol;// 0x64, size 4 (0x4)
	// m_nMaxCol metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMinRow;// 0x68, size 4 (0x4)
	// m_nMinRow metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nMaxRow;// 0x6c, size 4 (0x4)
	// m_nMaxRow metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPoint;// 0x70, size 4 (0x4)
	// m_nControlPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flBlendValue;// 0x74, size 4 (0x4)
	// m_flBlendValue metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_LockPoints_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapCPtoVelocity : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPtoVelocity additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCPInput;// 0x60, size 4 (0x4)
	// m_nCPInput metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x64, size 1 (0x1)
char C_OP_RemapCPtoVelocity_070[0xB];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class EventPreDataUpdate_t
{
// EventPreDataUpdate_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) int32_t m_nEntityIndex;// 0x0, size 4 (0x4)
char EventPreDataUpdate_t_08[0x4];
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class Relationship_t
{
// Relationship_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > entity;// 0x0, size 4 (0x4)
	__declspec(align(4)) Class_T classType;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t faction;// 0x8, size 4 (0x4)
	__declspec(align(4)) Disposition_t disposition;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t priority;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class World_t
{
// World_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) WorldBuilderParams_t m_builderParams;// 0x0, size 76 (0x4c)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class NodeData_t > m_worldNodes;// 0x4c, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCEntityLump > > > m_entityLumps;// 0x54, size 8 (0x8)
}; // size: 92 (0x5c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderFogSprites : public C_OP_RenderSprites
{
// C_OP_RenderFogSprites additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_hMaterial;// 0x280, size 8 (0x8)
	// m_hMaterial metadata
	 // MAttributeName
char C_OP_RenderFogSprites_0290[0x8];
}; // size: 656 (0x290)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeVBitmapFontRuntimeData_t
{
// InfoForResourceTypeVBitmapFontRuntimeData_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeVBitmapFontRuntimeData_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class TimedBalanceRecord_t
{
// TimedBalanceRecord_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nNetWorthDelta;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nExperienceDelta;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flBalanceMetric;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nBonusGoldRadiant;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nBonusGoldDire;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_DistanceBetweenCPs : public CParticlePerFrameOperatorInstance
{
// C_OP_DistanceBetweenCPs additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nStartCP;// 0x64, size 4 (0x4)
	// m_nStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nEndCP;// 0x68, size 4 (0x4)
	// m_nEndCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMin;// 0x6c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x70, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x74, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x78, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxTraceLength;// 0x7c, size 4 (0x4)
	// m_flMaxTraceLength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLOSScale;// 0x80, size 4 (0x4)
	// m_flLOSScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x84, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLOS;// 0x104, size 1 (0x1)
	// m_bLOS metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x105, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x106, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_DistanceBetweenCPs_0110[0x9];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderStatusEffect : public CParticleRenderOperatorInstance
{
// C_OP_RenderStatusEffect additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pTextureColorWarp;// 0xa0, size 8 (0x8)
	// m_pTextureColorWarp metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pTextureDetail2;// 0xa8, size 8 (0x8)
	// m_pTextureDetail2 metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pTextureDiffuseWarp;// 0xb0, size 8 (0x8)
	// m_pTextureDiffuseWarp metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pTextureFresnelColorWarp;// 0xb8, size 8 (0x8)
	// m_pTextureFresnelColorWarp metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pTextureFresnelWarp;// 0xc0, size 8 (0x8)
	// m_pTextureFresnelWarp metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pTextureSpecularWarp;// 0xc8, size 8 (0x8)
	// m_pTextureSpecularWarp metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeCTextureBase > > m_pTextureEnvMap;// 0xd0, size 8 (0x8)
	// m_pTextureEnvMap metadata
	 // MAttributeName
	 // MPropertyAttributeEditor
	 // MDefaultString
char C_OP_RenderStatusEffect_0E0[0x8];
}; // size: 224 (0xe0)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceBone_t
{
// AnimResourceBone_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_parent;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_pos;// 0x8, size 12 (0xc)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_quat;// 0x14, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_qAlignment;// 0x24, size 16 (0x10)
	__declspec(align(4)) int32_t m_flags;// 0x34, size 4 (0x4)
}; // size: 56 (0x38)
#pragma pack(pop)

#pragma pack(push, 4)
class CHitBoxSet
{
// CHitBoxSet additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nNameHash;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CHitBox > m_HitBoxes;// 0x8, size 16 (0x10)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_SourceFilename;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 4)
class PostProcessingResource_t
{
// PostProcessingResource_t additional information
// materialsystem2.dll, project materialsystem2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) bool m_bHasTonemapParams;// 0x0, size 1 (0x1)
	__declspec(align(4)) PostProcessingTonemapParameters_t m_toneMapParams;// 0x4, size 32 (0x20)
	__declspec(align(1)) bool m_bHasBloomParams;// 0x24, size 1 (0x1)
	__declspec(align(4)) PostProcessingBloomParameters_t m_bloomParams;// 0x28, size 108 (0x6c)
	__declspec(align(1)) bool m_bHasVignetteParams;// 0x94, size 1 (0x1)
	__declspec(align(4)) PostProcessingVignetteParameters_t m_vignetteParams;// 0x98, size 36 (0x24)
	__declspec(align(4)) int32_t m_nColorCorrectionVolumeDim;// 0xbc, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownType <0x4, class Color> > m_colorCorrectionVolumeData;// 0xc0, size 8 (0x8)
}; // size: 200 (0xc8)
#pragma pack(pop)

#pragma pack(push, 16)
class FeSimdTri_t
{
// FeSimdTri_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) uint32_t nNode[4][3];// 0x0, size 48 (0x30)
	__declspec(align(16)) UnknownType <0x10, class fltx4> w1;// 0x30, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> w2;// 0x40, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> v1x;// 0x50, size 16 (0x10)
	__declspec(align(16)) FourVectors2D v2;// 0x60, size 32 (0x20)
}; // size: 128 (0x80)
#pragma pack(pop)

class CHeadlightEffect : public CFlashlightEffect
{
// CHeadlightEffect additional information
// client.dll, project client
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 632 (0x278)

#pragma pack(push, 4)
class sSpiritInfo
{
// sSpiritInfo additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char sSpiritInfo_04[0x4];
	__declspec(align(4)) UnknownType <0xc, class Vector> vTargetLoc;// 0x4, size 12 (0xc)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > hTarget;// 0x10, size 4 (0x4)
	__declspec(align(1)) bool bHit;// 0x14, size 1 (0x1)
	__declspec(align(4)) int32_t iHealAmount;// 0x18, size 4 (0x4)
	__declspec(align(4)) int32_t nFXAmbientIndex;// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointRotation : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointRotation additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRotAxis;// 0x60, size 12 (0xc)
	// m_vecRotAxis metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) float m_flRotRate;// 0x6c, size 4 (0x4)
	// m_flRotRate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCP;// 0x70, size 4 (0x4)
	// m_nCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nLocalCP;// 0x74, size 4 (0x4)
	// m_nLocalCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_OP_SetControlPointRotation_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class AttachmentData_t
{
// AttachmentData_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_influenceNames[3];// 0x4, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vInfluenceOffsets[3];// 0x10, size 36 (0x24)
	__declspec(align(4)) UnknownType <0x10, class Quaternion> m_vInfluenceRotations[3];// 0x34, size 48 (0x30)
	__declspec(align(4)) float m_influenceWeights[3];// 0x64, size 12 (0xc)
	__declspec(align(1)) uint8_t m_nFlags[3];// 0x70, size 3 (0x3)
	__declspec(align(1)) uint8_t m_nInfluences;// 0x73, size 1 (0x1)
}; // size: 116 (0x74)
#pragma pack(pop)

#pragma pack(push, 8)
class CRMSG_Resource_NewId
{
// CRMSG_Resource_NewId additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(8)) uint64_t m_nResourceId;// 0x0, size 8 (0x8)
	__declspec(align(1)) char m_ResourceName[256];// 0x8, size 256 (0x100)
	__declspec(align(8)) int64_t m_nTimeUS;// 0x108, size 8 (0x8)
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 8)
class PRTMatrixData_t
{
// PRTMatrixData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nTransmitters;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nReceivers;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTextureWidth;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTextureHeight;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nTextureDepth;// 0x10, size 4 (0x4)
	__declspec(align(8)) int64_t m_nPrimaryRelightDataOffset;// 0x18, size 8 (0x8)
	__declspec(align(8)) int64_t m_nPrimaryRelightDataSize;// 0x20, size 8 (0x8)
	__declspec(align(8)) int64_t m_nPrimaryRelightDataSizeUncompressed;// 0x28, size 8 (0x8)
	__declspec(align(8)) int64_t m_nSecondaryRelightDataOffset;// 0x30, size 8 (0x8)
	__declspec(align(8)) int64_t m_nSecondaryRelightDataSize;// 0x38, size 8 (0x8)
	__declspec(align(8)) int64_t m_nSecondaryRelightDataSizeUncompressed;// 0x40, size 8 (0x8)
	__declspec(align(8)) int64_t m_nPrimarySkyRelightDataOffset;// 0x48, size 8 (0x8)
	__declspec(align(8)) int64_t m_nPrimarySkyRelightDataSize;// 0x50, size 8 (0x8)
	__declspec(align(8)) int64_t m_nPrimarySkyRelightDataSizeUncompressed;// 0x58, size 8 (0x8)
	__declspec(align(8)) int64_t m_nSecondarySkyRelightDataOffset;// 0x60, size 8 (0x8)
	__declspec(align(8)) int64_t m_nSecondarySkyRelightDataSize;// 0x68, size 8 (0x8)
	__declspec(align(8)) int64_t m_nSecondarySkyRelightDataSizeUncompressed;// 0x70, size 8 (0x8)
	__declspec(align(8)) int64_t m_nTransmitterPositionsOffset;// 0x78, size 8 (0x8)
	__declspec(align(8)) int64_t m_nTransmitterPositionsSize;// 0x80, size 8 (0x8)
	__declspec(align(8)) int64_t m_nTransmitterPositionsSizeUncompressed;// 0x88, size 8 (0x8)
	__declspec(align(8)) int64_t m_nReceiverPositionsOffset;// 0x90, size 8 (0x8)
	__declspec(align(8)) int64_t m_nReceiverPositionsSize;// 0x98, size 8 (0x8)
	__declspec(align(8)) int64_t m_nReceiverPositionsSizeUncompressed;// 0xa0, size 8 (0x8)
	__declspec(align(8)) int64_t m_nTransmitterMaterialsOffset;// 0xa8, size 8 (0x8)
	__declspec(align(8)) int64_t m_nTransmitterMaterialsSize;// 0xb0, size 8 (0x8)
	__declspec(align(8)) int64_t m_nTransmitterMaterialsSizeUncompressed;// 0xb8, size 8 (0x8)
	__declspec(align(8)) int64_t m_nReceiverIndicesOffset;// 0xc0, size 8 (0x8)
	__declspec(align(8)) int64_t m_nReceiverIndicesSize;// 0xc8, size 8 (0x8)
	__declspec(align(8)) int64_t m_nReceiverIndicesSizeUncompressed;// 0xd0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > > m_materials;// 0xd8, size 8 (0x8)
}; // size: 224 (0xe0)
#pragma pack(pop)

#pragma pack(push, 4)
class CPVSData
{
// CPVSData additional information
// scenesystem.dll, project scenesystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public: 
	#pragma pack(push, 4)
	class pvsmask_t
	{
	// CPVSData::pvsmask_t additional information
	// Alignment: 4
	// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
	// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

	public:
		__declspec(align(4)) uint32_t m_nOffset;// 0x0, size 4 (0x4)
		__declspec(align(4)) uint32_t m_nMask;// 0x4, size 4 (0x4)
	}; // size: 8 (0x8)
	#pragma pack(pop)

public:
	__declspec(align(4)) CPVSData *m_pNext;// 0x0, size 4 (0x4)
	__declspec(align(2)) uint16_t m_nPVSMasks;// 0x4, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nPVSFlags;// 0x6, size 2 (0x2)
	__declspec(align(4)) CPVSData::pvsmask_t m_masks[7];// 0x8, size 56 (0x38)
}; // size: 64 (0x40)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_PlanarConstraint : public CParticleConstraintOperatorInstance
{
// C_OP_PlanarConstraint additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_PointOnPlane;// 0x60, size 12 (0xc)
	// m_PointOnPlane metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_PlaneNormal;// 0x6c, size 12 (0xc)
	// m_PlaneNormal metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x78, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bGlobalOrigin;// 0x7c, size 1 (0x1)
	// m_bGlobalOrigin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bGlobalNormal;// 0x7d, size 1 (0x1)
	// m_bGlobalNormal metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_PlanarConstraint_080[0x2];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class NodeData_t
{
// NodeData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_Flags;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nParent;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vOrigin;// 0x8, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMinBounds;// 0x14, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMaxBounds;// 0x20, size 12 (0xc)
	__declspec(align(4)) float m_flMinimumDistance;// 0x2c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, int32_t > m_ChildNodeIndices;// 0x30, size 8 (0x8)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_worldNodePrefix;// 0x38, size 4 (0x4)
}; // size: 60 (0x3c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_PercentageBetweenCPs : public CParticlePerFrameOperatorInstance
{
// C_OP_PercentageBetweenCPs additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x64, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x68, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x6c, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x70, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nStartCP;// 0x74, size 4 (0x4)
	// m_nStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nEndCP;// 0x78, size 4 (0x4)
	// m_nEndCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x7c, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x7d, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x7e, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRadialCheck;// 0x7f, size 1 (0x1)
	// m_bRadialCheck metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class EventServerProcessNetworking_t : public EventSimulate_t
{
// EventServerProcessNetworking_t additional information
// engine2.dll, project engine2
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 8)
class CMaterialDrawDescriptor
{
// CMaterialDrawDescriptor additional information
// engine2.dll, project modellib
// Alignment: 8
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) RenderPrimitiveType_t m_nPrimitiveType;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nBaseVertex;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nVertexCount;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nStartIndex;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nIndexCount;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nStartInstance;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t m_nInstanceCount;// 0x18, size 4 (0x4)
	__declspec(align(4)) float m_flUvDensity;// 0x1c, size 4 (0x4)
	__declspec(align(4)) MeshDrawPrimitiveFlags_t m_nFlags;// 0x20, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vTintColor;// 0x24, size 12 (0xc)
	// m_vTintColor metadata
	 // MDefaultString
char CMaterialDrawDescriptor_090[0x60];
	__declspec(align(8)) RenderBufferBinding_t m_indexBuffer;// 0x90, size 16 (0x10)
char CMaterialDrawDescriptor_0A4[0x4];
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeIMaterial2 > m_material;// 0xa4, size 4 (0x4)
}; // size: 168 (0xa8)
#pragma pack(pop)

#pragma pack(push, 4)
class CInterpolatedValue
{
// CInterpolatedValue additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) float m_flStartTime;// 0x0, size 4 (0x4)
	__declspec(align(4)) float m_flEndTime;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_flStartValue;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flEndValue;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nInterpType;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class CMotorController : public SchemaBase
{
// CMotorController additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float m_speed;// 0x4, size 4 (0x4)
	__declspec(align(4)) float m_maxTorque;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_axis;// 0xc, size 12 (0xc)
	__declspec(align(4)) float m_inertiaFactor;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)
#pragma pack(pop)

class NextBotGroundLocomotion : public CLocomotionBase
{
// NextBotGroundLocomotion additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
char NextBotGroundLocomotion_068[0x4];
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vVelocity;// 0x68, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vPriorPos;// 0x74, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLastValidPos;// 0x80, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vAcceleration;// 0x8c, size 12 (0xc)
	__declspec(align(4)) float m_flDesiredSpeed;// 0x98, size 4 (0x4)
	__declspec(align(4)) float m_flActualSpeed;// 0x9c, size 4 (0x4)
	__declspec(align(4)) float m_flMaxRunSpeed;// 0xa0, size 4 (0x4)
	__declspec(align(4)) float m_flForwardLean;// 0xa4, size 4 (0x4)
	__declspec(align(4)) float m_flSideLean;// 0xa8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class QAngle> m_desiredLean;// 0xac, size 12 (0xc)
	__declspec(align(1)) bool m_bIsJumping;// 0xb8, size 1 (0x1)
	__declspec(align(1)) bool m_bIsJumpingAcrossGap;// 0xb9, size 1 (0x1)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hGround;// 0xbc, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vGroundNormal;// 0xc0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vGroundSampleLastPos;// 0xcc, size 12 (0xc)
	__declspec(align(1)) bool m_bIsClimbingUpToLedge;// 0xd8, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLedgeJumpGoalPos;// 0xdc, size 12 (0xc)
	__declspec(align(1)) bool m_bIsUsingFullFeetTrace;// 0xe8, size 1 (0x1)
char NextBotGroundLocomotion_0FC[0x13];
	__declspec(align(1)) bool m_bIsGoingUpLadder;// 0xfc, size 1 (0x1)
	__declspec(align(4)) CountdownTimer m_inhibitObstacleAvoidanceTimer;// 0x100, size 16 (0x10)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vMoveVector;// 0x110, size 12 (0xc)
	__declspec(align(4)) float m_flMoveYaw;// 0x11c, size 4 (0x4)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vAccumApproachVectors;// 0x120, size 12 (0xc)
	__declspec(align(4)) float m_flAccumApproachWeights;// 0x12c, size 4 (0x4)
	__declspec(align(1)) bool m_bRecomputePostureOnCollision;// 0x130, size 1 (0x1)
	__declspec(align(4)) CountdownTimer m_ignorePhysicsPropTimer;// 0x134, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hIgnorePhysicsProp;// 0x144, size 4 (0x4)
	__declspec(align(4)) int32_t m_actJump;// 0x148, size 4 (0x4)
	__declspec(align(4)) int32_t m_actJumpAcrossGap;// 0x14c, size 4 (0x4)
	__declspec(align(4)) int32_t m_actLadderDismount;// 0x150, size 4 (0x4)
}; // size: 340 (0x154)

#pragma pack(push, 16)
class C_OP_RemapParticleCountOnScalarEndCap : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapParticleCountOnScalarEndCap additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x60, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nInputMin;// 0x64, size 4 (0x4)
	// m_nInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nInputMax;// 0x68, size 4 (0x4)
	// m_nInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x6c, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x70, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bBackwards;// 0x74, size 1 (0x1)
	// m_bBackwards metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x75, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x76, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_RemapParticleCountOnScalarEndCap_080[0x9];
}; // size: 128 (0x80)
#pragma pack(pop)

class IIntention : public INextBotComponent, public IContextualQuery
{
// IIntention additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
}; // size: 24 (0x18)

#pragma pack(push, 8)
class CNavVolumeMarkupVolume : public CNavVolume
{
// CNavVolumeMarkupVolume additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
char CNavVolumeMarkupVolume_0B0[0x68];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 4)
class EntityKeyValueData_t
{
// EntityKeyValueData_t additional information
// worldrenderer.dll, project worldrenderer
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, uint8_t > m_keyValuesData;// 0x0, size 8 (0x8)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class EntityIOConnectionData_t > m_connections;// 0x8, size 8 (0x8)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RandomForce : public CParticleForceOperatorInstance
{
// C_OP_RandomForce additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_MinForce;// 0x60, size 12 (0xc)
	// m_MinForce metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) UnknownType <0xc, class Vector> m_MaxForce;// 0x6c, size 12 (0xc)
	// m_MaxForce metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
char C_OP_RandomForce_080[0x8];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetControlPointToImpactPoint : public CParticlePerFrameOperatorInstance
{
// C_OP_SetControlPointToImpactPoint additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCPOut;// 0x60, size 4 (0x4)
	// m_nCPOut metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nCPIn;// 0x64, size 4 (0x4)
	// m_nCPIn metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flUpdateRate;// 0x68, size 4 (0x4)
	// m_flUpdateRate metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTraceLength;// 0x6c, size 4 (0x4)
	// m_flTraceLength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOffset;// 0x70, size 4 (0x4)
	// m_flOffset metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecTraceDir;// 0x74, size 12 (0xc)
	// m_vecTraceDir metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) char m_CollisionGroupName[128];// 0x80, size 128 (0x80)
	// m_CollisionGroupName metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 4)
class VPhysXDiskCapsule_t : public VPhysXDiskShapeHeader_t
{
// VPhysXDiskCapsule_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vEnds[2];// 0x4, size 24 (0x18)
	__declspec(align(4)) float m_flRadius;// 0x1c, size 4 (0x4)
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class FeTaperedCapsuleStretch_t
{
// FeTaperedCapsuleStretch_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t nNode[2];// 0x0, size 4 (0x4)
	__declspec(align(2)) uint16_t nCollisionMask;// 0x4, size 2 (0x2)
	__declspec(align(2)) uint16_t nDummy;// 0x6, size 2 (0x2)
	// nDummy metadata
	 // MPropertySuppressField
	__declspec(align(4)) float flRadius[2];// 0x8, size 8 (0x8)
	__declspec(align(4)) float flStickiness;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

class CDOTAGamerules : public CTeamplayRules
{
// CDOTAGamerules additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) CNetworkVarChainer __m_pChainEntity;// 0x2b4, size 12 (0xc)
char CDOTAGamerules_02F0[0x30];
	__declspec(align(4)) int32_t m_iMiscHeroPickCounter;// 0x2f0, size 4 (0x4)
	// m_iMiscHeroPickCounter metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hEndGameCinematicEntity;// 0x2f4, size 4 (0x4)
	// m_hEndGameCinematicEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CDOTA_BaseNPC > m_hOverlayHealthBarUnit;// 0x2f8, size 4 (0x4)
	// m_hOverlayHealthBarUnit metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nOverlayHealthBarType;// 0x2fc, size 4 (0x4)
	// m_nOverlayHealthBarType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsInItemTestingMode;// 0x300, size 1 (0x1)
	// m_bIsInItemTestingMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsInCinematicMode;// 0x301, size 1 (0x1)
	// m_bIsInCinematicMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bIsInClientSideCinematicMode;// 0x302, size 1 (0x1)
	__declspec(align(4)) int32_t m_nStartingGold;// 0x304, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGoldPerTick;// 0x308, size 4 (0x4)
	__declspec(align(4)) float m_flGoldTickTime;// 0x30c, size 4 (0x4)
	__declspec(align(4)) uint32_t m_unFanfareGoodGuys;// 0x310, size 4 (0x4)
	// m_unFanfareGoodGuys metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) uint32_t m_unFanfareBadGuys;// 0x314, size 4 (0x4)
	// m_unFanfareBadGuys metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) float m_flFanfareTime;// 0x318, size 4 (0x4)
	__declspec(align(4)) int32_t m_iFOWDefeatedTempViewer;// 0x31c, size 4 (0x4)
	__declspec(align(1)) bool m_bInitTournament;// 0x320, size 1 (0x1)
	__declspec(align(1)) bool m_bIsTournament;// 0x321, size 1 (0x1)
	__declspec(align(4)) int32_t m_nGameState;// 0x324, size 4 (0x4)
	// m_nGameState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) DOTA_HeroPickState m_nHeroPickState;// 0x328, size 4 (0x4)
	// m_nHeroPickState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flStateTransitionTime;// 0x32c, size 4 (0x4)
	// m_flStateTransitionTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_hero_selection_time;// 0x330, size 4 (0x4)
	// m_flOverride_dota_hero_selection_time metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_pregame_time;// 0x334, size 4 (0x4)
	// m_flOverride_dota_pregame_time metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_postgame_time;// 0x338, size 4 (0x4)
	// m_flOverride_dota_postgame_time metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_rune_spawn_time;// 0x33c, size 4 (0x4)
	// m_flOverride_dota_rune_spawn_time metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flOverride_dota_tree_regrow_time;// 0x340, size 4 (0x4)
	__declspec(align(4)) int32_t m_iGameMode;// 0x344, size 4 (0x4)
	// m_iGameMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hGameModeEntity;// 0x348, size 4 (0x4)
	// m_hGameModeEntity metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flHeroPickStateTransitionTime;// 0x34c, size 4 (0x4)
	// m_flHeroPickStateTransitionTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_iPlayerIDsInControl[64];// 0x350, size 64 (0x40)
	// m_iPlayerIDsInControl metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSameHeroSelectionEnabled;// 0x390, size 1 (0x1)
	// m_bSameHeroSelectionEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bUseCustomHeroXPValue;// 0x391, size 1 (0x1)
	// m_bUseCustomHeroXPValue metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bUseBaseGoldBountyOnHeroes;// 0x392, size 1 (0x1)
	// m_bUseBaseGoldBountyOnHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bUseUniversalShopMode;// 0x393, size 1 (0x1)
	// m_bUseUniversalShopMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bHideKillMessageHeaders;// 0x394, size 1 (0x1)
	// m_bHideKillMessageHeaders metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flHeroMinimapIconScale;// 0x398, size 4 (0x4)
	// m_flHeroMinimapIconScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCreepMinimapIconScale;// 0x39c, size 4 (0x4)
	// m_flCreepMinimapIconScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flRuneMinimapIconScale;// 0x3a0, size 4 (0x4)
	// m_flRuneMinimapIconScale metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) char m_CustomVictoryMessage[256];// 0x3a4, size 256 (0x100)
	// m_CustomVictoryMessage metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomGameEndDelay;// 0x4a4, size 4 (0x4)
	// m_flCustomGameEndDelay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomGameSetupAutoLaunchDelay;// 0x4a8, size 4 (0x4)
	// m_flCustomGameSetupAutoLaunchDelay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomGameSetupTimeout;// 0x4ac, size 4 (0x4)
	// m_flCustomGameSetupTimeout metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flCustomVictoryMessageDuration;// 0x4b0, size 4 (0x4)
	// m_flCustomVictoryMessageDuration metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bCustomGameSetupAutoLaunchEnabled;// 0x4b4, size 1 (0x1)
	// m_bCustomGameSetupAutoLaunchEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bCustomGameTeamSelectionLocked;// 0x4b5, size 1 (0x1)
	// m_bCustomGameTeamSelectionLocked metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCMModePickBanOrder;// 0x4b8, size 4 (0x4)
	// m_iCMModePickBanOrder metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCDModePickBanOrder;// 0x4bc, size 4 (0x4)
	// m_iCDModePickBanOrder metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iPauseTeam;// 0x4c0, size 4 (0x4)
	// m_iPauseTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nGGTeam;// 0x4c4, size 4 (0x4)
	// m_nGGTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGGEndsAtTime;// 0x4c8, size 4 (0x4)
	// m_flGGEndsAtTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bWhiteListEnabled;// 0x4cc, size 1 (0x1)
	// m_bWhiteListEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(8)) uint64_t m_bItemWhiteList[4];// 0x4d0, size 32 (0x20)
	// m_bItemWhiteList metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_nLastHitUIMode;// 0x4f0, size 4 (0x4)
	// m_nLastHitUIMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) bool m_bHUDTimerTutorialMode;// 0x4f4, size 1 (0x1)
	// m_bHUDTimerTutorialMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) CountdownTimer m_HeroPickMiscTimer;// 0x4f8, size 16 (0x10)
	__declspec(align(4)) CountdownTimer m_ExtraTimeTimer;// 0x508, size 16 (0x10)
	__declspec(align(4)) float m_fExtraTimeRemaining[2];// 0x518, size 8 (0x8)
	// m_fExtraTimeRemaining metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, int32_t > m_HeroPickPhaseBitfield;// 0x520, size 16 (0x10)
	__declspec(align(1)) bool m_bRDFirstThink;// 0x530, size 1 (0x1)
	__declspec(align(1)) bool m_RDMessageSent[64];// 0x531, size 64 (0x40)
	__declspec(align(1)) bool m_bHeroRespawnEnabled;// 0x571, size 1 (0x1)
	// m_bHeroRespawnEnabled metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSuggestedGoodHeroes[128];// 0x572, size 128 (0x80)
	// m_bSuggestedGoodHeroes metadata
	 // MNetworkEnable
	__declspec(align(1)) bool m_bSuggestedBadHeroes[128];// 0x5f2, size 128 (0x80)
	// m_bSuggestedBadHeroes metadata
	 // MNetworkEnable
	__declspec(align(4)) float m_fNextSuggestedHeroUpdateTime;// 0x674, size 4 (0x4)
	__declspec(align(1)) bool m_bHasSwapped[64];// 0x678, size 64 (0x40)
	__declspec(align(4)) int32_t m_iCaptainPlayerIDs[2];// 0x6b8, size 8 (0x8)
	// m_iCaptainPlayerIDs metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_BannedHeroes[10];// 0x6c0, size 40 (0x28)
	// m_BannedHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_SelectedHeroes[10];// 0x6e8, size 40 (0x28)
	// m_SelectedHeroes metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iActiveTeam;// 0x710, size 4 (0x4)
	// m_iActiveTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iStartingTeam;// 0x714, size 4 (0x4)
	// m_iStartingTeam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iPenaltyLevelRadiant;// 0x718, size 4 (0x4)
	// m_iPenaltyLevelRadiant metadata
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iPenaltyLevelDire;// 0x71c, size 4 (0x4)
	// m_iPenaltyLevelDire metadata
	 // MNetworkEnable
	__declspec(align(1)) bool m_bTier3TowerDestroyed;// 0x720, size 1 (0x1)
	// m_bTier3TowerDestroyed metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nSeriesType;// 0x724, size 4 (0x4)
	// m_nSeriesType metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_nRadiantSeriesWins;// 0x728, size 4 (0x4)
	// m_nRadiantSeriesWins metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_nDireSeriesWins;// 0x72c, size 4 (0x4)
	// m_nDireSeriesWins metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(4)) int32_t m_AvailableHerosPerPlayer[50];// 0x730, size 200 (0xc8)
	// m_AvailableHerosPerPlayer metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_UnlockedHeroesPerPlayer[10];// 0x7f8, size 40 (0x28)
	// m_UnlockedHeroesPerPlayer metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_LockedHeroesPerPlayer[400];// 0x820, size 1600 (0x640)
	// m_LockedHeroesPerPlayer metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_CustomGameForceSelectHero[24];// 0xe60, size 96 (0x60)
	__declspec(align(4)) float m_flGoldTime;// 0xec0, size 4 (0x4)
	__declspec(align(4)) float m_flXPTime;// 0xec4, size 4 (0x4)
	__declspec(align(4)) float m_flCreepSpawntime;// 0xec8, size 4 (0x4)
	__declspec(align(4)) float m_flAnnounceStartTime;// 0xecc, size 4 (0x4)
	__declspec(align(4)) float m_flPreGameStartTime;// 0xed0, size 4 (0x4)
	// m_flPreGameStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGameStartTime;// 0xed4, size 4 (0x4)
	// m_flGameStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGameEndTime;// 0xed8, size 4 (0x4)
	// m_flGameEndTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGameLoadTime;// 0xedc, size 4 (0x4)
	// m_flGameLoadTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flHalloweenRoshanLifetime;// 0xee0, size 4 (0x4)
	// m_flHalloweenRoshanLifetime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nHalloweenRoshanLevel;// 0xee4, size 4 (0x4)
	// m_nHalloweenRoshanLevel metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nHalloweenRoshanRemainingHealth;// 0xee8, size 4 (0x4)
	// m_nHalloweenRoshanRemainingHealth metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flHalloweenRoshanRoundStartTime;// 0xeec, size 4 (0x4)
	// m_flHalloweenRoshanRoundStartTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iCustomGameScore[2];// 0xef0, size 8 (0x8)
	// m_iCustomGameScore metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nCustomGameDifficulty;// 0xef8, size 4 (0x4)
	// m_nCustomGameDifficulty metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bEnemyModifiersEnabled;// 0xefc, size 1 (0x1)
	__declspec(align(4)) int32_t m_iWaves;// 0xf00, size 4 (0x4)
	__declspec(align(4)) int32_t m_iCreepUpgradeState;// 0xf04, size 4 (0x4)
	__declspec(align(4)) float m_fGoodGlyphCooldown;// 0xf08, size 4 (0x4)
	// m_fGoodGlyphCooldown metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_fBadGlyphCooldown;// 0xf0c, size 4 (0x4)
	// m_fBadGlyphCooldown metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGlyphCooldowns[14];// 0xf10, size 56 (0x38)
	// m_flGlyphCooldowns metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsNightstalkerNight;// 0xf48, size 1 (0x1)
	// m_bIsNightstalkerNight metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bIsTemporaryNight;// 0xf49, size 1 (0x1)
	// m_bIsTemporaryNight metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_flGoldRedistributeTime;// 0xf4c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nGoldToRedistribute[2];// 0xf50, size 8 (0x8)
	__declspec(align(4)) float m_flNextPreGameThink;// 0xf58, size 4 (0x4)
	__declspec(align(4)) float m_flNextAllDraftGoldThink;// 0xf5c, size 4 (0x4)
char CDOTAGamerules_0F88[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoGood;// 0xf88, size 228 (0xe4)
	// m_ItemStockInfoGood metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_01094[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoBad;// 0x1094, size 228 (0xe4)
	// m_ItemStockInfoBad metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_011A0[0x28];
	__declspec(align(4)) DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData;// 0x11a0, size 8 (0x8)
	// m_AssassinMiniGameNetData metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoCustom1;// 0x11a8, size 228 (0xe4)
	// m_ItemStockInfoCustom1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_012B4[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoCustom2;// 0x12b4, size 228 (0xe4)
	// m_ItemStockInfoCustom2 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_013C0[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoCustom3;// 0x13c0, size 228 (0xe4)
	// m_ItemStockInfoCustom3 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_014CC[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoCustom4;// 0x14cc, size 228 (0xe4)
	// m_ItemStockInfoCustom4 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_015D8[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoCustom5;// 0x15d8, size 228 (0xe4)
	// m_ItemStockInfoCustom5 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_016E4[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoCustom6;// 0x16e4, size 228 (0xe4)
	// m_ItemStockInfoCustom6 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_017F0[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoCustom7;// 0x17f0, size 228 (0xe4)
	// m_ItemStockInfoCustom7 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_018FC[0x28];
	__declspec(align(4)) UnknownAtomicType <0xe4, CUtlVector, class CDOTA_ItemStockInfo > m_ItemStockInfoCustom8;// 0x18fc, size 228 (0xe4)
	// m_ItemStockInfoCustom8 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_01A08[0x28];
	__declspec(align(4)) int32_t m_nGameWinner;// 0x1a08, size 4 (0x4)
	// m_nGameWinner metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) uint32_t m_unMatchID_Deprecated;// 0x1a0c, size 4 (0x4)
	// m_unMatchID_Deprecated metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(8)) uint64_t m_unMatchID64;// 0x1a10, size 8 (0x8)
	// m_unMatchID64 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) bool m_bMatchSignoutComplete;// 0x1a18, size 1 (0x1)
	// m_bMatchSignoutComplete metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hSideShop1;// 0x1a1c, size 4 (0x4)
	// m_hSideShop1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hSideShop2;// 0x1a20, size 4 (0x4)
	// m_hSideShop2 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hSecretShop1;// 0x1a24, size 4 (0x4)
	// m_hSecretShop1 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hSecretShop2;// 0x1a28, size 4 (0x4)
	// m_hSecretShop2 metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hTeamFountains[14];// 0x1a2c, size 56 (0x38)
	// m_hTeamFountains metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hTeamForts[14];// 0x1a64, size 56 (0x38)
	// m_hTeamForts metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hTeamShops[14];// 0x1a9c, size 56 (0x38)
	// m_hTeamShops metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAnnouncerGood;// 0x1ad4, size 4 (0x4)
	// m_hAnnouncerGood metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAnnouncerBad;// 0x1ad8, size 4 (0x4)
	// m_hAnnouncerBad metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAnnouncerSpectator;// 0x1adc, size 4 (0x4)
	// m_hAnnouncerSpectator metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAnnouncerGood_KillingSpree;// 0x1ae0, size 4 (0x4)
	// m_hAnnouncerGood_KillingSpree metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAnnouncerBad_KillingSpree;// 0x1ae4, size 4 (0x4)
	// m_hAnnouncerBad_KillingSpree metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hAnnouncerSpectator_KillingSpree;// 0x1ae8, size 4 (0x4)
	// m_hAnnouncerSpectator_KillingSpree metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_fGameTime;// 0x1aec, size 4 (0x4)
	// m_fGameTime metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkPriority
	__declspec(align(4)) float m_fTimeOfDay;// 0x1af0, size 4 (0x4)
	__declspec(align(4)) int32_t m_iNetTimeOfDay;// 0x1af4, size 4 (0x4)
	// m_iNetTimeOfDay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	__declspec(align(4)) int32_t m_nLoadedPlayers;// 0x1af8, size 4 (0x4)
	// m_nLoadedPlayers metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nExpectedPlayers;// 0x1afc, size 4 (0x4)
	// m_nExpectedPlayers metadata
	 // MNetworkEnable
	 // MNetworkEnable
char CDOTAGamerules_01B04[0x4];
	__declspec(align(4)) int32_t m_iMinimapDebugGridState;// 0x1b04, size 4 (0x4)
	// m_iMinimapDebugGridState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_iFoWFrameNumber;// 0x1b08, size 4 (0x4)
	// m_iFoWFrameNumber metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	 // MNetworkPriority
	__declspec(align(1)) bool m_bIsStableMode;// 0x1b0c, size 1 (0x1)
	// m_bIsStableMode metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bGamePaused;// 0x1b0d, size 1 (0x1)
	// m_bGamePaused metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) float m_fPauseRawTime;// 0x1b10, size 4 (0x4)
	__declspec(align(4)) float m_fPauseCurTime;// 0x1b14, size 4 (0x4)
	__declspec(align(4)) float m_fUnpauseRawTime;// 0x1b18, size 4 (0x4)
	__declspec(align(4)) float m_fUnpauseCurTime;// 0x1b1c, size 4 (0x4)
	__declspec(align(1)) bool m_bGameTimeFrozen;// 0x1b20, size 1 (0x1)
	__declspec(align(4)) int32_t m_nHalloweenTransitionState;// 0x1b24, size 4 (0x4)
	// m_nHalloweenTransitionState metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) bool m_bUseAlternateABRules;// 0x1b28, size 1 (0x1)
	__declspec(align(4)) CountdownTimer m_BotDebugTimer;// 0x1b2c, size 16 (0x10)
	__declspec(align(1)) uint8_t m_BotDebugPushLane[18];// 0x1b3c, size 18 (0x12)
	// m_BotDebugPushLane metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkPriority
	__declspec(align(1)) uint8_t m_BotDebugDefendLane[18];// 0x1b4e, size 18 (0x12)
	// m_BotDebugDefendLane metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_BotDebugFarmLane[6];// 0x1b60, size 6 (0x6)
	// m_BotDebugFarmLane metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_BotDebugRoam[8];// 0x1b66, size 8 (0x8)
	// m_BotDebugRoam metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hBotDebugRoamTarget[2];// 0x1b70, size 8 (0x8)
	// m_hBotDebugRoamTarget metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) uint8_t m_BotDebugRoshan[2];// 0x1b78, size 2 (0x2)
	// m_BotDebugRoshan metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x484, CUtlVector, class CDOTA_AbilityDraftAbilityState > m_AbilityDraftAbilities;// 0x1b7c, size 1156 (0x484)
	// m_AbilityDraftAbilities metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_02028[0x28];
	__declspec(align(4)) int32_t m_nAbilityDraftPlayerTracker;// 0x2028, size 4 (0x4)
	// m_nAbilityDraftPlayerTracker metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nAbilityDraftRoundNumber;// 0x202c, size 4 (0x4)
	// m_nAbilityDraftRoundNumber metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nAbilityDraftAdvanceSteps;// 0x2030, size 4 (0x4)
	// m_nAbilityDraftAdvanceSteps metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nAbilityDraftPhase;// 0x2034, size 4 (0x4)
	// m_nAbilityDraftPhase metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nAbilityDraftHeroesChosen[12];// 0x2038, size 48 (0x30)
	// m_nAbilityDraftHeroesChosen metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownType <0x1, class KeyValues> *> m_vecARDMHeroes[14];// 0x2068, size 224 (0xe0)
	__declspec(align(4)) int32_t m_nARDMHeroesPrecached;// 0x2148, size 4 (0x4)
	__declspec(align(4)) float m_fLastARDMPrecache;// 0x214c, size 4 (0x4)
	__declspec(align(4)) int32_t m_nARDMHeroesPrecachedPercent;// 0x2150, size 4 (0x4)
	// m_nARDMHeroesPrecachedPercent metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_nAllDraftPhase;// 0x2154, size 4 (0x4)
	// m_nAllDraftPhase metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAllDraftRadiantFirst;// 0x2158, size 1 (0x1)
	// m_bAllDraftRadiantFirst metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAllowOverrideVPK;// 0x2159, size 1 (0x1)
	// m_bAllowOverrideVPK metadata
	 // MNetworkEnable
	 // MNetworkEnable
	__declspec(align(4)) int32_t m_nARDMHeroesRemaining[14];// 0x215c, size 56 (0x38)
	// m_nARDMHeroesRemaining metadata
	 // MNetworkEnable
	__declspec(align(1)) bool m_bAbilityDraftCurrentPlayerHasPicked;// 0x2194, size 1 (0x1)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CDOTA_BaseNPC_Pet > > m_hGlobalPetList;// 0x2198, size 16 (0x10)
char CDOTAGamerules_028F0[0x748];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class HeroPickRecord_t > m_vecHeroPickRecord;// 0x28f0, size 16 (0x10)
char CDOTAGamerules_0291C[0x1C];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class HeroDeathRecord_t > m_vecHeroDeathRecord;// 0x291c, size 16 (0x10)
char CDOTAGamerules_0293C[0x10];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_BadResultPositionTriggers;// 0x293c, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_hRuneSpawners;// 0x294c, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_hNeutralSpawners[2];// 0x295c, size 32 (0x20)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_hAncientSpawners[2];// 0x297c, size 32 (0x20)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_SelectionStageList[5][2];// 0x299c, size 40 (0x28)
	__declspec(align(1)) bool m_bSelectionStageSlotFilled[5][2];// 0x29c4, size 10 (0xa)
	__declspec(align(4)) int32_t m_iPreviousRune;// 0x29d0, size 4 (0x4)
	__declspec(align(4)) int32_t m_iAllStarMatchReady;// 0x29d4, size 4 (0x4)
	__declspec(align(4)) float m_fNextRuneSpawnTime;// 0x29d8, size 4 (0x4)
	__declspec(align(1)) bool m_bFirstRune;// 0x29dc, size 1 (0x1)
	__declspec(align(4)) float m_fNextSnapshotTime;// 0x29e0, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hRoshanSpawner;// 0x29e4, size 4 (0x4)
	__declspec(align(4)) int32_t m_iPreviousSpectators;// 0x29e8, size 4 (0x4)
	__declspec(align(1)) bool m_bTeammateEvaluationMatch;// 0x29ec, size 1 (0x1)
	__declspec(align(4)) int32_t m_rgAssignedPlayerID[24];// 0x29f0, size 96 (0x60)
	__declspec(align(4)) uint32_t m_nMaxSpectators;// 0x2a50, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_hDroppedItems;// 0x2a54, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_hWards;// 0x2a64, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x4, CHandle, class CBaseEntity > m_hGameEvents;// 0x2a74, size 4 (0x4)
char CDOTAGamerules_02A88[0x10];
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_Towers;// 0x2a88, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CDOTA_BaseNPC_Tower > > m_TeamTowers[10];// 0x2a98, size 160 (0xa0)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CDOTA_BaseNPC_Building > > m_TeamBarracks[10];// 0x2b38, size 160 (0xa0)
	__declspec(align(4)) CountdownTimer m_TempNightTimer;// 0x2bd8, size 16 (0x10)
	__declspec(align(4)) CountdownTimer m_NightstalkerNightTimer;// 0x2be8, size 16 (0x10)
	__declspec(align(1)) bool m_bUseLenientAFK[2];// 0x2bf8, size 2 (0x2)
	__declspec(align(1)) bool m_bFirstBlood;// 0x2bfa, size 1 (0x1)
	__declspec(align(4)) int32_t m_nFirstBloodTime;// 0x2bfc, size 4 (0x4)
	__declspec(align(4)) CountdownTimer m_CheckIdleTimer;// 0x2c00, size 16 (0x10)
	__declspec(align(4)) int32_t m_nAnnounceHeroPickRadiantPlayerID;// 0x2c10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nAnnounceHeroPickDirePlayerID;// 0x2c14, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRecordBalanceTime;// 0x2c18, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_pszLastUsedAbility[64];// 0x2c1c, size 256 (0x100)
	__declspec(align(4)) UnknownType <0x4, class CUtlString> m_pszLastUsedActiveAbility[64];// 0x2d1c, size 256 (0x100)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CDOTA_ReconnectInfo > m_reconnectinfos;// 0x2e1c, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CBaseEntity > > m_hEnemyCreepsInBase[10];// 0x2e2c, size 160 (0xa0)
	__declspec(align(1)) bool m_bTeamHasAbandonedPlayer[10];// 0x2ecc, size 10 (0xa)
	__declspec(align(1)) bool m_bLobbyHasLeaverDetected;// 0x2ed6, size 1 (0x1)
	__declspec(align(1)) bool m_bGameIsForcedSafeToLeave;// 0x2ed7, size 1 (0x1)
	__declspec(align(1)) bool m_bLobbyHasDicardMatchResults;// 0x2ed8, size 1 (0x1)
	__declspec(align(4)) uint32_t m_nTeamRoshanKills[10];// 0x2edc, size 40 (0x28)
	__declspec(align(4)) int32_t m_iGameEndReason;// 0x2f04, size 4 (0x4)
char CDOTAGamerules_02F18[0x10];
	__declspec(align(4)) float m_flPauseTime;// 0x2f18, size 4 (0x4)
	__declspec(align(4)) int32_t m_pausingPlayerId;// 0x2f1c, size 4 (0x4)
	__declspec(align(4)) int32_t m_unpausingPlayerId;// 0x2f20, size 4 (0x4)
	__declspec(align(4)) int32_t m_nPausesRemaining[64];// 0x2f24, size 256 (0x100)
	__declspec(align(4)) float m_nLastPauseTime[64];// 0x3024, size 256 (0x100)
	__declspec(align(1)) bool m_bNotifiedPlayerLeaverStatus[64];// 0x3124, size 64 (0x40)
	__declspec(align(1)) bool m_bUploadedReplay;// 0x3164, size 1 (0x1)
	__declspec(align(4)) float m_flLobbyWaitTime;// 0x3168, size 4 (0x4)
	__declspec(align(1)) bool m_bGameWasLoaded;// 0x316c, size 1 (0x1)
	__declspec(align(4)) int32_t m_nLoadPauseFrameCount;// 0x3170, size 4 (0x4)
	__declspec(align(1)) bool m_bEnteredWaitingForPlayersBoostPhase;// 0x3174, size 1 (0x1)
	__declspec(align(8)) double m_flStateFallbackTransitionTime;// 0x3178, size 8 (0x8)
	__declspec(align(4)) CountdownTimer m_timerFinishReplay;// 0x3180, size 16 (0x10)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class GameChatLogEntry_t > m_vecChatLog;// 0x3190, size 16 (0x10)
char CDOTAGamerules_03FE8[0xE48];
	__declspec(align(1)) bool m_bFatalErrorAbortGame;// 0x3fe8, size 1 (0x1)
	__declspec(align(1)) bool m_bFillEmptySlotsWithBots;// 0x3fe9, size 1 (0x1)
	__declspec(align(4)) uint32_t m_lobbyLeagueID;// 0x3fec, size 4 (0x4)
	// m_lobbyLeagueID metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkBitCount
	__declspec(align(1)) char m_lobbyGameName[256];// 0x3ff0, size 256 (0x100)
	// m_lobbyGameName metadata
	 // MNetworkEnable
	 // MNetworkEnable
char CDOTAGamerules_040F4[0x4];
	__declspec(align(1)) bool m_bHasHeroStatueLiked[576];// 0x40f4, size 576 (0x240)
	// m_bHasHeroStatueLiked metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(4)) int32_t m_CustomGameTeamMaxPlayers[14];// 0x4334, size 56 (0x38)
	// m_CustomGameTeamMaxPlayers metadata
	 // MNetworkEnable
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, UnknownAtomicType <0x4, CHandle, class CIngameEvent_Base > > m_vecIngameEvents;// 0x436c, size 16 (0x10)
	// m_vecIngameEvents metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkTypeAlias
char CDOTAGamerules_043B0[0x34];
public:
	static int32_t Get_s_GameStateTransitionsIndex() {return *(int32_t *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CDOTAGamerules")->m_staticMembers.data[0].m_pInstance; }
}; // size: 17328 (0x43b0)

#pragma pack(push, 4)
class EntComponentInfo_t
{
// EntComponentInfo_t additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
	__declspec(align(4)) UnknownType <0x10, class V_uuid_t> m_id;// 0x0, size 16 (0x10)
	__declspec(align(4)) char* m_pName;// 0x10, size 4 (0x4)
	__declspec(align(4)) char* m_pCategory;// 0x14, size 4 (0x4)
	__declspec(align(4)) char* m_pCPPClassname;// 0x18, size 4 (0x4)
	__declspec(align(4)) char* m_pDescription;// 0x1c, size 4 (0x4)
	__declspec(align(4)) char* m_pNetworkDataReferencedDescription;// 0x20, size 4 (0x4)
	__declspec(align(4)) char* m_pNetworkDataReferencedPtrPropDescription;// 0x24, size 4 (0x4)
	__declspec(align(4)) int32_t m_nRuntimeIndex;// 0x28, size 4 (0x4)
	__declspec(align(4)) uint32_t m_nFlags;// 0x2c, size 4 (0x4)
	__declspec(align(4)) EntComponentInterface_t *m_pInterfaces;// 0x30, size 4 (0x4)
	__declspec(align(4)) int32_t m_nInterfaces;// 0x34, size 4 (0x4)
	__declspec(align(4)) EntInput_t *m_pInputs;// 0x38, size 4 (0x4)
	__declspec(align(4)) int32_t m_nInputCount;// 0x3c, size 4 (0x4)
	__declspec(align(4)) EntOutput_t *m_pOutputs;// 0x40, size 4 (0x4)
	__declspec(align(4)) int32_t m_nOutputCount;// 0x44, size 4 (0x4)
char EntComponentInfo_t_0140[0xF8];
	__declspec(align(4)) int32_t m_nThinks;// 0x140, size 4 (0x4)
char EntComponentInfo_t_0148[0x4];
	__declspec(align(4)) CEntityComponentHelper *m_pBaseClassComponentHelper;// 0x148, size 4 (0x4)
}; // size: 332 (0x14c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RenderGrid : public CParticleRenderOperatorInstance
{
// C_OP_RenderGrid additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_hMaterial;// 0xa0, size 8 (0x8)
	// m_hMaterial metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeEditor
char C_OP_RenderGrid_0B0[0x8];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RandomTrailLength : public CParticleInitializerOperatorInstance
{
// C_INIT_RandomTrailLength additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flMinLength;// 0x70, size 4 (0x4)
	// m_flMinLength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxLength;// 0x74, size 4 (0x4)
	// m_flMaxLength metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLengthRandExponent;// 0x78, size 4 (0x4)
	// m_flLengthRandExponent metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_RandomTrailLength_080[0x4];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ConstrainDistanceToPath : public CParticleConstraintOperatorInstance
{
// C_OP_ConstrainDistanceToPath additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_fMinDistance;// 0x60, size 4 (0x4)
	// m_fMinDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxDistance0;// 0x64, size 4 (0x4)
	// m_flMaxDistance0 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxDistanceMid;// 0x68, size 4 (0x4)
	// m_flMaxDistanceMid metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flMaxDistance1;// 0x6c, size 4 (0x4)
	// m_flMaxDistance1 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(16)) CPathParameters m_PathParameters;// 0x70, size 32 (0x20)
	__declspec(align(4)) float m_flTravelTime;// 0x90, size 4 (0x4)
	// m_flTravelTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldScale;// 0x94, size 4 (0x4)
	// m_nFieldScale metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) int32_t m_nManualTField;// 0x98, size 4 (0x4)
	// m_nManualTField metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_OP_ConstrainDistanceToPath_0A0[0x4];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class sLoadoutItem
{
// sLoadoutItem additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> name;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t iFlags;// 0x4, size 4 (0x4)
	__declspec(align(1)) bool bPurchased;// 0x8, size 1 (0x1)
char sLoadoutItem_0C[0x3];
}; // size: 12 (0xc)
#pragma pack(pop)

#pragma pack(push, 4)
class CRagdoll : public IRagdoll
{
// CRagdoll additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) ragdoll_t m_ragdoll;// 0x4, size 2568 (0xa08)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_mins;// 0xa0c, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_maxs;// 0xa18, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_origin;// 0xa24, size 12 (0xc)
	__declspec(align(4)) float m_lastUpdate;// 0xa30, size 4 (0x4)
	__declspec(align(1)) bool m_allAsleep;// 0xa34, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecLastOrigin;// 0xa38, size 12 (0xc)
	__declspec(align(4)) float m_flLastOriginChangeTime;// 0xa44, size 4 (0x4)
	__declspec(align(4)) float m_flAwakeTime;// 0xa48, size 4 (0x4)
public:
	static uint32_t Get_s_globalCount() {return *(uint32_t *)schema::SchemaSystem::Get()->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CRagdoll")->m_staticMembers.data[0].m_pInstance; }
}; // size: 2636 (0xa4c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateAlongPath : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateAlongPath additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_fMaxDistance;// 0x70, size 4 (0x4)
	// m_fMaxDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(16)) CPathParameters m_PathParams;// 0x80, size 32 (0x20)
	__declspec(align(1)) bool m_bUseRandomCPs;// 0xa0, size 1 (0x1)
	// m_bUseRandomCPs metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateAlongPath_0B0[0xF];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 4)
class CRenderMesh
{
// CRenderMesh additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x4c, CUtlVectorFixedGrowable, class CSceneObjectData > m_sceneObjects;// 0x0, size 76 (0x4c)
	__declspec(align(4)) UnknownAtomicType <0x4, CStrongHandle, class InfoForResourceTypeCMorphSet > m_morphSet;// 0x4c, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, CBaseConstraint *> m_constraints;// 0x50, size 16 (0x10)
	__declspec(align(4)) CRenderSkeleton m_skeleton;// 0x60, size 56 (0x38)
char CRenderMesh_0124[0x8C];
}; // size: 292 (0x124)
#pragma pack(pop)

#pragma pack(push, 4)
class CSchemaStaticField : public SchemaStaticFieldData_t
{
// CSchemaStaticField additional information
// schemasystem.dll, project schemalib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
}; // size: 32 (0x20)
#pragma pack(pop)

#pragma pack(push, 4)
class constraint_hingeparams_t
{
// constraint_hingeparams_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> worldPosition;// 0x0, size 12 (0xc)
	__declspec(align(4)) UnknownType <0xc, class Vector> worldAxisDirection;// 0xc, size 12 (0xc)
	// worldAxisDirection metadata
	 // MKeyfieldname
	__declspec(align(4)) constraint_axislimit_t hingeAxis;// 0x18, size 16 (0x10)
	__declspec(align(4)) constraint_breakableparams_t constraint;// 0x28, size 24 (0x18)
}; // size: 64 (0x40)
#pragma pack(pop)

#pragma pack(push, 8)
class MaterialDrawDescriptor_t
{
// MaterialDrawDescriptor_t additional information
// engine2.dll, project modellib
// Alignment: 8
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) int32_t m_nBaseVertex;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nVertexCount;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nStartIndex;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t m_nIndexCount;// 0xc, size 4 (0x4)
	__declspec(align(4)) int32_t m_nStartInstance;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t m_nInstanceCount;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flUvDensity;// 0x18, size 4 (0x4)
	__declspec(align(1)) uint8_t m_nPrimitiveType;// 0x1c, size 1 (0x1)
	__declspec(align(1)) uint8_t m_bAlphaBlendedMaterial;// 0x1d, size 1 (0x1)
	__declspec(align(1)) uint8_t m_nFlags;// 0x1e, size 1 (0x1)
	__declspec(align(1)) uint8_t m_padding;// 0x1f, size 1 (0x1)
	__declspec(align(4)) uint32_t m_hInputLayoutHandle[5];// 0x20, size 20 (0x14)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class RenderBufferBinding_t > m_vertexBuffers;// 0x34, size 8 (0x8)
	__declspec(align(8)) RenderBufferBinding_t m_indexBuffer;// 0x40, size 16 (0x10)
	__declspec(align(8)) UnknownAtomicType <0x8, CResourceExtReference, UnknownAtomicType <0x4, CWeakHandle, class InfoForResourceTypeIMaterial2 > > m_pMaterial;// 0x50, size 8 (0x8)
}; // size: 88 (0x58)
#pragma pack(pop)

#pragma pack(push, 4)
class C_BaseAnimatingOverlayController : public C_BaseAnimatingController
{
// C_BaseAnimatingOverlayController additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CAnimationLayer > m_AnimOverlay;// 0x288, size 16 (0x10)
	// m_AnimOverlay metadata
	 // MNetworkEnable
	 // MNetworkEnable
	 // MNetworkUserGroup
	 // MNetworkChangeCallback
char C_BaseAnimatingOverlayController_02C8[0x30];
}; // size: 712 (0x2c8)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticlePerFrameOperatorInstance
{
// C_OP_CPOffsetToPercentageBetweenCPs additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flInputMin;// 0x60, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x64, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputBias;// 0x68, size 4 (0x4)
	// m_flInputBias metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nStartCP;// 0x6c, size 4 (0x4)
	// m_nStartCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nEndCP;// 0x70, size 4 (0x4)
	// m_nEndCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOffsetCP;// 0x74, size 4 (0x4)
	// m_nOffsetCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOuputCP;// 0x78, size 4 (0x4)
	// m_nOuputCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nInputCP;// 0x7c, size 4 (0x4)
	// m_nInputCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bRadialCheck;// 0x80, size 1 (0x1)
	// m_bRadialCheck metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleOffset;// 0x81, size 1 (0x1)
	// m_bScaleOffset metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_CPOffsetToPercentageBetweenCPs_084[0x2];
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecOffset;// 0x84, size 12 (0xc)
	// m_vecOffset metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
}; // size: 144 (0x90)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_ParentVortices : public CParticleForceOperatorInstance
{
// C_OP_ParentVortices additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flForceScale;// 0x60, size 4 (0x4)
	// m_flForceScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecTwistAxis;// 0x64, size 12 (0xc)
	// m_vecTwistAxis metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(1)) bool m_bFlipBasedOnYaw;// 0x70, size 1 (0x1)
	// m_bFlipBasedOnYaw metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_ParentVortices_080[0xF];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_MaintainEmitter : public CParticleEmitterOperatorInstance
{
// C_OP_MaintainEmitter additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nParticlesToMaintain;// 0x60, size 4 (0x4)
	// m_nParticlesToMaintain metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flStartTime;// 0x64, size 4 (0x4)
	// m_flStartTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPoint;// 0x68, size 4 (0x4)
	// m_nScaleControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleControlPointField;// 0x6c, size 4 (0x4)
	// m_nScaleControlPointField metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nSnapshotControlPoint;// 0x70, size 4 (0x4)
	// m_nSnapshotControlPoint metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_MaintainEmitter_080[0xC];
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourceCmdLayer_t
{
// SeqResourceCmdLayer_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(2)) int16_t m_cmd;// 0x0, size 2 (0x2)
	__declspec(align(2)) int16_t m_nLocalReference;// 0x2, size 2 (0x2)
	__declspec(align(2)) int16_t m_nLocalBonemask;// 0x4, size 2 (0x2)
	__declspec(align(2)) int16_t m_nDstResult;// 0x6, size 2 (0x2)
	__declspec(align(2)) int16_t m_nSrcResult;// 0x8, size 2 (0x2)
	__declspec(align(1)) bool m_bSpline;// 0xa, size 1 (0x1)
	__declspec(align(4)) float m_flVar1;// 0xc, size 4 (0x4)
	__declspec(align(4)) float m_flVar2;// 0x10, size 4 (0x4)
	__declspec(align(2)) int16_t m_nLineNumber;// 0x14, size 2 (0x2)
char SeqResourceCmdLayer_t_018[0x2];
}; // size: 24 (0x18)
#pragma pack(pop)

class CSkeletonInstance : public CGameSceneNode
{
// CSkeletonInstance additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(1)) CModelState m_modelState;// 0x100, size 288 (0x120)
	// m_modelState metadata
	 // MNetworkEnable
	 // MHasSubKeyfields
	__declspec(align(1)) bool m_bIsRenderingEnabled;// 0x220, size 1 (0x1)
	// m_bIsRenderingEnabled metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bIsAnimationEnabled;// 0x221, size 1 (0x1)
	// m_bIsAnimationEnabled metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) bool m_bDisableSolidCollisionsForHierarchy;// 0x222, size 1 (0x1)
	// m_bDisableSolidCollisionsForHierarchy metadata
	 // MNetworkDisable
	bool m_bDirtyMotionType : 1;// 0x0, size 0 (0x0)
	// m_bDirtyMotionType metadata
	 // MNetworkDisable
	bool m_bIsGeneratingLatchedParentSpaceState : 1;// 0x0, size 0 (0x0)
	// m_bIsGeneratingLatchedParentSpaceState metadata
	 // MNetworkDisable
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_materialGroup;// 0x224, size 4 (0x4)
	// m_materialGroup metadata
	 // MNetworkEnable
	 // MNetworkChangeCallback
	__declspec(align(1)) uint8_t m_nHitboxSet;// 0x228, size 1 (0x1)
	// m_nHitboxSet metadata
	 // MNetworkEnable
	 // MKeyfieldname
	 // MNetworkEnable
	 // MNetworkBitCount
char CSkeletonInstance_0240[0x17];
}; // size: 576 (0x240)

#pragma pack(push, 4)
class CFourWheelServerVehicle : public CBaseServerVehicle
{
// CFourWheelServerVehicle additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) ViewSmoothingData_t m_ViewSmoothing;// 0x188, size 120 (0x78)
}; // size: 512 (0x200)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapCPOrientationToRotations : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapCPOrientationToRotations additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nCP;// 0x60, size 4 (0x4)
	// m_nCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vecRotation;// 0x64, size 12 (0xc)
	// m_vecRotation metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 4)
class SeqResourcePoseSetting_t
{
// SeqResourcePoseSetting_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sPoseParameter;// 0x0, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sAttachment;// 0x4, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_sReferenceSequence;// 0x8, size 4 (0x4)
	__declspec(align(4)) float m_flValue;// 0xc, size 4 (0x4)
	__declspec(align(1)) bool m_bX;// 0x10, size 1 (0x1)
	__declspec(align(1)) bool m_bY;// 0x11, size 1 (0x1)
	__declspec(align(1)) bool m_bZ;// 0x12, size 1 (0x1)
char SeqResourcePoseSetting_t_014[0x1];
	__declspec(align(4)) int32_t m_eType;// 0x14, size 4 (0x4)
}; // size: 24 (0x18)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCNameListEvents
{
// InfoForResourceTypeCNameListEvents additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCNameListEvents_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeIMaterial2
{
// InfoForResourceTypeIMaterial2 additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeIMaterial2_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class ResourceExtRefList_t
{
// ResourceExtRefList_t additional information
// schemasystem.dll, project resourcefile
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class ResourceReferenceInfo_t > m_resourceRefInfoList;// 0x0, size 8 (0x8)
}; // size: 8 (0x8)
#pragma pack(pop)

#pragma pack(push, 4)
class c_vehicleview_t : public SchemaBase
{
// c_vehicleview_t additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(1)) bool bClampEyeAngles;// 0x4, size 1 (0x1)
	__declspec(align(4)) float flPitchCurveZero;// 0x8, size 4 (0x4)
	__declspec(align(4)) float flPitchCurveLinear;// 0xc, size 4 (0x4)
	__declspec(align(4)) float flRollCurveZero;// 0x10, size 4 (0x4)
	__declspec(align(4)) float flRollCurveLinear;// 0x14, size 4 (0x4)
	__declspec(align(4)) float flFOV;// 0x18, size 4 (0x4)
	__declspec(align(4)) float flYawMin;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float flYawMax;// 0x20, size 4 (0x4)
	__declspec(align(4)) float flPitchMin;// 0x24, size 4 (0x4)
	__declspec(align(4)) float flPitchMax;// 0x28, size 4 (0x4)
}; // size: 44 (0x2c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateGrid : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateGrid additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPoint00;// 0x70, size 4 (0x4)
	// m_nControlPoint00 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLocalOffset00;// 0x74, size 12 (0xc)
	// m_vLocalOffset00 metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPoint01;// 0x80, size 4 (0x4)
	// m_nControlPoint01 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLocalOffset01;// 0x84, size 12 (0xc)
	// m_vLocalOffset01 metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPoint10;// 0x90, size 4 (0x4)
	// m_nControlPoint10 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLocalOffset10;// 0x94, size 12 (0xc)
	// m_vLocalOffset10 metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nControlPoint11;// 0xa0, size 4 (0x4)
	// m_nControlPoint11 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLocalOffset11;// 0xa4, size 12 (0xc)
	// m_vLocalOffset11 metadata
	 // MAttributeName
	 // MDefaultString
	 // MVectorIsCoordinate
	__declspec(align(4)) int32_t m_nNumCols;// 0xb0, size 4 (0x4)
	// m_nNumCols metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nNumRows;// 0xb4, size 4 (0x4)
	// m_nNumRows metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bHorizontalInterleaved;// 0xb8, size 1 (0x1)
	// m_bHorizontalInterleaved metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateGrid_0C0[0x7];
}; // size: 192 (0xc0)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceMorphDifference_t
{
// AnimResourceMorphDifference_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_name;// 0x0, size 4 (0x4)
}; // size: 4 (0x4)
#pragma pack(pop)

#pragma pack(push, 16)
class FeSimdFitMatrices_t
{
// FeSimdFitMatrices_t additional information
// resourcesystem.dll, project mathlib_extended
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(16)) UnknownType <0x30, class FourVectors> vCenter;// 0x0, size 48 (0x30)
	__declspec(align(2)) uint16_t nEnd[4];// 0x30, size 8 (0x8)
	__declspec(align(2)) uint16_t nCtrl[4];// 0x38, size 8 (0x8)
	__declspec(align(16)) FourCovMatrices3 AqqInv;// 0x40, size 96 (0x60)
	__declspec(align(16)) UnknownType <0x10, class fltx4> flStretchMin;// 0xa0, size 16 (0x10)
	__declspec(align(16)) UnknownType <0x10, class fltx4> flStretchMax;// 0xb0, size 16 (0x10)
}; // size: 192 (0xc0)
#pragma pack(pop)

#pragma pack(push, 8)
class CNavVolumeBreadthFirstSearch : public CNavVolume
{
// CNavVolumeBreadthFirstSearch additional information
// server.dll, project server
// Alignment: 8
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vStartPos;// 0x48, size 12 (0xc)
	__declspec(align(4)) float m_flSearchDist;// 0x54, size 4 (0x4)
char CNavVolumeBreadthFirstSearch_078[0x20];
}; // size: 120 (0x78)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_RemapDotProductToScalar : public CParticlePerFrameOperatorInstance
{
// C_OP_RemapDotProductToScalar additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nInputCP1;// 0x60, size 4 (0x4)
	// m_nInputCP1 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nInputCP2;// 0x64, size 4 (0x4)
	// m_nInputCP2 metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x68, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_flInputMin;// 0x6c, size 4 (0x4)
	// m_flInputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInputMax;// 0x70, size 4 (0x4)
	// m_flInputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMin;// 0x74, size 4 (0x4)
	// m_flOutputMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flOutputMax;// 0x78, size 4 (0x4)
	// m_flOutputMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseParticleVelocity;// 0x7c, size 1 (0x1)
	// m_bUseParticleVelocity metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleInitialRange;// 0x7d, size 1 (0x1)
	// m_bScaleInitialRange metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bScaleCurrent;// 0x7e, size 1 (0x1)
	// m_bScaleCurrent metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bActiveRange;// 0x7f, size 1 (0x1)
	// m_bActiveRange metadata
	 // MAttributeName
	 // MDefaultString
}; // size: 128 (0x80)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_SetPerChildControlPoint : public CParticlePerFrameOperatorInstance
{
// C_OP_SetPerChildControlPoint additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nChildGroupID;// 0x60, size 4 (0x4)
	// m_nChildGroupID metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstControlPoint;// 0x64, size 4 (0x4)
	// m_nFirstControlPoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nNumControlPoints;// 0x68, size 4 (0x4)
	// m_nNumControlPoints metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFirstSourcePoint;// 0x6c, size 4 (0x4)
	// m_nFirstSourcePoint metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bSetOrientation;// 0x70, size 1 (0x1)
	// m_bSetOrientation metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bNumBasedOnParticleCount;// 0x71, size 1 (0x1)
	// m_bNumBasedOnParticleCount metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_SetPerChildControlPoint_080[0xE];
}; // size: 128 (0x80)
#pragma pack(pop)

class CDOTA_ActionRunner : public SchemaBase
{
// CDOTA_ActionRunner additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(4)) CModifierParams *m_pEventContext;// 0x4, size 4 (0x4)
	// m_pEventContext metadata
	 // MNetworkDisable
	__declspec(align(4)) CDOTA_BaseNPC *m_pCaster;// 0x8, size 4 (0x4)
	// m_pCaster metadata
	 // MNetworkDisable
}; // size: 12 (0xc)

#pragma pack(push, 16)
class C_OP_MaintainSequentialPath : public CParticlePerFrameOperatorInstance
{
// C_OP_MaintainSequentialPath additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_fMaxDistance;// 0x60, size 4 (0x4)
	// m_fMaxDistance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flNumToAssign;// 0x64, size 4 (0x4)
	// m_flNumToAssign metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flCohesionStrength;// 0x68, size 4 (0x4)
	// m_flCohesionStrength metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTolerance;// 0x6c, size 4 (0x4)
	// m_flTolerance metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bLoop;// 0x70, size 1 (0x1)
	// m_bLoop metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseParticleCount;// 0x71, size 1 (0x1)
	// m_bUseParticleCount metadata
	 // MAttributeName
	 // MDefaultString
char C_OP_MaintainSequentialPath_080[0xE];
	__declspec(align(16)) CPathParameters m_PathParams;// 0x80, size 32 (0x20)
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeProcessingGraphInstance_t
{
// InfoForResourceTypeProcessingGraphInstance_t additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeProcessingGraphInstance_t_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class C_CSequenceTransitioner
{
// C_CSequenceTransitioner additional information
// client.dll, project client
// Alignment: 4

public:
	__declspec(align(4)) UnknownAtomicType <0x10, CUtlVector, class CAnimationLayer > m_animationQueue;// 0x0, size 16 (0x10)
	__declspec(align(1)) bool m_bIsInSimulation;// 0x10, size 1 (0x1)
	__declspec(align(4)) float m_flSimOrRenderTime;// 0x14, size 4 (0x4)
	__declspec(align(4)) float m_flInterpolatedTime;// 0x18, size 4 (0x4)
}; // size: 28 (0x1c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_Decay : public CParticlePerFrameOperatorInstance
{
// C_OP_Decay additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
}; // size: 96 (0x60)
#pragma pack(pop)

#pragma pack(push, 1)
class InfoForResourceTypeCWorldVisibility
{
// InfoForResourceTypeCWorldVisibility additional information
// resourcesystem.dll, project resourcesystem
// Alignment: 1
// SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
char InfoForResourceTypeCWorldVisibility_01[0x1];
}; // size: 1 (0x1)
#pragma pack(pop)

#pragma pack(push, 4)
class CSpotlightTraceCacheEntry
{
// CSpotlightTraceCacheEntry additional information
// client.dll, project client
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0xc, class Vector> m_origin;// 0x0, size 12 (0xc)
	__declspec(align(4)) float m_radius;// 0xc, size 4 (0x4)
}; // size: 16 (0x10)
#pragma pack(pop)

#pragma pack(push, 4)
class vehicle_crashsound_t : public SchemaBase
{
// vehicle_crashsound_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) float flMinSpeed;// 0x4, size 4 (0x4)
	__declspec(align(4)) float flMinDeltaSpeed;// 0x8, size 4 (0x4)
	__declspec(align(4)) int32_t gearLimit;// 0xc, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> iszCrashSound;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)
#pragma pack(pop)

#pragma pack(push, 4)
class locksound_t : public SchemaBase
{
// locksound_t additional information
// server.dll, project server
// Alignment: 4
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> sLockedSound;// 0x4, size 4 (0x4)
	// sLockedSound metadata
	 // MKeyfieldname
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> sLockedSentence;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> sUnlockedSound;// 0xc, size 4 (0x4)
	// sUnlockedSound metadata
	 // MKeyfieldname
	 // MKeyfieldname
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> sUnlockedSentence;// 0x10, size 4 (0x4)
	__declspec(align(4)) int32_t iLockedSentence;// 0x14, size 4 (0x4)
	__declspec(align(4)) int32_t iUnlockedSentence;// 0x18, size 4 (0x4)
	__declspec(align(4)) float flwaitSound;// 0x1c, size 4 (0x4)
	__declspec(align(4)) float flwaitSentence;// 0x20, size 4 (0x4)
	__declspec(align(1)) uint8_t bEOFLocked;// 0x24, size 1 (0x1)
	__declspec(align(1)) uint8_t bEOFUnlocked;// 0x25, size 1 (0x1)
char locksound_t_028[0x2];
}; // size: 40 (0x28)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_ColorLitPerParticle : public CParticleInitializerOperatorInstance
{
// C_INIT_ColorLitPerParticle additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS

public:
char C_INIT_ColorLitPerParticle_088[0x18];
	__declspec(align(1)) UnknownType <0x4, class Color> m_ColorMin;// 0x88, size 4 (0x4)
	// m_ColorMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_ColorMax;// 0x8c, size 4 (0x4)
	// m_ColorMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_TintMin;// 0x90, size 4 (0x4)
	// m_TintMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) UnknownType <0x4, class Color> m_TintMax;// 0x94, size 4 (0x4)
	// m_TintMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flTintPerc;// 0x98, size 4 (0x4)
	// m_flTintPerc metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) ParticleColorBlendMode_t m_nTintBlendMode;// 0x9c, size 4 (0x4)
	// m_nTintBlendMode metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flLightAmplification;// 0xa0, size 4 (0x4)
	// m_flLightAmplification metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_ColorLitPerParticle_0B0[0xC];
}; // size: 176 (0xb0)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreatePhyllotaxis : public CParticleInitializerOperatorInstance
{
// C_INIT_CreatePhyllotaxis additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nScaleCP;// 0x74, size 4 (0x4)
	// m_nScaleCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nComponent;// 0x78, size 4 (0x4)
	// m_nComponent metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
	__declspec(align(4)) float m_fRadCentCore;// 0x7c, size 4 (0x4)
	// m_fRadCentCore metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fRadPerPoint;// 0x80, size 4 (0x4)
	// m_fRadPerPoint metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fRadPerPointTo;// 0x84, size 4 (0x4)
	// m_fRadPerPointTo metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fpointAngle;// 0x88, size 4 (0x4)
	// m_fpointAngle metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fsizeOverall;// 0x8c, size 4 (0x4)
	// m_fsizeOverall metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fRadBias;// 0x90, size 4 (0x4)
	// m_fRadBias metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fMinRad;// 0x94, size 4 (0x4)
	// m_fMinRad metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_fDistBias;// 0x98, size 4 (0x4)
	// m_fDistBias metadata
	 // MAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseLocalCoords;// 0x9c, size 1 (0x1)
	// m_bUseLocalCoords metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseWithContEmit;// 0x9d, size 1 (0x1)
	// m_bUseWithContEmit metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseOrigRadius;// 0x9e, size 1 (0x1)
	// m_bUseOrigRadius metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreatePhyllotaxis_0A0[0x1];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 4)
class AnimResourceEncodedFrames_t
{
// AnimResourceEncodedFrames_t additional information
// animationsystem.dll, project animationsystem
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS

public:
	__declspec(align(4)) UnknownType <0x4, class CResourceString> m_fileName;// 0x0, size 4 (0x4)
	__declspec(align(4)) int32_t m_nFrames;// 0x4, size 4 (0x4)
	__declspec(align(4)) int32_t m_nFramesPerBlock;// 0x8, size 4 (0x4)
	__declspec(align(4)) UnknownAtomicType <0x8, CResourceArray, class AnimResourceFrameBlockAnim_t > m_frameblockArray;// 0xc, size 8 (0x8)
	__declspec(align(4)) AnimResourceEncodeDifference_t m_usageDifferences;// 0x14, size 56 (0x38)
}; // size: 76 (0x4c)
#pragma pack(pop)

#pragma pack(push, 16)
class C_OP_FadeOutSimple : public CParticlePerFrameOperatorInstance
{
// C_OP_FadeOutSimple additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) float m_flFadeOutTime;// 0x60, size 4 (0x4)
	// m_flFadeOutTime metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nFieldOutput;// 0x64, size 4 (0x4)
	// m_nFieldOutput metadata
	 // MAttributeName
	 // MDefaultString
	 // MPropertyAttributeChoiceName
char C_OP_FadeOutSimple_070[0x8];
}; // size: 112 (0x70)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_SetHitboxToClosest : public CParticleInitializerOperatorInstance
{
// C_INIT_SetHitboxToClosest additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nDesiredHitbox;// 0x74, size 4 (0x4)
	// m_nDesiredHitbox metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flHitBoxScale;// 0x78, size 4 (0x4)
	// m_flHitBoxScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_HitboxSetName[128];// 0x7c, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseBones;// 0xfc, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_SetHitboxToClosest_0100[0x3];
}; // size: 256 (0x100)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_CreateOnModelAtHeight : public CParticleInitializerOperatorInstance
{
// C_INIT_CreateOnModelAtHeight additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(1)) bool m_bUseBones;// 0x70, size 1 (0x1)
	// m_bUseBones metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bForceZ;// 0x71, size 1 (0x1)
	// m_bForceZ metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x74, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nHeightCP;// 0x78, size 4 (0x4)
	// m_nHeightCP metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bUseWaterHeight;// 0x7c, size 1 (0x1)
	// m_bUseWaterHeight metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flDesiredHeight;// 0x80, size 4 (0x4)
	// m_flDesiredHeight metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flHitBoxScale;// 0x84, size 4 (0x4)
	// m_flHitBoxScale metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) char m_HitboxSetName[128];// 0x88, size 128 (0x80)
	// m_HitboxSetName metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_CreateOnModelAtHeight_0110[0x8];
}; // size: 272 (0x110)
#pragma pack(pop)

#pragma pack(push, 16)
class C_INIT_RingWave : public CParticleInitializerOperatorInstance
{
// C_INIT_RingWave additional information
// particles.dll, project particles
// Alignment: 16
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS

public:
	__declspec(align(4)) int32_t m_nControlPointNumber;// 0x70, size 4 (0x4)
	// m_nControlPointNumber metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOverrideCP;// 0x74, size 4 (0x4)
	// m_nOverrideCP metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) int32_t m_nOverrideCP2;// 0x78, size 4 (0x4)
	// m_nOverrideCP2 metadata
	 // MSrc1ImportAttributeName
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flParticlesPerOrbit;// 0x7c, size 4 (0x4)
	// m_flParticlesPerOrbit metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInitialRadius;// 0x80, size 4 (0x4)
	// m_flInitialRadius metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flThickness;// 0x84, size 4 (0x4)
	// m_flThickness metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInitialSpeedMin;// 0x88, size 4 (0x4)
	// m_flInitialSpeedMin metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flInitialSpeedMax;// 0x8c, size 4 (0x4)
	// m_flInitialSpeedMax metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flRoll;// 0x90, size 4 (0x4)
	// m_flRoll metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flPitch;// 0x94, size 4 (0x4)
	// m_flPitch metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(4)) float m_flYaw;// 0x98, size 4 (0x4)
	// m_flYaw metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bEvenDistribution;// 0x9c, size 1 (0x1)
	// m_bEvenDistribution metadata
	 // MAttributeName
	 // MDefaultString
	__declspec(align(1)) bool m_bXYVelocityOnly;// 0x9d, size 1 (0x1)
	// m_bXYVelocityOnly metadata
	 // MAttributeName
	 // MDefaultString
char C_INIT_RingWave_0A0[0x2];
}; // size: 160 (0xa0)
#pragma pack(pop)

#pragma pack(push, 16)
class VPhysXJoint_t
{
// VPhysXJoint_t additional information
// engine2.dll, project modellib
// Alignment: 16
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(2)) uint16_t m_nType;// 0x0, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nBody1;// 0x2, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nBody2;// 0x4, size 2 (0x2)
	__declspec(align(2)) uint16_t m_nFlags;// 0x6, size 2 (0x2)
	__declspec(align(16)) UnknownType <0x20, class CTransform> m_Frame1;// 0x10, size 32 (0x20)
	__declspec(align(16)) UnknownType <0x20, class CTransform> m_Frame2;// 0x30, size 32 (0x20)
	__declspec(align(1)) bool m_bEnableLinearLimit;// 0x50, size 1 (0x1)
	__declspec(align(4)) VPhysXRange_t m_LinearLimit;// 0x54, size 8 (0x8)
	__declspec(align(1)) bool m_bEnableLinearMotor;// 0x5c, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vLinearTargetVelocity;// 0x60, size 12 (0xc)
	__declspec(align(4)) float m_flMaxForce;// 0x6c, size 4 (0x4)
	__declspec(align(1)) bool m_bEnableSwingLimit;// 0x70, size 1 (0x1)
	__declspec(align(4)) VPhysXRange_t m_SwingLimit;// 0x74, size 8 (0x8)
	__declspec(align(1)) bool m_bEnableTwistLimit;// 0x7c, size 1 (0x1)
	__declspec(align(4)) VPhysXRange_t m_TwistLimit;// 0x80, size 8 (0x8)
	__declspec(align(1)) bool m_bEnableAngularMotor;// 0x88, size 1 (0x1)
	__declspec(align(4)) UnknownType <0xc, class Vector> m_vAngularTargetVelocity;// 0x8c, size 12 (0xc)
	__declspec(align(4)) float m_flMaxTorque;// 0x98, size 4 (0x4)
	__declspec(align(4)) float m_flLinearFrequency;// 0x9c, size 4 (0x4)
	__declspec(align(4)) float m_flLinearDampingRatio;// 0xa0, size 4 (0x4)
	__declspec(align(4)) float m_flAngularFrequency;// 0xa4, size 4 (0x4)
	__declspec(align(4)) float m_flAngularDampingRatio;// 0xa8, size 4 (0x4)
char VPhysXJoint_t_0B0[0x4];
}; // size: 176 (0xb0)
#pragma pack(pop)

class CDOTA_Tree : public CObstructionObject
{
// CDOTA_Tree additional information
// server.dll, project server
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_IS_ABSTRACT
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public:
	__declspec(align(1)) bool m_bStanding;// 0xc, size 1 (0x1)
char CDOTA_Tree_010[0x3];
	__declspec(align(4)) uint32_t m_nOccluderIndex;// 0x10, size 4 (0x4)
}; // size: 20 (0x14)

#pragma pack(push, 4)
class RnMeshDesc_t : public RnShapeDesc_t
{
// RnMeshDesc_t additional information
// engine2.dll, project modellib
// Alignment: 4
// SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR

public:
	__declspec(align(4)) RnMesh_t m_Mesh;// 0x8, size 68 (0x44)
}; // size: 76 (0x4c)
#pragma pack(pop)


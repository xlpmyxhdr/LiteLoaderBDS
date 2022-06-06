// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "IMinecraftEventing.hpp"
#include "Social.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecraftEventing {

#define AFTER_EXTRA
// Add Member There
public:
enum InteractionType;
enum ChangeType;
enum TeleportationCause;
enum BlockPlacementMethod;
enum AchievementIds;
enum POIBlockInteractionType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTEVENTING
public:
    class MinecraftEventing& operator=(class MinecraftEventing const &) = delete;
    MinecraftEventing(class MinecraftEventing const &) = delete;
    MinecraftEventing() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTEVENTING
public:
    MCVAPI void addCrashTelemetryToBatch(class std::shared_ptr<class Bedrock::SessionInfo>);
    MCVAPI void addListener(std::unique_ptr<class Social::Events::IEventListener>);
    MCVAPI void fileEventCloudWorldPullFailed(std::string const &, std::string const &, bool);
    MCVAPI void fireChatUsedEvent(unsigned int, bool);
    MCVAPI void fireClassroomSettingUpdated(enum ClassroomSetting, enum SettingsScreenMode);
    MCVAPI void fireClubsEngagementEvent(enum IMinecraftEventing::ClubsEngagementAction, enum IMinecraftEventing::ClubsEngagementTargetType, char const *, struct Realms::RealmId, std::string);
    MCVAPI void fireClubsOpenFeedScreenEvent(enum IMinecraftEventing::ClubsFeedScreenSource, struct Realms::RealmId, std::string);
    MCVAPI void fireCodeCommandButtonPressed();
    MCVAPI void fireCommunitySIFTProcessEvent(std::string, enum TextProcessingEventOrigin, unsigned short, bool, double, char, char, class Json::Value const &);
    MCVAPI void fireCourseButtonPressed(std::string const &, std::string const &);
    MCVAPI void fireCurrentInputUpdated(class IClientInstance const &);
    MCVAPI void fireDBStorageError(struct LevelStorageEventingContext const &, std::string const &);
    MCVAPI void fireDayOneExperienceStateChanged(enum IMinecraftEventing::DayOneExperienceState, class std::optional<unsigned int>, class std::optional<unsigned __int64>);
    MCVAPI void fireEduServiceRequestFailed(std::string const &, std::string const &, std::string const &, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    MCVAPI void fireEventAchievementReceived(std::string const &, std::string const &, std::string const &);
    MCVAPI void fireEventActorValueValidationFailed(std::string const &, char const *);
    MCVAPI void fireEventAndroidHelpRequest();
    MCVAPI void fireEventAndroidScopedStorageDebug(unsigned __int64);
    MCVAPI void fireEventAppInitFileOpenStats(struct Core::Profile::FileCounters const &, struct Core::Profile::FileCounters const &);
    MCVAPI void fireEventAppPaused();
    MCVAPI void fireEventAppUnpaused();
    MCVAPI void fireEventArmorStandItemEquipped(class ArmorStand const &, class ItemDescriptor const &);
    MCVAPI void fireEventAssertFailed(std::string const &, std::string const &);
    MCVAPI void fireEventBlockPlacedByCommand(class Block const &, int);
    MCVAPI void fireEventBlockTypeRegistryChecksumMismatch(std::string const &, unsigned __int64 const &, unsigned __int64 const &, std::string const &);
    MCVAPI void fireEventBoardTextUpdated(class ChalkboardBlockActor &);
    MCVAPI void fireEventBundleSubOfferClicked(int, int, std::string const &, std::string const &, bool, std::string const &);
    MCVAPI void fireEventButtonPressed(class gsl::basic_string_span<char const, -1>, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    MCVAPI void fireEventCameraUsed(bool);
    MCVAPI void fireEventChatSettingsUpdated(class Player const *, std::vector<class Social::Events::Property> const &) const;
    MCVAPI void fireEventChunkChanged(class LevelChunk &);
    MCVAPI void fireEventChunkLoaded(class LevelChunk &);
    MCVAPI void fireEventChunkUnloaded(class LevelChunk &);
    MCVAPI void fireEventClientLeftGameDueToUnrecoverableError(std::string const &, bool);
    MCVAPI void fireEventCodeBuilderClosed() const;
    MCVAPI void fireEventCodeBuilderLog(struct Webview::TelemetryCommonProperties const &, std::string const &, std::string &) const;
    MCVAPI void fireEventCodeBuilderRuntimeAction(std::string const &) const;
    MCVAPI void fireEventCodeBuilderScoreChanged(std::string const &, int) const;
    MCVAPI void fireEventCompoundCreatorCreated(int, int);
    MCVAPI void fireEventConnectedStorageUploadResult(bool, unsigned int, unsigned int, unsigned int, std::string const &);
    MCVAPI void fireEventConnectionFailed(enum IConnectionEventing::ConnectionFailureReason);
    MCVAPI void fireEventContentLogsInWorldSession(std::string const &, unsigned int, unsigned int);
    MCVAPI void fireEventContentShared(std::string const &, std::string const &, enum IMinecraftEventing::ShareMode const &);
    MCVAPI void fireEventControlRemappedByPlayer(std::string const &, enum RawInputType, int) const;
    MCVAPI void fireEventCopyWorldEducationEnabled();
    MCVAPI void fireEventCrashSystemFailedToInit();
    MCVAPI void fireEventDefaultGameTypeChanged(enum GameType, enum GameType);
    MCVAPI void fireEventDeviceAccountFailure(enum IMinecraftEventing::SignInStage, enum IMinecraftEventing::DeviceAccountFailurePhase, unsigned int, std::string const &);
    MCVAPI void fireEventDeviceAccountSuccess(bool, std::string const &);
    MCVAPI void fireEventDeviceIdManagerFailOnIdentityGained();
    MCVAPI void fireEventDeviceLost();
    MCVAPI void fireEventDifficultySet(enum Difficulty, enum Difficulty);
    MCVAPI void fireEventDiskStatus(enum DiskStatus, enum Core::LevelStorageState, unsigned __int64);
    MCVAPI void fireEventDwellerDied(class Actor &, class ActorDamageSource const &, bool);
    MCVAPI void fireEventDwellerRemoved(class Actor &, bool);
    MCVAPI void fireEventEduContentVerificationFailed() const;
    MCVAPI void fireEventEduDemoConversion(enum ADRole, enum LastClickedSource);
    MCVAPI void fireEventEduOptionSet(class Option const &) const;
    MCVAPI void fireEventEduResources() const;
    MCVAPI void fireEventEduServiceStatus(std::string const &, std::string const &, int, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>) const;
    MCVAPI void fireEventEduiOSPurchaseTransaction(enum TransactionStatus const &) const;
    MCVAPI void fireEventElementConstructorUsed(int, int, enum IMinecraftEventing::ElementConstructorUseType);
    MCVAPI void fireEventEntitlementListInfo(std::vector<class ContentIdentity> &, bool);
    MCVAPI void fireEventEntitySpawned(class Player *, int, unsigned int);
    MCVAPI void fireEventGameRulesUpdated(float, float, std::string const &);
    MCVAPI void fireEventGameRulesUpdated(int, int, std::string const &);
    MCVAPI void fireEventGameRulesUpdated(bool, bool, std::string const &);
    MCVAPI void fireEventGameSessionStart(class Player *, class IClientInstance &, class Level &, std::string const &, int, std::string const &, std::string const &, bool);
    MCVAPI void fireEventHardwareInfo();
    MCVAPI void fireEventHowToPlayTopicChanged(std::string const &, enum InputMode);
    MCVAPI void fireEventIAPPurchaseAttempt(std::string const &, std::string const &, class Offer &, enum PurchasePath);
    MCVAPI void fireEventIAPPurchaseResolved(std::string const &, std::string const &, class Offer &, enum IMinecraftEventing::PurchaseResult, enum PurchasePath);
    MCVAPI void fireEventIAPRedeemAttempt(std::string const &, std::string const &, std::string const &, enum PurchasePath);
    MCVAPI void fireEventIAPRedeemResolved(std::string const &, std::string const &, std::string const &, enum IMinecraftEventing::PurchaseResult, enum PurchasePath);
    MCVAPI void fireEventJoinByCode(std::string const &);
    MCVAPI void fireEventJoinCanceled(enum LoadingState);
    MCVAPI void fireEventLabTableCreated(int, int, int);
    MCVAPI void fireEventLevelChunkPerformanceData(bool);
    MCVAPI void fireEventLevelDatLoadFailed(std::string const &, std::string const &, bool);
    MCVAPI void fireEventLevelDataOverride(class gsl::basic_string_span<char const, -1>) const;
    MCVAPI void fireEventLevelDestruct();
    MCVAPI void fireEventLicenseCheck(bool, struct ExtraLicenseData &);
    MCVAPI void fireEventLockedItemGiven();
    MCVAPI void fireEventMultiplayerConnectionStateChanged(bool, std::string const &, std::string const &, unsigned int, unsigned int, unsigned int, std::string const &);
    MCVAPI void fireEventMultiplayerSessionUpdate(class gsl::not_null<class Level const *>, class Player const *);
    MCVAPI void fireEventNewContentCheckCompleted(std::string const &, bool);
    MCVAPI void fireEventNpcPropertiesUpdated(class Actor &, bool);
    MCVAPI void fireEventOSKTextTruncation(unsigned int);
    MCVAPI void fireEventOfferRated(std::string const &, int, int, int, double);
    MCVAPI void fireEventOnAppResume(std::vector<struct std::pair<std::string, float>>);
    MCVAPI void fireEventOnAppStart(std::vector<struct std::pair<std::string, float>>);
    MCVAPI void fireEventOnAppSuspend(std::vector<struct std::pair<std::string, float>>, bool);
    MCVAPI void fireEventOnDeviceLost(std::vector<struct std::pair<std::string, float>>);
    MCVAPI void fireEventOnSuccessfulClientLogin(class Level const *);
    MCVAPI void fireEventOptionsUpdated(class Options &, enum InputMode, bool);
    MCVAPI void fireEventOreUIError(unsigned int const &, std::string const &);
    MCVAPI void fireEventPackHashChanged(class PackManifest const &);
    MCVAPI void fireEventPackPlayed(class PackInstance const &, unsigned int);
    MCVAPI void fireEventPackUpgradeAttempt(class PackManifest const &, class PackReport const &);
    MCVAPI void fireEventPacketViolationDetected(struct ExtendedStreamReadResult const &, enum PacketViolationResponse, enum MinecraftPacketIds, class NetworkIdentifier const &);
    MCVAPI void fireEventPerformanceContext(class PerfContextTrackerReport const &);
    MCVAPI void fireEventPerformanceMetrics(struct ProfilerLiteTelemetry const &, bool);
    MCVAPI void fireEventPersonaAvatarUpdated(std::string const &, std::vector<std::string> const &, std::vector<bool> const &, std::vector<bool> const &, bool, bool, std::string const &, std::string const &, std::string const &, bool, std::vector<std::string> const &, std::vector<std::string> const &);
    MCVAPI void fireEventPersonaAvatarsListed(std::vector<std::string> const &);
    MCVAPI void fireEventPersonaCategoryInformation(std::string const &);
    MCVAPI void fireEventPersonaCreationFailed(std::string const &, std::string const &, bool, bool, std::string const &, std::string const &);
    MCVAPI void fireEventPersonaEmotePlayed(std::string const &, bool, int);
    MCVAPI void fireEventPersonaGeneralError(std::string const &);
    MCVAPI void fireEventPersonaInitalizationEvent(unsigned int, std::string const &, std::string const &);
    MCVAPI void fireEventPersonaItemPreviewed(std::string const &, std::string const &, std::string const &, unsigned int, unsigned int, enum IMinecraftEventing::PromotionType, bool, std::string const &, std::string const &, double, enum IMinecraftEventing::StoreType);
    MCVAPI void fireEventPersonaLoadingPieces(unsigned int, double);
    MCVAPI void fireEventPersonaSkinChanged(std::string const &, std::string const &, bool);
    MCVAPI void fireEventPersonaStillLoading(bool, bool, bool, bool, bool, bool, bool, bool);
    MCVAPI void fireEventPersonaUserLoadedActive(std::string const &, std::string const &, bool);
    MCVAPI void fireEventPersonaXForgeResponses(std::vector<std::string> const &, int);
    MCVAPI void fireEventPlayerBanned(std::string const &);
    MCVAPI void fireEventPlayerBounced(class Player *, class Block const &, int);
    MCVAPI void fireEventPlayerDamaged(class Player *, enum ActorDamageCause);
    MCVAPI void fireEventPlayerJoinWorld(unsigned int const &, unsigned char, enum IConnectionEventing::PlayerJoinWorldAttemptState, int);
    MCVAPI void fireEventPlayerKicked(std::string const &, std::string const &);
    MCVAPI void fireEventPlayerMessageChat(std::string const &, std::string const &);
    MCVAPI void fireEventPlayerMessageMe(std::string const &, std::string const &);
    MCVAPI void fireEventPlayerMessageSay(std::string const &, std::string const &);
    MCVAPI void fireEventPlayerMessageTell(std::string const &, std::string const &, std::string const &);
    MCVAPI void fireEventPlayerMessageTitle(std::string const &, std::string const &, std::string const &);
    MCVAPI void fireEventPlayerTravelled(class Player *, float);
    MCVAPI void fireEventPopupClosed(std::string const &) const;
    MCVAPI void fireEventPopupFiredEdu(std::string const &, std::string const &, std::string const &, std::string const &, enum ActiveDirectoryAction);
    MCVAPI void fireEventPortfolioExported(int, int);
    MCVAPI void fireEventProgressionsSet(std::vector<std::string> const &);
    MCVAPI void fireEventPromotionNotificationClicked(std::string const &);
    MCVAPI void fireEventPurchaseAttempt(std::string const &, std::string const &, std::string const &, enum IMinecraftEventing::StoreType, enum PurchasePath);
    MCVAPI void fireEventPurchaseFailureDetails(int, std::string const &, std::string const &, std::string const &);
    MCVAPI void fireEventPurchaseGameAttempt(std::string const &, std::string const &, std::string const &);
    MCVAPI void fireEventPurchaseResolved(std::string const &, std::string const &, std::string const &, enum IMinecraftEventing::StoreType, enum IMinecraftEventing::PurchaseResult, enum PurchasePath);
    MCVAPI void fireEventPushNotificationOpened(std::string const &, std::string const &);
    MCVAPI void fireEventPushNotificationPermission(bool, std::string const &);
    MCVAPI void fireEventPushNotificationReceived(class PushNotificationMessage const &);
    MCVAPI void fireEventRealmDownload(std::string const &, std::string const &, int, int, int);
    MCVAPI void fireEventRealmMemberlistCleared(struct Realms::RealmId const &, int const &);
    MCVAPI void fireEventRealmShared(std::string const &, enum IMinecraftEventing::ShareMode const &, struct Realms::RealmId const &);
    MCVAPI void fireEventRealmUpload(std::string const &, std::string const &, int, int, int, bool);
    MCVAPI void fireEventRealmUrlGenerated(std::string const &, struct Realms::RealmId const &);
    MCVAPI void fireEventRealmsSubscriptionPurchaseFailed(struct ProductSku const &, enum RealmsPurchaseIntent, enum RealmsPurchaseFailureReason);
    MCVAPI void fireEventRealmsSubscriptionPurchaseStarted(struct ProductSku const &, enum RealmsPurchaseIntent);
    MCVAPI void fireEventRealmsSubscriptionPurchaseSucceeded(struct ProductSku const &, enum RealmsPurchaseIntent);
    MCVAPI void fireEventReducerBlockEntered(class ItemDescriptor const &);
    MCVAPI void fireEventRenderingSizeChanged();
    MCVAPI void fireEventRespawn(class Player &, int);
    MCVAPI void fireEventRespondedToAcceptContent(struct PacksInfoData const &, bool);
    MCVAPI void fireEventScreenChanged(unsigned int const &, std::string const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> const &);
    MCVAPI void fireEventScreenLoaded(unsigned int const &, std::string const &, double, double, double);
    MCVAPI void fireEventScriptLoaded(std::string const &, unsigned __int64);
    MCVAPI void fireEventScriptRan(std::string const &, unsigned __int64, bool, bool);
    MCVAPI void fireEventSearchCatalogRequest(class SearchRequestTelemetry const &);
    MCVAPI void fireEventSearchItemSelected(int, int, std::string const &, int, int);
    MCVAPI void fireEventServerDrivenLayoutImagesLoaded(class RequestTelemetry &, std::string, int, unsigned __int64, int, int, int, std::vector<unsigned short> &);
    MCVAPI void fireEventServerDrivenLayoutPageLoaded(class RequestTelemetry &, std::string, int, int, int, int, int);
    MCVAPI void fireEventServerRespawnSearchTime(class Player &, class PlayerRespawnTelemetryData const &);
    MCVAPI void fireEventServerShutdownDueToError(std::string const &);
    MCVAPI void fireEventSetMultiplayerCorrelationId(class Player *, std::string const &, std::string const &);
    MCVAPI void fireEventSetValidForAchievements(class Player *, bool);
    MCVAPI void fireEventSidebarNavigation(unsigned int const &, std::string const &, std::string const &, int, bool, bool, bool);
    MCVAPI void fireEventSidebarVerboseToggled(unsigned int const &, std::string const &, std::string, bool);
    MCVAPI void fireEventSignInEdu(std::string const &, enum ADRole, enum IMinecraftEventing::EduSignInStage, std::string const &, std::string const &, std::vector<struct std::pair<std::string, std::string>> const &);
    MCVAPI void fireEventSignInToIdentity(enum IMinecraftEventing::SignInAccountType, enum IMinecraftEventing::SignInTrigger, bool, enum IMinecraftEventing::SignInStage, enum Social::SignInResult, struct Social::PlayerIDs, std::string const &);
    MCVAPI void fireEventSignOutOfIdentity(enum IMinecraftEventing::SignInAccountType, enum IMinecraftEventing::SignInTrigger, std::string const &, std::string const &);
    MCVAPI void fireEventSplitScreenUpdated(class IClientInstance const &);
    MCVAPI void fireEventStackLoaded(struct StackStats const &);
    MCVAPI void fireEventStartClient(std::string const &);
    MCVAPI void fireEventStartWorld(enum IMinecraftEventing::NetworkType, std::string const &, enum Social::MultiplayerServiceIdentifier);
    MCVAPI void fireEventStorage(int, std::string const &);
    MCVAPI void fireEventStorageReport(std::string const &);
    MCVAPI void fireEventStoreDiscoveryRequestResponse(unsigned short);
    MCVAPI void fireEventStoreLocalizationBinaryFetchResponse(unsigned short, unsigned int);
    MCVAPI void fireEventStoreOfferClicked(int, int, int, int, int, int, std::string const &, std::string const &, bool, std::string const &);
    MCVAPI void fireEventStorePlayFabRequestResponse(unsigned short);
    MCVAPI void fireEventStorePromotionNotification(std::string const &);
    MCVAPI void fireEventStoreSearch(struct storeSearch::TelemetryData const &);
    MCVAPI void fireEventStoreSessionAuthRequestResponse(unsigned short);
    MCVAPI void fireEventStoreSessionConfigRequestResponse(unsigned short);
    MCVAPI void fireEventStructureExport(struct glTFExportData const &, enum IMinecraftEventing::ExportOutcome, enum IMinecraftEventing::ExportStage) const;
    MCVAPI void fireEventTagButtonPressed(std::string const &, bool) const;
    MCVAPI void fireEventTelemetryHttpError(enum Social::Events::TelemetrySystemType, class Bedrock::Http::Status);
    MCVAPI void fireEventTreatmentPackApplied(class PackManifest const &);
    MCVAPI void fireEventTreatmentPackDownloaded(std::string);
    MCVAPI void fireEventTreatmentPackRemoved(std::string);
    MCVAPI void fireEventTreatmentsCleared();
    MCVAPI void fireEventTreatmentsSet(std::vector<std::string> const &);
    MCVAPI void fireEventTrialDeviceIdCorrelation(__int64, std::string const &, __int64, std::string const &);
    MCVAPI void fireEventUgcDownloadCompleted(std::string const &, bool, int, bool, std::string const &);
    MCVAPI void fireEventUnknownBlockReceived(struct NewBlockID const &, unsigned short);
    MCVAPI void fireEventUserListUpdated(std::string const &, std::string const &, std::string const &, bool);
    MCVAPI void fireEventUwpToGdkMigrationComplete(std::string const &, std::string const &, bool);
    MCVAPI void fireEventVRModeChanged(bool);
    MCVAPI void fireEventVideoPlayed(std::string const &, std::string const &);
    MCVAPI void fireEventWebviewDownload(std::string const &, struct WebviewDownloadInfo const &) const;
    MCVAPI void fireEventWorldCorruptionCausedWorldShutdown(struct LevelStorageEventingContext const &, std::string const &, class std::optional<bool>);
    MCVAPI void fireEventWorldExported(__int64, unsigned __int64);
    MCVAPI void fireEventWorldFilesListed(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64);
    MCVAPI void fireEventWorldGenerated(std::string const &, class LevelSettings const &, bool);
    MCVAPI void fireEventWorldHistoryPackSourceMissingDuringUpgrade(std::string const &, std::string const &, std::string const &);
    MCVAPI void fireEventWorldImported(__int64, unsigned __int64);
    MCVAPI void fireEventWorldLoaded(class Player *, class Level &, class ResourcePackManager const &, struct PacksInfoData const &, bool);
    MCVAPI void fireEventWorldLoadedClassroomCustomization(enum IMinecraftEventing::WorldClassroomCustomization, class buffer_span<struct std::pair<class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>>>);
    MCVAPI void fireExternalUriLaunched(std::string const &) const;
    MCVAPI void fireGlobalResourcePackCrashRecovery(class PackInstance &, class mce::UUID, int);
    MCVAPI void fireIDESelected(std::string const &) const;
    MCVAPI void fireInAppCodeBuilderActivated(enum OpenCodeMethod, std::string const &) const;
    MCVAPI void fireInAppCodeBuilderDismissed(std::string const &) const;
    MCVAPI void fireLessonActionTaken(std::string const &, std::string const &, std::string const &, enum IMinecraftEventing::EducationLessonAction);
    MCVAPI void fireLessonCompleteDialogOpened(enum IMinecraftEventing::LessonCompleteDialogEntryPoint) const;
    MCVAPI void fireLibraryButtonPressed(std::string const &, std::string const &, std::string const &);
    MCVAPI void fireMinecraftVersionInviteAccepted(bool, unsigned __int64);
    MCVAPI void fireMinecraftVersionLaunched(bool);
    MCVAPI void firePackSettingsEvent(class PackSettings const &, class PackManifest const &);
    MCVAPI void firePerfTestEvent(std::string const &, std::string const &, std::string const &, unsigned int, unsigned int, std::string const &, std::vector<struct std::pair<std::string, float>> const &);
    MCVAPI void firePermissionsSetEvent(enum PlayerPermissionLevel, enum CommandPermissionLevel, enum PlayerPermissionLevel, enum CommandPermissionLevel);
    MCVAPI void fireQueryOfferResult(std::string const &, int, bool);
    MCVAPI void fireQuickPlayEvent();
    MCVAPI void fireRealmConnectionEventGenericLambdaCalled(enum IMinecraftEventing::RealmConnectionFlow, enum IMinecraftEventing::RealmConnectionLambda, enum IMinecraftEventing::RealmConnectionResult);
    MCVAPI void fireRealmConnectionEventRealmAPIRequest(enum IMinecraftEventing::RealmConnectionFlow);
    MCVAPI void fireRealmConnectionEventRealmAPIResponse(enum IMinecraftEventing::RealmConnectionFlow, int);
    MCVAPI void fireRealmConnectionEventStart(enum IMinecraftEventing::RealmConnectionFlow);
    MCVAPI void fireScreenLoadTimeUpdateEvent(unsigned int const &, std::string const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const &);
    MCVAPI void fireServerConnectionAttemptEvent(std::string const &, bool, std::string const &);
    MCVAPI void fireServerConnectionEvent(enum IConnectionEventing::ServerConnectionOutcome, unsigned int, double, std::string const &);
    MCVAPI void fireServerShutdown(std::string);
    MCVAPI void fireServerStarted(enum IMinecraftEventing::ServerType, std::string);
    MCVAPI void fireShareButtonPressed(std::string const &, enum EduShareUriType, enum EduShareMethodType, bool);
    MCVAPI void fireStorageMigrationEvent(bool, enum Bedrock::StorageMigration::StorageMigrationType, int, int, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, std::string const &);
    MCVAPI void fireStructureBlockAction(enum IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, class StructureTelemetryClientData const *);
    MCVAPI void fireStructureBlockRedstoneActivated(enum IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, class StructureTelemetryClientData const *);
    MCVAPI void fireTextToSpeechToggled(bool, bool);
    MCVAPI void fireUserGeneratedUriLaunchFailed(enum UserGeneratedUriSource, enum Util::ResourceUri::ValidationStatus, std::string const &) const;
    MCVAPI void fireUserGeneratedUriLaunched(enum UserGeneratedUriSource) const;
    MCVAPI void fireWorldConversionAttemptEvent(struct Legacy::WorldConversionReport const &);
    MCVAPI void fireWorldConversionInitiatedEvent(std::string const &);
    MCVAPI void fireWorldRecoveryTelemetryEvent(struct Bedrock::WorldRecoveryTelemetryEvent const &);
    MCVAPI void fireWorldUpgradedToCnCPart2(bool, std::string const &, class Experiments const &, std::string const &, class LevelSeed64, float);
    MCVAPI void flagEventDeepLink();
    MCVAPI void flagEventPlayerGameTypeDefault(bool);
    MCVAPI void forceSendEvents();
    MCVAPI bool getAchievementsAlwaysEnabled();
    MCVAPI class gsl::not_null<class Bedrock::CrashTelemetryProcessor *> getCrashTelemetryProcessor();
    MCVAPI class Social::Events::EventManager & getEventManager() const;
    MCVAPI std::string const & getPlayerSessionId();
    MCVAPI unsigned int getPrimaryLocalUserId() const;
    MCVAPI std::string getSessionId();
    MCVAPI bool getShouldHaveAchievementsEnabled();
    MCVAPI void init(class gsl::not_null<class Bedrock::NonOwnerPointer<class Social::IUserManager>> const &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    MCVAPI void initDeviceAndSessionIds();
    MCVAPI void prepEventSearchCatalogRequest(class SearchRequestTelemetry const &);
    MCVAPI class Json::Value propertiesAsJsonValue() const;
    MCVAPI void registerOptionsObserver(class std::shared_ptr<class Options>);
    MCVAPI void removeTestRunIdTag();
    MCVAPI void removeTestTelemetryTag();
    MCVAPI class std::shared_ptr<void *> requestEventDeferment();
    MCVAPI void sendBatchedCrashTelemetry();
    MCVAPI void sendCrashStatusTelemetry(struct Bedrock::CrashUploadStatus const &);
    MCVAPI void sendCrashTelemetryNow(class std::shared_ptr<class Bedrock::SessionInfo>);
    MCVAPI void setShouldHaveAchievementsEnabled(bool);
    MCVAPI void setTestRunIdTag(char const *);
    MCVAPI void setTestTelemetryTag(char const *);
    MCVAPI void shutdown();
    MCVAPI void stopDebugEventLoggingForAllListeners();
    MCVAPI void tick();
    MCVAPI void tryFireEventProgressLoadTimes(std::string const &, std::vector<struct std::pair<std::string, float>>);
    MCVAPI void updateEditionType();
    MCVAPI void updateIsLegacyPlayer(bool);
    MCVAPI void updateIsTrial(bool) const;
    MCVAPI void updatePlayerUndergroundStatus(class Player *, bool);
    MCVAPI void updatePrimaryLocalUserId(unsigned int const &);
    MCVAPI ~MinecraftEventing();
#endif
    MCAPI MinecraftEventing(class Core::Path const &);
    MCAPI void init(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    MCAPI void initForDedicatedServer(class Bedrock::NonOwnerPointer<class AppPlatform> const &, bool);
    MCAPI static void fireEventAwardAchievement(class Player *, enum MinecraftEventing::AchievementIds);
    MCAPI static void fireEventBehaviorErrored(class Player *, std::string);
    MCAPI static void fireEventBehaviorFailed(class Player *, std::string);
    MCAPI static void fireEventBellBlockUsed(class Player *, std::string const &);
    MCAPI static void fireEventBlockBroken(class Player *, class Block const &, enum MinecraftEventing::BlockPlacementMethod, int);
    MCAPI static void fireEventBlockFound(class Player *, class BlockPos const &);
    MCAPI static void fireEventCampfireBlockUsed(class Player *, std::string const &, enum MinecraftEventing::POIBlockInteractionType);
    MCAPI static void fireEventCaravanChanged(class Mob &, int);
    MCAPI static void fireEventItemUsed(class Player *, class ItemDescriptor const &, enum ItemUseMethod);
    MCAPI static void fireEventJukeboxUsed(class Player *, class ItemDescriptor const &, std::string const &);
    MCAPI static void fireEventLecternBlockUsed(class Player *, std::string const &, enum MinecraftEventing::POIBlockInteractionType);
    MCAPI static void fireEventMobEffectChanged(class Mob &, class MobEffectInstance const &, enum MinecraftEventing::ChangeType);
    MCAPI static void fireEventPlayerTeleported(class Player *, float, enum MinecraftEventing::TeleportationCause, int);
    MCAPI static void fireEventPlayerTransform(class Player &);
    MCAPI static void fireEventSlashCommandExecuted(class Player *, std::string const &, int, int, std::string const &);


//private:
    MCAPI void _fireStructureBlockAction(enum IMinecraftEventing::StructureBlockActionType, class StructureEditorData const &, bool, class StructureTelemetryClientData const *);
    MCAPI void _generateWorldSessionId();
    MCAPI void fireEventPlayerMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    MCAPI static std::unique_ptr<class Social::Events::AchievementEventing> mAchievementEventing;
    MCAPI static class std::unordered_map<enum ItemAcquisitionMethod, enum MinecraftEventing::AcquisitionMethod, struct std::hash<enum ItemAcquisitionMethod>, struct std::equal_to<enum ItemAcquisitionMethod>, class std::allocator<struct std::pair<enum ItemAcquisitionMethod const, enum MinecraftEventing::AcquisitionMethod>>> const mAcquisitionMethodMap;
    MCAPI static class std::unordered_map<enum ItemUseMethod, enum MinecraftEventing::UseMethod, struct std::hash<enum ItemUseMethod>, struct std::equal_to<enum ItemUseMethod>, class std::allocator<struct std::pair<enum ItemUseMethod const, enum MinecraftEventing::UseMethod>>> const mUseMethodMap;
    MCAPI static class std::mutex sMutex;

};
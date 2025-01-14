//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, NSString, NSUUID, SUAnalyticsEvent, SUDescriptor, SUDownloadMetadata, SUDownloadOptions, SUInstallOptions, SUKeybagOptions, SUPurgeOptions, SURollbackDescriptor, SURollbackOptions, SURollbackSuggestionInfo, SUScanOptions;

@protocol SUManagerServerInterface
- (void)rvTriggerNeRDUpdate:(NSDictionary *)arg1;
- (void)rvGetCurrentNeRDInfoWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)resetState;
- (void)isAnyClientInUserInteraction:(void (^)(_Bool, NSError *))arg1;
- (void)networkMonitorDetectOverrides;
- (void)submitSUAnalyticsEventsWithName:(NSString *)arg1;
- (void)submitAllSUAnalyticsEvents;
- (void)submitSUAnalyticsEvent:(SUAnalyticsEvent *)arg1;
- (void)recordSUAnalyticsEvent:(SUAnalyticsEvent *)arg1;
- (void)writeKeepAliveFile:(void (^)(_Bool, NSError *))arg1;
- (void)setExclusiveControl:(_Bool)arg1;
- (void)installServerConfiguration;
- (void)registerCSInstallPredicatesOnDate:(NSDate *)arg1;
- (void)isAutomaticDownloadEnabled:(void (^)(_Bool, NSError *))arg1;
- (void)enableAutomaticDownload:(_Bool)arg1;
- (void)isAutomaticUpdateV2Enabled:(void (^)(_Bool, NSError *))arg1;
- (void)enableAutomaticUpdateV2:(_Bool)arg1;
- (void)destroyInstallationKeybag;
- (void)createInstallationKeybag:(SUKeybagOptions *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)getMandatorySoftwareUpdateDictionary:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setMandatorySoftwareUpdateDictionary:(NSDictionary *)arg1;
- (void)isSplatOnlyUpdateRollbackSuggested:(void (^)(_Bool, NSError *))arg1;
- (void)splatRollbackAllowed:(void (^)(_Bool, NSError *))arg1;
- (void)delayEndDate:(void (^)(NSDate *, NSError *))arg1;
- (void)isDelayingUpdates:(void (^)(_Bool, NSError *))arg1;
- (void)softwareUpdatePathRestriction:(void (^)(unsigned long long, NSError *))arg1;
- (void)slaVersion:(void (^)(NSNumber *, NSError *))arg1;
- (void)setClientType:(int)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)userAskedToDeferInstall;
- (void)installUpdateWithOptions:(NSArray *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)installUpdateWithInstallOptions:(SUInstallOptions *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)installUpdate:(void (^)(_Bool, NSError *))arg1;
- (void)isUpdateReadyForInstallationWithOptions:(SUInstallOptions *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)isUpdateReadyForInstallation:(void (^)(_Bool, NSError *))arg1;
- (void)isInstallationKeybagRequiredForDescriptor:(SUDescriptor *)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)isInstallationKeybagRequired:(void (^)(_Bool, NSError *))arg1;
- (void)presentAutoUpdateBanner:(void (^)(_Bool, NSError *))arg1;
- (void)isAutoUpdateScheduled:(void (^)(_Bool, NSError *))arg1;
- (void)isAutoUpdateEnabled:(void (^)(_Bool, NSError *))arg1;
- (void)currentPasscodePolicy:(void (^)(unsigned long long, NSError *))arg1;
- (void)consentToAutoInstallOperation:(NSUUID *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)cancelAutoInstallOperation:(NSUUID *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)currentAutoInstallOperation:(_Bool)arg1 withResult:(void (^)(_SUAutoInstallOperationModel *, NSError *))arg2;
- (void)currentAutoInstallOperationForecast:(void (^)(SUAutoInstallForecast *, NSError *))arg1;
- (void)securityResponseRollbackSuggested:(SURollbackSuggestionInfo *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)setLastRollbackDescriptor:(SURollbackDescriptor *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)scheduleRollbackRebootForLater:(void (^)(_Bool, NSError *))arg1;
- (void)isRollingBack:(void (^)(_Bool, SURollbackDescriptor *, NSError *))arg1;
- (void)previousRollback:(SURollbackOptions *)arg1 withResult:(void (^)(SURollbackDescriptor *, NSError *))arg2;
- (void)rollbackUpdateWithOptions:(SURollbackOptions *)arg1 withResult:(void (^)(_Bool, SURollbackDescriptor *, NSError *))arg2;
- (void)eligibleRollbackWithOptions:(SURollbackOptions *)arg1 withResult:(void (^)(SURollbackDescriptor *, NSError *))arg2;
- (void)isSoftwareUpdateInProgress:(void (^)(_Bool, NSError *))arg1;
- (void)extraSpaceNeededForDownloadWithoutAppPurging:(void (^)(NSNumber *, NSError *))arg1;
- (void)deviceHasSufficientSpaceForDownload:(void (^)(_Bool, NSError *))arg1;
- (void)deviceHasSufficientSpaceForDownloads:(void (^)(_Bool, _Bool, NSError *, NSError *))arg1;
- (void)updatesDownloadableWithOptions:(SUDownloadOptions *)arg1 alternateDownloadOptions:(SUDownloadOptions *)arg2 replyHandler:(void (^)(_Bool, _Bool, NSError *, NSError *))arg3;
- (void)downloadAndInstallState:(void (^)(SUDownload *, SUInstallPolicy *, _SUAutoInstallOperationModel *, NSError *))arg1;
- (void)updateDownloadOptions:(SUDownloadOptions *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)updateDownloadMetadata:(SUDownloadMetadata *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)resumeDownload:(void (^)(_Bool, NSError *))arg1;
- (void)pauseDownload:(void (^)(_Bool, NSError *))arg1;
- (void)purgeDownloadWithOptions:(SUPurgeOptions *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)cancelDownloadWithOptions:(SUPurgeOptions *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)startDownloadWithMetadata:(SUDownloadMetadata *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)startDownloadWithOptions:(SUDownloadOptions *)arg1 withResult:(void (^)(_Bool, NSError *))arg2;
- (void)startDownload:(void (^)(_Bool, NSError *))arg1;
- (void)isDownloading:(void (^)(_Bool, NSError *))arg1;
- (void)isClearingSpaceForDownload:(void (^)(_Bool, NSError *))arg1;
- (void)descriptors:(void (^)(SUScanResults *, NSError *))arg1;
- (void)descriptor:(void (^)(SUDescriptor *, NSError *))arg1;
- (void)autoScanAndDownloadNow:(_Bool)arg1 ifAvailable:(void (^)(SUScanResults *, NSError *))arg2;
- (void)autoScanAndDownloadIfAvailable:(void (^)(SUScanResults *, NSError *))arg1;
- (void)scanForUpdates:(SUScanOptions *)arg1 withResult:(void (^)(SUScanResults *, NSError *))arg2;
- (void)isScanning:(void (^)(_Bool, NSError *))arg1;
@end


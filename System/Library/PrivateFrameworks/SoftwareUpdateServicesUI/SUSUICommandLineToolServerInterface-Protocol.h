//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServicesUI/NSObject-Protocol.h>

@class NSNumber, SUAutoInstallForecast, SUAutoInstallOperation, SUDownload, SURollbackDescriptor, SUScanResults;

@protocol SUSUICommandLineToolServerInterface <NSObject>
- (void)setUpdateToInstall:(SUDownload *)arg1;
- (void)setInstallOperation:(SUAutoInstallOperation *)arg1;
- (void)setRestartCountdownOverrideIntervalSeconds:(NSNumber *)arg1;
- (void)getAlertStatus:(void (^)(NSDictionary *))arg1;
- (void)ddmInstallNow;
- (void)showDDMAlert:(long long)arg1 install:(_Bool)arg2;
- (void)getDDMAlertStatus:(void (^)(NSDictionary *))arg1;
- (void)setPasscodePolicy:(unsigned long long)arg1;
- (void)downloadDidFinish;
- (void)simulateComingFromOTAUpdate;
- (void)reboot:(_Bool)arg1;
- (void)toggleSettingsBadge:(_Bool)arg1;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)showAuthenticationUIWithOptions:(unsigned long long)arg1 result:(void (^)(_Bool, NSError *))arg2;
- (void)showFollowUp:(unsigned long long)arg1;
- (void)dismissAllAlerts;
- (void)destroyInstallationKeybag;
- (void)showLaggardsUi:(unsigned long long)arg1 usingFakeData:(_Bool)arg2 result:(void (^)(_Bool, NSError *))arg3;
- (void)showMiniAlertWithDescriptors:(unsigned long long)arg1 errorCode:(NSNumber *)arg2 downloadDescriptor:(SUDownload *)arg3 scanResultsDescriptor:(SUScanResults *)arg4 autoInstallForecast:(SUAutoInstallForecast *)arg5 andRollbackDescriptor:(SURollbackDescriptor *)arg6 result:(void (^)(NSString *, NSError *))arg7;
- (void)showMiniAlertWithScan:(unsigned long long)arg1 errorCode:(NSNumber *)arg2 result:(void (^)(NSString *, NSError *))arg3;
@end

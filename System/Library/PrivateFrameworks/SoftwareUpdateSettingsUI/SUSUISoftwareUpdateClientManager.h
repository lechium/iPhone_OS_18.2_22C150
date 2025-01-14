//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SUAutoInstallOperation, SUManagerClient, SURollbackDescriptor;
@protocol OS_dispatch_queue, SUSUISoftwareUpdateClientManagerDelegate;

__attribute__((visibility("hidden")))
@interface SUSUISoftwareUpdateClientManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_completionQueue;	// 16 = 0x10
    SUManagerClient *_suClient;	// 24 = 0x18
    _Bool _autoUpdateScheduled;	// 32 = 0x20
    _Bool _rollingBack;	// 33 = 0x21
    SURollbackDescriptor *_rollbackDescriptor;	// 40 = 0x28
    SUAutoInstallOperation *_autoInstallOperation;	// 48 = 0x30
    id <SUSUISoftwareUpdateClientManagerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000008b20
@property(nonatomic) __weak id <SUSUISoftwareUpdateClientManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)autoInstallOperationPasscodePolicyDidChange:(id)arg1 passcodePolicyType:(unsigned long long)arg2;	// IMP=0x0000000000008a70
- (void)autoInstallOperationIsReadyToInstall:(id)arg1 withResponse:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008a00
- (void)autoInstallOperationDidConsent:(id)arg1;	// IMP=0x00000000000089c0
- (void)autoInstallOperationWasCancelled:(id)arg1;	// IMP=0x00000000000088e0
- (void)client:(id)arg1 clearingSpaceForDownload:(id)arg2 clearingSpace:(_Bool)arg3;	// IMP=0x00000000000086d0
- (void)client:(id)arg1 inUserInteraction:(CDUnknownBlockType)arg2;	// IMP=0x00000000000084f0
- (void)client:(id)arg1 rollbackDidFail:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000008300
- (void)client:(id)arg1 rollbackDidFinish:(id)arg2;	// IMP=0x00000000000081b0
- (void)client:(id)arg1 rollbackDidStart:(id)arg2;	// IMP=0x0000000000008020
- (void)client:(id)arg1 installTonightScheduled:(_Bool)arg2 operationID:(id)arg3;	// IMP=0x0000000000007f80
- (void)client:(id)arg1 installDidFinish:(id)arg2;	// IMP=0x0000000000007e90
- (void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000007d80
- (void)client:(id)arg1 installDidStart:(id)arg2;	// IMP=0x0000000000007c90
- (void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000007b80
- (void)client:(id)arg1 downloadDidFinish:(id)arg2 withInstallPolicy:(id)arg3;	// IMP=0x0000000000007a70
- (void)client:(id)arg1 downloadWasInvalidatedForNewUpdatesAvailable:(id)arg2;	// IMP=0x0000000000007970
- (void)client:(id)arg1 downloadProgressDidChange:(id)arg2;	// IMP=0x0000000000007880
- (void)client:(id)arg1 downloadDidStart:(id)arg2;	// IMP=0x0000000000007790
- (void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 results:(id)arg3 error:(id)arg4;	// IMP=0x0000000000007650
- (void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;	// IMP=0x0000000000007560
- (void)destroyInstallationKeybag:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007390
- (void)createInstallationKeybagWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000070e0
- (void)isInstallationKeybagRequiredForDescriptor:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006eb0
- (void)isInstallationKeybagRequired:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006ca0
- (void)purgeDownload:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006b80
- (void)_queue_setRollingBack:(_Bool)arg1;	// IMP=0x0000000000006a60
- (void)setRollingBack:(_Bool)arg1 rollback:(id)arg2;	// IMP=0x00000000000067e0
- (_Bool)isRollingBack;	// IMP=0x00000000000066d0
- (void)rollbackUpdateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006560
- (void)_queue_setEligibleRollback:(id)arg1;	// IMP=0x0000000000006430
- (void)setEligibleRollback:(id)arg1;	// IMP=0x0000000000006320
- (id)eligibleRollback;	// IMP=0x00000000000061b0
- (void)_queue_cancelAutoInstall;	// IMP=0x00000000000060a0
- (void)cancelAutoInstall;	// IMP=0x0000000000005fe0
- (void)_queue_setAutoUpdateScheduled:(_Bool)arg1;	// IMP=0x0000000000005a80
- (void)setAutoUpdateScheduled:(_Bool)arg1;	// IMP=0x00000000000059a0
- (_Bool)isAutoUpdateScheduled;	// IMP=0x0000000000005890
- (_Bool)isAutoUpdateArmedAndReady;	// IMP=0x00000000000056b0
- (void)queue_enableAutomaticInstallSystemDataFiles:(_Bool)arg1;	// IMP=0x0000000000005640
- (void)enableAutomaticInstallSystemDataFiles:(_Bool)arg1;	// IMP=0x0000000000005560
- (_Bool)isAutomaticInstallSystemDataFilesEnabled;	// IMP=0x0000000000005440
- (void)queue_setPreviousUserSpecifiedSecurityResponseStatus:(_Bool)arg1;	// IMP=0x00000000000053d0
- (void)setPreviousUserSpecifiedSecurityResponseStatus:(_Bool)arg1;	// IMP=0x00000000000052f0
- (_Bool)previousUserSpecifiedSecurityResponseEnabled;	// IMP=0x00000000000051d0
- (void)queue_setSecurityResponseEnabled:(_Bool)arg1;	// IMP=0x0000000000005160
- (void)setSecurityResponseEnabled:(_Bool)arg1;	// IMP=0x0000000000005080
- (_Bool)isSecurityResponseEnabled;	// IMP=0x0000000000004f60
- (void)queue_enableAutoInstallPreviousUserSettings:(_Bool)arg1;	// IMP=0x0000000000004ef0
- (void)enableAutoInstallPreviousUserSettings:(_Bool)arg1;	// IMP=0x0000000000004e10
- (_Bool)isAutoInstallPreviousUserSettingsEnabled;	// IMP=0x0000000000004cf0
- (void)queue_setAutoInstallEnabled:(_Bool)arg1;	// IMP=0x0000000000004c80
- (void)enableAutoInstall:(_Bool)arg1;	// IMP=0x0000000000004ba0
- (_Bool)isAutoInstallEnabled;	// IMP=0x0000000000004a80
- (void)currentAutoInstallOperation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004320
- (void)installUpdateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000041b0
- (void)isUpdateReadyForInstallationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004040
- (void)queue_setAutoDownloadEnabled:(_Bool)arg1;	// IMP=0x0000000000003fd0
- (void)enableAutoDownload:(_Bool)arg1;	// IMP=0x0000000000003ef0
- (_Bool)isAutoDownloadEnabled;	// IMP=0x0000000000003d70
- (void)isClearingSpaceForDownload:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003c50
- (void)updateDownloadOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003ae0
- (void)startDownloadWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003970
- (void)updatesDownloadable:(id)arg1 alternateUpdate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000034c0
- (void)download:(CDUnknownBlockType)arg1;	// IMP=0x00000000000033a0
- (void)isDelayingUpdates:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003280
- (void)softwareUpdatePathRestriction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003160
- (void)isScanning:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002fa0
- (void)scanforUpdatesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002d50
@property(readonly, retain, nonatomic) SUManagerClient *suManagerClient;
- (void)dealloc;	// IMP=0x0000000000002a10
- (id)initWithDelegate:(id)arg1 completionQueue:(id)arg2;	// IMP=0x0000000000002200

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


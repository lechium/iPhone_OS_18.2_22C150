//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BYFlowSkipController, NSString;

@interface BYDaemonGeneralClientConnection
{
    BYFlowSkipController *_flowSkipController;	// 8 = 0x8
}

+ (id)daemonProtocolInterface;	// IMP=0x00200000000061e1
- (void).cxx_destruct;	// IMP=0x0020000000006f15
@property(retain, nonatomic) BYFlowSkipController *flowSkipController; // @synthesize flowSkipController=_flowSkipController;
- (void)attemptSettingsUploadForAttempt:(unsigned long long)arg1 maxNumberOfAttempts:(unsigned long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006b1b
- (void)migrateWithStoredMigratorVersion:(unsigned int)arg1 userDataDisposition:(unsigned int)arg2;	// IMP=0x0010000000006ad5
- (void)startExpressSettingsUpload;	// IMP=0x00100000000068e2
- (void)fetchAuthenticationContextForBiometric:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006858
- (void)storeAuthenticationContextforBiometric:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000067c4
- (void)fetchAuthenticationContextForApplePay:(CDUnknownBlockType)arg1;	// IMP=0x001000000000673a
- (void)storeAuthenticationContextforApplyPay:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000066a6
- (void)enrollInSeedProgramNamed:(id)arg1 withAssetAudience:(id)arg2 programID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006693
- (void)cancelDataMigratorDeferredExit:(CDUnknownBlockType)arg1;	// IMP=0x001000000000668d
- (void)deferDataMigratorExit:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006687
- (void)performSilentICDPUpgrade:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006582
- (void)observeFinishSetupTriggers:(CDUnknownBlockType)arg1;	// IMP=0x00100000000063e6
- (void)backupMetadata:(CDUnknownBlockType)arg1;	// IMP=0x001000000000630f
- (void)ensureShortLivedTokenUpgrade:(CDUnknownBlockType)arg1;	// IMP=0x00100000000062a2
- (void)ensureSilentLoginUpgrade:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006235
- (void)setupAssistantNeedsToRun:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006201
- (id)initWithConnection:(id)arg1 flowSkipController:(id)arg2;	// IMP=0x0010000000006123

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class LAContext, NSString;

@protocol BYDaemonGeneralProtocol <NSObject>
- (void)migrateWithStoredMigratorVersion:(unsigned int)arg1 userDataDisposition:(unsigned int)arg2;
- (void)startExpressSettingsUpload;
- (void)fetchAuthenticationContextForBiometric:(void (^)(LAContext *))arg1;
- (void)storeAuthenticationContextforBiometric:(LAContext *)arg1 completion:(void (^)(void))arg2;
- (void)fetchAuthenticationContextForApplePay:(void (^)(LAContext *))arg1;
- (void)storeAuthenticationContextforApplyPay:(LAContext *)arg1 completion:(void (^)(void))arg2;
- (void)enrollInSeedProgramNamed:(NSString *)arg1 withAssetAudience:(NSString *)arg2 programID:(NSString *)arg3 completion:(void (^)(void))arg4;
- (void)cancelDataMigratorDeferredExit:(void (^)(void))arg1;
- (void)deferDataMigratorExit:(void (^)(void))arg1;
- (void)performSilentICDPUpgrade:(void (^)(void))arg1;
- (void)observeFinishSetupTriggers:(void (^)(void))arg1;
- (void)backupMetadata:(void (^)(NSData *))arg1;
- (void)ensureShortLivedTokenUpgrade:(void (^)(void))arg1;
- (void)ensureSilentLoginUpgrade:(void (^)(void))arg1;
- (void)setupAssistantNeedsToRun:(void (^)(_Bool))arg1;
@end

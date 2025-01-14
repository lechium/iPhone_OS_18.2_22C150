//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDMDMv1InstallAppOperation
{
}

+ (id)whitelistedClassesForRequest;	// IMP=0x0020000000067a8a
+ (id)descriptionForChangeType:(long long)arg1;	// IMP=0x0010000000068feb
- (void)_setTapToPayScreenLock:(id)arg1;	// IMP=0x002000000006c52b
- (void)_setRemovability:(id)arg1;	// IMP=0x001000000006c3bb
- (void)_resetTapToPayScreenLock;	// IMP=0x001000000006c2c1
- (void)_resetRemovabilityWithBundleIdentifier:(id)arg1;	// IMP=0x001000000006c1ee
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000006c13a
- (_Bool)_canManageBundleIdentifier:(id)arg1;	// IMP=0x001000000006c0d5
- (void)_updateManagementInfoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006be65
- (void)_setUnusedRedemptionCode:(id)arg1;	// IMP=0x001000000006bcf6
- (void)_setRedemptionCode:(id)arg1;	// IMP=0x001000000006bb87
- (void)_setState:(unsigned long long)arg1;	// IMP=0x001000000006ba69
- (void)_showInstallationFailurePromptIfNeeded;	// IMP=0x001000000006b792
- (void)_showStorePromptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x001000000006b4bf
- (void)_promptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x001000000006b150
- (void)_promptIfNeededWithMessageFormat:(id)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a9d1
- (void)_applyManagementPiecesForRequest:(id)arg1;	// IMP=0x001000000006a75b
- (void)_downloadStoreAppForRequest:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000069d94
- (void)_purchaseFreeAppForRequest:(id)arg1;	// IMP=0x0010000000069d7d
- (void)_redownloadUserAppForRequest:(id)arg1;	// IMP=0x0010000000069d66
- (void)_redownloadDeviceAppForRequest:(id)arg1;	// IMP=0x0010000000069d4f
- (void)_attemptSINFSwapForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000069ad3
- (void)_installStoreAppForRequest:(id)arg1;	// IMP=0x0010000000069033
- (void)_installSystemAppWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000068d47
- (void)_installEnterpriseAppForRequest:(id)arg1;	// IMP=0x0010000000068409
- (void)_redeemAppWithRedemptionCode:(id)arg1;	// IMP=0x001000000006804e
- (id)_getRequiredAppIDFromDisk;	// IMP=0x0010000000067f93
- (id)_storeAppFormat;	// IMP=0x0010000000067ed9
- (void)installAppForRequest:(id)arg1;	// IMP=0x0010000000067b7e
- (void)endOperationWithError:(id)arg1;	// IMP=0x0010000000067b1d
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x0010000000067abc

@end


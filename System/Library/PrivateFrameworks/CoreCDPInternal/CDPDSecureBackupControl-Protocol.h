//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, CDPDSecureBackupContext, NSPredicate, NSString;
@protocol CDPDSecureBackupDelegate, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

@protocol CDPDSecureBackupControl <NSObject>
@property(nonatomic) _Bool fakeNearlyDepletedRecords;
@property(readonly, nonatomic) __weak id <CDPDSecureBackupDelegate> delegate;
@property(retain, nonatomic) id <CDPDSecureBackupProxy> secureBackupProxy;
@property(readonly, nonatomic) id <CDPStateUIProviderInternal> uiProvider;
@property(readonly, nonatomic) CDPContext *context;
- (void)checkForExistingRecordMatchingPredicate:(NSPredicate *)arg1 forceFetch:(_Bool)arg2 completion:(void (^)(CDPDevice *, NSError *))arg3;
- (void)checkForExistingRecordWithPeerId:(NSString *)arg1 completion:(void (^)(CDPDevice *, NSError *))arg2;
- (void)checkForExistingRecord:(void (^)(CDPDevice *, NSError *))arg1;
- (void)performEscrowRecoveryWithRecoveryContext:(CDPDSecureBackupContext *)arg1 completion:(void (^)(CDPDRemoteSecretValidationResult *, NSError *))arg2;
- (void)recoverSecureBackupWithContext:(CDPDSecureBackupContext *)arg1 completion:(void (^)(CDPDRemoteSecretValidationResult *, NSError *))arg2;
- (void)getBackupRecordDevicesWithOptionForceFetch:(_Bool)arg1 completion:(void (^)(_Bool, NSArray *, NSError *))arg2;
- (void)clearAccountInfoCache;
- (void)backupRecordsArePresentWithCompletion:(void (^)(_Bool, _Bool, NSError *))arg1;
- (void)isEligibleForCDPWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)synchronizeKeyValueStoreWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (id)init;
- (id)initWithContext:(CDPContext *)arg1 uiProvider:(id <CDPStateUIProviderInternal>)arg2 delegate:(id <CDPDSecureBackupDelegate>)arg3;

@optional
- (_Bool)supportsRecoveryKeyWithError:(id *)arg1;
@end

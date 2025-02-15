//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOrderedSet, NSString;

@interface RestoreDownloadsOperation : ISOperation
{
    NSMutableDictionary *_accountIDsByAppleID;	// 96 = 0x60
    long long _cancelRetryAlertState;	// 104 = 0x68
    NSOrderedSet *_downloadIDs;	// 112 = 0x70
    NSMutableArray *_errors;	// 120 = 0x78
    _Bool _hadAutoRetrySoftFailure;	// 128 = 0x80
    _Bool _hadCancelFailure;	// 129 = 0x81
    NSString *_restoreReason;	// 136 = 0x88
}

+ (_Bool)shouldSuppressTermsAndConditionsDialogs;	// IMP=0x00200000000e5d68
+ (void)setShouldSuppressTermsAndConditionsDialogs:(_Bool)arg1;	// IMP=0x00100000000e5d24
+ (void)resetShouldSuppressTermsAndConditionsDialogs;	// IMP=0x00100000000e5cf5
- (_Bool)_updateDownloadEntity:(id)arg1 withTransaction:(id)arg2 storeDownload:(id)arg3 accountID:(id)arg4;	// IMP=0x00200000000ecc66
- (id)_softFailRestoreItem:(id)arg1 download:(id)arg2 withRestoreState:(long long)arg3 error:(id)arg4;	// IMP=0x00100000000eca30
- (_Bool)_shouldAutomaticallyRetryAfterSoftFailError:(id)arg1;	// IMP=0x00100000000ec968
- (_Bool)_shouldAuthenticateForCancelRetry;	// IMP=0x00100000000ec716
- (void)_scheduleCancelRetry;	// IMP=0x00100000000ec710
- (void)_scheduleAutomaticRetry;	// IMP=0x00100000000ec70a
- (_Bool)_preflightAccountWithID:(id)arg1 isFamily:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000ebffb
- (id)_newRestoreItemsWithDownloadIDs:(id)arg1;	// IMP=0x00100000000eb6de
- (id)_newDownloadWithStoreDownload:(id)arg1;	// IMP=0x00100000000eb5f1
- (_Bool)_isErrorSoftFail:(id)arg1;	// IMP=0x00100000000eb4d9
- (_Bool)_isErrorCancelFailure:(id)arg1;	// IMP=0x00100000000eb48f
- (void)_hardFailRestoreItem:(id)arg1 download:(id)arg2 transaction:(id)arg3 error:(id)arg4;	// IMP=0x00100000000eb102
- (void)_establishPrimaryAccount;	// IMP=0x00100000000eaf03
- (long long)_downloadRestoreStateForError:(id)arg1;	// IMP=0x00100000000eaea1
- (id)_copyDownloadSessionPropertiesForItem:(id)arg1 download:(id)arg2;	// IMP=0x00100000000ead9f
- (void)_applyResponses:(id)arg1 withTransaction:(id)arg2;	// IMP=0x00100000000e9c70
- (id)_accountIDForAccountName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e9414
- (void)restorePodcastItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000e8a4c
- (void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000e8985
- (void)run;	// IMP=0x00100000000e64f2
- (_Bool)copyAccountID:(id *)arg1 credentialSource:(unsigned long long *)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id *)arg4;	// IMP=0x00100000000e5e20
@property(readonly) NSString *restoreReason;
@property(readonly) NSArray *errors;
@property(readonly) NSOrderedSet *downloadIdentifiers;
- (void)dealloc;	// IMP=0x00100000000e5c81
- (id)initWithDownloadIdentifiers:(id)arg1 restoreReason:(id)arg2;	// IMP=0x00100000000e5bf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


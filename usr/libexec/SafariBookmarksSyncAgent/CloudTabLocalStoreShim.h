//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CloudTabLocalStore, CloudTabLocalStoreDelegate;

@interface CloudTabLocalStoreShim : NSObject
{
    _Bool _disabled;	// 8 = 0x8
    id <CloudTabLocalStoreDelegate> _delegate;	// 16 = 0x10
    id <CloudTabLocalStore> _cloudTabLocalStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000085a8c
@property(readonly, nonatomic) id <CloudTabLocalStore> cloudTabLocalStore; // @synthesize cloudTabLocalStore=_cloudTabLocalStore;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <CloudTabLocalStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cloudTabLocalStoreDidOpen:(id)arg1;	// IMP=0x00100000000859e7
- (void)cloudTabLocalStore:(id)arg1 hadSevereError:(id)arg2;	// IMP=0x0010000000085978
- (void)setUseManateeContainerForSyncing:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008594a
- (void)getUseManateeContainerForSyncingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008591a
- (void)setServerChangeTokenData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000858ef
- (void)getServerChangeTokenDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000858c7
- (void)saveCloudTabDevices:(id)arg1 tabs:(id)arg2 closeRequests:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008589c
- (void)deleteRecordsWithPrimaryKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085871
- (void)loadCloudTabDeviceWithUUIDString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085849
- (void)loadCloudTabDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008581f
- (void)deleteDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000857fc
- (void)closeDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000857d9
- (void)openDatabaseIfNecessary;	// IMP=0x00100000000857bb
- (id)initWithCloudTabLocalStore:(id)arg1;	// IMP=0x0010000000085729

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


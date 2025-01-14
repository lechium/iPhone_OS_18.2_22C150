//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCItemID, BRCServerZone, CKRecord, CKShare, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyShareOperation
{
    BRCServerZone *_serverZone;	// 40 = 0x28
    CKShare *_share;	// 48 = 0x30
    BRCItemID *_itemID;	// 56 = 0x38
    CKRecord *_sharingIdentityPreparedRecord;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000027c966
- (void)main;	// IMP=0x000000000027c937
- (void)performAfterPreparingSharingIdentityIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000027c920
- (void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000027c625
- (void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg1 wantRoutingKey:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000027b9c8
- (void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000027b47f
- (void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg1 wantRoutingKey:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000027b27c
- (void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg1 wantRoutingKey:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000027b10d
- (_Bool)_shouldFetchSharingIdentity:(_Bool)arg1;	// IMP=0x000000000027b080
- (void)_performAfterGettingPublicSharingKeyForRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000027a7b8
- (void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000027a46e
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1 recordsToLearnCKInfo:(id)arg2;	// IMP=0x0000000000279e63
- (oneway void)invalidate;	// IMP=0x0000000000279e5d
- (id)createActivity;	// IMP=0x0000000000279e34
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3 sessionContext:(id)arg4;	// IMP=0x0000000000279bb5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCLocalItem.h"

@class BRCAppLibrary, BRCClientZone, BRCDirectoryItem, BRCDocumentItem, BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCAliasItem : BRCLocalItem
{
}

+ (void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(unsigned long long)arg8 isFolderShare:(_Bool)arg9 beingDeadInServerTruth:(_Bool)arg10 shouldPCSChainStatus:(unsigned char)arg11;	// IMP=0x008000000012b29d
+ (id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(_Bool)arg3;	// IMP=0x008000000012b13c
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;	// IMP=0x0000000000057bd0
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;	// IMP=0x0000000000057b61
- (void)markNeedsUploadOrSyncingUp;	// IMP=0x0000000000057b4d
@property(readonly, nonatomic) BRCItemID *targetItemID;
@property(readonly, nonatomic) BRCClientZone *targetClientZone;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x00000000000574d2
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;	// IMP=0x0000000000056eed
@property(readonly, nonatomic) BRCAliasItem *asBRAlias;
- (_Bool)isBRAlias;	// IMP=0x0000000000056e4d
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 etagIfLoser:(id)arg3 stageFileName:(id)arg4 error:(id *)arg5;	// IMP=0x000000000006a43b
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000006a389
- (id)targetDocument;	// IMP=0x000000000006a2e2
- (void)targetMovedToThisAppLibrary;	// IMP=0x000000000006a141
- (void)targetMovedToTrashOrDeleted;	// IMP=0x0000000000069fa0
- (void)_removeAliasAndMarkDead;	// IMP=0x0000000000069e03
- (_Bool)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(_Bool)arg2;	// IMP=0x00000000000697f6
- (void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg1;	// IMP=0x000000000006903d
- (void)learnTarget:(id)arg1;	// IMP=0x0000000000068ded
@property(readonly, nonatomic) BRCAppLibrary *targetAppLibrary;
- (_Bool)changedAtRelativePath:(id)arg1 scanPackage:(_Bool)arg2;	// IMP=0x0000000000068b05
- (_Bool)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000068afd
- (id)structureRecordBeingDeadInServerTruth:(_Bool)arg1 stageID:(id)arg2 shouldPCSChainStatus:(unsigned char)arg3;	// IMP=0x000000000012b550

// Remaining properties
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;

@end


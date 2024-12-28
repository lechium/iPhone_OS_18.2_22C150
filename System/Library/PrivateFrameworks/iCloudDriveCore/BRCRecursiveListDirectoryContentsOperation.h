//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCItemID, BRCListDirectoryContentsOperation, BRCServerZone, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCRecursiveListDirectoryContentsOperation
{
    BRCServerZone *_serverZone;	// 56 = 0x38
    NSMutableSet *_itemsToList;	// 64 = 0x40
    BRCItemID *_rootItemID;	// 72 = 0x48
    BRCListDirectoryContentsOperation *_activeListOp;	// 80 = 0x50
    NSMutableSet *_itemsFailedListing;	// 88 = 0x58
    NSMutableArray *_recursiveListCompletionBlocks;	// 96 = 0x60
    _Bool _rescheduleApply;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000046b93
@property(nonatomic) _Bool rescheduleApply; // @synthesize rescheduleApply=_rescheduleApply;
- (void)addRecursiveDirectoryListCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046a09
- (void)main;	// IMP=0x0000000000046875
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000466d4
- (void)listNextItem;	// IMP=0x0000000000045ea6
- (void)listOrFetchNextItem;	// IMP=0x0000000000045e5c
- (void)fetchNextItemToList;	// IMP=0x00000000000457b7
- (_Bool)_finishIfBlockedFromListing;	// IMP=0x0000000000045664
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;	// IMP=0x0000000000045618
- (void)cancel;	// IMP=0x0000000000045573
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x000000000004555e
- (id)initWithItemID:(id)arg1 sessionContext:(id)arg2 zone:(id)arg3 isUserWaiting:(_Bool)arg4;	// IMP=0x0000000000045367

@end

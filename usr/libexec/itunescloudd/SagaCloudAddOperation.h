//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaCloudAddOperation
{
    _Bool _updateRequired;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
- (void)main;	// IMP=0x0010000000110556
- (_Bool)isPersistent;	// IMP=0x001000000011054e
- (unsigned int)currentDatabaseRevision;	// IMP=0x0010000000110500
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x00100000001104fa
- (void)processAddedItems:(id)arg1;	// IMP=0x00100000001104f4
- (void)logCloudAddRequestDescription;	// IMP=0x00100000001104ee
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00100000001104e6

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, WBChangeRecord;

@interface CloudTabGroupBatchItem : NSObject
{
    WBChangeRecord *_change;	// 8 = 0x8
    NSSet *_deletedRecordZoneIDs;	// 16 = 0x10
    NSSet *_updatedRecords;	// 24 = 0x18
    NSSet *_deletedRecordIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000028b36
@property(readonly, copy, nonatomic) NSSet *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(readonly, copy, nonatomic) NSSet *updatedRecords; // @synthesize updatedRecords=_updatedRecords;
@property(readonly, copy, nonatomic) NSSet *deletedRecordZoneIDs; // @synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs;
@property(readonly, nonatomic) WBChangeRecord *change; // @synthesize change=_change;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithChange:(id)arg1 deletedRecordZoneIDs:(id)arg2 updatedRecords:(id)arg3 deletedRecordIDs:(id)arg4;	// IMP=0x00100000000289a8
- (id)initWithChange:(id)arg1 deletedRecordZoneIDs:(id)arg2 deletedRecordIDs:(id)arg3;	// IMP=0x00100000000288f8
- (id)initWithChange:(id)arg1 deletedRecordZoneIDs:(id)arg2;	// IMP=0x0010000000028838
- (id)initWithChange:(id)arg1 updatedRecords:(id)arg2 deletedRecordIDs:(id)arg3;	// IMP=0x0010000000028788
- (id)initWithChange:(id)arg1 updatedRecords:(id)arg2;	// IMP=0x00100000000286f1

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SBKSyncTransaction;

__attribute__((visibility("hidden")))
@interface SBKSyncResponseData : NSObject
{
    SBKSyncTransaction *_transaction;	// 8 = 0x8
    NSString *_syncAnchor;	// 16 = 0x10
    NSArray *_updatedKeys;	// 24 = 0x18
    NSArray *_conflictedKeys;	// 32 = 0x20
    NSArray *_deletedKeys;	// 40 = 0x28
    NSArray *_successfullyUpdatedKeys;	// 48 = 0x30
    NSArray *_successfullyDeletedKeys;	// 56 = 0x38
    NSMutableDictionary *_responseOpEntiesByKey;	// 64 = 0x40
}

+ (id)deserializedResponseBodyWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;	// IMP=0x006000000000b0d4
- (void).cxx_destruct;	// IMP=0x000000000000a8c1
@property(retain, nonatomic) NSMutableDictionary *responseOpEntiesByKey; // @synthesize responseOpEntiesByKey=_responseOpEntiesByKey;
@property(readonly, nonatomic) NSArray *successfullyDeletedKeys; // @synthesize successfullyDeletedKeys=_successfullyDeletedKeys;
@property(readonly, nonatomic) NSArray *successfullyUpdatedKeys; // @synthesize successfullyUpdatedKeys=_successfullyUpdatedKeys;
@property(readonly, nonatomic) NSArray *deletedKeys; // @synthesize deletedKeys=_deletedKeys;
@property(readonly, nonatomic) NSArray *conflictedKeys; // @synthesize conflictedKeys=_conflictedKeys;
@property(readonly, nonatomic) NSArray *updatedKeys; // @synthesize updatedKeys=_updatedKeys;
@property(readonly, copy, nonatomic) NSString *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
@property(readonly, nonatomic) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
- (void)_deserializeResponseDictionary:(id)arg1 response:(id)arg2;	// IMP=0x000000000000a626
- (id)payloadDataForUpdateResponseKey:(id)arg1;	// IMP=0x000000000000a591
- (id)description;	// IMP=0x000000000000a364
- (id)initWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3;	// IMP=0x000000000000a1cc

@end

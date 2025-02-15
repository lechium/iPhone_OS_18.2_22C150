//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface CNDuplicateContactsManager : NSObject
{
    MISSING_TYPE *contactStore;	// 8 = 0x8
    MISSING_TYPE *contacts;	// 16 = 0x10
    MISSING_TYPE *findResult;	// 24 = 0x18
    MISSING_TYPE *mergeResult;	// 32 = 0x20
    MISSING_TYPE *didPerformMerge;	// 56 = 0x38
}

+ (void)updateRecentPostersDatabaseForSignatures:(id)arg1;	// IMP=0x00600000001b27f0
+ (void)updateRecentImagesDatabaseForSignatures:(id)arg1;	// IMP=0x00600000001b27c0
+ (void)refreshManagedDuplicatesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00600000001b2770
+ (_Bool)applyMergeResultToSaveRequest:(id)arg1 signatures:(id)arg2;	// IMP=0x00600000001b1ef0
+ (void)duplicatesCountsWithCompletionHandler:(void (^)(long long, long long))arg1;	// IMP=0x00600000001b1b00
- (void).cxx_destruct;	// IMP=0x00000000001b28f0
- (id)init;	// IMP=0x00000000001b2890
- (_Bool)applyMergeResultToSaveRequest:(id)arg1;	// IMP=0x00000000001b1e80
- (id)initWithContactStore:(id)arg1;	// IMP=0x00000000001b0a80
@property(nonatomic, readonly) NSArray *duplicates;

@end


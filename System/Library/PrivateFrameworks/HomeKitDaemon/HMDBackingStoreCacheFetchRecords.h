//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheGroup, NSArray;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheFetchRecords
{
    _Bool _recursive;	// 8 = 0x8
    HMDBackingStoreCacheGroup *_group;	// 16 = 0x10
    CDUnknownBlockType _fetchResult;	// 24 = 0x18
    NSArray *_recordNames;	// 32 = 0x20
    NSArray *_uuids;	// 40 = 0x28
    NSArray *_parentUuids;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003c44da
@property(retain, nonatomic) NSArray *parentUuids; // @synthesize parentUuids=_parentUuids;
@property(retain, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
@property(retain, nonatomic) NSArray *recordNames; // @synthesize recordNames=_recordNames;
@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property _Bool recursive; // @synthesize recursive=_recursive;
- (id)mainReturningError;	// IMP=0x00000000003c3e5c
- (id)initWithGroup:(id)arg1 records:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c3d7c
- (id)initWithGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c3c9c
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c3bbc

@end

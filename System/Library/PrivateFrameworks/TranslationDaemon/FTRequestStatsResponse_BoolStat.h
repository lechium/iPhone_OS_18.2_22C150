//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTRequestStatsResponse_BoolStat : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BoolStat *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c61c0
- (id)flatbuffData;	// IMP=0x00000000000c602f
- (Offset_3d0cfb4c)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c5f50
@property(readonly, nonatomic) _Bool value;
@property(readonly, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c5ea6
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BoolStat *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c5cfb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BoolStat *)arg2;	// IMP=0x00000000000c5ce6
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c5ccc
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c5cb5

@end


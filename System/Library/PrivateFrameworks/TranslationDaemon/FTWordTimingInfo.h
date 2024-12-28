//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTWordTimingInfo : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct WordTimingInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000119634
- (id)flatbuffData;	// IMP=0x00000000001194a3
- (Offset_79ee9959)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000119351
@property(readonly, nonatomic) float timestamp;
@property(readonly, nonatomic) unsigned int length;
@property(readonly, nonatomic) unsigned int offset;
@property(readonly, nonatomic) unsigned int sample_idx;
@property(readonly, nonatomic) NSString *word;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000119229
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011907e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct WordTimingInfo *)arg2;	// IMP=0x0000000000119069
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011904f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000119038

@end

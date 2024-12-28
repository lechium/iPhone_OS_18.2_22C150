//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTTSRequestFeatureFlags : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSRequestFeatureFlags *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000108e6f
- (id)flatbuffData;	// IMP=0x0000000000108cde
- (Offset_668da1f4)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000108bef
@property(readonly, nonatomic) long long phoneset_type;
@property(readonly, nonatomic) _Bool cache_only;
@property(readonly, nonatomic) _Bool disable_prompts;
@property(readonly, nonatomic) _Bool fe_feature_only;
@property(readonly, nonatomic) _Bool fe_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000108af2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSRequestFeatureFlags *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000108947
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSRequestFeatureFlags *)arg2;	// IMP=0x0000000000108932
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000108918
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000108901

@end

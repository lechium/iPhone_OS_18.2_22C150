//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, RSPointCloud, RSTemporalMeta;

@interface RSKeyframeAccumulation : NSObject
{
    RSPointCloud *_worldpc;	// 8 = 0x8
    RSTemporalMeta *_accMeta;	// 16 = 0x10
    unsigned long long _skipCnt;	// 24 = 0x18
    NSMutableDictionary *_metas;	// 32 = 0x20
    NSMutableArray *_newKeyframes;	// 40 = 0x28
    NSMutableArray *_diffKeyframes;	// 48 = 0x30
    NSMutableDictionary *_keyframeOrderDict;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000208921
- (id)init;	// IMP=0x00000000002087ce

@end


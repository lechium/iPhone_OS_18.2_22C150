//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPLightVideoAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;	// 8 = 0x8
    AVAsset *_avAsset;	// 16 = 0x10
    struct CGAffineTransform _transform;	// 24 = 0x18
    NSArray *_metaTracks;	// 72 = 0x48
    NSMutableDictionary *_publicMutableResults;	// 80 = 0x50
    NSMutableDictionary *_privateMutableResults;	// 88 = 0x58
    float _photoOffset;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000108c17
@property(nonatomic) float photoOffset; // @synthesize photoOffset=_photoOffset;
@property(readonly, nonatomic) NSDictionary *privateResults;
@property(readonly, nonatomic) NSDictionary *publicResults;
- (int)analyzeAsset:(CDUnknownBlockType)arg1 flags:(unsigned long long *)arg2;	// IMP=0x0000000000108990
- (int)postProcessOrientationResults;	// IMP=0x0000000000108545
- (int)checkTimeRangeConsistency;	// IMP=0x000000000010827a
- (int)processMetaTrackForType:(id)arg1 cancel:(CDUnknownBlockType)arg2 flags:(unsigned long long *)arg3;	// IMP=0x0000000000107b7c
- (id)findMetaTrackforType:(id)arg1;	// IMP=0x0000000000107827
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;	// IMP=0x000000000010766c

@end


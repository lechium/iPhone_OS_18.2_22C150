//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VCPVideoMetaFocusSegment;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaFocusAnalyzer : NSObject
{
    VCPVideoMetaFocusSegment *_activeSegment;	// 8 = 0x8
    NSMutableArray *_mutableResults;	// 16 = 0x10
    CDStruct_e83c9415 _frameTimeRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000347fcf
@property(readonly, retain, nonatomic) NSArray *results;
- (int)finalizeAnalysis;	// IMP=0x0000000000347f2a
- (void)addSegmentToResults;	// IMP=0x0000000000347cf2
- (int)processFrameMetadata:(id)arg1;	// IMP=0x0000000000347ae3
- (id)init;	// IMP=0x00000000003479fd

@end


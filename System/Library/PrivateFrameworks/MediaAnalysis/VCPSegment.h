//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPSegment : NSObject
{
    float _sumOfScore;	// 8 = 0x8
    float _curationScore;	// 12 = 0xc
    unsigned long long _numOfFrames;	// 16 = 0x10
    unsigned long long _numOfValidFrames;	// 24 = 0x18
    CDStruct_e83c9415 _timeRange;	// 32 = 0x20
}

@property(nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(readonly, nonatomic) unsigned long long numOfValidFrames; // @synthesize numOfValidFrames=_numOfValidFrames;
@property(readonly, nonatomic) unsigned long long numOfFrames; // @synthesize numOfFrames=_numOfFrames;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (float)sumOfScore;	// IMP=0x0000000000084b53
- (float)score;	// IMP=0x0000000000084b18
- (_Bool)isContentTooShort;	// IMP=0x0000000000084ad3
- (void)trimSegment:(CDStruct_1b6d18a9)arg1 fromStart:(_Bool)arg2;	// IMP=0x00000000000849a8
- (void)updateDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000084942
- (void)copyFrom:(id)arg1;	// IMP=0x0000000000084881
- (void)mergeSegment:(id)arg1;	// IMP=0x000000000008472b
- (void)updateSegment:(CDStruct_e83c9415)arg1 score:(float)arg2 valid:(_Bool)arg3;	// IMP=0x0000000000084644
- (void)updateWithFirstFrame:(CDStruct_e83c9415)arg1 score:(float)arg2 valid:(_Bool)arg3;	// IMP=0x00000000000845f0
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 score:(float)arg2 valid:(_Bool)arg3;	// IMP=0x0000000000084507
- (id)init;	// IMP=0x000000000008448d

@end


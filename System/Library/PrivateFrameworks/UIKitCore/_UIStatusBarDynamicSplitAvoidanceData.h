//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDynamicSplitAvoidanceData : NSObject
{
    double _leadingDelta;	// 8 = 0x8
    double _trailingDelta;	// 16 = 0x10
    NSMutableDictionary *_avoidanceFrameAbsoluteFrames;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000012ef045
@property(retain, nonatomic) NSMutableDictionary *avoidanceFrameAbsoluteFrames; // @synthesize avoidanceFrameAbsoluteFrames=_avoidanceFrameAbsoluteFrames;
@property(nonatomic) double trailingDelta; // @synthesize trailingDelta=_trailingDelta;
@property(nonatomic) double leadingDelta; // @synthesize leadingDelta=_leadingDelta;
- (id)initWithLeadingDelta:(double)arg1 trailingDelta:(double)arg2;	// IMP=0x00000000012eef9d
- (id)init;	// IMP=0x00000000012eef1d

@end


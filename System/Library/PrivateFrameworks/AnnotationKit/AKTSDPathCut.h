//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKTSDPathCut : NSObject
{
    long long mSegment;	// 8 = 0x8
    double mT;	// 16 = 0x10
    double mSkew;	// 24 = 0x18
}

@property(readonly, nonatomic) double skew; // @synthesize skew=mSkew;
@property(readonly, nonatomic) double t; // @synthesize t=mT;
@property(readonly, nonatomic) long long segment; // @synthesize segment=mSegment;
- (id)description;	// IMP=0x00000000000dfa82
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3;	// IMP=0x00000000000dfa27

@end


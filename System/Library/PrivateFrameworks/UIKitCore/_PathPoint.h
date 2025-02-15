//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PathPoint : NSObject
{
    _Bool _sentinelPoint;	// 8 = 0x8
    double _force;	// 16 = 0x10
    double _relativeTime;	// 24 = 0x18
    double _absoluteTime;	// 32 = 0x20
    double _decay;	// 40 = 0x28
    double _length;	// 48 = 0x30
    struct CGPoint _point;	// 56 = 0x38
}

@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double decay; // @synthesize decay=_decay;
@property(nonatomic) double absoluteTime; // @synthesize absoluteTime=_absoluteTime;
@property(nonatomic) double relativeTime; // @synthesize relativeTime=_relativeTime;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic, getter=isSentinelPoint) _Bool sentinelPoint; // @synthesize sentinelPoint=_sentinelPoint;
- (id)description;	// IMP=0x0000000001197274

@end


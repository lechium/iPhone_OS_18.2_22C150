//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVValueTiming.h"

__attribute__((visibility("hidden")))
@interface AVConcreteValueTiming : AVValueTiming
{
    double _value;	// 8 = 0x8
    double _timeStamp;	// 16 = 0x10
    double _rate;	// 24 = 0x18
}

- (CDStruct_c3b9c2ee)_timing;	// IMP=0x00000000000b6252
- (double)rate;	// IMP=0x00000000000b6240
- (double)anchorTimeStamp;	// IMP=0x00000000000b622e
- (double)anchorValue;	// IMP=0x00000000000b621c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b61ed
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;	// IMP=0x00000000000b61c0

@end


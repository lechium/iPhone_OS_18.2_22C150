//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MPCSample : NSObject
{
    int _number;	// 8 = 0x8
    int _thermalLevel;	// 12 = 0xc
    double _level;	// 16 = 0x10
    double _time;	// 24 = 0x18
    long long _state;	// 32 = 0x20
}

@property(readonly, nonatomic) int thermalLevel; // @synthesize thermalLevel=_thermalLevel;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) double level; // @synthesize level=_level;
@property(readonly, nonatomic) int number; // @synthesize number=_number;
- (void)setThermalLevel:(int)arg1;	// IMP=0x000000000017b9d4
- (id)initWithLevel:(double)arg1 time:(double)arg2 state:(long long)arg3;	// IMP=0x000000000017b968

@end

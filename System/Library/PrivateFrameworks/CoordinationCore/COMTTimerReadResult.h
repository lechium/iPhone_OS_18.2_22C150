//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface COMTTimerReadResult
{
    NSArray *_timers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000a5dd1
- (void).cxx_destruct;	// IMP=0x00000000000a5df5
@property(readonly, copy, nonatomic) NSArray *timers; // @synthesize timers=_timers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a5dd9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a5d36
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a5aeb
- (id)initWithTimers:(id)arg1 actionIdentifier:(id)arg2;	// IMP=0x00000000000a5a67

@end


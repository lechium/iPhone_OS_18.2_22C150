//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionPlaySound : SCNAction
{
    struct SCNCPlaySound *_mycaction;	// 8 = 0x8
}

+ (id)playAudioSource:(id)arg1 waitForCompletion:(_Bool)arg2;	// IMP=0x00600000000a0674
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000a066c
- (id)parameters;	// IMP=0x00000000000a0778
- (id)reversedAction;	// IMP=0x00000000000a075e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a06dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a05e0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a04a3
- (void)_setupDuration;	// IMP=0x00000000000a0457
- (id)init;	// IMP=0x00000000000a038e

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshNotification.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface COStateNotification : COMeshNotification
{
    NSDictionary *_state;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007c16a
- (void).cxx_destruct;	// IMP=0x000000000007c183
@property(readonly, copy, nonatomic) NSDictionary *state; // @synthesize state=_state;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007c0cf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007bc3b
- (id)initWithState:(id)arg1;	// IMP=0x000000000007bbcd

@end


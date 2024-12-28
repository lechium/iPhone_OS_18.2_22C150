//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKSequence : SKAction
{
    void *_mycaction;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    unsigned long long _animIndex;	// 24 = 0x18
}

+ (id)sequenceWithActions:(id)arg1;	// IMP=0x006000000004c00a
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000004b8a8
- (void).cxx_destruct;	// IMP=0x000000000004c7ed
- (id)reversedAction;	// IMP=0x000000000004c5bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c4dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004bf1e
- (id)subactions;	// IMP=0x000000000004bf09
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004b9fc
- (id)init;	// IMP=0x000000000004b8b0

@end

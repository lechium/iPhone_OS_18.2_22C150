//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class NSString;

@interface ActionParameter : INObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000038f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003bd0
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x0000000000003ac0

// Remaining properties
@property(nonatomic, copy) NSString *key; // @dynamic key;
@property(nonatomic, copy) NSString *value; // @dynamic value;

@end

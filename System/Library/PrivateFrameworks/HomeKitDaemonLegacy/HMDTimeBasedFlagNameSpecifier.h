//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagNameSpecifier : NSObject
{
    NSString *_flagName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000051010e
+ (id)specifierWithFlagName:(id)arg1;	// IMP=0x00100000005100c1
- (void).cxx_destruct;	// IMP=0x00000000005100b1
@property(readonly, nonatomic) NSString *flagName; // @synthesize flagName=_flagName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToGroupNameSpecifier:(id)arg1;	// IMP=0x000000000050ff82
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000050fea7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000050fe9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000050fe2c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000050fd9b
- (id)initWithFlagName:(id)arg1;	// IMP=0x000000000050fd30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

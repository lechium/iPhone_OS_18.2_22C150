//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNSocialProfile, NSString;

__attribute__((visibility("hidden")))
@interface CNSocialProfileContactPredicate : CNPredicate
{
    CNSocialProfile *_socialProfile;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000592f3
- (void).cxx_destruct;	// IMP=0x000000000005964b
@property(readonly, copy, nonatomic) CNSocialProfile *socialProfile; // @synthesize socialProfile=_socialProfile;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005944c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000593cf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000592fb
@property(readonly, copy) NSString *description;
- (id)initWithSocialProfile:(id)arg1;	// IMP=0x0000000000059173
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000137c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

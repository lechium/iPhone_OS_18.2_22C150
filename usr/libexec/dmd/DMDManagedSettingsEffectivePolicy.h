//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface DMDManagedSettingsEffectivePolicy : NSObject
{
    NSSet *excludedIdentifiers;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_organizationIdentifier;	// 32 = 0x20
    NSString *_declarationIdentifier;	// 40 = 0x28
    long long _policy;	// 48 = 0x30
    long long _priority;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000044410
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long policy; // @synthesize policy=_policy;
@property(copy, nonatomic) NSString *declarationIdentifier; // @synthesize declarationIdentifier=_declarationIdentifier;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSSet *excludedIdentifiers; // @synthesize excludedIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


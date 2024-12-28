//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol DMDEffectivePolicyInteface <NSObject>
@property(copy, nonatomic) NSSet *excludedIdentifiers;
@property(nonatomic) long long priority;
@property(nonatomic) long long policy;
@property(copy, nonatomic) NSString *declarationIdentifier;
@property(copy, nonatomic) NSString *organizationIdentifier;
- (void)setIdentifier:(NSString *)arg1;
- (NSString *)identifier;
@property(copy, nonatomic) NSString *type;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, RBDomainRestriction, RBEntitlementPredicate;
@protocol RBAssertionContextProviding;

@protocol RBDomainAttributeManaging <NSObject>
- (_Bool)areTargetPropertiesValidForContext:(id <RBAssertionContextProviding>)arg1 forAttributeWithDomain:(NSString *)arg2 andName:(NSString *)arg3;
- (NSSet *)allEntitlements;
- (_Bool)containsAttributeWithDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (NSString *)endowmentNamespaceForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (RBDomainRestriction *)restrictionsForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (NSSet *)additionalRestrictionsForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (RBEntitlementPredicate *)targetEntitlementsForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (RBEntitlementPredicate *)originatorEntitlementsForDomain:(NSString *)arg1 andName:(NSString *)arg2;
- (NSArray *)attributesForDomain:(NSString *)arg1 andName:(NSString *)arg2 context:(id <RBAssertionContextProviding>)arg3 withError:(id *)arg4;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VSAppInstallationInfoCenter;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPredicateFactory : NSObject
{
    VSAppInstallationInfoCenter *_appInstallationInfoCenter;	// 8 = 0x8
}

+ (id)_subscriptionPredicateTemplateValues;	// IMP=0x0060000000002cf9
+ (id)_subscriptionSourcePredicateTemplateValues;	// IMP=0x0060000000002bcd
+ (id)_subscriptionSourceKindPredicateTemplateValues;	// IMP=0x0060000000002af0
- (void).cxx_destruct;	// IMP=0x00000000000052ff
@property(retain, nonatomic) VSAppInstallationInfoCenter *appInstallationInfoCenter; // @synthesize appInstallationInfoCenter=_appInstallationInfoCenter;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2;	// IMP=0x0000000000004d0c
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2;	// IMP=0x000000000000468e
- (id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000003a50
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x0000000000003958
- (id)allowedSubscriptionsPredicateForTask:(id)arg1;	// IMP=0x0000000000003860
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x0000000000003768
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x00000000000035fc
- (id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x000000000000352f
- (id)_predicateTemplateForSourceOfTask:(id)arg1;	// IMP=0x00000000000033de
- (id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2;	// IMP=0x0000000000003257
- (id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;	// IMP=0x00000000000031bc
- (id)_predicateTemplateForSourceIdentifier:(id)arg1;	// IMP=0x00000000000030f1
- (id)_predicateTemplateForSourceKind:(long long)arg1;	// IMP=0x0000000000003010

@end

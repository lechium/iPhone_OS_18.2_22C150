//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface CTXPCSubscriberEvaluateIdentityDataRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x006000000017c876
- (int)requiredEntitlement;	// IMP=0x000000000017c86b
@property(readonly, nonatomic) NSData *identity;
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000017c67d
- (id)initWithContext:(id)arg1 identityData:(id)arg2;	// IMP=0x000000000017c569

@end


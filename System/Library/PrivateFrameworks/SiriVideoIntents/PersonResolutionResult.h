//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface PersonResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0060000000198900
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0060000000198893
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x006000000019883d
+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1;	// IMP=0x00600000001987a9
+ (id)disambiguationWithPersonsToDisambiguate:(id)arg1;	// IMP=0x0060000000198712
+ (id)successWithResolvedPerson:(id)arg1;	// IMP=0x00600000001985dd
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000198a40

@end


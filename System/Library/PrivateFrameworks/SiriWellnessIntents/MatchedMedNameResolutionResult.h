//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface MatchedMedNameResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x00800000000030c0
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0080000000002fd0
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0080000000002f00
+ (id)confirmationRequiredWithMatchedMedNameToConfirm:(id)arg1;	// IMP=0x0080000000002e30
+ (id)disambiguationWithMatchedMedNamesToDisambiguate:(id)arg1;	// IMP=0x0080000000002ce0
+ (id)successWithResolvedMatchedMedName:(id)arg1;	// IMP=0x0080000000002b50
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000003310

@end

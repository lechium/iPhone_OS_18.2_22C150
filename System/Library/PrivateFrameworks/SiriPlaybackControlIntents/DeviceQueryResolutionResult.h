//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceQueryResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x006000000020b514
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x006000000020b4a7
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x006000000020b451
+ (id)confirmationRequiredWithDeviceQueryToConfirm:(id)arg1;	// IMP=0x006000000020b3bd
+ (id)disambiguationWithDeviceQuerysToDisambiguate:(id)arg1;	// IMP=0x006000000020b326
+ (id)successWithResolvedDeviceQuery:(id)arg1;	// IMP=0x006000000020b1f1
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x000000000020b654

@end


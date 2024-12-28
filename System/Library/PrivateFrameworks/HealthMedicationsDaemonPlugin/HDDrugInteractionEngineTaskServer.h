//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDStandardTaskServer.h>

__attribute__((visibility("hidden")))
@interface HDDrugInteractionEngineTaskServer : HDStandardTaskServer
{
}

+ (id)requiredEntitlements;	// IMP=0x0010000000043ac2
+ (id)taskIdentifier;	// IMP=0x0010000000043aae
- (void)remote_interactionResultsForMedications:(id)arg1 lifestyleFactors:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004426a
- (void)remote_interactionResultForMedication:(id)arg1 lifestyleFactor:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044172
- (void)remote_interactionResultForFirstMedication:(id)arg1 secondMedication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044067
- (void)remote_interactionResultsForInteractionClasses:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043f92
- (void)remote_interactionClassForLifestyleFactor:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043eb8
- (void)remote_numberOfInteractionsForMedication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043de3
- (void)remote_numberOfInteractionsForConceptWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043d0e
- (void)remote_interactionClassesForMedication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043c39
- (void)remote_interactionClassesForConceptWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043b64
- (void)connectionInvalidated;	// IMP=0x0000000000043b5e
- (id)remoteInterface;	// IMP=0x0000000000043b45
- (id)exportedInterface;	// IMP=0x0000000000043b2c

@end

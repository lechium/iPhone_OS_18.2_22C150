//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCC19ModelCatalogRuntime20CatalogServiceServer6Server : NSObject
{
    MISSING_TYPE *clientApplicationIdentifier;	// 8 = 0x8
    MISSING_TYPE *shouldBypassAvailabilitySecureCheck;	// 24 = 0x18
    MISSING_TYPE *sideloadURL;	// 0 = 0x0
    MISSING_TYPE *catalogIndex;	// 1702125407 = 0x65745f5f
    MISSING_TYPE *subscriptionManager;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x000000000001da3b
- (id)init;	// IMP=0x000000000001da05
- (void)siriResourceAvailabilityWith:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d8f7
- (void)resourceAvailabilityBy:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d0ca
- (void)hasEnoughStorageForGenerativeExperiencesEssentialResourcesWith:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a296
- (void)generativeExperiencesEssentialResourcesReadyWith:(CDUnknownBlockType)arg1;	// IMP=0x00000000000194d4
- (void)isGenerativeExperiencesEssentialResourcesReadyWith:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019269
- (void)resourceInformationWithIdentifier:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019084
- (void)resourceStatusWithIdentifier:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016ff9
- (void)removeSideloadWithResourceBundle:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016b74
- (void)removeSideloadWithResource:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000166c6
- (void)sideloadWithResourceBundle:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000165f0
- (void)sideloadWithResource:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x000000000001610d
- (void)resourceBundleContainersWith:(CDUnknownBlockType)arg1;	// IMP=0x000000000001608b
- (void)resourceContainersWith:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015be1
- (void)resourceBundleContainerWithIdentifier:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x000000000001571c
- (void)resourceContainerWithIdentifier:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000140a9
- (void)releaseResourceWithIdentifier:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000135c5
- (void)requestResourceWithIdentifier:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012724
- (void)releaseResourcesWithRequestKey:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x000000000001130d
- (void)requestResourcesWithRequestKey:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000108db

@end

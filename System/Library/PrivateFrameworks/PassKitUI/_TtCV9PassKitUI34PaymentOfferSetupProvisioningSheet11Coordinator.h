//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol PKUIFlowManagerRendererDelegate;

__attribute__((visibility("hidden")))
@interface _TtCV9PassKitUI34PaymentOfferSetupProvisioningSheet11Coordinator : NSObject
{
    MISSING_TYPE *provisioningData;	// 0 = 0x0
    MISSING_TYPE *criteriaIdentifier;	// 17750836 = 0x10edb34
    MISSING_TYPE *cardArtURL;	// 82568 = 0x14288
    MISSING_TYPE *paymentOffersController;	// 17750836 = 0x10edb34
    MISSING_TYPE *navigationController;	// 0 = 0x0
    MISSING_TYPE *completion;	// 0 = 0x0
    MISSING_TYPE *flowDelegate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000548080
- (id)init;	// IMP=0x0000000000548020
- (id)createChildRenderer;	// IMP=0x0000000000547ff0
- (id)rootViewController;	// IMP=0x0000000000547cf0
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000547c50
- (id)navViewControllers;	// IMP=0x0000000000547bb0
- (void)dismissWithViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000547b90
- (void)presentWithViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000547b70
- (void)pushWithViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000547b50
@property(nonatomic, retain) id <PKUIFlowManagerRendererDelegate> flowDelegate; // @synthesize flowDelegate;

@end


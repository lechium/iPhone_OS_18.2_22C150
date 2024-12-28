//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSOperationQueue, SUUIDonationConfiguration, SUUIDonationViewController, SUUIGiftCharity;

__attribute__((visibility("hidden")))
@interface SUUIDonationStepViewController : UIViewController
{
    SUUIGiftCharity *_charity;	// 8 = 0x8
    SUUIDonationConfiguration *_configuration;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000034025a
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SUUIDonationConfiguration *donationConfiguration; // @synthesize donationConfiguration=_configuration;
@property(readonly, nonatomic) SUUIGiftCharity *charity; // @synthesize charity=_charity;
@property(readonly, nonatomic) SUUIDonationViewController *donationViewController;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000340111

@end

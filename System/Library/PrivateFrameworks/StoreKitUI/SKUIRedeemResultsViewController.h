//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIRedeemStepViewController.h"

@class SKUIRedeem;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController
{
    SKUIRedeem *_redeem;	// 8 = 0x8
    long long _redeemCategory;	// 16 = 0x10
}

+ (id)redeemResultsControllerForRedeem:(id)arg1;	// IMP=0x00600000000f6ace
+ (_Bool)canShowResultsForRedeem:(id)arg1;	// IMP=0x00600000000f69f8
- (void).cxx_destruct;	// IMP=0x00000000000f72fe
@property(nonatomic) long long redeemCategory; // @synthesize redeemCategory=_redeemCategory;
@property(retain, nonatomic) SKUIRedeem *redeem; // @synthesize redeem=_redeem;
- (void)_doneAction:(id)arg1;	// IMP=0x00000000000f7029
- (void)viewDidLoad;	// IMP=0x00000000000f6ebf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f6e61
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000f6e03
- (id)initWithRedeem:(id)arg1;	// IMP=0x00000000000f6ce6

@end

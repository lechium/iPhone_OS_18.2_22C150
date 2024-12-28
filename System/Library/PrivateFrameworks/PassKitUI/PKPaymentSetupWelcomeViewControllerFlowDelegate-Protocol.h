//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKPaymentSetupProductCategory, PKPaymentSetupWelcomeViewController;

@protocol PKPaymentSetupWelcomeViewControllerFlowDelegate <NSObject>
- (void)welcomeViewControllerDidTerminate:(PKPaymentSetupWelcomeViewController *)arg1;
- (void)welcomeViewController:(PKPaymentSetupWelcomeViewController *)arg1 didSelectCategory:(PKPaymentSetupProductCategory *)arg2 products:(NSArray *)arg3;
- (void)welcomeViewControllerDidSelectManualEntry:(PKPaymentSetupWelcomeViewController *)arg1;
- (void)welcomeViewControllerDidSelectCardsOnFile:(PKPaymentSetupWelcomeViewController *)arg1;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString, PKPaymentSetupProductCategory;

@protocol PKPaymentSetupCategoriesSectionControllerDelegate <NSObject>
- (void)reloadItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)didSelectYourCardsWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)didSelectCategory:(PKPaymentSetupProductCategory *)arg1 completion:(void (^)(_Bool))arg2;
- (void)reloadRequiredForSectionIdentifier:(NSString *)arg1 animated:(_Bool)arg2;
@end


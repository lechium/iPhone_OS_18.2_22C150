//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI35AppleCardFeaturesAndBenefitsManager : NSObject
{
    MISSING_TYPE *_sectionItems;	// 0 = 0x0
    MISSING_TYPE *paymentDataProvider;	// 0 = 0x0
    MISSING_TYPE *accounts;	// 0 = 0x0
    MISSING_TYPE *cardController;	// 0 = 0x0
    MISSING_TYPE *accountUserCollection;	// 0 = 0x0
    MISSING_TYPE *recurringPayments;	// 0 = 0x0
    MISSING_TYPE *familyMembers;	// 0 = 0x0
    MISSING_TYPE *accountUsers;	// 0 = 0x0
    MISSING_TYPE *checkmarkSymbol;	// 0 = 0x0
    MISSING_TYPE *checkmarkColor;	// 0 = 0x0
    MISSING_TYPE *accountCardNumbersPresenter;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_percentFormatter;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000216e40
- (void)dealloc;	// IMP=0x0000000000216db0
- (id)init;	// IMP=0x0000000000216d10
- (void)physicalCardsChanged:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x0000000000220020
- (void)accountUsersChanged:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x000000000021fff0
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;	// IMP=0x000000000021ff90
- (void)accountChanged:(id)arg1;	// IMP=0x000000000021ff30

@end


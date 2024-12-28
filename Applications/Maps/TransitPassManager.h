//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsCanKicker, NSMutableDictionary, PKPassLibrary;
@protocol OS_dispatch_queue, TransitPassManagerDelegate;

@interface TransitPassManager : NSObject
{
    NSObject<OS_dispatch_queue> *_libraryQueue;	// 8 = 0x8
    PKPassLibrary *_libraryToNotUseDirectly;	// 16 = 0x10
    _Bool _isTourist;	// 24 = 0x18
    NSMutableDictionary *_allAvailablePasses;	// 32 = 0x20
    MapsSuggestionsCanKicker *_passKitLibraryDidChangeCanKicker;	// 40 = 0x28
    id <TransitPassManagerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000967f64
@property(nonatomic) __weak id <TransitPassManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;	// IMP=0x0010000000967ef1
- (id)currencyAmountForRoute:(id)arg1;	// IMP=0x0010000000967970
- (id)transitSystemsForRoute:(id)arg1 withSupportedPaymentMethods:(id)arg2;	// IMP=0x0010000000967386
- (void)_passKitLibraryMayHaveChanged;	// IMP=0x001000000096733a
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x0010000000967328
- (void)_passKitLibraryDidChange:(id)arg1;	// IMP=0x00100000009672ab
- (id)_passForTopUpWithTransitPasses:(id)arg1 forRouteTNIs:(id)arg2 routeCost:(id)arg3;	// IMP=0x0010000000966005
- (void)fetchTransitMessageForRoute:(id)arg1 paymentMethods:(id)arg2 suggestions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000965727
- (void)_fetchAllAvailablePassesFromWallet;	// IMP=0x00100000009651ee
- (id)_identifiersForSecurePasses:(id)arg1;	// IMP=0x0010000000964950
- (id)_userTransitPassesFromLibrary:(id)arg1;	// IMP=0x00100000009645b7
- (id)_defaultPaymentCardExpressStatuses:(id)arg1;	// IMP=0x00100000009640cd
- (id)_defaultPaymentCardsFromLibrary:(id)arg1;	// IMP=0x0010000000963e30
- (void)_transitTopUpMessageForPass:(id)arg1 paymentMethods:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000963042
- (_Bool)_balanceIsLessThanRouteCost:(id)arg1 forPass:(id)arg2;	// IMP=0x0010000000962b63
- (id)_exclamationMarkImage;	// IMP=0x0010000000962a69
- (id)_messageFromBalance:(id)arg1 passName:(id)arg2;	// IMP=0x00100000009628a8
- (void)_fetchLibrary:(CDUnknownBlockType)arg1;	// IMP=0x001000000096262d
- (void)userHasPaymentCardWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000009623a7
- (void)dealloc;	// IMP=0x0010000000962324
- (id)initWithIsTourist:(_Bool)arg1;	// IMP=0x00100000009620e8

@end

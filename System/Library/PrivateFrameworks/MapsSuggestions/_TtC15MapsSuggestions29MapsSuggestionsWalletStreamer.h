//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC15MapsSuggestions29MapsSuggestionsWalletStreamer
{
    MISSING_TYPE *_wallet;	// 88 = 0x58
    MISSING_TYPE *_keyListenerBlock;	// 96 = 0x60
    MISSING_TYPE *_resourceDepot;	// 128 = 0x80
    MISSING_TYPE *_passKitObserver;	// 136 = 0x88
    MISSING_TYPE *_passKitChangedCanKicker;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000000a360
- (id)initWithLookAheadPeriod:(double)arg1 pingInterval:(double)arg2 notificationName:(id)arg3 identifyingName:(id)arg4;	// IMP=0x000000000000a420
- (void)dealloc;	// IMP=0x000000000000a340
- (void)scanForStreamableEvents;	// IMP=0x000000000000a0e0
- (void)_tearDownWallet;	// IMP=0x00000000000097b0
- (void)_setupWallet;	// IMP=0x0000000000009780
- (id)initWithResourceDepot:(id)arg1 notificationName:(id)arg2;	// IMP=0x0000000000009590

@end

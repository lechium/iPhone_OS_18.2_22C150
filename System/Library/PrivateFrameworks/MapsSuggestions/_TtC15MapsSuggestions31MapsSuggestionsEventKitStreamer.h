//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC15MapsSuggestions31MapsSuggestionsEventKitStreamer
{
    MISSING_TYPE *_eventKit;	// 88 = 0x58
    MISSING_TYPE *_keyListenerBlock;	// 96 = 0x60
    MISSING_TYPE *_resourceDepot;	// 128 = 0x80
    MISSING_TYPE *_eventKitObserver;	// 136 = 0x88
    MISSING_TYPE *_eventKitChangedCanKicker;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000000c280
- (id)initWithLookAheadPeriod:(double)arg1 pingInterval:(double)arg2 notificationName:(id)arg3 identifyingName:(id)arg4;	// IMP=0x000000000000c380
- (void)dealloc;	// IMP=0x000000000000c260
- (void)scanForStreamableEvents;	// IMP=0x000000000000c000
- (void)_tearDownEventKit;	// IMP=0x000000000000aff0
- (void)_setupEventKit;	// IMP=0x000000000000ae50
- (id)initWithResourceDepot:(id)arg1 notificationName:(id)arg2;	// IMP=0x000000000000ac10

@end

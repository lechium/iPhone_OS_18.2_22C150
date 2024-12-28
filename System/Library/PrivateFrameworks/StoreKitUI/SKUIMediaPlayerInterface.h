//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, SKUIMediaPlayerItemStatus;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUIMediaPlayerInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    SKUIMediaPlayerItemStatus *_onDeckItem;	// 32 = 0x20
    NSMapTable *_players;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_observerQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 56 = 0x38
}

+ (_Bool)isRadioItemIdentifier:(id)arg1;	// IMP=0x00600000002cdbb6
+ (_Bool)identifierMatches:(id)arg1 item:(id)arg2;	// IMP=0x00600000002cd9f7
+ (id)sharedInstance;	// IMP=0x00600000002cd136
- (void).cxx_destruct;	// IMP=0x00000000002d069a
- (void)_updateTimeValuesUsingItemTime:(_Bool)arg1 player:(id)arg2 item:(id)arg3;	// IMP=0x00000000002d0443
- (void)_updateItemForPlayer:(id)arg1 currentTime:(double)arg2;	// IMP=0x00000000002d03f1
- (void)_updateDurationForPlayerItem:(id)arg1 withMPAVItem:(id)arg2;	// IMP=0x00000000002d032b
- (void)_startOnDeckTimer;	// IMP=0x00000000002d0213
- (void)_onDeckTimedOut;	// IMP=0x00000000002d019e
- (void)_cancelOnDeckItem;	// IMP=0x00000000002d015d
- (void)_updateBufferingState:(unsigned long long)arg1 player:(id)arg2;	// IMP=0x00000000002d00b5
- (void)_unregisterForNotificationsForCurrentItem:(id)arg1;	// IMP=0x00000000002d0019
- (void)_setCurrentTimeIfPossible:(double)arg1 player:(id)arg2;	// IMP=0x00000000002cff7b
- (void)_registerForNotificationsForCurrentItem:(id)arg1;	// IMP=0x00000000002cfed8
- (void)_itemDidChange:(id)arg1 incomingItem:(id)arg2;	// IMP=0x00000000002cfa25
- (void)_notifyFinishedItem:(id)arg1;	// IMP=0x00000000002cf9ec
- (void)_notifyObserversOfItemStateChange;	// IMP=0x00000000002cf4ea
- (void)_destroyPeridicTimeObseverIfNeeded:(id)arg1;	// IMP=0x00000000002cf428
- (void)_createPeriodicTimeObserverIfNeeded:(id)arg1;	// IMP=0x00000000002cf1fd
- (id)_playerForNotification:(id)arg1;	// IMP=0x00000000002cf10f
- (id)_itemFromNotification:(id)arg1;	// IMP=0x00000000002cf023
- (void)_playerRateDidChangeNotification:(id)arg1;	// IMP=0x00000000002cede3
- (void)_playerItemWillChangeNotification:(id)arg1;	// IMP=0x00000000002cecc6
- (void)_playerItemDidChangeNotification:(id)arg1;	// IMP=0x00000000002cec2d
- (void)_playbackErrorNotification:(id)arg1;	// IMP=0x00000000002cebcb
- (void)_playerItemReady:(id)arg1;	// IMP=0x00000000002ceb08
- (void)_notifiyObserversOfItemChange:(id)arg1;	// IMP=0x00000000002ce7a4
- (void)_currentItemDurationAvailableNotification:(id)arg1;	// IMP=0x00000000002ce550
- (void)_bufferingStateChangedNotification:(id)arg1;	// IMP=0x00000000002ce44e
- (void)togglePlayStateForItemWithIdentifier:(id)arg1;	// IMP=0x00000000002ce391
- (void)removeObserver:(id)arg1;	// IMP=0x00000000002ce2e5
- (id)playerForItemWithIdentifier:(id)arg1;	// IMP=0x00000000002ce03e
- (void)notifyWillChangeToItemWithItemIdentifer:(id)arg1;	// IMP=0x00000000002cdca5
- (_Bool)identifierIsOnDeck:(id)arg1;	// IMP=0x00000000002cdc24
- (_Bool)isItemWithIdentifierActive:(id)arg1;	// IMP=0x00000000002cd74c
- (void)addObserver:(id)arg1;	// IMP=0x00000000002cd655
- (void)dealloc;	// IMP=0x00000000002cd489
- (id)init;	// IMP=0x00000000002cd1bb

@end

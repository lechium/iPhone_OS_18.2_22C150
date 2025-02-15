//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, MapsSuggestionsMeCard, NSString, ShortcutManager;

@interface MeCardDataProvider : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    ShortcutManager *_shortcutManager;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    _Bool _hasInitialData;	// 25 = 0x19
    MapsSuggestionsMeCard *_meCard;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000008f5476
@property(readonly, nonatomic) MapsSuggestionsMeCard *meCard; // @synthesize meCard=_meCard;
@property(readonly, nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)shortcutManagerMeCardDidChange:(id)arg1;	// IMP=0x00100000008f5443
- (void)_updateMeCardAndNotifyObservers:(_Bool)arg1;	// IMP=0x00100000008f5202
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (id)init;	// IMP=0x00100000008f50ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


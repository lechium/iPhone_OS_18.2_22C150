//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSArray, NSString;

@interface RecentsDataProvider : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    _Bool _hasInitialData;	// 17 = 0x11
    _Bool _initialDataHasBeenLoaded;	// 18 = 0x12
    NSArray *;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009df3e2
@property(nonatomic) _Bool initialDataHasBeenLoaded; // @synthesize initialDataHasBeenLoaded=_initialDataHasBeenLoaded;
@property(readonly, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(readonly, nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)deleteAllRecentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000009df27b
- (void)deleteRecents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009df126
- (void)_recentsDidChange:(id)arg1;	// IMP=0x00100000009df0ee
- (id)_recentsEngine;	// IMP=0x00100000009df0d5
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateAndNotifyObservers:(_Bool)arg1;	// IMP=0x00100000009deeef
- (id)init;	// IMP=0x00100000009dedae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

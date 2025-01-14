//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, MKMapItem, MapDataSubscriptionInfo, NSProgress, NSString;

@interface PlaceCardOfflineMapProvider : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    _Bool _regionDownloaded;	// 16 = 0x10
    MapDataSubscriptionInfo *_subscriptionInfo;	// 24 = 0x18
    MKMapItem *_mapItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000b3a13a
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic, getter=isRegionDownloaded) _Bool regionDownloaded; // @synthesize regionDownloaded=_regionDownloaded;
@property(retain, nonatomic) MapDataSubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000b39ef9
- (void)subscriptionInfosDidChange:(id)arg1;	// IMP=0x0010000000b39de4
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000b39dce
- (void)addObserver:(id)arg1;	// IMP=0x0010000000b39db8
@property(readonly, nonatomic) NSProgress *downloadProgress;
@property(readonly, nonatomic) long long downloadState;
- (void)dealloc;	// IMP=0x0010000000b39832
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000b39692

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


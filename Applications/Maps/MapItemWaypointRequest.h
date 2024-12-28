//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString;

@interface MapItemWaypointRequest : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000bbc873
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)recordRAPInformation:(id)arg1;	// IMP=0x0010000000bbc7d7
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000bbc590
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x0010000000bbc4a5
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x0010000000bbc425
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic) _Bool hasCachedResult;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000bbc342
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000bbbe61
- (id)init;	// IMP=0x0010000000bbbdc5
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000bbbc71

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

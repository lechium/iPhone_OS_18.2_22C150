//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CurrentLocationMapServiceTicket, MKMapItem, NSString;

@interface CurrentLocationWaypointRequest : NSObject
{
    CurrentLocationMapServiceTicket *_ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000052cb11
@property(readonly, nonatomic) CurrentLocationMapServiceTicket *ticket; // @synthesize ticket=_ticket;
- (void)recordRAPInformation:(id)arg1;	// IMP=0x001000000052ca15
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000052c964
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x001000000052c95c
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x001000000052c8d9
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic) _Bool hasCachedResult;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000052c7f7
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000052c297
- (void)dealloc;	// IMP=0x001000000052c1e5
- (id)init;	// IMP=0x001000000052c157
- (id)initWithCurrentLocationTicket:(id)arg1;	// IMP=0x001000000052c030

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, ParkedCar;
@protocol GEOMapServiceTicket;

@interface ParkedCarManager : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    id <GEOMapServiceTicket> _ticket;	// 16 = 0x10
    NSMutableArray *_fetchHandlers;	// 24 = 0x18
    _Bool _isUpdating;	// 32 = 0x20
    ParkedCar *_parkedCar;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x0040000000e27f9b
- (void).cxx_destruct;	// IMP=0x0020000000e2b0b1
@property(readonly, nonatomic) ParkedCar *parkedCar; // @synthesize parkedCar=_parkedCar;
- (void)_debug_showParkedCarReplacementNotification;	// IMP=0x0010000000e2b006
- (void)_debug_showParkedCarNotification;	// IMP=0x0010000000e2af8e
- (void)_debug_reloadParkedCar;	// IMP=0x0010000000e2af7c
- (void)_debug_addParkedCarAtLocation:(id)arg1;	// IMP=0x0010000000e2ac23
- (void)informCoreRoutineOfEngagementWithParkedCar:(id)arg1;	// IMP=0x0010000000e2ac1d
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1 referenceFrame:(int)arg2 forParkedCar:(id)arg3;	// IMP=0x0010000000e2a8bd
- (void)setNotes:(id)arg1 forParkedCar:(id)arg2;	// IMP=0x0010000000e2a65e
- (void)setImage:(id)arg1 forParkedCar:(id)arg2;	// IMP=0x0010000000e2a0b1
- (void)removeImageForParkedCar:(id)arg1;	// IMP=0x0010000000e29e74
- (void)removeParkedCar;	// IMP=0x0010000000e29dd9
- (void)updateParkedCar;	// IMP=0x0010000000e29dc7
- (void)_updateParkedCarMapItem;	// IMP=0x0010000000e2993b
- (void)_updateParkedCar;	// IMP=0x0010000000e29148
- (void)resolveMapItemFromVehicleEvent:(id)arg1 overrideCoordinate:(struct CLLocationCoordinate2D)arg2 referenceFrame:(int)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0010000000e28d19
- (void)setParkedCarWithMapItem:(id)arg1 overrideCoordinate:(struct CLLocationCoordinate2D)arg2 referenceFrame:(int)arg3 vehicleEvent:(id)arg4;	// IMP=0x0010000000e28805
- (void)updateParkedCarWithVehicleEvent:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 referenceFrame:(int)arg3;	// IMP=0x0010000000e284c0
- (void)fetchParkedCar:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e283f1
- (void)removeParkedCarObserver:(id)arg1;	// IMP=0x0010000000e283db
- (void)addParkedCarObserver:(id)arg1;	// IMP=0x0010000000e28371
- (void)_willResume:(id)arg1;	// IMP=0x0010000000e2835f
- (void)_authDidChange:(id)arg1;	// IMP=0x0010000000e282f2
- (void)dealloc;	// IMP=0x0010000000e28246
- (id)init;	// IMP=0x0010000000e27ff0

@end


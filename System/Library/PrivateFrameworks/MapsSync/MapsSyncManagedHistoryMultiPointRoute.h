//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedHistoryMultiPointRoute
{
}

+ (Class)wrapperClass;	// IMP=0x004000000008fb90
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000014fd00

// Remaining properties
@property(nonatomic) _Bool navigationInterrupted; // @dynamic navigationInterrupted;
@property(nonatomic, retain) NSNumber *requiredCharge; // @dynamic requiredCharge;
@property(nonatomic) short routeProgressWaypointIndex; // @dynamic routeProgressWaypointIndex;
@property(nonatomic, copy) NSData *routeRequestStorage; // @dynamic routeRequestStorage;
@property(nonatomic, copy) NSData *sharedETAData; // @dynamic sharedETAData;
@property(nonatomic) short type; // @dynamic type;
@property(nonatomic, copy) NSString *vehicleIdentifier; // @dynamic vehicleIdentifier;

@end


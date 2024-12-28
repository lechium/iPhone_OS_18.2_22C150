//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface NanoRoutePlanningResponseSnapshot : NSObject
{
    NSDate *_timestamp;	// 8 = 0x8
    NSArray *_routeIdentifiers;	// 16 = 0x10
    NSArray *_revisionIdentifiers;	// 24 = 0x18
    NSUUID *_selectedRouteIdentifier;	// 32 = 0x20
    NSArray *_selectedRideIndexes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000003d1acd
@property(copy, nonatomic) NSArray *selectedRideIndexes; // @synthesize selectedRideIndexes=_selectedRideIndexes;
@property(copy, nonatomic) NSUUID *selectedRouteIdentifier; // @synthesize selectedRouteIdentifier=_selectedRouteIdentifier;
@property(copy, nonatomic) NSArray *revisionIdentifiers; // @synthesize revisionIdentifiers=_revisionIdentifiers;
@property(copy, nonatomic) NSArray *routeIdentifiers; // @synthesize routeIdentifiers=_routeIdentifiers;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) NSString *description;
- (id)deltaFromSnapshot:(id)arg1;	// IMP=0x00100000003d13eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003d1205
- (id)init;	// IMP=0x00100000003d119f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

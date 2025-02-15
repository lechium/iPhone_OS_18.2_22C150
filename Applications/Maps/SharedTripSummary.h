//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SharedTripSummary : NSObject
{
    NSArray *_sharedTrips;	// 8 = 0x8
}

+ (id)summaryWithSharedTrips:(id)arg1;	// IMP=0x004000000078ef9e
- (void).cxx_destruct;	// IMP=0x002000000078f67a
@property(retain, nonatomic) NSArray *sharedTrips; // @synthesize sharedTrips=_sharedTrips;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (void)updateModel:(id)arg1;	// IMP=0x001000000058c265
- (id)_transportTypeStringForAnalytics;	// IMP=0x001000000078f68a
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


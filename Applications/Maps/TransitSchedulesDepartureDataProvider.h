//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItemIdentifier, NSArray, NSDate, NSMutableDictionary, NSString, NSTimeZone;
@protocol GEOTransitDeparture, GEOTransitDepartureSequence, TransitSchedulesDepartureDataProviderDelegate;

@interface TransitSchedulesDepartureDataProvider : NSObject
{
    MKMapItemIdentifier *_stationIdentifier;	// 8 = 0x8
    NSString *_stationName;	// 16 = 0x10
    unsigned long long _transitLineIdentifier;	// 24 = 0x18
    id <GEOTransitDeparture> _selectedDeparture;	// 32 = 0x20
    NSArray *_departureSequences;	// 40 = 0x28
    NSMutableDictionary *_accruedDepartures;	// 48 = 0x30
    _Bool _arePastDeparturesDroppedByService;	// 56 = 0x38
    _Bool _requestAllDirections;	// 57 = 0x39
    unsigned long long _remoteNetworkState;	// 64 = 0x40
    NSTimeZone *_timeZone;	// 72 = 0x48
    id <GEOTransitDepartureSequence> _selectedDepartureSequence;	// 80 = 0x50
    NSDate *_scheduleWindowStartDate;	// 88 = 0x58
    id <TransitSchedulesDepartureDataProviderDelegate> _delegate;	// 96 = 0x60
}

+ (id)departureSequenceContainingTripIdentifier:(unsigned long long)arg1 departureSequences:(id)arg2;	// IMP=0x0040000000b13856
+ (id)serviceTraitsForScheduleDate:(id)arg1 timeZone:(id)arg2;	// IMP=0x0010000000b11ea7
+ (double)durationForVisibleDeparturesStartingAtDate:(id)arg1 timeZone:(id)arg2;	// IMP=0x0010000000b11d76
- (void).cxx_destruct;	// IMP=0x0020000000b1455c
@property(nonatomic) __weak id <TransitSchedulesDepartureDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *scheduleWindowStartDate; // @synthesize scheduleWindowStartDate=_scheduleWindowStartDate;
@property(nonatomic) _Bool requestAllDirections; // @synthesize requestAllDirections=_requestAllDirections;
@property(readonly, nonatomic) id <GEOTransitDepartureSequence> selectedDepartureSequence; // @synthesize selectedDepartureSequence=_selectedDepartureSequence;
@property(readonly, nonatomic) NSArray *departureSequences; // @synthesize departureSequences=_departureSequences;
@property(readonly, nonatomic) id <GEOTransitDeparture> selectedDeparture; // @synthesize selectedDeparture=_selectedDeparture;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) unsigned long long remoteNetworkState; // @synthesize remoteNetworkState=_remoteNetworkState;
@property(readonly, nonatomic) unsigned long long timeDisplayStyle;
- (void)selectNextIncomingDeparture;	// IMP=0x0010000000b1444e
- (void)selectDepartureSequenceAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000b142ee
- (void)selectDepartureSequence:(id)arg1;	// IMP=0x0010000000b141dd
- (unsigned long long)indexForDepartureSequence:(id)arg1;	// IMP=0x0010000000b1401f
- (unsigned long long)indexForSelectedDepartureSequence;	// IMP=0x0010000000b14009
- (id)selectDepartureAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000b13f2e
- (unsigned long long)_indexForNextIncomingDeparture;	// IMP=0x0010000000b13d7d
- (unsigned long long)_indexForSelectedTripIdentifier;	// IMP=0x0010000000b13d02
- (unsigned long long)_indexForTripIdentifier:(unsigned long long)arg1 scheduledDepartureDate:(id)arg2;	// IMP=0x0010000000b13b54
- (id)_departureSequenceContainingTripIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000b13b27
- (_Bool)selectDepartureWithTripIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000b137c3
@property(readonly, nonatomic) NSArray *departures;
- (void)processDeparturesFromDepartureSequences:(id)arg1 animatingDifferences:(_Bool)arg2;	// IMP=0x0010000000b12c6f
- (id)filterActiveDepartureSequencesFrom:(id)arg1 referenceDate:(id)arg2;	// IMP=0x0010000000b12a33
- (id)frequencyStringForDeparture:(id)arg1;	// IMP=0x0010000000b12991
- (void)_clearDepartures;	// IMP=0x0010000000b12637
- (void)_fetchNewScheduleDataForDate:(id)arg1 tripIdentifier:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000b1219e
- (id)initWithTransitMapItem:(id)arg1 selectedDepartureSequence:(id)arg2 departureSequences:(id)arg3 timeZone:(id)arg4 initialScheduleDate:(id)arg5;	// IMP=0x0010000000b11aed

@end


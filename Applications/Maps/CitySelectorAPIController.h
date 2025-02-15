//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAllGuidesLocationsViewResult, GEOMapServiceTraits, NSArray, NSString;
@protocol GEOMapServiceGuideLocationsLookupTicket, MKMapServiceCitySelectorViewTicket;

@interface CitySelectorAPIController : NSObject
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
    CDUnknownBlockType _stateHandler;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    id <MKMapServiceCitySelectorViewTicket> _ticket;	// 32 = 0x20
    id <GEOMapServiceGuideLocationsLookupTicket> _batchTicket;	// 40 = 0x28
    GEOAllGuidesLocationsViewResult *_result;	// 48 = 0x30
    NSArray *_sections;	// 56 = 0x38
    NSArray *_guideLocations;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000003c2bcb
@property(retain, nonatomic) NSArray *guideLocations; // @synthesize guideLocations=_guideLocations;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) GEOAllGuidesLocationsViewResult *result; // @synthesize result=_result;
@property(retain, nonatomic) id <GEOMapServiceGuideLocationsLookupTicket> batchTicket; // @synthesize batchTicket=_batchTicket;
@property(retain, nonatomic) id <MKMapServiceCitySelectorViewTicket> ticket; // @synthesize ticket=_ticket;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType stateHandler; // @synthesize stateHandler=_stateHandler;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (void)fetchGuidesWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003c2417
- (void)cancelFetchingCitySelectorView;	// IMP=0x00100000003c23da
- (void)fetchCitySelectorView:(CDUnknownBlockType)arg1;	// IMP=0x00100000003c1f42
- (unsigned int)batchSize;	// IMP=0x00100000003c1f37
- (id)guideLocationsFromLastBatch;	// IMP=0x00100000003c1eef
- (_Bool)isWorldwideSection:(id)arg1;	// IMP=0x00100000003c1eda
- (id)titleForSection:(id)arg1;	// IMP=0x00100000003c1ec5
- (id)citySelectorSections;	// IMP=0x00100000003c1e7d
- (id)citySelectorResult;	// IMP=0x00100000003c1e6b
@property(readonly, nonatomic) long long currentState;
- (id)initWithStateChangeHandler:(CDUnknownBlockType)arg1 usingTraits:(id)arg2;	// IMP=0x00100000003c1db2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


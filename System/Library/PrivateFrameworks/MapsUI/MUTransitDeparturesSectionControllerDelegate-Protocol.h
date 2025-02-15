//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class GEOAttribution, GEOMapServiceTraits, MKMapItem, MUPresentationOptions, MUTransitDeparturesSectionController, NSArray;
@protocol GEOTransitConnectionInfo, GEOTransitDepartureSequence, MKTransitLineMarker;

@protocol MUTransitDeparturesSectionControllerDelegate <NSObject>
- (GEOMapServiceTraits *)traitsForTransitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1;
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 didSelectAttribution:(GEOAttribution *)arg2;
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 showIncidents:(NSArray *)arg2;
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2 usingPresentationOptions:(MUPresentationOptions *)arg3 completion:(void (^)(void))arg4;
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 usingMapItem:(MKMapItem *)arg3;
- (_Bool)transitDeparturesSectionController:(MUTransitDeparturesSectionController *)arg1 canSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 usingMapItem:(MKMapItem *)arg3;
@end


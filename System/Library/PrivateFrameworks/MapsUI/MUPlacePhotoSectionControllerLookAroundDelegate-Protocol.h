//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MKLookAroundContainerView, MKLookAroundView, MKMapItem, MUPlacePhotoSectionController;

@protocol MUPlacePhotoSectionControllerLookAroundDelegate <NSObject>
- (_Bool)shouldMoveLookAroundStorefrontViewForPlacePhotoSectionController:(MUPlacePhotoSectionController *)arg1;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 enterLookAroundForMapItem:(MKMapItem *)arg2 lookAroundView:(MKLookAroundView *)arg3;
- (MKLookAroundContainerView *)lookAroundContainerForPlacePhotoSectionController:(MUPlacePhotoSectionController *)arg1;
@end


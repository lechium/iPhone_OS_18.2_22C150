//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MKMapItemPhoto, MUPlacePhotoGalleryViewController, MUPlacePhotoSectionController, MUPresentationOptions, NSString, UIViewController, _MKMapItemPhotosAttribution;
@protocol GEOMapItemPhoto;

@protocol MUPlacePhotoSectionControllerDelegate <NSObject>

@optional
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 requestsSceneActivationForPhotoGalleryViewController:(MUPlacePhotoGalleryViewController *)arg2;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 requestsAddPhotosToMapsWithEntryPoint:(long long)arg2 options:(MUPresentationOptions *)arg3;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 requestsToOpenPhotoAttribution:(_MKMapItemPhotosAttribution *)arg2 presentationOptions:(MUPresentationOptions *)arg3;
- (void)placePhotoSectionControllerRequestsToOpenThumbnailGallery:(MUPlacePhotoSectionController *)arg1 withStartingIndex:(unsigned long long)arg2;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 didSelectPhotoCategoryAtIndex:(unsigned long long)arg2;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 photoGalleryDidScroll:(MUPlacePhotoGalleryViewController *)arg2;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 didSelectPhotoToReport:(id <GEOMapItemPhoto>)arg2 withPhotoGalleryViewController:(MUPlacePhotoGalleryViewController *)arg3;
- (void)placePhotoSectionControllerDidCloseFullscreenPhotos:(MUPlacePhotoSectionController *)arg1;
- (void)placePhotoSectionControllerDidOpenFullscreenPhotos:(MUPlacePhotoSectionController *)arg1;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 didSelectViewPhoto:(MKMapItemPhoto *)arg2 withID:(NSString *)arg3 presentingViewController:(UIViewController *)arg4;
@end

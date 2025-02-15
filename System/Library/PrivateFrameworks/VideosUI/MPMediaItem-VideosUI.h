//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPMediaItem.h>

@class HSHomeSharingLibrary, NSDate, NSNumber, NSObject, NSString, NSURL, VUIContentRating, VUIMediaEntityType, VUIMediaItemCredits;
@protocol VUIMediaEntityIdentifier;

@interface MPMediaItem (VideosUI)
+ (_Bool)_vui_isNetworkPlayableWithPropertyValues:(id)arg1;	// IMP=0x002000000017c6e8
+ (_Bool)_vui_isLocalWithPropertyValues:(id)arg1;	// IMP=0x002000000017c620
+ (id)vui_mediaItemForStoreIdentifier:(id)arg1;	// IMP=0x002000000017c418
+ (id)vui_mediaItemForStoreIdentifierString:(id)arg1;	// IMP=0x002000000017c368
+ (id)vui_mediaItemForPersistentIdentifier:(id)arg1;	// IMP=0x002000000017c250
+ (unsigned long long)vui_VUIMediaEntityAudioCapabilityFromMPMediaItemAudioCapability:(long long)arg1;	// IMP=0x002000000017c244
+ (long long)vui_MPMediaItemAudioCapabilityFromVUIMediaEntityAudioCapability:(unsigned long long)arg1;	// IMP=0x002000000017c238
+ (unsigned long long)vui_VUIMediaEntityColorCapabilityFromMPMediaItemColorCapability:(long long)arg1;	// IMP=0x002000000017c22c
+ (long long)vui_MPMediaItemColorCapabilityFromVUIMediaEntityColorCapability:(unsigned long long)arg1;	// IMP=0x002000000017c220
+ (unsigned long long)vui_VUIMediaEntityResolutionFromMPMediaItemVideoQuality:(long long)arg1;	// IMP=0x002000000017c20c
+ (long long)vui_MPMediaItemVideoQualityFromVUIMediaEntityResolution:(unsigned long long)arg1;	// IMP=0x002000000017c1f8
- (id)_vui_imageIdentifierWithImageType:(unsigned long long)arg1;	// IMP=0x001000000017c7d8
- (id)vui_imageLoadParamsWithImageType:(unsigned long long)arg1;	// IMP=0x001000000017c596
- (id)vui_artworkCatalogWithImageType:(unsigned long long)arg1;	// IMP=0x001000000017c563
- (id)vui_imageIdentifierWithImageType:(unsigned long long)arg1;	// IMP=0x001000000017c530
@property(readonly, nonatomic) HSHomeSharingLibrary *vui_homeSharingLibrary;
@property(readonly, nonatomic) _Bool vui_isHomeSharingMediaItem;
@property(readonly, nonatomic) NSString *vui_adamIDString;
- (id)vui_assetTypeIgnoringLocalAsset:(_Bool)arg1;	// IMP=0x001000000017be8c
@property(readonly, nonatomic) NSNumber *vui_assetType;
@property(readonly, nonatomic) NSDate *vui_rentalExpirationDate;
@property(readonly, nonatomic) NSDate *vui_rentalPlaybackEndDate;
@property(readonly, nonatomic) NSDate *vui_rentalEndDate;
@property(readonly, nonatomic) NSNumber *vui_playedState;
@property(readonly, nonatomic) NSURL *vui_extrasURL;
- (_Bool)vui_isDownloadedOrDownloadingOrEnqueued;	// IMP=0x001000000017b539
- (id)vui_isLocalCheckingSidebandLibrary:(_Bool)arg1;	// IMP=0x001000000017b1f0
@property(readonly, nonatomic) NSNumber *vui_isPlayable;
@property(readonly, nonatomic) VUIContentRating *vui_contentRating;
@property(readonly, nonatomic) VUIMediaItemCredits *vui_credits;
@property(readonly, nonatomic) NSString *vui_studio;
@property(readonly, nonatomic) NSObject<VUIMediaEntityIdentifier> *vui_seasonIdentifier;
@property(readonly, nonatomic) NSObject<VUIMediaEntityIdentifier> *vui_showIdentifier;
@property(readonly, nonatomic) NSString *vui_previewFrameImageIdentifier;
@property(readonly, nonatomic) NSString *vui_coverArtImageIdentifier;
@property(readonly, nonatomic) NSNumber *vui_HLSAudioCapability;
@property(readonly, nonatomic) NSNumber *vui_HLSColorCapability;
@property(readonly, nonatomic) NSNumber *vui_HLSResolution;
@property(readonly, nonatomic) NSNumber *vui_audioCapability;
@property(readonly, nonatomic) NSNumber *vui_colorCapability;
@property(readonly, nonatomic) NSNumber *vui_resolution;
@property(readonly, nonatomic) VUIMediaEntityType *vui_mediaEntityType;
@end


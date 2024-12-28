//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMapItem.h>

@class NSAttributedString, NSString, UIImage;

@interface MKMapItem (MUOverallRatingPlatterViewModel)
@property(readonly, nonatomic) NSAttributedString *attributionText;
@property(readonly, nonatomic) unsigned long long numberOfVotes;
@property(readonly, nonatomic) double rating;
- (int)_mapsui_associatedHikingItemType;	// IMP=0x00200000000b1eca
- (id)_mapsui_trailSelectionInfoForMap;	// IMP=0x00200000000b1b6f
- (id)thumbnailWithSize:(struct CGSize)arg1 annotationView:(id)arg2;	// IMP=0x00200000000b85d3
- (id)sharingURL;	// IMP=0x00200000000b851c
@property(readonly, nonatomic) UIImage *artworkImage;
@property(readonly, nonatomic) NSString *stationCategory;
@property(readonly, nonatomic) NSString *stationTitle;
@property(readonly, nonatomic) unsigned long long expectedNumberOfFooterLines;
- (id)footerAttributedStringForFont:(id)arg1;	// IMP=0x002000000014a568
- (id)subtitleAttributedStringForFont:(id)arg1;	// IMP=0x002000000014a560
- (void)fetchBadgeIconWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000014a4f7
- (void)fetchFallbackIconWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000014a48b
- (void)fetchImageTilewWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000149ea7
- (id)tileSubtitle;	// IMP=0x0020000000149c32
@property(readonly, nonatomic) NSString *tileName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOGuideLocation, GEOPlaceCollection, MKPlaceCollectionViewModel, NSAttributedString, NSString, UIColor, UIImage;

@interface GuidesHomeHeaderViewModel : NSObject
{
    UIColor *_backgroundColor;	// 8 = 0x8
    NSAttributedString *_collectionTitle;	// 16 = 0x10
    NSAttributedString *_collectionLongTitle;	// 24 = 0x18
    NSString *_guideLocationTitle;	// 32 = 0x20
    GEOGuideLocation *_guideLocation;	// 40 = 0x28
    GEOPlaceCollection *_featuredGuide;	// 48 = 0x30
    NSAttributedString *_sectionTitle;	// 56 = 0x38
    MKPlaceCollectionViewModel *_viewModel;	// 64 = 0x40
    UIImage *_publisherLogoImage;	// 72 = 0x48
    UIImage *_collectionImage;	// 80 = 0x50
    struct CGSize _photoSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000e4916f
@property(retain, nonatomic) UIImage *collectionImage; // @synthesize collectionImage=_collectionImage;
@property(retain) UIImage *publisherLogoImage; // @synthesize publisherLogoImage=_publisherLogoImage;
@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
@property(retain, nonatomic) MKPlaceCollectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSAttributedString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, nonatomic) GEOPlaceCollection *featuredGuide; // @synthesize featuredGuide=_featuredGuide;
@property(readonly, nonatomic) GEOGuideLocation *guideLocation; // @synthesize guideLocation=_guideLocation;
- (void);	// IMP=0x0010000000e490b6
@property(retain, nonatomic) NSAttributedString *collectionLongTitle; // @synthesize collectionLongTitle=_collectionLongTitle;
@property(retain, nonatomic) NSAttributedString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)publisherLogoImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e4901a
@property(retain, nonatomic) NSString *guideLocationTitle; // @synthesize guideLocationTitle=_guideLocationTitle;
- (id)initWithGuideLocation:(id)arg1 featuredGuide:(id)arg2 sectionTitle:(id)arg3;	// IMP=0x0010000000e48ae9
- (void)collectionImageForSize:(struct CGSize)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e491ef

@end


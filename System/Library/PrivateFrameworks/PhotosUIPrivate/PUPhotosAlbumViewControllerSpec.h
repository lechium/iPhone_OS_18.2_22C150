//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PULegacyViewControllerSpec.h"

__attribute__((visibility("hidden")))
@interface PUPhotosAlbumViewControllerSpec : PULegacyViewControllerSpec
{
    _Bool _shouldUseAspectItems;	// 8 = 0x8
    long long _fullMomentsSectionHeaderStyle;	// 16 = 0x10
}

+ (id)padSpec;	// IMP=0x00600000004dbf59
+ (id)phoneSpec;	// IMP=0x00600000004dbf40
@property(readonly, nonatomic) long long fullMomentsSectionHeaderStyle; // @synthesize fullMomentsSectionHeaderStyle=_fullMomentsSectionHeaderStyle;
@property(readonly, nonatomic) _Bool shouldUseAspectItems; // @synthesize shouldUseAspectItems=_shouldUseAspectItems;
@property(readonly, nonatomic) struct UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset;
- (void)configureCollectionViewGridLayout:(id)arg1;	// IMP=0x00000000004dbe2c
@property(readonly, nonatomic) double contentCornerRadius;
- (long long)cellFillMode;	// IMP=0x00000000004dbe18
- (id)gridSpec;	// IMP=0x00000000004dbe10

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RelatedSearchSuggestionOutlineCellModel, UIStackView;

@interface RelatedSearchSuggestionOutlineCell
{
    UIStackView *_suggestionStackView;	// 8 = 0x8
    RelatedSearchSuggestionOutlineCellModel *_cellModel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000e552b1
@property(retain, nonatomic) RelatedSearchSuggestionOutlineCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (id)_labelFont;	// IMP=0x0010000000e55287
- (void)_componentButtonTapped:(id)arg1;	// IMP=0x0010000000e55161
- (id)_createMapsThemeLabelWithTitle:(id)arg1;	// IMP=0x0010000000e55032
- (id)_createMapsThemeButtonWithTitle:(id)arg1;	// IMP=0x0010000000e54ea7
- (void)_updateFromModel;	// IMP=0x0010000000e54b71
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000e54662

@end

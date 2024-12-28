//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, SearchResultOutlineCellModel, SearchResultTableViewCell;

@interface SearchResultOutlineCell
{
    SearchResultTableViewCell *_tableViewCell;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
    SearchResultOutlineCellModel *_cellModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000ec13e5
@property(readonly, nonatomic) SearchResultOutlineCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void)_updateHeightConstraint;	// IMP=0x0010000000ec1315
- (void)_updateDisclosureConfiguration;	// IMP=0x0010000000ec113b
- (void)_hoverGestureRecognizerStateDidChange:(id)arg1;	// IMP=0x0010000000ec1129
- (void)_updateFromModel;	// IMP=0x0010000000ec0efa
- (void)setCellModel:(id)arg1;	// IMP=0x0010000000ec0e97
- (void)setHovering:(_Bool)arg1;	// IMP=0x0010000000ec0e56
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000ec0d7c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000ec0cb3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000ec0784

@end

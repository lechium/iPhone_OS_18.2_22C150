//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI22CardCollectionViewCell
{
    MISSING_TYPE *cardView;	// 8 = 0x8
    MISSING_TYPE *isLockupSelected;	// 16 = 0x10
    MISSING_TYPE *isLockupSelectionHidden;	// 17 = 0x11
    MISSING_TYPE *isLockupOutlined;	// 18 = 0x12
    MISSING_TYPE *cardViewLayout;	// 24 = 0x18
    MISSING_TYPE *imageViewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000097bc1a
- (void)dragStateDidChange:(long long)arg1;	// IMP=0x000000000097c5af
- (void)vui_cellDidSelect;	// IMP=0x000000000097c521
- (void)vui_cellDidEndDisplaying;	// IMP=0x000000000097c4fc
- (void)vui_cellWillBeDisplayed;	// IMP=0x000000000097c3ba
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x000000000097c246
- (void)vui_prepareForReuse;	// IMP=0x000000000097bcc5
- (void)dealloc;	// IMP=0x000000000097bbfd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000097bbcd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000097bb02
- (void)imageViewHandler:(id)arg1;	// IMP=0x0000000000980a97
- (id)zoomSourceView;	// IMP=0x000000000098104d

@end

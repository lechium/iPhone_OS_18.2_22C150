//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI25UpdateCoalescingTableView : UITableView
{
    MISSING_TYPE *isSidebarStyle;	// 8 = 0x8
    MISSING_TYPE *cachedIdealSize;	// 16 = 0x10
    MISSING_TYPE *rowSpacing;	// 40 = 0x28
    MISSING_TYPE *safeAreaTransitionState;	// 56 = 0x38
    MISSING_TYPE *visibleCellsUpdate;	// 72 = 0x48
    MISSING_TYPE *ignoreGraphUpdates;	// 88 = 0x58
    MISSING_TYPE *pendingGraphUpdate;	// 92 = 0x5c
    MISSING_TYPE *pendingScrollTarget;	// 0 = 0x0
    MISSING_TYPE *previousHorizontalMargin;	// 0 = 0x0
    MISSING_TYPE *_lastUpdateSeed;	// 0 = 0x0
    MISSING_TYPE *bridgedState;	// 1919907685 = 0x726f7765
    MISSING_TYPE *shouldDetermineInsetStyle;	// 1700029810 = 0x65546572
    MISSING_TYPE *needsUpdateAlignmentInsets;	// 0 = 0x0
    MISSING_TYPE *lastConfigurationHash;	// 0 = 0x0
}

+ (_Bool)_isInternalTableView;	// IMP=0x0060000000f4dfd0
+ (_Bool)_isFromSwiftUI;	// IMP=0x0060000000f4dca0
- (void).cxx_destruct;	// IMP=0x0000000000f4fab0
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f4f980
- (void)layoutSubviews;	// IMP=0x0000000000f4f550
- (double)_rowSpacing;	// IMP=0x0000000000f4e900
- (double)_alignedContentMarginGivenMargin:(double)arg1;	// IMP=0x0000000000f4e8e0
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000f4e8b0
- (void)layoutMarginsDidChange;	// IMP=0x0000000000f4e810
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000f4e1e0
@property(nonatomic) struct CGRect bounds;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000f4dfb0
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000000f4df80
- (void)_setSectionContentInsetFollowsLayoutMargins:(_Bool)arg1;	// IMP=0x0000000000f4dcf0
- (_Bool)_sectionContentInsetFollowsLayoutMargins;	// IMP=0x0000000000f4dcb0

// Remaining properties
@property(nonatomic) _Bool sectionContentInsetFollowsLayoutMargins;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCellLayoutManager.h>

@interface CenteringCellLayoutManager : UITableViewCellLayoutManager
{
    double _maximumCellContentWidth;	// 8 = 0x8
    struct UIEdgeInsets _minimumHorizontalMargins;	// 16 = 0x10
}

+ (id)layoutManagerForTableViewCellStyle:(long long)arg1;	// IMP=0x004000000071d705
@property(nonatomic) struct UIEdgeInsets minimumHorizontalMargins; // @synthesize minimumHorizontalMargins=_minimumHorizontalMargins;
@property(nonatomic) double maximumCellContentWidth; // @synthesize maximumCellContentWidth=_maximumCellContentWidth;
- (struct UIEdgeInsets)_marginForRowWith:(double)arg1;	// IMP=0x001000000071e02d
- (struct CGRect)_offsetAccessoryViewFrame:(struct CGRect)arg1 forCell:(id)arg2;	// IMP=0x001000000071de96
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;	// IMP=0x001000000071dde8
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;	// IMP=0x001000000071dd3a
- (struct CGRect)_adjustedContentViewFrame:(struct CGRect)arg1 cell:(id)arg2 rowWidth:(double)arg3 accessoryViewFrame:(struct CGRect)arg4;	// IMP=0x001000000071db21
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;	// IMP=0x001000000071d9ef
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;	// IMP=0x001000000071d8bd
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 rowWidth:(double)arg3;	// IMP=0x001000000071d797
- (id)initWithTableViewCellStyle:(long long)arg1;	// IMP=0x001000000071d734

@end

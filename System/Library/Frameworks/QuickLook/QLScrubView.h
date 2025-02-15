//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSString, QLPageNumberView, QLThumbnailView;
@protocol QLScrubViewDataSource, QLScrubViewDelegate;

__attribute__((visibility("hidden")))
@interface QLScrubView : UIView
{
    _Bool _needsThumbLayout;	// 8 = 0x8
    double _thumbOrigin;	// 16 = 0x10
    double _thumbEnd;	// 24 = 0x18
    double _thumbHeight;	// 32 = 0x20
    long long _pageCount;	// 40 = 0x28
    long long _selectedPage;	// 48 = 0x30
    NSMutableDictionary *_thumbViews;	// 56 = 0x38
    NSMutableArray *_visibleThumbIndexes;	// 64 = 0x40
    QLThumbnailView *_selectedThumbnailView;	// 72 = 0x48
    QLPageNumberView *_pageNumberLabel;	// 80 = 0x50
    id <QLScrubViewDataSource> _dataSource;	// 88 = 0x58
    id <QLScrubViewDelegate> _delegate;	// 96 = 0x60
    double _topOffset;	// 104 = 0x68
    double _bottomOffset;	// 112 = 0x70
}

+ (double)defaultWidth;	// IMP=0x0010000000028ef4
- (void).cxx_destruct;	// IMP=0x000000000002a3b5
@property(nonatomic) double bottomOffset; // @synthesize bottomOffset=_bottomOffset;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property __weak id <QLScrubViewDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <QLScrubViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateSelectedThumbnailView;	// IMP=0x0000000000029e86
- (void)layoutSubviews;	// IMP=0x0000000000029402
- (void)_hidePageLabel;	// IMP=0x00000000000293e5
- (void)_updatePageLabelPosition;	// IMP=0x0000000000029233
- (void)_showPageLabel;	// IMP=0x00000000000291bc
- (struct CGRect)_thumbnailFrameForPageAtIndex:(long long)arg1;	// IMP=0x0000000000028f4d
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000028f02
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000028ebb
- (void)longTapReceived:(id)arg1;	// IMP=0x0000000000028e18
- (void)tapReceived:(id)arg1;	// IMP=0x0000000000028de4
- (void)panReceived:(id)arg1;	// IMP=0x0000000000028d41
- (void)_handleSwipAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000028c64
- (void)_notifyPageChanged;	// IMP=0x0000000000028bcf
- (void)selectPageNumber:(long long)arg1;	// IMP=0x0000000000028b9e
- (void)reloadThumbnails;	// IMP=0x0000000000028b26
- (void)_removeThumbviews;	// IMP=0x0000000000028976
- (id)init;	// IMP=0x00000000000285d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


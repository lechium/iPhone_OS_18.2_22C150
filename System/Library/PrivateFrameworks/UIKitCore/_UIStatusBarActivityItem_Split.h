//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarActivityIndicator, _UIStatusBarActivityView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityItem_Split
{
    _UIStatusBarActivityView *_activityView;	// 16 = 0x10
    _UIStatusBarActivityIndicator *_syncStartView;	// 24 = 0x18
}

+ (id)syncStartDisplayIdentifier;	// IMP=0x0040000001436e01
+ (id)pillDisplayIdentifier;	// IMP=0x0040000001436de8
- (void).cxx_destruct;	// IMP=0x0000000001437608
@property(retain, nonatomic) _UIStatusBarActivityIndicator *syncStartView; // @synthesize syncStartView=_syncStartView;
@property(retain, nonatomic) _UIStatusBarActivityView *activityView; // @synthesize activityView=_activityView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000001437493
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x000000000143733d
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000001437060
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000001436f78
- (void)_create_syncStartView;	// IMP=0x0000000001436efd
- (void)_create_activityView;	// IMP=0x0000000001436e6c
- (struct UIEdgeInsets)activityIndicatorAlignmentRectInsets;	// IMP=0x0000000001436e1a

@end


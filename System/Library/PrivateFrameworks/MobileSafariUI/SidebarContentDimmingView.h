//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UITapGestureRecognizer;
@protocol SidebarContentDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface SidebarContentDimmingView : UIView
{
    UITapGestureRecognizer *_dismissRecognizer;	// 8 = 0x8
    UIView *_dimmingView;	// 16 = 0x10
    UIView *_passthroughView;	// 24 = 0x18
    id <SidebarContentDimmingViewDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e0281
@property(nonatomic) __weak id <SidebarContentDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *passthroughView; // @synthesize passthroughView=_passthroughView;
- (void)_dismissRecognized:(id)arg1;	// IMP=0x00000000000e01f3
- (void)setTransparent:(_Bool)arg1;	// IMP=0x00000000000e01c7
- (void)setDimmedContentFrame:(struct CGRect)arg1;	// IMP=0x00000000000e01aa
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000e009f
- (id)initWithFrame:(struct CGRect)arg1 dimmedContentFrame:(struct CGRect)arg2;	// IMP=0x00000000000dff29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


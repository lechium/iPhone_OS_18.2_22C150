//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, UILongPressGestureRecognizer;
@protocol _UIPreviewActionSheetViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetView : UIView
{
    id <_UIPreviewActionSheetViewDelegate> _delegate;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_actions;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UILongPressGestureRecognizer *_captureTouchesRecognizer;	// 40 = 0x28
    struct UIEdgeInsets _contentInsets;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001233350
@property(retain, nonatomic) UILongPressGestureRecognizer *captureTouchesRecognizer; // @synthesize captureTouchesRecognizer=_captureTouchesRecognizer;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <_UIPreviewActionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_performActionForPreviewAction:(id)arg1 interfaceAction:(id)arg2;	// IMP=0x0000000001233184
- (void)_setupViewHierarchy;	// IMP=0x000000000123265d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000123262e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000012325e6
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 items:(id)arg3 contentInsets:(struct UIEdgeInsets)arg4;	// IMP=0x0000000001232506

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


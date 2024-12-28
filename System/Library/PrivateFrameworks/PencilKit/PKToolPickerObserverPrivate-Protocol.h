//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKToolPickerObserver-Protocol.h>

@class NSItemProvider, PKToolPicker, UIColor, UIView;

@protocol PKToolPickerObserverPrivate <PKToolPickerObserver>

@optional
- (_Bool)_supportsCanvasElements:(PKToolPicker *)arg1;
- (void)_toolPickerDidInvokeInsertSticker:(PKToolPicker *)arg1 fromItemProvider:(NSItemProvider *)arg2;
- (void)_toolPickerDidInvokeAddTextBox:(PKToolPicker *)arg1;
- (void)_toolPickerDidInvokeDoneAction:(PKToolPicker *)arg1;
- (void)_toolPicker:(PKToolPicker *)arg1 startEditingOpacityWithAccessoryView:(UIView *)arg2;
- (void)_toolPickerVisibilityDidChange:(PKToolPicker *)arg1 isAnimationFinished:(_Bool)arg2;
- (void)_toolPickerDidChangeScaleFactor:(PKToolPicker *)arg1;
- (void)_toolPickerDidChangePosition:(PKToolPicker *)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
- (void)_toolPickerDidChangePosition:(PKToolPicker *)arg1;
- (void)_toolPicker:(PKToolPicker *)arg1 didChangeColor:(UIColor *)arg2;
@end

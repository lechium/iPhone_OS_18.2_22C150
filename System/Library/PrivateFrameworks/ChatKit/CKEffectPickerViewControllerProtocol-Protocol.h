//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol CKEffectPickerViewControllerDelegate;

@protocol CKEffectPickerViewControllerProtocol
@property(nonatomic) _Bool isInlineReply;
@property(retain, nonatomic) UIView *effectPreviewOverlayView;
@property(nonatomic) __weak id <CKEffectPickerViewControllerDelegate> delegate;
- (void)setShowingInStandAloneWindow:(_Bool)arg1;
- (void)updateColor:(BOOL)arg1;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)handleTouchMoved:(struct CGPoint)arg1;
- (void)handleTouchUp:(struct CGPoint)arg1;
- (void)presentPicker;
- (void)updateHintTransition:(double)arg1;
- (void)dismissViewControllerKeepingSideMount:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

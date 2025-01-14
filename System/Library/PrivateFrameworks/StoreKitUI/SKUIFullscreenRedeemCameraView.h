//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, SKUIRedeemTextField, UIImage, _UIBackdropView;
@protocol SKUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIFullscreenRedeemCameraView : UIView
{
    id <SKUIRedeemCameraViewDelegate> _delegate;	// 8 = 0x8
    UIView *_overlay;	// 16 = 0x10
    UIView *_redeemerView;	// 24 = 0x18
    SKUIRedeemTextField *_textField;	// 32 = 0x20
    _UIBackdropView *_textFieldSafeAreaBackdrop;	// 40 = 0x28
    struct CGRect _keyboardRect;	// 48 = 0x30
    _Bool _enabled;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000038a7ef
@property(nonatomic) __weak id <SKUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_resumeRedeemer;	// IMP=0x000000000038a786
- (void)_pauseRedeemer;	// IMP=0x000000000038a74a
- (id)_newTextFieldWithClientContext:(id)arg1;	// IMP=0x000000000038a4c0
- (void)_hideKeyboard;	// IMP=0x000000000038a4a3
- (void)_tapGestureAction:(id)arg1;	// IMP=0x000000000038a491
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000038a388
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000038a2f8
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x000000000038a1ab
- (void)textFieldTextDidChange:(id)arg1;	// IMP=0x000000000038a135
- (void)keyboardDidHide:(id)arg1;	// IMP=0x000000000038a111
- (void)keyboardWillHide:(id)arg1;	// IMP=0x0000000000389d8b
- (void)keyboardDidShow:(id)arg1;	// IMP=0x0000000000389d85
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0000000000389a37
- (void)layoutSubviews;	// IMP=0x0000000000389772
- (void)start;	// IMP=0x00000000003896d8
@property(nonatomic) _Bool enabled;
- (void)showKeyboard;	// IMP=0x00000000003895c9
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;	// IMP=0x0000000000389411
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000003890e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


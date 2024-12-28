//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAShapeLayer, CNPhotoPickerHeaderViewTextField, CNPhotoPickerProviderItem, CNVisualIdentity, CNVisualIdentityAvatarViewController, NSArray, NSString, UIButton, UIGestureRecognizer;
@protocol CNPhotoPickerHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerHeaderView : UIView
{
    id <CNPhotoPickerHeaderViewDelegate> _delegate;	// 8 = 0x8
    CNPhotoPickerProviderItem *_placeholderProviderItem;	// 16 = 0x10
    CNVisualIdentity *_visualIdentity;	// 24 = 0x18
    NSArray *_subviewsConstraints;	// 32 = 0x20
    CNVisualIdentityAvatarViewController *_avatarViewController;	// 40 = 0x28
    UIButton *_clearAvatarImageButton;	// 48 = 0x30
    UIView *_clearAvatarImageButtonBackground;	// 56 = 0x38
    CAShapeLayer *_clearAvatarImageButtonClippingLayer;	// 64 = 0x40
    CNPhotoPickerHeaderViewTextField *_identityNameTextField;	// 72 = 0x48
    UIButton *_clearIdentityNameButton;	// 80 = 0x50
    UIGestureRecognizer *_tapGestureRecognizer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000345190
@property(retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIButton *clearIdentityNameButton; // @synthesize clearIdentityNameButton=_clearIdentityNameButton;
@property(retain, nonatomic) CNPhotoPickerHeaderViewTextField *identityNameTextField; // @synthesize identityNameTextField=_identityNameTextField;
@property(retain, nonatomic) CAShapeLayer *clearAvatarImageButtonClippingLayer; // @synthesize clearAvatarImageButtonClippingLayer=_clearAvatarImageButtonClippingLayer;
@property(retain, nonatomic) UIView *clearAvatarImageButtonBackground; // @synthesize clearAvatarImageButtonBackground=_clearAvatarImageButtonBackground;
@property(retain, nonatomic) UIButton *clearAvatarImageButton; // @synthesize clearAvatarImageButton=_clearAvatarImageButton;
@property(retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain, nonatomic) NSArray *subviewsConstraints; // @synthesize subviewsConstraints=_subviewsConstraints;
@property(retain, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) CNPhotoPickerProviderItem *placeholderProviderItem; // @synthesize placeholderProviderItem=_placeholderProviderItem;
@property(nonatomic) __weak id <CNPhotoPickerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000344f93
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x0000000000344e5d
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x0000000000344c7f
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x0000000000344b72
- (void)updateIdentityNameTextFieldPlaceholderWithText:(id)arg1;	// IMP=0x000000000034490f
- (void)didTapClearIdentityNameButton;	// IMP=0x000000000034482b
- (void)didTapHeaderView;	// IMP=0x00000000003447ee
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000000034475a
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000344742
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000344502
- (void)didTapClearAvatarImageButton;	// IMP=0x00000000003444b6
- (void)setupClearAvatarImageButton;	// IMP=0x000000000034434b
- (void)setClearAvatarImageButtonHidden:(_Bool)arg1;	// IMP=0x00000000003442f7
- (void)updateIdentityNameTextFieldWithIdentity:(id)arg1;	// IMP=0x000000000034422b
- (void)updateImageViewWithIdentity:(id)arg1;	// IMP=0x0000000000344146
- (struct CGSize)sizeOfPrimaryAvatar;	// IMP=0x0000000000344086
- (void)updatePhotoViewWithUpdatedIdentity:(id)arg1;	// IMP=0x0000000000343fd6
- (void)didMoveToWindow;	// IMP=0x0000000000343f3e
- (void)updateConstraints;	// IMP=0x000000000034386e
- (void)setupIdentityNameClearButtonIfNecessary;	// IMP=0x00000000003435e2
- (void)updateIdentityNameTextFieldMaxWidth;	// IMP=0x000000000034349b
- (void)setupIdentityNameTextFieldAndClearButton;	// IMP=0x0000000000343308
- (void)setupHeaderViewWithPhotoView:(id)arg1;	// IMP=0x00000000003431dd
- (_Bool)resignFirstResponder;	// IMP=0x000000000034316f
- (void)setupDragAndDrop;	// IMP=0x0000000000343119
- (void)layoutSubviews;	// IMP=0x00000000003430d8
- (id)initWithVisualIdentity:(id)arg1 avatarViewController:(id)arg2;	// IMP=0x0000000000342f8f
- (id)initWithVisualIdentity:(id)arg1;	// IMP=0x0000000000342f17
- (id)initWithContact:(id)arg1;	// IMP=0x0000000000342e99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

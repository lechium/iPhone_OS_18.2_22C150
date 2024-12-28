//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class CNAvatarView, CNMutableContact, CNPhotoPickerViewController, NSArray, NSString, PRLikeness, UIButton, UIDropInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNContactPhotoViewDelegate, CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPhotoView : UIControl
{
    _Bool _editing;	// 8 = 0x8
    _Bool _showEditingLabel;	// 9 = 0x9
    _Bool _modified;	// 10 = 0xa
    _Bool _shouldAllowTakePhotoAction;	// 11 = 0xb
    _Bool _prohibitsPersonaFetch;	// 12 = 0xc
    _Bool _isAnimatingBounce;	// 13 = 0xd
    _Bool _acceptsImageDrop;	// 14 = 0xe
    NSArray *_contacts;	// 16 = 0x10
    double _labelAlpha;	// 24 = 0x18
    CNAvatarView *_avatarView;	// 32 = 0x20
    id <CNPresenterDelegate> _presenterDelegate;	// 40 = 0x28
    id <CNContactPhotoViewDelegate> _delegate;	// 48 = 0x30
    CNMutableContact *_pendingEditContact;	// 56 = 0x38
    PRLikeness *_originalLikeness;	// 64 = 0x40
    PRLikeness *_currentLikeness;	// 72 = 0x48
    UIButton *_editPhotoButton;	// 80 = 0x50
    NSArray *_variableConstraints;	// 88 = 0x58
    UITapGestureRecognizer *_tapGestureRecognizer;	// 96 = 0x60
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 104 = 0x68
    UIDropInteraction *_dropInteraction;	// 112 = 0x70
    CNPhotoPickerViewController *_photoPicker;	// 120 = 0x78
}

+ (id)supportedPasteboardTypes;	// IMP=0x0010000000182119
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0010000000182111
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;	// IMP=0x0010000000181fe4
+ (id)descriptorForRequiredKeys;	// IMP=0x0010000000181fcd
+ (struct CGSize)defaultSize;	// IMP=0x0010000000181fbc
- (void).cxx_destruct;	// IMP=0x000000000018193b
@property(retain, nonatomic) CNPhotoPickerViewController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(nonatomic) _Bool acceptsImageDrop; // @synthesize acceptsImageDrop=_acceptsImageDrop;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *variableConstraints; // @synthesize variableConstraints=_variableConstraints;
@property(nonatomic) _Bool isAnimatingBounce; // @synthesize isAnimatingBounce=_isAnimatingBounce;
@property(retain, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
@property(nonatomic) _Bool prohibitsPersonaFetch; // @synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch;
@property(retain, nonatomic) PRLikeness *currentLikeness; // @synthesize currentLikeness=_currentLikeness;
@property(retain, nonatomic) PRLikeness *originalLikeness; // @synthesize originalLikeness=_originalLikeness;
@property(retain, nonatomic) CNMutableContact *pendingEditContact; // @synthesize pendingEditContact=_pendingEditContact;
@property(nonatomic) __weak id <CNContactPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CNPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) _Bool shouldAllowTakePhotoAction; // @synthesize shouldAllowTakePhotoAction=_shouldAllowTakePhotoAction;
@property(nonatomic) _Bool modified; // @synthesize modified=_modified;
@property(nonatomic) _Bool showEditingLabel; // @synthesize showEditingLabel=_showEditingLabel;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x0000000000181567
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x00000000001814b5
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x00000000001813a8
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x0000000000181278
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x000000000018126d
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x00000000001811f4
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;	// IMP=0x0000000000181113
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;	// IMP=0x0000000000181101
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;	// IMP=0x0000000000180ea9
- (void)didUpdateContentForAvatarView:(id)arg1;	// IMP=0x0000000000180e33
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;	// IMP=0x0000000000180d7b
- (id)presentingViewControllerForAvatarView:(id)arg1;	// IMP=0x0000000000180d1c
- (void)_bounceSmallPhoto;	// IMP=0x0000000000180b68
- (void)_presentFullScreenPhoto:(id)arg1;	// IMP=0x0000000000180a55
- (void)_zoomContactPhoto;	// IMP=0x00000000001807cd
- (id)previewPath;	// IMP=0x000000000018077f
- (void)visualIdentityPicker:(id)arg1 presentationControllerWillDismiss:(id)arg2;	// IMP=0x0000000000180696
- (void)updatePendingContactWithEditedContact:(id)arg1;	// IMP=0x00000000001802ca
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;	// IMP=0x000000000018022f
- (void)photoPickerDidCancel:(id)arg1;	// IMP=0x00000000001801ac
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001800cb
- (void)sender:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x00000000001800b6
- (void)sender:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000180024
- (void)presentPhotoPickerWithImageData:(id)arg1;	// IMP=0x000000000017fde4
- (void)_presentPhotoPicker;	// IMP=0x000000000017fdd0
- (void)presentPhotoPicker;	// IMP=0x000000000017fdbe
- (_Bool)_isUsingSilhouette;	// IMP=0x000000000017fcdd
- (_Bool)_isUsingCuratedPhoto;	// IMP=0x000000000017fc25
- (void)updatePendingContactWithEditedPropertyItem:(id)arg1;	// IMP=0x000000000017f9ea
- (void)updateEditPhotoButton;	// IMP=0x000000000017f5db
- (void)updateViewsAndNotifyDelegate:(_Bool)arg1;	// IMP=0x000000000017f396
- (void)reloadData;	// IMP=0x000000000017f37f
- (void)updatePhoto;	// IMP=0x000000000017f2e5
- (void)resetPhoto;	// IMP=0x000000000017f288
- (void)paste:(id)arg1;	// IMP=0x000000000017ef5b
- (void)copy:(id)arg1;	// IMP=0x000000000017ee26
- (void)menuWillHide:(id)arg1;	// IMP=0x000000000017eded
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000017ed39
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000017ec51
- (void)longPressGesture:(id)arg1;	// IMP=0x000000000017eb8e
- (void)avatarTapped:(id)arg1;	// IMP=0x000000000017ea8c
- (void)disablePhotoTapGesture;	// IMP=0x000000000017ea4d
- (void)setHighlightedFrame:(_Bool)arg1;	// IMP=0x000000000017e81a
- (void)setEditing:(_Bool)arg1 preservingChanges:(_Bool)arg2;	// IMP=0x000000000017e7e7
- (_Bool)hasPhoto;	// IMP=0x000000000017e652
- (void)saveEdits;	// IMP=0x000000000017e5e1
- (void)saveChangesFromPendingContact:(id)arg1 toContact:(id)arg2;	// IMP=0x000000000017dff3
- (id)currentImageData;	// IMP=0x000000000017df89
- (void)updateFontSizes;	// IMP=0x000000000017ded6
- (id)newPendingContactPreservingChangesFrom:(id)arg1;	// IMP=0x000000000017de54
@property(readonly, nonatomic) CNMutableContact *mutableContact;
- (id)contact;	// IMP=0x000000000017dce6
- (_Bool)isMeContact;	// IMP=0x000000000017dcde
- (void)dealloc;	// IMP=0x000000000017d9d5
- (id)initWithFrame:(struct CGRect)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 threeDTouchEnabled:(_Bool)arg3 contactStore:(id)arg4 allowsImageDrops:(_Bool)arg5 imageRenderer:(id)arg6 allowStaleRendering:(_Bool)arg7;	// IMP=0x000000000017d099
- (id)initWithFrame:(struct CGRect)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 threeDTouchEnabled:(_Bool)arg3 contactStore:(id)arg4 allowsImageDrops:(_Bool)arg5 imageRenderer:(id)arg6;	// IMP=0x000000000017d05c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

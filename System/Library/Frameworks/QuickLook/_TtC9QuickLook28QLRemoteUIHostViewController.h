//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSString, NSUUID, QLTransitionContext, UITraitCollection;
@protocol QLTransitionControllerProtocol;

@interface _TtC9QuickLook28QLRemoteUIHostViewController : UIViewController
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_accessoryViewController;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_uuid;	// 0 = 0x0
}

+ (void)remotePreviewCollectionWithCompletionHandler:(void (^)(_TtC9QuickLook28QLRemoteUIHostViewController *))arg1;	// IMP=0x00100000000c7b50
- (void).cxx_destruct;	// IMP=0x00000000000c79e0
- (void)viewDidLoad;	// IMP=0x00000000000c7930
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c7830
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000c77e0
@property(nonatomic, copy) NSUUID *uuid;
@property(nonatomic, readonly) _Bool isAvailable;
- (void)toggleDebugView;	// IMP=0x00000000000c7e90
- (id)accessoryView;	// IMP=0x00000000000c8660
- (void)setAllowInteractiveTransitions:(_Bool)arg1;	// IMP=0x00000000000c85f0
- (_Bool)isRemote;	// IMP=0x00000000000c7ed0
- (void)saveCurrentPreviewEditsSynchronously:(_Bool)arg1 withCompletionHandler:(void (^)(unsigned long long, QLPreviewItemEditedCopy *))arg2;	// IMP=0x00000000000d2e40
- (void)setIsContentManaged:(_Bool)arg1;	// IMP=0x00000000000d2580
- (void)saveIntoPhotoLibraryMediaWithURLWrapper:(id)arg1 previewItemType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d21b0
- (void)hostViewControllerBackgroundColorChanged:(id)arg1;	// IMP=0x00000000000d17e0
- (void)documentMenuActionWillBegin;	// IMP=0x00000000000d12d0
- (void)actionSheetDidDismiss;	// IMP=0x00000000000d0ee0
- (void)prepareForActionSheetPresentationWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x00000000000d0a20
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000d0330
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000cfea0
- (void)invalidateServiceWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x00000000000cf8d0
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x00000000000cf080
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;	// IMP=0x00000000000ce9f0
- (void)setLoadingString:(id)arg1;	// IMP=0x00000000000ce430
- (void)tearDownTransition:(_Bool)arg1;	// IMP=0x00000000000ce110
- (void)startTransitionWithSourceViewProvider:(QLTransitionContext *)arg1 transitionController:(id <QLTransitionControllerProtocol>)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(void (^)(void))arg5;	// IMP=0x00000000000cdb00
- (void)previewItemDisplayState:(id)arg1 wasAppliedToItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000cd4f0
- (void)notifyStateRestorationUserInfo:(id)arg1;	// IMP=0x00000000000cd150
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;	// IMP=0x00000000000ccd20
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000cc910
- (void)keyCommandWasPerformed:(id)arg1;	// IMP=0x00000000000cc5c0
- (void)keyCommandsWithCompletionHandler:(void (^)(NSArray *))arg1;	// IMP=0x00000000000cc010
- (void)requestLockForCurrentItem;	// IMP=0x00000000000cba60
- (void)shouldDisplayLockActivityWithCompletionHandler:(void (^)(_Bool))arg1;	// IMP=0x00000000000cb5a0
- (void)toolbarButtonPressedWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x00000000000cad30
- (void)toolbarButtonsForTraitCollection:(UITraitCollection *)arg1 withCompletionHandler:(void (^)(NSArray *, NSArray *))arg2;	// IMP=0x00000000000ca1a0
- (void)hostApplicationDidBecomeActive;	// IMP=0x00000000000c9bc0
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;	// IMP=0x00000000000c9970
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000c96b0
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;	// IMP=0x00000000000c9370
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4 fullScreen:(_Bool)arg5;	// IMP=0x00000000000c8ea0
- (void)setHostApplicationBundleIdentifier:(id)arg1;	// IMP=0x00000000000c8980

@end

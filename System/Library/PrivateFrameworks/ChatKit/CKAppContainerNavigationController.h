//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSString, UIViewController;
@protocol CKBrowserViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface CKAppContainerNavigationController : UINavigationController
{
    UIViewController<CKBrowserViewControllerProtocol> *_browserVC;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003eb013
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *browserVC; // @synthesize browserVC=_browserVC;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;	// IMP=0x00000000003eafe8
- (void)startEditingPayload:(id)arg1;	// IMP=0x00000000003eafe2
- (void)setLocalUserIsTyping:(_Bool)arg1;	// IMP=0x00000000003eafdc
- (void)requestPresentationStyleExpanded:(_Bool)arg1;	// IMP=0x00000000003eaea0
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003eae9a
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003eae94
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003eae8e
- (id)dragControllerTranscriptDelegate;	// IMP=0x00000000003eae86
- (void)dismissToKeyboard:(_Bool)arg1;	// IMP=0x00000000003eae80
- (void)dismissAndReloadInputViews:(_Bool)arg1;	// IMP=0x00000000003eae7a
- (void)dismiss;	// IMP=0x00000000003eae74
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2 draggedSticker:(id)arg3;	// IMP=0x00000000003eae6e
- (void)commitSticker:(id)arg1 stickerFrame:(struct CGRect)arg2;	// IMP=0x00000000003eae68
- (void)commitPayload:(id)arg1;	// IMP=0x00000000003eae62
- (void)transitionBrowserToMediumDetent;	// IMP=0x00000000003ead09
- (void)transitionBrowserToLargeDetent;	// IMP=0x00000000003eabbe
- (void)_sheetPresentationController:(id)arg1 didChangeIndexOfCurrentDetent:(long long)arg2;	// IMP=0x00000000003eab9a
- (void)closeButtonPressed:(id)arg1;	// IMP=0x00000000003eab81
- (id)initWithRemoteViewController:(id)arg1;	// IMP=0x00000000003ea649

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSExtension, NSString, UIKeyboardCameraRemoteViewController;
@protocol UIKeyboardCameraViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraViewController : UIViewController
{
    id <UIKeyboardCameraViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_textContentType;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
    UIKeyboardCameraRemoteViewController *_remoteViewController;	// 32 = 0x20
}

+ (_Bool)isEnabled;	// IMP=0x0010000001867d5c
+ (_Bool)isSupportedByDevice;	// IMP=0x0010000001867cf5
+ (_Bool)isCameraRestricted;	// IMP=0x0010000001867b76
+ (void)_updateIsCameraRestricted;	// IMP=0x0010000001867b5e
+ (_Bool)isLiveTextEnabled;	// IMP=0x0010000001867b13
- (void).cxx_destruct;	// IMP=0x00000000018686a7
@property(retain, nonatomic) UIKeyboardCameraRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) __weak id <UIKeyboardCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000001868606
- (void)keyboardCameraDidCancel;	// IMP=0x00000000018685c9
- (void)keyboardCameraDidAccept;	// IMP=0x000000000186858c
- (void)keyboardCameraDidUpdateString:(id)arg1;	// IMP=0x0000000001868523
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000001867f28
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000001867e9c
- (void)viewDidLoad;	// IMP=0x0000000001867e05
- (id)_backgroundColorForModalFormSheet;	// IMP=0x0000000001867dec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001867dda
- (id)init;	// IMP=0x0000000001867da7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppDelegate, NSString, UIPopoverPresentationController;

@interface LUIPopUpController : NSObject
{
    AppDelegate *_appDelegate;	// 8 = 0x8
    UIPopoverPresentationController *_presentationControllerForPopUpViewOnScreen;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000431e4
- (void).cxx_destruct;	// IMP=0x0020000000043c12
@property(nonatomic) __weak UIPopoverPresentationController *presentationControllerForPopUpViewOnScreen; // @synthesize presentationControllerForPopUpViewOnScreen=_presentationControllerForPopUpViewOnScreen;
@property(readonly, nonatomic) __weak AppDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
- (void)presentPerformanceTestHintView;	// IMP=0x0010000000043ad6
- (void)presentPrivacyViewWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000438d2
- (void)presentUserInfoForUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004374b
- (void)presentWiFiPickerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004356c
- (void)showPopUp:(unsigned long long)arg1 forUser:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000432e9
- (id)init;	// IMP=0x0010000000043239

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

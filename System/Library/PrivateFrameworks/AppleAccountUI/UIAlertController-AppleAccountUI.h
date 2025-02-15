//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertController.h>

@class NSString;

@interface UIAlertController (AppleAccountUI)
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4;	// IMP=0x00100000000751cb
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000075042
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000074eba
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;	// IMP=0x0010000000074e23
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000074d29
+ (id)alertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0010000000074d0a
- (CDUnknownBlockType)_handlerWithMultiActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007531c
- (CDUnknownBlockType)_handlerWithSingleActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000075283

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKeyboardSceneDelegate, UIResponder, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UITextServiceSession : NSObject
{
    long long _type;	// 8 = 0x8
    UIViewController *_modalViewController;	// 16 = 0x10
    UIView *_contextView;	// 24 = 0x18
    UIResponder *_pinnedResponder;	// 32 = 0x20
    UIKeyboardSceneDelegate *_keyboardSceneDelegate;	// 40 = 0x28
    _Bool _dismissed;	// 48 = 0x30
    CDUnknownBlockType _dismissedHandler;	// 56 = 0x38
}

+ (_Bool)textServiceIsDisplaying;	// IMP=0x0010000001823da9
+ (id)textServiceSessionForType:(long long)arg1;	// IMP=0x0010000001823c50
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;	// IMP=0x0010000001823b38
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;	// IMP=0x00100000018225a7
+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;	// IMP=0x001000000182259f
+ (_Bool)shouldPresentServiceInSameWindowAsView:(id)arg1;	// IMP=0x0010000001822540
+ (_Bool)_canShowTextServiceForType:(long long)arg1;	// IMP=0x001000000182251a
+ (long long)availableTextServices;	// IMP=0x0010000001822380
+ (_Bool)_canShowTextServices;	// IMP=0x0010000001822361
- (void).cxx_destruct;	// IMP=0x00000000018240b4
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
- (void)_endSession;	// IMP=0x0000000001823ffd
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000001823feb
- (void)dismissTextServiceAnimated:(_Bool)arg1;	// IMP=0x0000000001823ee7
- (long long)type;	// IMP=0x0000000001823c46
- (_Bool)isDisplaying;	// IMP=0x0000000001823c39
- (id)init;	// IMP=0x0000000001823c22
- (id)initWithType:(long long)arg1;	// IMP=0x0000000001823be5
- (void)sessionDidDismiss;	// IMP=0x00000000018240fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


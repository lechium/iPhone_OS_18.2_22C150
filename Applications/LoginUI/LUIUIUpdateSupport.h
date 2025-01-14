//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface LUIUIUpdateSupport : NSObject
{
    _Bool _isIdleTimerModeLocked;	// 8 = 0x8
    _Bool _isRotationEnabled;	// 9 = 0x9
    _Bool _uiUpdatePending;	// 10 = 0xa
    NSString *_statusBarUserName;	// 16 = 0x10
    NSMutableSet *_disableUIUpdatesReasons;	// 24 = 0x18
    NSMutableSet *_disableUserInteractionReasons;	// 32 = 0x20
    NSMutableSet *_wifiPickerSuppressionReasons;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00200000000111dc
+ (long long)blurBackgroundStyle;	// IMP=0x00100000000111d1
+ (long long)defaultBackgroundStyle;	// IMP=0x00100000000111c6
+ (void)reset;	// IMP=0x001000000001ebff
- (void).cxx_destruct;	// IMP=0x00200000000128dd
@property(retain, nonatomic) NSMutableSet *wifiPickerSuppressionReasons; // @synthesize wifiPickerSuppressionReasons=_wifiPickerSuppressionReasons;
@property(retain, nonatomic) NSMutableSet *disableUserInteractionReasons; // @synthesize disableUserInteractionReasons=_disableUserInteractionReasons;
@property(nonatomic) _Bool uiUpdatePending; // @synthesize uiUpdatePending=_uiUpdatePending;
@property(retain, nonatomic) NSMutableSet *disableUIUpdatesReasons; // @synthesize disableUIUpdatesReasons=_disableUIUpdatesReasons;
@property(nonatomic) _Bool isRotationEnabled; // @synthesize isRotationEnabled=_isRotationEnabled;
@property(nonatomic) _Bool isIdleTimerModeLocked; // @synthesize isIdleTimerModeLocked=_isIdleTimerModeLocked;
@property(retain, nonatomic) NSString *statusBarUserName; // @synthesize statusBarUserName=_statusBarUserName;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000001237d
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x0010000000012260
- (void)_synchronouslyReenableUserInteractionForReason:(id)arg1;	// IMP=0x0010000000012005
- (void)reenableUserInteractionForReason:(id)arg1;	// IMP=0x0010000000011f5f
- (void)_synchronouslyDisableUserInteractionForReason:(id)arg1;	// IMP=0x0010000000011db7
- (void)disableUserInteractionForReason:(id)arg1;	// IMP=0x0010000000011d11
- (_Bool)isUserInteractionDisabled;	// IMP=0x0010000000011cc9
- (void)endSuppressingWiFiPickerForReason:(id)arg1;	// IMP=0x0010000000011bb7
- (void)beginSuppressingWiFiPickerForReason:(id)arg1;	// IMP=0x0010000000011b12
@property(readonly, nonatomic) _Bool isWiFiPickerSuppressed;
- (void)endDisablingViewUpdatesForReason:(id)arg1;	// IMP=0x00100000000118a7
- (void)beginDisablingViewUpdatesForReason:(id)arg1;	// IMP=0x0010000000011793
@property(readonly, nonatomic) _Bool isViewUpdateDisabled;
- (_Bool)presentUserLimitIsReachedAlertIfNeeded;	// IMP=0x00100000000115d5
- (void)setViewControllerStackAnimated:(_Bool)arg1 deferrable:(_Bool)arg2;	// IMP=0x00100000000112ff
- (void)_setup;	// IMP=0x001000000001127d
- (id)init;	// IMP=0x0010000000011231

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


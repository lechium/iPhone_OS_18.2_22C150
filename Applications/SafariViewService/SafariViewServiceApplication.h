//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSString, UIWindow;

@interface SafariViewServiceApplication : UIApplication
{
    long long _currentKeyboardModifierFlags;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0020000000000f96
@property(readonly, nonatomic) long long currentKeyboardModifierFlags;
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x00100000000013c8
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000001334
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000012a0
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000120c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000001178
- (id)newSharedSiteMetadataManager;	// IMP=0x00100000000010b4
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x0010000000001052

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N


@end

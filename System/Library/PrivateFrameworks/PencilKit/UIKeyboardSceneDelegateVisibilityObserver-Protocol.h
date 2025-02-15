//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSString, UIKeyboardSceneDelegate, _UIKeyboardChangedInformation;

@protocol UIKeyboardSceneDelegateVisibilityObserver <NSObject>

@optional
- (void)remoteKeyboardVisibilityDidChange:(_Bool)arg1 bundleId:(NSString *)arg2;
- (void)remoteKeyboardChanged:(_UIKeyboardChangedInformation *)arg1;
- (void)keyboardSceneDelegate:(UIKeyboardSceneDelegate *)arg1 inputViewSetVisibilityDidChange:(_Bool)arg2 includedReset:(_Bool)arg3;
- (void)visibilityDidChange:(_Bool)arg1;
@end


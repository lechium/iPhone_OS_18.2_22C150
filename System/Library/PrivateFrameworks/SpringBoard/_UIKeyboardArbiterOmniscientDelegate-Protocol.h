//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSSceneIdentityToken, _UIKeyboardArbiterSceneFocusChange, _UIKeyboardArbiterSceneFocusRequest;
@protocol _UIKeyboardArbiterAdvisor;

@protocol _UIKeyboardArbiterOmniscientDelegate <NSObject>

@optional
- (_Bool)shouldKeyboardBeWindowSizedForHostWithIdentity:(FBSSceneIdentityToken *)arg1;
- (void)keyboardArbiterAdvisor:(id <_UIKeyboardArbiterAdvisor>)arg1 request:(_UIKeyboardArbiterSceneFocusRequest *)arg2 sceneFocusChange:(_UIKeyboardArbiterSceneFocusChange *)arg3;
- (FBSSceneIdentityToken *)keyboardArbiterAdvisor:(id <_UIKeyboardArbiterAdvisor>)arg1 requestedSceneFocusDeliberationForFocusedPid:(int)arg2;
@end

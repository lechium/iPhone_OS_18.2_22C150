//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindow;

@interface SRWindowSceneDelegate : NSObject
{
}

- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x002000000006a446
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x001000000006a332
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x001000000006a22b
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x001000000006a124
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000069fcf
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000069d7d

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


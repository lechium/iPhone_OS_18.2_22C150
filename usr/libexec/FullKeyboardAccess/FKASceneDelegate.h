//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface FKASceneDelegate : UIResponder
{
    UIWindow *_interactiveWindow;	// 8 = 0x8
    UIWindow *_nonInteractiveWindow;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006414
@property(readonly, nonatomic) UIWindow *nonInteractiveWindow; // @synthesize nonInteractiveWindow=_nonInteractiveWindow;
@property(readonly, nonatomic) UIWindow *interactiveWindow; // @synthesize interactiveWindow=_interactiveWindow;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000006025

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

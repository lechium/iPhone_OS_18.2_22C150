//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindow;

@interface CarplayDisplayManager : NSObject
{
    UIWindow *_carWindow;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000fc3aa
- (void)_setUpSelectedCalendarsOnModel:(id)arg1;	// IMP=0x00100000000fc039
- (id)_createAndSetupModel;	// IMP=0x00100000000fbf9e
- (id)_rootViewControllerForCarScene;	// IMP=0x00100000000fbf47
- (void)_openURL:(id)arg1;	// IMP=0x00100000000fbedd
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x00100000000fbdf8
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x00100000000fbd08
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000fba31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

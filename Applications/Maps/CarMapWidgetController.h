//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CarChromeViewController;

@interface CarMapWidgetController
{
    id _chromeDeactivationToken;	// 8 = 0x8
}

+ (Class)fallbackModeControllerClass;	// IMP=0x0040000000292870
+ (Class)chromeViewControllerClass;	// IMP=0x001000000029285f
- (void).cxx_destruct;	// IMP=0x0020000000292de0
@property(retain, nonatomic) id chromeDeactivationToken; // @synthesize chromeDeactivationToken=_chromeDeactivationToken;
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000292d2a
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000292cb8
- (id)contextsForCurrentAppState;	// IMP=0x0010000000292881

// Remaining properties
@property(retain, nonatomic) CarChromeViewController *chromeViewController; // @dynamic chromeViewController;

@end


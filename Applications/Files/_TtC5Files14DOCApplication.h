//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIApplication.h>

@class MISSING_TYPE;

@interface _TtC5Files14DOCApplication : UIApplication
{
    MISSING_TYPE *currentTestName;	// 8 = 0x8
    MISSING_TYPE *finishedLaunchTest;	// 24 = 0x18
    MISSING_TYPE *localDomainRootForQLTests;	// 32 = 0x20
    MISSING_TYPE *loadedTabs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x004000000006d570
- (id)init;	// IMP=0x001000000006d4d0
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x001000000006d420
- (void)tabbedBrowserViewController:(id)arg1 didFinishInitialLoad:(_Bool)arg2 ofTab:(unsigned long long)arg3;	// IMP=0x0010000000050920
- (id)_extendLaunchTest;	// IMP=0x0010000000050440

@end


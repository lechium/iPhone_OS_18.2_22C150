//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppLaunchNotifcationPrewarmAlert : NSObject
{
    CDUnknownBlockType _completionBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000050b1f9
- (void)_alertDidFinishProcessing;	// IMP=0x001000000050b1b1
- (void)_presentAlertUIWithStatus:(long long)arg1 repeatPrompt:(_Bool)arg2;	// IMP=0x001000000050b034
- (void)displayAlertIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000050aca3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppLaunchNavTraceAlert : NSObject
{
    _Bool _isDisplayingAlert;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000008cb262
- (void)_alertDidFinishProcessing;	// IMP=0x00100000008cb1c0
- (void)_displayAlert;	// IMP=0x00100000008caf1c
- (_Bool)_shouldDisplayAlert;	// IMP=0x00100000008cae97
- (void)cancelAlertIfNecessary;	// IMP=0x00100000008cae0a
- (void)displayAlertIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000008cad0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


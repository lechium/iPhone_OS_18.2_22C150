//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDBackgroundSystemTaskScheduler : NSObject
{
}

- (_Bool)submitTaskRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003222d7
- (_Bool)cancelTaskRequestWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000322258
- (id)taskRequestForIdentifier:(id)arg1;	// IMP=0x000000000032216c
- (_Bool)registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000322073

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

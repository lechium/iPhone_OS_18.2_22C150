//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12TextComposer13TCModelRunner : NSObject
{
    MISSING_TYPE *requestIdToTask;	// 8 = 0x8
    MISSING_TYPE *tasksPendingCancellation;	// 16 = 0x10
    MISSING_TYPE *cancellationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009bdb0
- (id)init;	// IMP=0x000000000009bd70
- (void)requestModelInvocationForCalendarEventWith:(unsigned long long)arg1 prompt:(id)arg2 modelType:(long long)arg3 pid:(long long)arg4 requestIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000097d60
- (void)requestModelInvocationForQuestionnaireWith:(unsigned long long)arg1 prompt:(id)arg2 modelType:(long long)arg3 pid:(long long)arg4 requestIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000914c0
- (void)requestModelInvocationWith:(unsigned long long)arg1 prompt:(id)arg2 modelType:(long long)arg3 isPrecomputeRequest:(_Bool)arg4 seed:(long long)arg5 draftSteps:(long long)arg6 pid:(long long)arg7 appPid:(long long)arg8 requestIdentifier:(id)arg9 disallowedStrings:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;	// IMP=0x0000000000087cf0
- (void)requestPrewarmingFor:(long long)arg1 pid:(long long)arg2 appPid:(long long)arg3 preferredLanguage:(id)arg4;	// IMP=0x0000000000086ac0
- (void)requestCancellationFor:(unsigned long long)arg1;	// IMP=0x0000000000086100

@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_completionQueue;	// 16 = 0x10
}

+ (id)enableEventCompletionTupleWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00600000001cc347
- (void).cxx_destruct;	// IMP=0x00000000001cc316
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

@end

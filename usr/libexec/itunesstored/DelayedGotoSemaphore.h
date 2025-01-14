//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol OS_dispatch_semaphore;

@interface DelayedGotoSemaphore : NSObject
{
    NSDictionary *_bodyDictionary;	// 8 = 0x8
    double _delay;	// 16 = 0x10
    NSString *_pushToken;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
}

+ (void)_accessSemaphorePoolUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00400000001988cb
+ (void)signalSemaphoreForPushToken:(id)arg1;	// IMP=0x00100000001983ab
- (void).cxx_destruct;	// IMP=0x00200000001989ef
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSDictionary *bodyDictionary; // @synthesize bodyDictionary=_bodyDictionary;
- (void)wait;	// IMP=0x0010000000198565
- (id)initWithDelayedGoto:(id)arg1;	// IMP=0x0010000000197fe5

@end


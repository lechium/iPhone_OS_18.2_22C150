//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, OS_dispatch_queue;

@interface _TtC7Sharing28AskToAirDropSenderController : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *nearbyDeviceCount;	// 16 = 0x10
    MISSING_TYPE *nearbyDeviceCountChangedHandler;	// 24 = 0x18
    MISSING_TYPE *didStopHandler;	// 40 = 0x28
    MISSING_TYPE *airDropClient;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000023bfc0
- (void)fetchSharingNameWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;	// IMP=0x000000000023bcc0
- (void)fetchPrivacyPromptInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000023ba70
- (void)stop;	// IMP=0x000000000023aea0
- (void)start;	// IMP=0x000000000023a8b0
- (void)startAs:(id)arg1;	// IMP=0x000000000023a6f0
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000239b80
- (id)init;	// IMP=0x0000000000239960
@property(nonatomic, copy) CDUnknownBlockType didStopHandler;
@property(nonatomic, copy) CDUnknownBlockType nearbyDeviceCountChangedHandler;
@property(nonatomic) _Bool hasSeenPrivacyPrompt;
@property(nonatomic) long long nearbyDeviceCount; // @synthesize nearbyDeviceCount;
@property(nonatomic, readonly) OS_dispatch_queue *queue; // @synthesize queue;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMotionActivity, RMAudioAccessoryManager;
@protocol OS_dispatch_queue;

@interface RMHeadphoneActivityProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_receiverQueue;	// 8 = 0x8
    RMAudioAccessoryManager *_audioAccessoryManager;	// 16 = 0x10
    CMMotionActivity *_lastActivity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002f73
- (void)stopProducingData;	// IMP=0x0010000000002f6d
- (id)startProducingDataWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002f42

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface XPCNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_notificationClients;	// 16 = 0x10
    NSMutableDictionary *_notificationSources;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000289a97
- (id)init;	// IMP=0x0010000000289200

@end


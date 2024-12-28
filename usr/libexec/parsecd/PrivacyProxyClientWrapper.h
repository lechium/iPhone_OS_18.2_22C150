//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PrivacyProxyClientWrapper : NSObject
{
    int _notificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000037bc
@property(nonatomic) int notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)getEffectiveTierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000035f2
- (void)dealloc;	// IMP=0x00100000000035b9
- (id)initWithDispatchQueue:(id)arg1 didUpdate:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0010000000003250

@end

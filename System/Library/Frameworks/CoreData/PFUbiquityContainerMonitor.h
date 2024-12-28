//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PFUbiquityContainerIdentifier, PFUbiquityLocation;
@protocol NSObject><NSCopying><NSCoding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerMonitor : NSObject
{
    PFUbiquityLocation *_ubiquityRootLocation;	// 8 = 0x8
    NSString *_localPeerID;	// 16 = 0x10
    NSString *_storeName;	// 24 = 0x18
    int _containerState;	// 32 = 0x20
    int _monitorState;	// 36 = 0x24
    _Bool _hasScheduledCheckBlock;	// 40 = 0x28
    int _scheduleSpinLock;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *_processingQueue;	// 48 = 0x30
    id <NSObject><NSCopying><NSCoding> _currentIdentityToken;	// 56 = 0x38
    PFUbiquityContainerIdentifier *_containerIdentifier;	// 64 = 0x40
}

- (void)ubiquityIdentityChanged:(id)arg1;	// IMP=0x000000000036642b
- (void)_applicationResumed:(id)arg1;	// IMP=0x0000000000366356
- (void)containerDeleteDetected:(id)arg1;	// IMP=0x0000000000366235
- (id)description;	// IMP=0x0000000000365b0d
- (void)dealloc;	// IMP=0x0000000000365a8a
- (id)initWithProcessingQueue:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;	// IMP=0x00000000003659ec
- (id)init;	// IMP=0x000000000036599d

@end

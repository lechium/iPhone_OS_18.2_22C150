//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSGroupContextNotifyingObserver : NSObject
{
    NSMutableSet *_delegates;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003ecb9
@property(retain, nonatomic) NSMutableSet *delegates; // @synthesize delegates=_delegates;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003eac9
- (void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e931
- (void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e766
- (void)didCacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e5ce
- (void)didCreateGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e436
- (void)dealloc;	// IMP=0x000000000003e3f3
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000003e3d6
- (void)addDelegate:(id)arg1;	// IMP=0x000000000003e3b9
- (id)init;	// IMP=0x000000000003e2f3

@end


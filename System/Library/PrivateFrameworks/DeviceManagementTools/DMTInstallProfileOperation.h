//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class NSData, NSObject;
@protocol DMTProfileInstallationPrimitives, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DMTInstallProfileOperation : CATOperation
{
    NSObject<OS_dispatch_queue> *_profileInstallationQueue;	// 8 = 0x8
    id <DMTProfileInstallationPrimitives> _primitives;	// 16 = 0x10
    NSData *_profileData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000013453
@property(readonly, copy, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(readonly, nonatomic) id <DMTProfileInstallationPrimitives> primitives; // @synthesize primitives=_primitives;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *profileInstallationQueue; // @synthesize profileInstallationQueue=_profileInstallationQueue;
- (void)installProfile;	// IMP=0x0000000000013258
- (void)main;	// IMP=0x00000000000131d1
- (void)cancel;	// IMP=0x00000000000130c1
- (_Bool)isAsynchronous;	// IMP=0x00000000000130b9
- (id)initWithProfileInstallationPrimitives:(id)arg1 profileData:(id)arg2;	// IMP=0x0000000000012f70

@end


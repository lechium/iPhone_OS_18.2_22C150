//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class NSString;
@protocol DMTProfileInstallationPrimitives;

__attribute__((visibility("hidden")))
@interface DMTUninstallProfileOperation : CATOperation
{
    id <DMTProfileInstallationPrimitives> _primitives;	// 8 = 0x8
    NSString *_profileIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002950
@property(readonly, nonatomic) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(readonly, nonatomic) id <DMTProfileInstallationPrimitives> primitives; // @synthesize primitives=_primitives;
- (void)uninstallProfile;	// IMP=0x000000000000272e
- (void)main;	// IMP=0x000000000000271c
- (void)cancel;	// IMP=0x000000000000266c
- (_Bool)isAsynchronous;	// IMP=0x0000000000002664
- (id)initWithProfileInstallationPrimitives:(id)arg1 profileIdentifier:(id)arg2;	// IMP=0x00000000000025c2

@end


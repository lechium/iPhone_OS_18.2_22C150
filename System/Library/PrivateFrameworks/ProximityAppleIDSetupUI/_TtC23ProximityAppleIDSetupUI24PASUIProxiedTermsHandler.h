//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC23ProximityAppleIDSetupUI24PASUIProxiedTermsHandler : NSObject
{
    MISSING_TYPE *authResults;	// 8 = 0x8
    MISSING_TYPE *proxiedDevice;	// 16 = 0x10
    MISSING_TYPE *acceptAction;	// 24 = 0x18
    MISSING_TYPE *declineAction;	// 40 = 0x28
    MISSING_TYPE *proxiedTermsRemoteUI;	// 56 = 0x38
    MISSING_TYPE *acceptedTermsInfo;	// 72 = 0x48
    MISSING_TYPE *didAccept;	// 80 = 0x50
    MISSING_TYPE *_viewControllerProvider;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000014af0
- (id)init;	// IMP=0x0000000000014a90
- (void)genericTermsRemoteUI:(id)arg1 acceptedTermsInfo:(id)arg2;	// IMP=0x0000000000014d00
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;	// IMP=0x0000000000014c90

@end


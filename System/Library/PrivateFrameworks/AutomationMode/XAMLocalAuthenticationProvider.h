//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XAMLocalAuthenticationProvider : NSObject
{
}

- (id)authorizationWithError:(id *)arg1;	// IMP=0x000000000000380d
- (void)requestAuthorizationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000036f5
- (id)_makeAuthorizationContext;	// IMP=0x0000000000003665
- (id)localizedAuthorizationReason;	// IMP=0x00000000000035f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

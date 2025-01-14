//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@class NSError, NSUUID;
@protocol LACOnenessAuthenticationProviding;

@protocol LACOnenessAuthenticationProviderDelegate <NSObject>
- (void)authenticationProvider:(id <LACOnenessAuthenticationProviding>)arg1 didFailAuthenticationWithID:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)authenticationProvider:(id <LACOnenessAuthenticationProviding>)arg1 didCompleteAuthenticationWithID:(NSUUID *)arg2;
- (void)authenticationProvider:(id <LACOnenessAuthenticationProviding>)arg1 didStartAuthenticationWithID:(NSUUID *)arg2;
@end


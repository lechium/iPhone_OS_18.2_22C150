//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@protocol _SFAccountManagerLockableContentContainer <NSObject>

@optional
@property(readonly, nonatomic) _Bool shouldSuppressAccountManagerLockedView;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)passwordManagerWillLock;
- (void)updateUserAuthenticationState:(_Bool)arg1;
@end

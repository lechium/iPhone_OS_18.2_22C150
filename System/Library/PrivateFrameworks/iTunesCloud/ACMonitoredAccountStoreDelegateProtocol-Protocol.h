//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ACAccount;

@protocol ACMonitoredAccountStoreDelegateProtocol <NSObject>

@optional
- (void)accountCredentialChanged:(ACAccount *)arg1;
- (void)accountWasRemoved:(ACAccount *)arg1;
- (void)accountWasModified:(ACAccount *)arg1;
- (void)accountWasAdded:(ACAccount *)arg1;
@end

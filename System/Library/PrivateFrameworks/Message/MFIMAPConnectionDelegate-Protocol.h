//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class MFIMAPConnection, MFIMAPResponse, _MFIMAPCommandParameters;

@protocol MFIMAPConnectionDelegate <NSObject>

@optional
- (_Bool)shouldStartIdleForConnection:(MFIMAPConnection *)arg1;
- (void)setHighestModSequence:(unsigned long long)arg1;
- (void)setServerMessageCount:(unsigned long long)arg1;
- (void)willRemoveDelegation:(MFIMAPConnection *)arg1;
- (void)connectionDidDisconnect:(MFIMAPConnection *)arg1;
- (void)connection:(MFIMAPConnection *)arg1 didReceiveResponse:(MFIMAPResponse *)arg2 forCommand:(_MFIMAPCommandParameters *)arg3;
- (_Bool)connection:(MFIMAPConnection *)arg1 shouldHandleUntaggedResponse:(MFIMAPResponse *)arg2 forCommand:(_MFIMAPCommandParameters *)arg3;
@end


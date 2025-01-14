//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATTaskOperation, CATTaskRequest, CATTaskSession, CATTransport, NSDictionary, NSError, NSOperation, NSString;

@protocol CATTaskSessionDelegate <NSObject>
- (_Bool)session:(CATTaskSession *)arg1 shouldAcceptConnectionFromTransport:(CATTransport *)arg2;
- (CATTaskOperation *)session:(CATTaskSession *)arg1 prepareOperationForRequest:(CATTaskRequest *)arg2 error:(id *)arg3;

@optional
- (void)session:(CATTaskSession *)arg1 enqueueOperation:(NSOperation *)arg2;
- (void)sessionDidInvalidate:(CATTaskSession *)arg1;
- (void)sessionWillInvalidate:(CATTaskSession *)arg1;
- (void)sessionDidDisconnect:(CATTaskSession *)arg1;
- (void)sessionDidConnect:(CATTaskSession *)arg1;
- (void)session:(CATTaskSession *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)session:(CATTaskSession *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end


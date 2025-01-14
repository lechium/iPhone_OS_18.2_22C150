//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TouchRemote/NSObject-Protocol.h>

@class NSData, TRTransferBrowser;

@protocol TRTransferBrowserDelegate <NSObject>

@optional
- (void)browserDidDisconnect:(TRTransferBrowser *)arg1;
- (void)browser:(TRTransferBrowser *)arg1 didReceiveData:(NSData *)arg2 replyHandler:(void (^)(NSData *))arg3;
- (void)browser:(TRTransferBrowser *)arg1 didStartTransferWithSendDataHandler:(void (^)(NSData *))arg2;
@end


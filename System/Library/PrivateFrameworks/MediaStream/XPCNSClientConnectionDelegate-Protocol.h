//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaStream/NSObject-Protocol.h>

@class XPCNSClientConnection, XPCNSRequest;

@protocol XPCNSClientConnectionDelegate <NSObject>
- (void)XPCNSClientConnection:(XPCNSClientConnection *)arg1 didReceiveRequest:(XPCNSRequest *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CATMessage, CATTransport, NSError;

@protocol CATTransportDelegate <NSObject>

@optional
- (void)transportDidInvalidate:(CATTransport *)arg1;
- (void)transport:(CATTransport *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)transport:(CATTransport *)arg1 didReceiveMessage:(CATMessage *)arg2;
- (void)transport:(CATTransport *)arg1 didFailToSendMessage:(CATMessage *)arg2 error:(NSError *)arg3;
- (void)transport:(CATTransport *)arg1 didSendMessage:(CATMessage *)arg2;
- (void)transportDidResume:(CATTransport *)arg1;
- (void)transportDidConnect:(CATTransport *)arg1;
@end


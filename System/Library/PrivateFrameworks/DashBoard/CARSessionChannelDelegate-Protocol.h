//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class NSData;
@protocol CARSessionChannelProviding;

@protocol CARSessionChannelDelegate <NSObject>

@optional
- (void)didCloseChannel:(id <CARSessionChannelProviding>)arg1;
- (void)channel:(id <CARSessionChannelProviding>)arg1 didReceiveMessage:(NSData *)arg2;
- (void)didSendMessageForChannel:(id <CARSessionChannelProviding>)arg1;
@end

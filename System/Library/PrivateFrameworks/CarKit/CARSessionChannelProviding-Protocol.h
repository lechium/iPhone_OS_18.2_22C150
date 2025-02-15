//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarKit/NSObject-Protocol.h>

@class NSData, NSString;
@protocol CARSessionChannelDelegate;

@protocol CARSessionChannelProviding <NSObject>
@property(readonly, nonatomic, getter=isOpened) _Bool opened;
@property(nonatomic) __weak id <CARSessionChannelDelegate> channelDelegate;
- (void)closeChannel;
- (_Bool)sendChannelMessage:(NSData *)arg1 withDescription:(NSString *)arg2;
- (_Bool)sendChannelMessage:(NSData *)arg1;
- (_Bool)openChannelWithError:(id *)arg1;
- (_Bool)openChannel;
@end


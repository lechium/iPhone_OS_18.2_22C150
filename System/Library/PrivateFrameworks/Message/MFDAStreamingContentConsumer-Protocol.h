//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/DAMailboxStreamingContentConsumer-Protocol.h>
#import <Message/NSObject-Protocol.h>

@class NSData;

@protocol MFDAStreamingContentConsumer <DAMailboxStreamingContentConsumer, NSObject>
- (double)timeOfLastActivity;
- (_Bool)didBeginStreaming;
- (_Bool)succeeded;
- (NSData *)data;
@end


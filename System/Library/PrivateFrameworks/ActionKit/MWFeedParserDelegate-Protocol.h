//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class MWFeedInfo, MWFeedItem, MWFeedParser, NSError;

@protocol MWFeedParserDelegate <NSObject>

@optional
- (void)feedParser:(MWFeedParser *)arg1 didFailWithError:(NSError *)arg2;
- (void)feedParserDidFinish:(MWFeedParser *)arg1;
- (void)feedParser:(MWFeedParser *)arg1 didParseFeedItem:(MWFeedItem *)arg2;
- (void)feedParser:(MWFeedParser *)arg1 didParseFeedInfo:(MWFeedInfo *)arg2;
- (void)feedParserDidStart:(MWFeedParser *)arg1;
@end

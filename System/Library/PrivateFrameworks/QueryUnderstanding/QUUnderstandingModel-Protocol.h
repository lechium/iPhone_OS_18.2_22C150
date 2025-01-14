//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QueryUnderstanding/NSObject-Protocol.h>

@class NSDictionary, NSLocale, NSString, QUSpans;

@protocol QUUnderstandingModel <NSObject>
@property(readonly, nonatomic) NSDictionary *modelMetadata;
@property(readonly, nonatomic) NSLocale *locale;
- (void)getUnderstandingForQueryString:(NSString *)arg1 spans:(QUSpans *)arg2 withCompletionHandler:(void (^)(id <QUUnderstandingOutput>, NSError *))arg3;
- (void)loadWithCompletionHandler:(void (^)(id <QUUnderstandingModel>, NSError *))arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSError;

@protocol SXVideoAdStateReporting <NSObject>
- (void)skip;
- (void)learnMore;
- (void)finish;
- (void)failWithError:(NSError *)arg1;
- (void)pause;
- (void)play;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol _SSURLCompletionMatch <NSObject>
@property(readonly, nonatomic) NSDate *lastVisitTime;
@property(readonly, nonatomic) long long visitCount;
@property(readonly, nonatomic, getter=isTopHitDueToTriggerMatch) _Bool topHitDueToTriggerMatch;
@property(readonly, nonatomic, getter=isSynthesizedTopHit) _Bool synthesizedTopHit;
@property(readonly, nonatomic, getter=isTopHit) _Bool topHit;
@property(readonly, nonatomic) long long matchLocation;
@property(readonly, copy, nonatomic) NSString *userVisibleURLString;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSURL *url;
@end


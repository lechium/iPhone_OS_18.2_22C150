//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntent, INIntentResponse, NSDateInterval;

@protocol INInteractionExport <NSObject, JSExport>
@property(copy, nonatomic) NSDateInterval *dateInterval;
@property(copy, nonatomic) INIntentResponse *intentResponse;
@property(copy, nonatomic) INIntent *intent;
- (id)init;
@end


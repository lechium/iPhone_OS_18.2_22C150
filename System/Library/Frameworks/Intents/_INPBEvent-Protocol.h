//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBEvent <NSObject>
+ (Class)eventDescriptorsType;
@property(readonly, nonatomic) _Bool hasEventType;
@property(retain, nonatomic) _INPBString *eventType;
@property(readonly, nonatomic) unsigned long long eventDescriptorsCount;
@property(copy, nonatomic) NSArray *eventDescriptors;
- (_INPBString *)eventDescriptorsAtIndex:(unsigned long long)arg1;
- (void)addEventDescriptors:(_INPBString *)arg1;
- (void)clearEventDescriptors;
@end

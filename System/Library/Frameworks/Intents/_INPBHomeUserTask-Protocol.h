//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBHomeAttributeValue;

@protocol _INPBHomeUserTask <NSObject>
@property(readonly, nonatomic) _Bool hasValue;
@property(retain, nonatomic) _INPBHomeAttributeValue *value;
@property(nonatomic) _Bool hasTaskType;
@property(nonatomic) int taskType;
@property(nonatomic) _Bool hasAttribute;
@property(nonatomic) int attribute;
- (int)StringAsTaskType:(NSString *)arg1;
- (NSString *)taskTypeAsString:(int)arg1;
- (int)StringAsAttribute:(NSString *)arg1;
- (NSString *)attributeAsString:(int)arg1;
@end


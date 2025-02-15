//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBURLValue;

@protocol _INPBAnnouncement <NSObject>
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) unsigned long long startTime;
@property(readonly, nonatomic) _Bool hasSpeechDataURL;
@property(retain, nonatomic) _INPBURLValue *speechDataURL;
@property(readonly, nonatomic) _Bool hasSpeechDataTranscription;
@property(copy, nonatomic) NSString *speechDataTranscription;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(nonatomic) _Bool hasEndTime;
@property(nonatomic) unsigned long long endTime;
@end


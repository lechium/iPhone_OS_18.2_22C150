//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioRecordContext;

@protocol CSTriggerInfoProviding <NSObject>
- (void)triggerInfoForContext:(CSAudioRecordContext *)arg1 completion:(void (^)(NSDictionary *, NSDictionary *))arg2;
@end

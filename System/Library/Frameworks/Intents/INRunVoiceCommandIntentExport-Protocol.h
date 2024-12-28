//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntentExecutionResult, INSpeakableString, INVoiceCommandDeviceInformation, NSString;

@protocol INRunVoiceCommandIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *previousIntentIdentifier;
@property(copy, nonatomic) INIntentExecutionResult *executionResult;
@property(copy, nonatomic) INVoiceCommandDeviceInformation *originDevice;
@property(copy, nonatomic) INSpeakableString *voiceCommand;
- (id)init;
@end

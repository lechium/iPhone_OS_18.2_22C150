//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SiriTTSSpeechRequest;

__attribute__((visibility("hidden")))
@interface CUVoiceRequest : NSObject
{
    unsigned int _flags;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    id _owner;	// 24 = 0x18
    SiriTTSSpeechRequest *_speechRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b0f8e
@property(retain, nonatomic) SiriTTSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end
